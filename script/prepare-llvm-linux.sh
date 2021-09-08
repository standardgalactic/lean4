#!/usr/bin/env bash
set -uo pipefail

# run from root build directory (from inside nix-shell or otherwise defining GLIBC/GCC_DEV/GCC_LIBS/GMP) as in
# ```
# eval cmake ../.. $(../../script/prepare-llvm-linux.sh ~/Downloads/clang+llvm-13.0.0-x86_64-linux-gnu-ubuntu-16.04.tar.xz)
# ```

# use full LLVM release for compiling C++ code, but subset for compiling C code and distribution

[[ -d llvm ]] || (mkdir llvm; tar xf $1 --strip-components 1 --directory llvm)
mkdir -p stage1/{bin,lib,lib/glibc,include/clang}
CP="cp -d"  # preserve symlinks
# a C compiler!
$CP $(realpath llvm/bin/clang) stage1/bin/clang
# a linker!
$CP llvm/bin/{lld,ld.lld} stage1/bin/
# lean.h dependencies
$CP llvm/lib/clang/*/include/{std*,__std*,limits}.h stage1/include/clang
# ELF dependencies, must be put there for `--sysroot`
$CP $GLIBC/lib/crt* llvm/lib/
$CP $GLIBC/lib/crt* stage1/lib/
# further dependencies
# note that official LLVM releases are not built against compiler-rt, thus the GCC deps
$CP $GCC_ROOT/lib/gcc/*/*/libgcc.a $GCC_ROOT/lib/gcc/*/*/crt{begin,end}{,S}.o $GCC_LIBS/lib/libatomic.so* llvm/lib/libc++* $GMP/lib/libgmp.* stage1/lib/
# glibc: use for linking (so Lean programs don't embed newer symbol versions), but not for running (because libc.so, librt.so, and ld.so must be compatible)!
$CP $GLIBC/lib/lib{c_nonshared,gcc_s}* stage1/lib/glibc
for f in $GLIBC/lib/lib{c,dl,m,rt,pthread}-*; do b=$(basename $f); cp $f stage1/lib/glibc/${b%-*}.so; done
OPTIONS=()
echo -n " -DCMAKE_C_COMPILER=$PWD/stage1/bin/clang -DCMAKE_CXX_COMPILER=$PWD/llvm/bin/clang++ -DLEAN_USE_LIBCXX=ON"
# allow C++ code to include /usr since it needs quite a few more headers
echo -n " -DLEAN_EXTRA_CXX_FLAGS='--sysroot $PWD/llvm --stdlib=libc++ -I/usr/include -I/usr/include/x86_64-linux-gnu'"
echo -n " -DLEANC_INTERNAL_FLAGS='--sysroot ROOT -I ROOT/include/clang' -DLEANC_CC=ROOT/bin/clang"
echo -n " -DLEANC_INTERNAL_LINKER_FLAGS='-L ROOT/lib -L ROOT/lib/glibc ROOT/lib/glibc/libc_nonshared.a -fuse-ld=ROOT/bin/ld.lld'"
echo -n " -DLEAN_TEST_VARS='LD_LIBRARY_PATH=$PWD/stage1/lib:\${LD_LIBRARY_PATH:-}'"
