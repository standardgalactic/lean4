// Lean compiler output
// Module: Init.Lean.Elab.StructInst
// Imports: Init.Lean.Util.FindExpr Init.Lean.Elab.App Init.Lean.Elab.Binders Init.Lean.Elab.Quotation
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__4;
lean_object* l_Lean_Elab_Term_StructInst_formatStruct___main(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFields(lean_object*, lean_object*);
lean_object* l_Lean_fmt___at_Lean_Position_Lean_HasFormat___spec__1(lean_object*);
lean_object* l_Lean_Elab_Term_getEnv___rarg(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_12__mkFieldMap___closed__1;
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__2;
lean_object* l_List_map___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Source_hasFormat(lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_List_tail_x21___rarg(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_2__getStructSource(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM(lean_object*);
extern lean_object* l_Lean_Parser_declareBuiltinParser___closed__8;
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_AssocList_contains___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__4(lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__6;
lean_object* l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__5___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshExprMVar(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_HashMap_toList___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___main___boxed(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Source_addSyntax(lean_object*, lean_object*);
lean_object* l_unreachable_x21___rarg(lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__3;
lean_object* l___private_Init_Lean_Elab_StructInst_1__expandNonAtomicExplicitSource___closed__1;
lean_object* l___private_Init_Lean_Elab_StructInst_23__mkCtorHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAux___main___at___private_Init_Lean_Elab_StructInst_5__getStructName___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__7;
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Format_joinSep___main___at_Lean_Elab_Term_StructInst_formatField___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_inferType(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_find_x3f___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_19__expandStruct(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_2__getStructSource___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__1;
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Format_pretty(lean_object*, lean_object*);
extern lean_object* l_Lean_List_format___rarg___closed__2;
lean_object* l_HashMap_toList___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__6___boxed(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__5;
lean_object* l_Lean_Meta_mkForall(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Option_get_x21___rarg___closed__3;
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__5;
lean_object* l___private_Init_Lean_Elab_StructInst_16__mkSubstructSource(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__6;
lean_object* l_Lean_Elab_Term_StructInst_Struct_hasToString;
lean_object* l_Lean_Syntax_getIdAt(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__7;
extern lean_object* l_Lean_Parser_Term_structInstArrayRef___elambda__1___closed__2;
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__3;
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___main___spec__1(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_13__isSimpleField_x3f(lean_object*);
lean_object* lean_metavar_ctx_get_expr_assignment(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_markDefaultMissing(lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___main___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__5;
lean_object* l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__3;
lean_object* l_Lean_Expr_FindImpl_findM_x3f___main___at_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___spec__1(size_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_structInst___elambda__1___closed__6;
lean_object* l___private_Init_Lean_Elab_StructInst_10__expandParentFields(lean_object*, lean_object*, lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l_mkHashMap___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__9(lean_object*);
lean_object* l_List_map___main___at___private_Init_Lean_Elab_StructInst_5__getStructName___spec__2(lean_object*);
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__3;
lean_object* l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_fmt___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__2(lean_object*);
lean_object* l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__6;
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_inhabited___closed__1;
lean_object* l_Lean_Format_joinSep___main___at___private_Init_Lean_Data_Trie_6__toStringAux___main___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
lean_object* l_ReaderT_Monad___rarg(lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Init_Lean_Elab_StructInst_7__mkStructView___spec__2(lean_object*);
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__5;
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
extern lean_object* l___private_Init_Lean_Elab_Quotation_5__quoteSyntax___main___closed__1;
lean_object* lean_array_get_size(lean_object*);
lean_object* l_List_find_x3f___main___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_setFields(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___rarg(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__6;
lean_object* l_Nat_max(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn___main(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__1;
extern lean_object* l_Lean_formatKVMap___closed__1;
extern lean_object* l_Lean_Name_inhabited;
lean_object* l___private_Init_Lean_Elab_StructInst_8__expandCompositeFields(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__3;
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_formatField(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__1(lean_object*);
lean_object* l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__3(lean_object*);
lean_object* l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Init_Lean_Elab_Util_9__regTraceClasses___closed__1;
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__3;
lean_object* l_Lean_Elab_Term_StructInst_Field_hasFormat___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_formatStruct___main___closed__1;
extern lean_object* l_Id_monad;
lean_object* l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__8;
lean_object* l_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__3;
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__1;
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___main___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_head_x21___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_contains___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkTermIdFromIdent___closed__1;
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___main___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__6;
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_6__toFieldLHS(lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagate(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_Source_inhabited;
lean_object* l_Lean_fmt___at_Lean_Level_LevelToFormat_toResult___main___spec__1(lean_object*);
uint8_t l_Lean_Environment_isProjectionFn(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_23__mkCtorHeader___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple___rarg___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__3;
extern lean_object* l_Lean_Format_sbracket___closed__2;
lean_object* l_HashMapImp_insert___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__11;
lean_object* l_Lean_Elab_Term_whnf(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getOptions(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax___boxed(lean_object*, lean_object*);
lean_object* l_AssocList_foldlM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__7___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_hasFormat(lean_object*);
extern lean_object* l_Lean_mkTermIdFromIdent___closed__2;
extern lean_object* l_Array_forMAux___main___at_Lean_Meta_clear___spec__5___closed__8;
lean_object* l_Lean_Elab_Term_StructInst_Source_isNone___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_inhabited;
lean_object* l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step___main___closed__2;
extern lean_object* l_Lean_Parser_Term_proj___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux___main(lean_object*, lean_object*);
uint8_t lean_metavar_ctx_is_expr_assigned(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_Term_2__fromMetaException(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_isDefaultMissing_x3f___boxed(lean_object*);
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__1;
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_22__propagateExpectedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__5;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__1;
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_declareBuiltinTermElab___closed__3;
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___main(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___boxed(lean_object*);
lean_object* l_List_toString___at_Lean_Elab_OpenDecl_HasToString___spec__2(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_15__mkProjStx(lean_object*, lean_object*);
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_StructInst_14__getFieldIdx___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_StructInst_14__getFieldIdx___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_4__elabModifyOp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind;
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__2;
lean_object* l___private_Init_Lean_Elab_StructInst_18__addMissingFields___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_14__getFieldIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__6;
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__3;
lean_object* l_Lean_Elab_Term_StructInst_formatStruct(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple(lean_object*);
lean_object* l_Lean_Name_append___main(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields___boxed(lean_object*);
lean_object* l_Array_shrink___main___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_FindImpl_findM_x3f___main___at_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax(uint8_t, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__2;
lean_object* l_Lean_mkAnnotation(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__2;
lean_object* l___private_Init_Lean_Elab_StructInst_13__isSimpleField_x3f___boxed(lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__5;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__7(lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__2;
lean_object* l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__2(lean_object*);
extern lean_object* l_Lean_formatEntry___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__3;
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_find___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__2(lean_object*, lean_object*);
lean_object* l_HashMapImp_find_x3f___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_inhabited(lean_object*);
lean_object* lean_instantiate_type_lparams(lean_object*, lean_object*);
extern lean_object* l_Lean_Format_join___closed__1;
lean_object* l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__1;
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__10;
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_Field_toSyntax___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth(lean_object*);
extern lean_object* l___private_Init_Lean_Elab_Quotation_7__getHeadInfo___elambda__3___closed__2;
size_t l_Lean_Name_hash(lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__1;
lean_object* l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Syntax_prettyPrint(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__2;
lean_object* l_List_map___main___at___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___spec__2(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__3;
lean_object* l_Lean_Elab_Term_throwError___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__2(lean_object*, lean_object*);
lean_object* l_Lean_getStructureFields(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___closed__1;
extern lean_object* l___private_Init_Lean_Elab_Quotation_7__getHeadInfo___elambda__3___closed__4;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_Struct_hasFormat___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_16__mkSubstructSource___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getPathToBaseStructure_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_12__mkFieldMap(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__8;
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l_Lean_fmt___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__2___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1(lean_object*, lean_object*);
extern lean_object* l_List_head_x21___rarg___closed__2;
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_23__mkCtorHeader___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst___closed__1;
extern lean_object* l_Lean_Parser_Term_structInst___elambda__1___closed__2;
uint8_t l_Array_contains___at_Lean_findField_x3f___main___spec__1(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_let___elambda__1___closed__2;
lean_object* l_List_redLength___main___rarg(lean_object*);
lean_object* l_mkHashMapImp___rarg(lean_object*);
lean_object* l___private_Init_Lean_Expr_3__getAppArgsAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__1;
lean_object* l___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__2;
uint8_t l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity___main(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__8;
lean_object* l___private_Init_Lean_Elab_StructInst_7__mkStructView(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName___boxed(lean_object*);
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__4;
extern lean_object* l_Lean_Parser_Term_structInstField___elambda__1___closed__2;
lean_object* l___private_Init_Lean_Elab_StructInst_2__getStructSource___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___closed__1;
lean_object* l___private_Init_Lean_Elab_StructInst_21__getForallBody(lean_object*, lean_object*);
lean_object* l_HashMapImp_expand___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HashMap_toList___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__6(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___main(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__4;
lean_object* l_Lean_mkSepStx(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Format_sbracket___closed__3;
lean_object* l_fix1___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__1(lean_object*);
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_9__expandNumLitFields(lean_object*, lean_object*, lean_object*);
size_t l_USize_mod(size_t, size_t);
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
lean_object* l_Lean_Elab_Term_isDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_18__addMissingFields___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__2;
lean_object* l_Lean_ConstantInfo_lparams(lean_object*);
lean_object* l_Array_umapMAux___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_HasRepr___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_Field_hasToString;
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___main___spec__1(lean_object*, lean_object*);
lean_object* l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__5(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step___main___closed__1;
lean_object* l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_2__getStructSource___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_FindImpl_initCache;
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__4;
extern lean_object* l_Lean_Syntax_inhabited;
size_t lean_ptr_addr(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__9;
lean_object* l___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__3;
lean_object* lean_instantiate_value_lparams(lean_object*, lean_object*);
lean_object* l_Lean_isAnnotation_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__2;
extern lean_object* l_PersistentArray_Stats_toString___closed__4;
lean_object* l_Lean_Elab_Term_StructInst_Source_hasFormat___boxed(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_18__addMissingFields(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatField___closed__1;
lean_object* l_List_map___main___at___private_Init_Lean_Elab_StructInst_7__mkStructView___spec__3(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__1;
lean_object* l_Lean_Elab_Term_setMCtx(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkHole(lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__4;
lean_object* l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_24__elabStruct(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_22__propagateExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__4;
lean_object* l_Lean_Meta_reduceProj_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1(lean_object*, lean_object*);
lean_object* l_AssocList_find___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__2___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_source___boxed(lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatField___closed__2;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__2;
lean_object* l___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_Monad___rarg(lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_Elab_Term_synthesizeAppInstMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(lean_object*);
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref___boxed(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_getBuiltinSearchPath___closed__2;
lean_object* l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isExprMVarAssigned(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__4;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfMVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getStructureCtor(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_source(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_hasToString___closed__1;
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__1;
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__5;
extern lean_object* l_Lean_Parser_Term_letIdDecl___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__1;
lean_object* l___private_Init_Lean_Elab_StructInst_18__addMissingFields___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__10(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__9;
lean_object* l_Lean_Elab_Term_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
extern lean_object* l_Lean_TraceState_Inhabited___closed__1;
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_PUnit_Inhabited;
extern lean_object* l___private_Init_Lean_Elab_Quotation_7__getHeadInfo___elambda__3___closed__10;
extern lean_object* l_Lean_mkOptionalNode___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_isDefaultMissing_x3f(lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst___closed__3;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___main___boxed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__5;
lean_object* l___private_Init_Lean_Elab_StructInst_21__getForallBody___main(lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__2;
lean_object* l_Lean_Meta_mkLambda(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__1;
lean_object* l_Array_toList___rarg(lean_object*);
extern lean_object* l_Lean_Expr_Inhabited;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addBuiltinTermElab(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isSubobjectField_x3f(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_inhabited___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__6;
lean_object* l_Lean_Elab_Term_resolveGlobalName(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_StructInst_Source_isNone(lean_object*);
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___main___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__6;
lean_object* l_Lean_Elab_Term_StructInst_Struct_hasFormat;
lean_object* l_Lean_Elab_Term_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_arrayExpr_toMessageData___main___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___main(lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__1___closed__1;
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__4(lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__3;
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__3;
lean_object* l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__7;
lean_object* l_Lean_Elab_Term_StructInst_Field_hasToString___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_19__expandStruct___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___main___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__2;
lean_object* l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_Term_3__fromMetaState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__3;
lean_object* l_Array_filterAux___main___at___private_Init_Lean_Elab_StructInst_7__mkStructView___spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Init_Lean_Elab_Term_5__expandCDot___main___closed__4;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___main___lambda__1(lean_object*, lean_object*);
lean_object* l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__3___boxed(lean_object*);
extern lean_object* l_Lean_Parser_Term_structInstSource___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_Field_inhabited___closed__1;
lean_object* l_List_toArrayAux___main___rarg(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___main___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__3;
extern lean_object* l_System_FilePath_dirName___closed__1;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_hasFormat;
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__9;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_foldlM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__7(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_Field_inhabited___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField(lean_object*);
uint8_t l_Lean_isStructureLike(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_24__elabStruct___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___main___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__2;
lean_object* l_Lean_Elab_Term_isLocalTermId_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_1__expandNonAtomicExplicitSource(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatStruct___main___closed__2;
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__2;
lean_object* l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__4;
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax(lean_object*);
lean_object* l_Lean_findField_x3f___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_DefaultFields_reduce___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__4;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l_Lean_Elab_Term_getMCtx___rarg(lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_moveEntries___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__9;
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__4;
extern lean_object* l_addParenHeuristic___closed__1;
lean_object* l_List_findSome_x3f___main___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst___closed__2;
extern lean_object* l_Lean_MetavarContext_MkBinding_mkBinding___closed__1;
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__1;
lean_object* l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__5;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___boxed(lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__7;
lean_object* l_AssocList_replace___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___boxed(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__8;
lean_object* l_Lean_Elab_Term_StructInst_formatField___closed__3;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_monadInhabited___rarg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* _init_l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_getBuiltinSearchPath___closed__2;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_getBuiltinSearchPath___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_getBuiltinSearchPath___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("source has already been specified");
return x_1;
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_2);
x_7 = lean_nat_dec_lt(x_1, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_1);
x_8 = l_Array_empty___closed__1;
x_9 = x_2;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_12 = lean_array_fget(x_2, x_1);
x_13 = lean_box(0);
x_14 = x_13;
x_15 = lean_array_fset(x_2, x_1, x_14);
lean_inc(x_12);
x_26 = l_Lean_Syntax_getKind(x_12);
x_27 = l_Lean_Parser_Term_structInstSource___elambda__1___closed__2;
x_28 = lean_name_eq(x_26, x_27);
lean_dec(x_26);
if (x_28 == 0)
{
lean_object* x_29; 
lean_inc(x_12);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_12);
lean_ctor_set(x_29, 1, x_3);
x_16 = x_29;
x_17 = x_5;
goto block_25;
}
else
{
uint8_t x_30; 
x_30 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
if (x_30 == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_3);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_ctor_get(x_3, 0);
x_33 = lean_unsigned_to_nat(1u);
x_34 = l_Lean_Syntax_getArg(x_12, x_33);
x_35 = l_Lean_Syntax_isNone(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_unsigned_to_nat(0u);
x_37 = l_Lean_Syntax_getArg(x_34, x_36);
x_38 = 0;
lean_inc(x_37);
x_39 = l_Lean_Elab_Term_isLocalTermId_x3f(x_37, x_38, x_4, x_5);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_32);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_41);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_Lean_Elab_Term_getMainModule___rarg(x_44);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_box(0);
x_49 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__3;
x_50 = l_Lean_addMacroScope(x_46, x_49, x_43);
x_51 = lean_box(0);
x_52 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__2;
x_53 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_53, 0, x_48);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_53, 2, x_50);
lean_ctor_set(x_53, 3, x_51);
x_54 = l_Array_empty___closed__1;
x_55 = lean_array_push(x_54, x_53);
x_56 = l___private_Init_Lean_Elab_Term_5__expandCDot___main___closed__4;
x_57 = lean_array_push(x_55, x_56);
x_58 = l_Lean_mkTermIdFromIdent___closed__2;
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_37);
x_61 = 1;
lean_ctor_set(x_3, 0, x_60);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_61);
x_62 = l_Lean_Syntax_setArg(x_34, x_36, x_59);
lean_inc(x_12);
x_63 = l_Lean_Syntax_setArg(x_12, x_33, x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_3);
x_16 = x_64;
x_17 = x_47;
goto block_25;
}
else
{
lean_object* x_65; uint8_t x_66; lean_object* x_67; 
lean_dec(x_40);
lean_dec(x_37);
lean_dec(x_34);
x_65 = lean_ctor_get(x_39, 1);
lean_inc(x_65);
lean_dec(x_39);
x_66 = 1;
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_66);
lean_inc(x_12);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_12);
lean_ctor_set(x_67, 1, x_3);
x_16 = x_67;
x_17 = x_65;
goto block_25;
}
}
else
{
uint8_t x_68; lean_object* x_69; 
lean_dec(x_34);
x_68 = 1;
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_68);
lean_inc(x_12);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_12);
lean_ctor_set(x_69, 1, x_3);
x_16 = x_69;
x_17 = x_5;
goto block_25;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_70 = lean_ctor_get(x_3, 0);
lean_inc(x_70);
lean_dec(x_3);
x_71 = lean_unsigned_to_nat(1u);
x_72 = l_Lean_Syntax_getArg(x_12, x_71);
x_73 = l_Lean_Syntax_isNone(x_72);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; uint8_t x_76; lean_object* x_77; lean_object* x_78; 
x_74 = lean_unsigned_to_nat(0u);
x_75 = l_Lean_Syntax_getArg(x_72, x_74);
x_76 = 0;
lean_inc(x_75);
x_77 = l_Lean_Elab_Term_isLocalTermId_x3f(x_75, x_76, x_4, x_5);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_70);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_79);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = l_Lean_Elab_Term_getMainModule___rarg(x_82);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_86 = lean_box(0);
x_87 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__3;
x_88 = l_Lean_addMacroScope(x_84, x_87, x_81);
x_89 = lean_box(0);
x_90 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__2;
x_91 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_91, 0, x_86);
lean_ctor_set(x_91, 1, x_90);
lean_ctor_set(x_91, 2, x_88);
lean_ctor_set(x_91, 3, x_89);
x_92 = l_Array_empty___closed__1;
x_93 = lean_array_push(x_92, x_91);
x_94 = l___private_Init_Lean_Elab_Term_5__expandCDot___main___closed__4;
x_95 = lean_array_push(x_93, x_94);
x_96 = l_Lean_mkTermIdFromIdent___closed__2;
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_95);
x_98 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_98, 0, x_75);
x_99 = 1;
x_100 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set_uint8(x_100, sizeof(void*)*1, x_99);
x_101 = l_Lean_Syntax_setArg(x_72, x_74, x_97);
lean_inc(x_12);
x_102 = l_Lean_Syntax_setArg(x_12, x_71, x_101);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_100);
x_16 = x_103;
x_17 = x_85;
goto block_25;
}
else
{
lean_object* x_104; uint8_t x_105; lean_object* x_106; lean_object* x_107; 
lean_dec(x_78);
lean_dec(x_75);
lean_dec(x_72);
x_104 = lean_ctor_get(x_77, 1);
lean_inc(x_104);
lean_dec(x_77);
x_105 = 1;
x_106 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_106, 0, x_70);
lean_ctor_set_uint8(x_106, sizeof(void*)*1, x_105);
lean_inc(x_12);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_12);
lean_ctor_set(x_107, 1, x_106);
x_16 = x_107;
x_17 = x_104;
goto block_25;
}
}
else
{
uint8_t x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_72);
x_108 = 1;
x_109 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_109, 0, x_70);
lean_ctor_set_uint8(x_109, sizeof(void*)*1, x_108);
lean_inc(x_12);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_12);
lean_ctor_set(x_110, 1, x_109);
x_16 = x_110;
x_17 = x_5;
goto block_25;
}
}
}
else
{
lean_object* x_111; lean_object* x_112; uint8_t x_113; 
lean_dec(x_15);
lean_dec(x_3);
lean_dec(x_1);
x_111 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__6;
x_112 = l_Lean_Elab_Term_throwError___rarg(x_12, x_111, x_4, x_5);
lean_dec(x_12);
x_113 = !lean_is_exclusive(x_112);
if (x_113 == 0)
{
return x_112;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_112, 0);
x_115 = lean_ctor_get(x_112, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_112);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
block_25:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_1, x_20);
x_22 = x_18;
lean_dec(x_12);
x_23 = lean_array_fset(x_15, x_1, x_22);
lean_dec(x_1);
x_1 = x_21;
x_2 = x_23;
x_3 = x_19;
x_5 = x_17;
goto _start;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_unsigned_to_nat(2u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = l_Lean_Syntax_getArgs(x_6);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(0u);
lean_inc(x_3);
x_9 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1(x_8, x_7, x_2, x_3, x_4);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_3);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_10, 1);
lean_dec(x_14);
x_15 = lean_ctor_get(x_10, 0);
lean_dec(x_15);
x_16 = !lean_is_exclusive(x_9);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_9, 0);
lean_dec(x_17);
lean_ctor_set(x_10, 0, x_12);
return x_9;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_dec(x_9);
lean_ctor_set(x_10, 0, x_12);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_10);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_10);
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_21 = x_9;
} else {
 lean_dec_ref(x_9);
 x_21 = lean_box(0);
}
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_12);
lean_ctor_set(x_22, 1, x_11);
if (lean_is_scalar(x_21)) {
 x_23 = lean_alloc_ctor(0, 2, 0);
} else {
 x_23 = x_21;
}
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
}
else
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_9, 1);
lean_inc(x_24);
lean_dec(x_9);
x_25 = !lean_is_exclusive(x_10);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_10, 0);
x_27 = lean_ctor_get(x_10, 1);
lean_dec(x_27);
x_28 = !lean_is_exclusive(x_12);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_29 = lean_ctor_get(x_12, 0);
x_30 = l_Lean_nullKind;
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_26);
x_32 = l_Lean_Syntax_setArg(x_1, x_5, x_31);
x_33 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_24);
lean_dec(x_3);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_Elab_Term_getMainModule___rarg(x_35);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_38 = lean_ctor_get(x_36, 0);
x_39 = lean_box(0);
x_40 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__3;
x_41 = l_Lean_addMacroScope(x_38, x_40, x_34);
x_42 = lean_box(0);
x_43 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__2;
x_44 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_44, 0, x_39);
lean_ctor_set(x_44, 1, x_43);
lean_ctor_set(x_44, 2, x_41);
lean_ctor_set(x_44, 3, x_42);
x_45 = l_Array_empty___closed__1;
x_46 = lean_array_push(x_45, x_44);
x_47 = l___private_Init_Lean_Elab_Term_5__expandCDot___main___closed__4;
x_48 = lean_array_push(x_46, x_47);
x_49 = lean_array_push(x_48, x_47);
x_50 = l___private_Init_Lean_Elab_Quotation_7__getHeadInfo___elambda__3___closed__4;
x_51 = lean_array_push(x_49, x_50);
x_52 = lean_array_push(x_51, x_29);
x_53 = l_Lean_Parser_Term_letIdDecl___closed__2;
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
x_55 = l___private_Init_Lean_Elab_Quotation_7__getHeadInfo___elambda__3___closed__2;
x_56 = lean_array_push(x_55, x_54);
x_57 = l___private_Init_Lean_Elab_Quotation_7__getHeadInfo___elambda__3___closed__10;
x_58 = lean_array_push(x_56, x_57);
x_59 = lean_array_push(x_58, x_32);
x_60 = l_Lean_Parser_Term_let___elambda__1___closed__2;
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
lean_ctor_set(x_12, 0, x_61);
lean_ctor_set(x_10, 0, x_12);
lean_ctor_set(x_36, 0, x_10);
return x_36;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_62 = lean_ctor_get(x_36, 0);
x_63 = lean_ctor_get(x_36, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_36);
x_64 = lean_box(0);
x_65 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__3;
x_66 = l_Lean_addMacroScope(x_62, x_65, x_34);
x_67 = lean_box(0);
x_68 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__2;
x_69 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_69, 0, x_64);
lean_ctor_set(x_69, 1, x_68);
lean_ctor_set(x_69, 2, x_66);
lean_ctor_set(x_69, 3, x_67);
x_70 = l_Array_empty___closed__1;
x_71 = lean_array_push(x_70, x_69);
x_72 = l___private_Init_Lean_Elab_Term_5__expandCDot___main___closed__4;
x_73 = lean_array_push(x_71, x_72);
x_74 = lean_array_push(x_73, x_72);
x_75 = l___private_Init_Lean_Elab_Quotation_7__getHeadInfo___elambda__3___closed__4;
x_76 = lean_array_push(x_74, x_75);
x_77 = lean_array_push(x_76, x_29);
x_78 = l_Lean_Parser_Term_letIdDecl___closed__2;
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
x_80 = l___private_Init_Lean_Elab_Quotation_7__getHeadInfo___elambda__3___closed__2;
x_81 = lean_array_push(x_80, x_79);
x_82 = l___private_Init_Lean_Elab_Quotation_7__getHeadInfo___elambda__3___closed__10;
x_83 = lean_array_push(x_81, x_82);
x_84 = lean_array_push(x_83, x_32);
x_85 = l_Lean_Parser_Term_let___elambda__1___closed__2;
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_84);
lean_ctor_set(x_12, 0, x_86);
lean_ctor_set(x_10, 0, x_12);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_10);
lean_ctor_set(x_87, 1, x_63);
return x_87;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_88 = lean_ctor_get(x_12, 0);
lean_inc(x_88);
lean_dec(x_12);
x_89 = l_Lean_nullKind;
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_26);
x_91 = l_Lean_Syntax_setArg(x_1, x_5, x_90);
x_92 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_24);
lean_dec(x_3);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = l_Lean_Elab_Term_getMainModule___rarg(x_94);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_98 = x_95;
} else {
 lean_dec_ref(x_95);
 x_98 = lean_box(0);
}
x_99 = lean_box(0);
x_100 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__3;
x_101 = l_Lean_addMacroScope(x_96, x_100, x_93);
x_102 = lean_box(0);
x_103 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__2;
x_104 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_104, 0, x_99);
lean_ctor_set(x_104, 1, x_103);
lean_ctor_set(x_104, 2, x_101);
lean_ctor_set(x_104, 3, x_102);
x_105 = l_Array_empty___closed__1;
x_106 = lean_array_push(x_105, x_104);
x_107 = l___private_Init_Lean_Elab_Term_5__expandCDot___main___closed__4;
x_108 = lean_array_push(x_106, x_107);
x_109 = lean_array_push(x_108, x_107);
x_110 = l___private_Init_Lean_Elab_Quotation_7__getHeadInfo___elambda__3___closed__4;
x_111 = lean_array_push(x_109, x_110);
x_112 = lean_array_push(x_111, x_88);
x_113 = l_Lean_Parser_Term_letIdDecl___closed__2;
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_112);
x_115 = l___private_Init_Lean_Elab_Quotation_7__getHeadInfo___elambda__3___closed__2;
x_116 = lean_array_push(x_115, x_114);
x_117 = l___private_Init_Lean_Elab_Quotation_7__getHeadInfo___elambda__3___closed__10;
x_118 = lean_array_push(x_116, x_117);
x_119 = lean_array_push(x_118, x_91);
x_120 = l_Lean_Parser_Term_let___elambda__1___closed__2;
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
x_122 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_10, 0, x_122);
if (lean_is_scalar(x_98)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_98;
}
lean_ctor_set(x_123, 0, x_10);
lean_ctor_set(x_123, 1, x_97);
return x_123;
}
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_124 = lean_ctor_get(x_10, 0);
lean_inc(x_124);
lean_dec(x_10);
x_125 = lean_ctor_get(x_12, 0);
lean_inc(x_125);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 x_126 = x_12;
} else {
 lean_dec_ref(x_12);
 x_126 = lean_box(0);
}
x_127 = l_Lean_nullKind;
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_124);
x_129 = l_Lean_Syntax_setArg(x_1, x_5, x_128);
x_130 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_24);
lean_dec(x_3);
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = l_Lean_Elab_Term_getMainModule___rarg(x_132);
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_133, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 lean_ctor_release(x_133, 1);
 x_136 = x_133;
} else {
 lean_dec_ref(x_133);
 x_136 = lean_box(0);
}
x_137 = lean_box(0);
x_138 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__3;
x_139 = l_Lean_addMacroScope(x_134, x_138, x_131);
x_140 = lean_box(0);
x_141 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__2;
x_142 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_142, 0, x_137);
lean_ctor_set(x_142, 1, x_141);
lean_ctor_set(x_142, 2, x_139);
lean_ctor_set(x_142, 3, x_140);
x_143 = l_Array_empty___closed__1;
x_144 = lean_array_push(x_143, x_142);
x_145 = l___private_Init_Lean_Elab_Term_5__expandCDot___main___closed__4;
x_146 = lean_array_push(x_144, x_145);
x_147 = lean_array_push(x_146, x_145);
x_148 = l___private_Init_Lean_Elab_Quotation_7__getHeadInfo___elambda__3___closed__4;
x_149 = lean_array_push(x_147, x_148);
x_150 = lean_array_push(x_149, x_125);
x_151 = l_Lean_Parser_Term_letIdDecl___closed__2;
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_150);
x_153 = l___private_Init_Lean_Elab_Quotation_7__getHeadInfo___elambda__3___closed__2;
x_154 = lean_array_push(x_153, x_152);
x_155 = l___private_Init_Lean_Elab_Quotation_7__getHeadInfo___elambda__3___closed__10;
x_156 = lean_array_push(x_154, x_155);
x_157 = lean_array_push(x_156, x_129);
x_158 = l_Lean_Parser_Term_let___elambda__1___closed__2;
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_157);
if (lean_is_scalar(x_126)) {
 x_160 = lean_alloc_ctor(1, 1, 0);
} else {
 x_160 = x_126;
}
lean_ctor_set(x_160, 0, x_159);
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_11);
if (lean_is_scalar(x_136)) {
 x_162 = lean_alloc_ctor(0, 2, 0);
} else {
 x_162 = x_136;
}
lean_ctor_set(x_162, 0, x_161);
lean_ctor_set(x_162, 1, x_135);
return x_162;
}
}
}
else
{
uint8_t x_163; 
lean_dec(x_3);
lean_dec(x_1);
x_163 = !lean_is_exclusive(x_9);
if (x_163 == 0)
{
return x_9;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_9, 0);
x_165 = lean_ctor_get(x_9, 1);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_9);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
return x_166;
}
}
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_1__expandNonAtomicExplicitSource___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = 0;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_1__expandNonAtomicExplicitSource(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 5);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_5, x_6);
lean_ctor_set(x_3, 5, x_7);
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_2, 9);
lean_dec(x_9);
lean_ctor_set(x_2, 9, x_5);
x_10 = l___private_Init_Lean_Elab_StructInst_1__expandNonAtomicExplicitSource___closed__1;
x_11 = l_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main(x_1, x_10, x_2, x_3);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_11);
if (x_19 == 0)
{
return x_11;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_11, 0);
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_11);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; uint8_t x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_23 = lean_ctor_get(x_2, 0);
x_24 = lean_ctor_get(x_2, 1);
x_25 = lean_ctor_get(x_2, 2);
x_26 = lean_ctor_get(x_2, 3);
x_27 = lean_ctor_get(x_2, 4);
x_28 = lean_ctor_get(x_2, 5);
x_29 = lean_ctor_get(x_2, 6);
x_30 = lean_ctor_get(x_2, 7);
x_31 = lean_ctor_get(x_2, 8);
x_32 = lean_ctor_get_uint8(x_2, sizeof(void*)*10);
x_33 = lean_ctor_get_uint8(x_2, sizeof(void*)*10 + 1);
x_34 = lean_ctor_get_uint8(x_2, sizeof(void*)*10 + 2);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_2);
x_35 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_35, 0, x_23);
lean_ctor_set(x_35, 1, x_24);
lean_ctor_set(x_35, 2, x_25);
lean_ctor_set(x_35, 3, x_26);
lean_ctor_set(x_35, 4, x_27);
lean_ctor_set(x_35, 5, x_28);
lean_ctor_set(x_35, 6, x_29);
lean_ctor_set(x_35, 7, x_30);
lean_ctor_set(x_35, 8, x_31);
lean_ctor_set(x_35, 9, x_5);
lean_ctor_set_uint8(x_35, sizeof(void*)*10, x_32);
lean_ctor_set_uint8(x_35, sizeof(void*)*10 + 1, x_33);
lean_ctor_set_uint8(x_35, sizeof(void*)*10 + 2, x_34);
x_36 = l___private_Init_Lean_Elab_StructInst_1__expandNonAtomicExplicitSource___closed__1;
x_37 = l_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main(x_1, x_36, x_35, x_3);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_40 = x_37;
} else {
 lean_dec_ref(x_37);
 x_40 = lean_box(0);
}
x_41 = lean_ctor_get(x_38, 0);
lean_inc(x_41);
lean_dec(x_38);
if (lean_is_scalar(x_40)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_40;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_39);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_37, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_37, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_45 = x_37;
} else {
 lean_dec_ref(x_37);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(1, 2, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; uint8_t x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_47 = lean_ctor_get(x_3, 0);
x_48 = lean_ctor_get(x_3, 1);
x_49 = lean_ctor_get(x_3, 2);
x_50 = lean_ctor_get(x_3, 3);
x_51 = lean_ctor_get(x_3, 4);
x_52 = lean_ctor_get(x_3, 5);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_3);
x_53 = lean_unsigned_to_nat(1u);
x_54 = lean_nat_add(x_52, x_53);
x_55 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_55, 0, x_47);
lean_ctor_set(x_55, 1, x_48);
lean_ctor_set(x_55, 2, x_49);
lean_ctor_set(x_55, 3, x_50);
lean_ctor_set(x_55, 4, x_51);
lean_ctor_set(x_55, 5, x_54);
x_56 = lean_ctor_get(x_2, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_2, 1);
lean_inc(x_57);
x_58 = lean_ctor_get(x_2, 2);
lean_inc(x_58);
x_59 = lean_ctor_get(x_2, 3);
lean_inc(x_59);
x_60 = lean_ctor_get(x_2, 4);
lean_inc(x_60);
x_61 = lean_ctor_get(x_2, 5);
lean_inc(x_61);
x_62 = lean_ctor_get(x_2, 6);
lean_inc(x_62);
x_63 = lean_ctor_get(x_2, 7);
lean_inc(x_63);
x_64 = lean_ctor_get(x_2, 8);
lean_inc(x_64);
x_65 = lean_ctor_get_uint8(x_2, sizeof(void*)*10);
x_66 = lean_ctor_get_uint8(x_2, sizeof(void*)*10 + 1);
x_67 = lean_ctor_get_uint8(x_2, sizeof(void*)*10 + 2);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 lean_ctor_release(x_2, 3);
 lean_ctor_release(x_2, 4);
 lean_ctor_release(x_2, 5);
 lean_ctor_release(x_2, 6);
 lean_ctor_release(x_2, 7);
 lean_ctor_release(x_2, 8);
 lean_ctor_release(x_2, 9);
 x_68 = x_2;
} else {
 lean_dec_ref(x_2);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(0, 10, 3);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_56);
lean_ctor_set(x_69, 1, x_57);
lean_ctor_set(x_69, 2, x_58);
lean_ctor_set(x_69, 3, x_59);
lean_ctor_set(x_69, 4, x_60);
lean_ctor_set(x_69, 5, x_61);
lean_ctor_set(x_69, 6, x_62);
lean_ctor_set(x_69, 7, x_63);
lean_ctor_set(x_69, 8, x_64);
lean_ctor_set(x_69, 9, x_52);
lean_ctor_set_uint8(x_69, sizeof(void*)*10, x_65);
lean_ctor_set_uint8(x_69, sizeof(void*)*10 + 1, x_66);
lean_ctor_set_uint8(x_69, sizeof(void*)*10 + 2, x_67);
x_70 = l___private_Init_Lean_Elab_StructInst_1__expandNonAtomicExplicitSource___closed__1;
x_71 = l_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main(x_1, x_70, x_69, x_55);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_74 = x_71;
} else {
 lean_dec_ref(x_71);
 x_74 = lean_box(0);
}
x_75 = lean_ctor_get(x_72, 0);
lean_inc(x_75);
lean_dec(x_72);
if (lean_is_scalar(x_74)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_74;
}
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_73);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_77 = lean_ctor_get(x_71, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_71, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_79 = x_71;
} else {
 lean_dec_ref(x_71);
 x_79 = lean_box(0);
}
if (lean_is_scalar(x_79)) {
 x_80 = lean_alloc_ctor(1, 2, 0);
} else {
 x_80 = x_79;
}
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_78);
return x_80;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Source_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
uint8_t l_Lean_Elab_Term_StructInst_Source_isNone(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Source_isNone___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_StructInst_Source_isNone(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" ..");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" .. ");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Source_hasFormat(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_Lean_Format_join___closed__1;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__2;
return x_3;
}
default: 
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_expr_dbg_to_string(x_4);
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = 0;
x_8 = l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__4;
x_9 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set_uint8(x_9, sizeof(void*)*2, x_7);
return x_9;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Source_hasFormat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_Source_hasFormat(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Source_addSyntax(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_push(x_2, x_3);
return x_4;
}
}
}
lean_object* l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_2__getStructSource___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_3, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_3);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_array_fget(x_2, x_3);
lean_inc(x_10);
x_11 = l_Lean_Syntax_getKind(x_10);
x_12 = l_Lean_Parser_Term_structInstSource___elambda__1___closed__2;
x_13 = lean_name_eq(x_11, x_12);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
x_14 = lean_nat_add(x_3, x_1);
lean_dec(x_3);
x_3 = x_14;
goto _start;
}
else
{
uint8_t x_16; 
x_16 = l_Lean_Elab_Term_StructInst_Source_isNone(x_4);
lean_dec(x_4);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_3);
x_17 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__6;
x_18 = l_Lean_Elab_Term_throwError___rarg(x_10, x_17, x_5, x_6);
lean_dec(x_10);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
return x_18;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_18);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_unsigned_to_nat(1u);
x_24 = l_Lean_Syntax_getArg(x_10, x_23);
x_25 = l_Lean_Syntax_isNone(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_unsigned_to_nat(0u);
x_27 = l_Lean_Syntax_getArg(x_24, x_26);
lean_dec(x_24);
x_28 = 0;
x_29 = l_Lean_Elab_Term_isLocalTermId_x3f(x_27, x_28, x_5, x_6);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_10);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l___private_Init_Lean_Elab_Quotation_5__quoteSyntax___main___closed__1;
x_33 = l_unreachable_x21___rarg(x_32);
lean_inc(x_5);
x_34 = lean_apply_2(x_33, x_5, x_31);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_nat_add(x_3, x_1);
lean_dec(x_3);
x_3 = x_37;
x_4 = x_35;
x_6 = x_36;
goto _start;
}
else
{
uint8_t x_39; 
lean_dec(x_5);
lean_dec(x_3);
x_39 = !lean_is_exclusive(x_34);
if (x_39 == 0)
{
return x_34;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_34, 0);
x_41 = lean_ctor_get(x_34, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_34);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_29, 1);
lean_inc(x_43);
lean_dec(x_29);
x_44 = lean_ctor_get(x_30, 0);
lean_inc(x_44);
lean_dec(x_30);
x_45 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_45, 0, x_10);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_nat_add(x_3, x_1);
lean_dec(x_3);
x_3 = x_46;
x_4 = x_45;
x_6 = x_43;
goto _start;
}
}
else
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_24);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_10);
x_49 = lean_nat_add(x_3, x_1);
lean_dec(x_3);
x_3 = x_49;
x_4 = x_48;
goto _start;
}
}
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_2__getStructSource(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_unsigned_to_nat(2u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArgs(x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_box(0);
x_9 = l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_2__getStructSource___spec__1(x_4, x_6, x_7, x_8, x_2, x_3);
lean_dec(x_6);
return x_9;
}
}
lean_object* l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_2__getStructSource___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_2__getStructSource___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_2__getStructSource___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Elab_StructInst_2__getStructSource(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid {...} notation, can't mix field and `[..]` at a given level");
return x_1;
}
}
lean_object* _init_l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid {...} notation, at most one `[..]` at a given level");
return x_1;
}
}
lean_object* _init_l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_3, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_3);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_array_fget(x_2, x_3);
lean_inc(x_10);
x_11 = l_Lean_Syntax_getKind(x_10);
x_12 = l_Lean_Parser_Term_structInstSource___elambda__1___closed__2;
x_13 = lean_name_eq(x_11, x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Lean_Parser_Term_structInstArrayRef___elambda__1___closed__2;
x_15 = lean_name_eq(x_11, x_14);
lean_dec(x_11);
if (x_15 == 0)
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_10);
x_17 = lean_nat_add(x_3, x_1);
lean_dec(x_3);
x_3 = x_17;
x_4 = x_16;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_4, 0);
lean_inc(x_19);
x_20 = l_Lean_Syntax_getKind(x_19);
x_21 = lean_name_eq(x_20, x_14);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_10);
x_22 = lean_nat_add(x_3, x_1);
lean_dec(x_3);
x_3 = x_22;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_4);
lean_dec(x_3);
x_24 = l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__3;
x_25 = l_Lean_Elab_Term_throwError___rarg(x_10, x_24, x_5, x_6);
lean_dec(x_10);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
else
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_10);
x_31 = lean_nat_add(x_3, x_1);
lean_dec(x_3);
x_3 = x_31;
x_4 = x_30;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_3);
x_33 = lean_ctor_get(x_4, 0);
lean_inc(x_33);
lean_dec(x_4);
x_34 = l_Lean_Syntax_getKind(x_33);
x_35 = lean_name_eq(x_34, x_14);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_36 = l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__3;
x_37 = l_Lean_Elab_Term_throwError___rarg(x_10, x_36, x_5, x_6);
lean_dec(x_10);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
return x_37;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_37);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__6;
x_43 = l_Lean_Elab_Term_throwError___rarg(x_10, x_42, x_5, x_6);
lean_dec(x_10);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
}
else
{
lean_object* x_48; 
lean_dec(x_11);
lean_dec(x_10);
x_48 = lean_nat_add(x_3, x_1);
lean_dec(x_3);
x_3 = x_48;
goto _start;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_unsigned_to_nat(2u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArgs(x_5);
lean_dec(x_5);
x_7 = lean_box(0);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1(x_4, x_6, x_8, x_7, x_2, x_3);
lean_dec(x_6);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
lean_ctor_set(x_9, 0, x_7);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_9, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_10, 0);
lean_inc(x_17);
x_18 = l_Lean_Syntax_getKind(x_17);
x_19 = l_Lean_Parser_Term_structInstArrayRef___elambda__1___closed__2;
x_20 = lean_name_eq(x_18, x_19);
lean_dec(x_18);
if (x_20 == 0)
{
lean_dec(x_10);
lean_ctor_set(x_9, 0, x_7);
return x_9;
}
else
{
return x_9;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_9, 1);
lean_inc(x_21);
lean_dec(x_9);
x_22 = lean_ctor_get(x_10, 0);
lean_inc(x_22);
x_23 = l_Lean_Syntax_getKind(x_22);
x_24 = l_Lean_Parser_Term_structInstArrayRef___elambda__1___closed__2;
x_25 = lean_name_eq(x_23, x_24);
lean_dec(x_23);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_10);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_7);
lean_ctor_set(x_26, 1, x_21);
return x_26;
}
else
{
lean_object* x_27; 
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_10);
lean_ctor_set(x_27, 1, x_21);
return x_27;
}
}
}
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_9);
if (x_28 == 0)
{
return x_9;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_9, 0);
x_30 = lean_ctor_get(x_9, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_9);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
lean_object* l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("WIP ");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_4__elabModifyOp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_1);
x_8 = l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__3;
x_9 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = l_Lean_Elab_Term_throwError___rarg(x_1, x_9, x_5, x_6);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Elab_StructInst_4__elabModifyOp(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_List_filterAux___main___at___private_Init_Lean_Elab_StructInst_5__getStructName___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
x_9 = l_List_isEmpty___rarg(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_free_object(x_2);
lean_dec(x_6);
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_inc(x_1);
x_12 = l_Lean_isStructureLike(x_1, x_11);
if (x_12 == 0)
{
lean_free_object(x_2);
lean_dec(x_6);
x_2 = x_7;
goto _start;
}
else
{
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_2, 0);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_2);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
x_18 = l_List_isEmpty___rarg(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_dec(x_15);
x_2 = x_16;
goto _start;
}
else
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_15, 0);
lean_inc(x_20);
lean_inc(x_1);
x_21 = l_Lean_isStructureLike(x_1, x_20);
if (x_21 == 0)
{
lean_dec(x_15);
x_2 = x_16;
goto _start;
}
else
{
lean_object* x_23; 
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_15);
lean_ctor_set(x_23, 1, x_3);
x_2 = x_16;
x_3 = x_23;
goto _start;
}
}
}
}
}
}
lean_object* l_List_map___main___at___private_Init_Lean_Elab_StructInst_5__getStructName___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_5__getStructName___spec__2(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_5__getStructName___spec__2(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid {...} notation, structure expected");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid {...} notation, ambiguous ");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid {...} notation, expected type is not of the form (C ...)");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid {...} notation, source type is not of the form (C ...)");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__10;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__11;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = l_Lean_Syntax_isNone(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_getIdAt(x_7, x_9);
x_11 = l_Lean_Elab_Term_resolveGlobalName(x_10, x_4, x_5);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_Term_getEnv___rarg(x_13);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = lean_box(0);
x_19 = l_List_filterAux___main___at___private_Init_Lean_Elab_StructInst_5__getStructName___spec__1(x_16, x_12, x_18);
x_20 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_5__getStructName___spec__2(x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_free_object(x_14);
x_21 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__3;
x_22 = l_Lean_Elab_Term_throwError___rarg(x_7, x_21, x_4, x_17);
lean_dec(x_7);
return x_22;
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
lean_dec(x_7);
lean_dec(x_4);
x_24 = lean_ctor_get(x_20, 0);
lean_inc(x_24);
lean_dec(x_20);
lean_ctor_set(x_14, 0, x_24);
return x_14;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_23);
lean_free_object(x_14);
x_25 = l_List_toString___at_Lean_Elab_OpenDecl_HasToString___spec__2(x_20);
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__6;
x_29 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = l_Lean_Elab_Term_throwError___rarg(x_7, x_29, x_4, x_17);
lean_dec(x_7);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_14, 0);
x_32 = lean_ctor_get(x_14, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_14);
x_33 = lean_box(0);
x_34 = l_List_filterAux___main___at___private_Init_Lean_Elab_StructInst_5__getStructName___spec__1(x_31, x_12, x_33);
x_35 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_5__getStructName___spec__2(x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__3;
x_37 = l_Lean_Elab_Term_throwError___rarg(x_7, x_36, x_4, x_32);
lean_dec(x_7);
return x_37;
}
else
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_7);
lean_dec(x_4);
x_39 = lean_ctor_get(x_35, 0);
lean_inc(x_39);
lean_dec(x_35);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_32);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_38);
x_41 = l_List_toString___at_Lean_Elab_OpenDecl_HasToString___spec__2(x_35);
x_42 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__6;
x_45 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
x_46 = l_Lean_Elab_Term_throwError___rarg(x_7, x_45, x_4, x_32);
lean_dec(x_7);
return x_46;
}
}
}
}
else
{
lean_object* x_47; 
lean_dec(x_7);
x_47 = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(x_2, x_4, x_5);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
if (lean_obj_tag(x_2) == 0)
{
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_3, 1);
lean_inc(x_65);
lean_dec(x_3);
lean_inc(x_4);
x_66 = l_Lean_Elab_Term_inferType(x_1, x_65, x_4, x_48);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
lean_inc(x_4);
x_69 = l_Lean_Elab_Term_whnf(x_1, x_67, x_4, x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = l_Lean_Elab_Term_tryPostponeIfMVar(x_70, x_4, x_71);
if (lean_obj_tag(x_72) == 0)
{
uint8_t x_73; 
x_73 = !lean_is_exclusive(x_72);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_83; 
x_74 = lean_ctor_get(x_72, 1);
x_75 = lean_ctor_get(x_72, 0);
lean_dec(x_75);
x_83 = l_Lean_Expr_getAppFn___main(x_70);
if (lean_obj_tag(x_83) == 4)
{
lean_object* x_84; 
lean_dec(x_70);
lean_dec(x_4);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
lean_dec(x_83);
lean_ctor_set(x_72, 0, x_84);
return x_72;
}
else
{
lean_object* x_85; 
lean_dec(x_83);
lean_free_object(x_72);
x_85 = lean_box(0);
x_76 = x_85;
goto block_82;
}
block_82:
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_76);
x_77 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_77, 0, x_70);
x_78 = l_Lean_indentExpr(x_77);
x_79 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_80 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_78);
x_81 = l_Lean_Elab_Term_throwError___rarg(x_1, x_80, x_4, x_74);
return x_81;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_94; 
x_86 = lean_ctor_get(x_72, 1);
lean_inc(x_86);
lean_dec(x_72);
x_94 = l_Lean_Expr_getAppFn___main(x_70);
if (lean_obj_tag(x_94) == 4)
{
lean_object* x_95; lean_object* x_96; 
lean_dec(x_70);
lean_dec(x_4);
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
lean_dec(x_94);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_86);
return x_96;
}
else
{
lean_object* x_97; 
lean_dec(x_94);
x_97 = lean_box(0);
x_87 = x_97;
goto block_93;
}
block_93:
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_87);
x_88 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_88, 0, x_70);
x_89 = l_Lean_indentExpr(x_88);
x_90 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_91 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_89);
x_92 = l_Lean_Elab_Term_throwError___rarg(x_1, x_91, x_4, x_86);
return x_92;
}
}
}
else
{
uint8_t x_98; 
lean_dec(x_70);
lean_dec(x_4);
x_98 = !lean_is_exclusive(x_72);
if (x_98 == 0)
{
return x_72;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_72, 0);
x_100 = lean_ctor_get(x_72, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_72);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
else
{
uint8_t x_102; 
lean_dec(x_4);
x_102 = !lean_is_exclusive(x_69);
if (x_102 == 0)
{
return x_69;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_69, 0);
x_104 = lean_ctor_get(x_69, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_69);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
else
{
uint8_t x_106; 
lean_dec(x_4);
x_106 = !lean_is_exclusive(x_66);
if (x_106 == 0)
{
return x_66;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_66, 0);
x_108 = lean_ctor_get(x_66, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_66);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
else
{
lean_object* x_110; 
lean_dec(x_3);
x_110 = lean_box(0);
x_49 = x_110;
goto block_64;
}
}
else
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_2, 0);
lean_inc(x_111);
lean_dec(x_2);
lean_inc(x_4);
lean_inc(x_111);
x_112 = l_Lean_Elab_Term_whnf(x_1, x_111, x_4, x_48);
if (lean_obj_tag(x_112) == 0)
{
uint8_t x_113; 
x_113 = !lean_is_exclusive(x_112);
if (x_113 == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_123; 
x_114 = lean_ctor_get(x_112, 0);
x_115 = lean_ctor_get(x_112, 1);
x_123 = l_Lean_Expr_getAppFn___main(x_114);
lean_dec(x_114);
switch (lean_obj_tag(x_123)) {
case 0:
{
lean_dec(x_123);
lean_free_object(x_112);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_124; lean_object* x_125; 
lean_dec(x_111);
x_124 = lean_ctor_get(x_3, 1);
lean_inc(x_124);
lean_dec(x_3);
lean_inc(x_4);
x_125 = l_Lean_Elab_Term_inferType(x_1, x_124, x_4, x_115);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
lean_inc(x_4);
x_128 = l_Lean_Elab_Term_whnf(x_1, x_126, x_4, x_127);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_131 = l_Lean_Elab_Term_tryPostponeIfMVar(x_129, x_4, x_130);
if (lean_obj_tag(x_131) == 0)
{
uint8_t x_132; 
x_132 = !lean_is_exclusive(x_131);
if (x_132 == 0)
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_142; 
x_133 = lean_ctor_get(x_131, 1);
x_134 = lean_ctor_get(x_131, 0);
lean_dec(x_134);
x_142 = l_Lean_Expr_getAppFn___main(x_129);
if (lean_obj_tag(x_142) == 4)
{
lean_object* x_143; 
lean_dec(x_129);
lean_dec(x_4);
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
lean_dec(x_142);
lean_ctor_set(x_131, 0, x_143);
return x_131;
}
else
{
lean_object* x_144; 
lean_dec(x_142);
lean_free_object(x_131);
x_144 = lean_box(0);
x_135 = x_144;
goto block_141;
}
block_141:
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_135);
x_136 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_136, 0, x_129);
x_137 = l_Lean_indentExpr(x_136);
x_138 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_139 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_137);
x_140 = l_Lean_Elab_Term_throwError___rarg(x_1, x_139, x_4, x_133);
return x_140;
}
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_153; 
x_145 = lean_ctor_get(x_131, 1);
lean_inc(x_145);
lean_dec(x_131);
x_153 = l_Lean_Expr_getAppFn___main(x_129);
if (lean_obj_tag(x_153) == 4)
{
lean_object* x_154; lean_object* x_155; 
lean_dec(x_129);
lean_dec(x_4);
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
lean_dec(x_153);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_145);
return x_155;
}
else
{
lean_object* x_156; 
lean_dec(x_153);
x_156 = lean_box(0);
x_146 = x_156;
goto block_152;
}
block_152:
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
lean_dec(x_146);
x_147 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_147, 0, x_129);
x_148 = l_Lean_indentExpr(x_147);
x_149 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_150 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_148);
x_151 = l_Lean_Elab_Term_throwError___rarg(x_1, x_150, x_4, x_145);
return x_151;
}
}
}
else
{
uint8_t x_157; 
lean_dec(x_129);
lean_dec(x_4);
x_157 = !lean_is_exclusive(x_131);
if (x_157 == 0)
{
return x_131;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_158 = lean_ctor_get(x_131, 0);
x_159 = lean_ctor_get(x_131, 1);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_131);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_158);
lean_ctor_set(x_160, 1, x_159);
return x_160;
}
}
}
else
{
uint8_t x_161; 
lean_dec(x_4);
x_161 = !lean_is_exclusive(x_128);
if (x_161 == 0)
{
return x_128;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_162 = lean_ctor_get(x_128, 0);
x_163 = lean_ctor_get(x_128, 1);
lean_inc(x_163);
lean_inc(x_162);
lean_dec(x_128);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_163);
return x_164;
}
}
}
else
{
uint8_t x_165; 
lean_dec(x_4);
x_165 = !lean_is_exclusive(x_125);
if (x_165 == 0)
{
return x_125;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_166 = lean_ctor_get(x_125, 0);
x_167 = lean_ctor_get(x_125, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_125);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
return x_168;
}
}
}
else
{
lean_object* x_169; 
lean_dec(x_3);
x_169 = lean_box(0);
x_116 = x_169;
goto block_122;
}
}
case 1:
{
lean_dec(x_123);
lean_free_object(x_112);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_170; lean_object* x_171; 
lean_dec(x_111);
x_170 = lean_ctor_get(x_3, 1);
lean_inc(x_170);
lean_dec(x_3);
lean_inc(x_4);
x_171 = l_Lean_Elab_Term_inferType(x_1, x_170, x_4, x_115);
if (lean_obj_tag(x_171) == 0)
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_171, 1);
lean_inc(x_173);
lean_dec(x_171);
lean_inc(x_4);
x_174 = l_Lean_Elab_Term_whnf(x_1, x_172, x_4, x_173);
if (lean_obj_tag(x_174) == 0)
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_175 = lean_ctor_get(x_174, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_174, 1);
lean_inc(x_176);
lean_dec(x_174);
x_177 = l_Lean_Elab_Term_tryPostponeIfMVar(x_175, x_4, x_176);
if (lean_obj_tag(x_177) == 0)
{
uint8_t x_178; 
x_178 = !lean_is_exclusive(x_177);
if (x_178 == 0)
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_188; 
x_179 = lean_ctor_get(x_177, 1);
x_180 = lean_ctor_get(x_177, 0);
lean_dec(x_180);
x_188 = l_Lean_Expr_getAppFn___main(x_175);
if (lean_obj_tag(x_188) == 4)
{
lean_object* x_189; 
lean_dec(x_175);
lean_dec(x_4);
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
lean_dec(x_188);
lean_ctor_set(x_177, 0, x_189);
return x_177;
}
else
{
lean_object* x_190; 
lean_dec(x_188);
lean_free_object(x_177);
x_190 = lean_box(0);
x_181 = x_190;
goto block_187;
}
block_187:
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_181);
x_182 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_182, 0, x_175);
x_183 = l_Lean_indentExpr(x_182);
x_184 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_185 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_183);
x_186 = l_Lean_Elab_Term_throwError___rarg(x_1, x_185, x_4, x_179);
return x_186;
}
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_199; 
x_191 = lean_ctor_get(x_177, 1);
lean_inc(x_191);
lean_dec(x_177);
x_199 = l_Lean_Expr_getAppFn___main(x_175);
if (lean_obj_tag(x_199) == 4)
{
lean_object* x_200; lean_object* x_201; 
lean_dec(x_175);
lean_dec(x_4);
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
lean_dec(x_199);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_191);
return x_201;
}
else
{
lean_object* x_202; 
lean_dec(x_199);
x_202 = lean_box(0);
x_192 = x_202;
goto block_198;
}
block_198:
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
lean_dec(x_192);
x_193 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_193, 0, x_175);
x_194 = l_Lean_indentExpr(x_193);
x_195 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_196 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_194);
x_197 = l_Lean_Elab_Term_throwError___rarg(x_1, x_196, x_4, x_191);
return x_197;
}
}
}
else
{
uint8_t x_203; 
lean_dec(x_175);
lean_dec(x_4);
x_203 = !lean_is_exclusive(x_177);
if (x_203 == 0)
{
return x_177;
}
else
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_204 = lean_ctor_get(x_177, 0);
x_205 = lean_ctor_get(x_177, 1);
lean_inc(x_205);
lean_inc(x_204);
lean_dec(x_177);
x_206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_206, 0, x_204);
lean_ctor_set(x_206, 1, x_205);
return x_206;
}
}
}
else
{
uint8_t x_207; 
lean_dec(x_4);
x_207 = !lean_is_exclusive(x_174);
if (x_207 == 0)
{
return x_174;
}
else
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_208 = lean_ctor_get(x_174, 0);
x_209 = lean_ctor_get(x_174, 1);
lean_inc(x_209);
lean_inc(x_208);
lean_dec(x_174);
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_208);
lean_ctor_set(x_210, 1, x_209);
return x_210;
}
}
}
else
{
uint8_t x_211; 
lean_dec(x_4);
x_211 = !lean_is_exclusive(x_171);
if (x_211 == 0)
{
return x_171;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_212 = lean_ctor_get(x_171, 0);
x_213 = lean_ctor_get(x_171, 1);
lean_inc(x_213);
lean_inc(x_212);
lean_dec(x_171);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_212);
lean_ctor_set(x_214, 1, x_213);
return x_214;
}
}
}
else
{
lean_object* x_215; 
lean_dec(x_3);
x_215 = lean_box(0);
x_116 = x_215;
goto block_122;
}
}
case 2:
{
lean_dec(x_123);
lean_free_object(x_112);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_216; lean_object* x_217; 
lean_dec(x_111);
x_216 = lean_ctor_get(x_3, 1);
lean_inc(x_216);
lean_dec(x_3);
lean_inc(x_4);
x_217 = l_Lean_Elab_Term_inferType(x_1, x_216, x_4, x_115);
if (lean_obj_tag(x_217) == 0)
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
lean_dec(x_217);
lean_inc(x_4);
x_220 = l_Lean_Elab_Term_whnf(x_1, x_218, x_4, x_219);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_220, 1);
lean_inc(x_222);
lean_dec(x_220);
x_223 = l_Lean_Elab_Term_tryPostponeIfMVar(x_221, x_4, x_222);
if (lean_obj_tag(x_223) == 0)
{
uint8_t x_224; 
x_224 = !lean_is_exclusive(x_223);
if (x_224 == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_234; 
x_225 = lean_ctor_get(x_223, 1);
x_226 = lean_ctor_get(x_223, 0);
lean_dec(x_226);
x_234 = l_Lean_Expr_getAppFn___main(x_221);
if (lean_obj_tag(x_234) == 4)
{
lean_object* x_235; 
lean_dec(x_221);
lean_dec(x_4);
x_235 = lean_ctor_get(x_234, 0);
lean_inc(x_235);
lean_dec(x_234);
lean_ctor_set(x_223, 0, x_235);
return x_223;
}
else
{
lean_object* x_236; 
lean_dec(x_234);
lean_free_object(x_223);
x_236 = lean_box(0);
x_227 = x_236;
goto block_233;
}
block_233:
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
lean_dec(x_227);
x_228 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_228, 0, x_221);
x_229 = l_Lean_indentExpr(x_228);
x_230 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_231 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_231, 0, x_230);
lean_ctor_set(x_231, 1, x_229);
x_232 = l_Lean_Elab_Term_throwError___rarg(x_1, x_231, x_4, x_225);
return x_232;
}
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_245; 
x_237 = lean_ctor_get(x_223, 1);
lean_inc(x_237);
lean_dec(x_223);
x_245 = l_Lean_Expr_getAppFn___main(x_221);
if (lean_obj_tag(x_245) == 4)
{
lean_object* x_246; lean_object* x_247; 
lean_dec(x_221);
lean_dec(x_4);
x_246 = lean_ctor_get(x_245, 0);
lean_inc(x_246);
lean_dec(x_245);
x_247 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_247, 0, x_246);
lean_ctor_set(x_247, 1, x_237);
return x_247;
}
else
{
lean_object* x_248; 
lean_dec(x_245);
x_248 = lean_box(0);
x_238 = x_248;
goto block_244;
}
block_244:
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_238);
x_239 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_239, 0, x_221);
x_240 = l_Lean_indentExpr(x_239);
x_241 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_242 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set(x_242, 1, x_240);
x_243 = l_Lean_Elab_Term_throwError___rarg(x_1, x_242, x_4, x_237);
return x_243;
}
}
}
else
{
uint8_t x_249; 
lean_dec(x_221);
lean_dec(x_4);
x_249 = !lean_is_exclusive(x_223);
if (x_249 == 0)
{
return x_223;
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_250 = lean_ctor_get(x_223, 0);
x_251 = lean_ctor_get(x_223, 1);
lean_inc(x_251);
lean_inc(x_250);
lean_dec(x_223);
x_252 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_252, 0, x_250);
lean_ctor_set(x_252, 1, x_251);
return x_252;
}
}
}
else
{
uint8_t x_253; 
lean_dec(x_4);
x_253 = !lean_is_exclusive(x_220);
if (x_253 == 0)
{
return x_220;
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; 
x_254 = lean_ctor_get(x_220, 0);
x_255 = lean_ctor_get(x_220, 1);
lean_inc(x_255);
lean_inc(x_254);
lean_dec(x_220);
x_256 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_256, 0, x_254);
lean_ctor_set(x_256, 1, x_255);
return x_256;
}
}
}
else
{
uint8_t x_257; 
lean_dec(x_4);
x_257 = !lean_is_exclusive(x_217);
if (x_257 == 0)
{
return x_217;
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; 
x_258 = lean_ctor_get(x_217, 0);
x_259 = lean_ctor_get(x_217, 1);
lean_inc(x_259);
lean_inc(x_258);
lean_dec(x_217);
x_260 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_260, 0, x_258);
lean_ctor_set(x_260, 1, x_259);
return x_260;
}
}
}
else
{
lean_object* x_261; 
lean_dec(x_3);
x_261 = lean_box(0);
x_116 = x_261;
goto block_122;
}
}
case 3:
{
lean_dec(x_123);
lean_free_object(x_112);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_262; lean_object* x_263; 
lean_dec(x_111);
x_262 = lean_ctor_get(x_3, 1);
lean_inc(x_262);
lean_dec(x_3);
lean_inc(x_4);
x_263 = l_Lean_Elab_Term_inferType(x_1, x_262, x_4, x_115);
if (lean_obj_tag(x_263) == 0)
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_264 = lean_ctor_get(x_263, 0);
lean_inc(x_264);
x_265 = lean_ctor_get(x_263, 1);
lean_inc(x_265);
lean_dec(x_263);
lean_inc(x_4);
x_266 = l_Lean_Elab_Term_whnf(x_1, x_264, x_4, x_265);
if (lean_obj_tag(x_266) == 0)
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_267 = lean_ctor_get(x_266, 0);
lean_inc(x_267);
x_268 = lean_ctor_get(x_266, 1);
lean_inc(x_268);
lean_dec(x_266);
x_269 = l_Lean_Elab_Term_tryPostponeIfMVar(x_267, x_4, x_268);
if (lean_obj_tag(x_269) == 0)
{
uint8_t x_270; 
x_270 = !lean_is_exclusive(x_269);
if (x_270 == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_280; 
x_271 = lean_ctor_get(x_269, 1);
x_272 = lean_ctor_get(x_269, 0);
lean_dec(x_272);
x_280 = l_Lean_Expr_getAppFn___main(x_267);
if (lean_obj_tag(x_280) == 4)
{
lean_object* x_281; 
lean_dec(x_267);
lean_dec(x_4);
x_281 = lean_ctor_get(x_280, 0);
lean_inc(x_281);
lean_dec(x_280);
lean_ctor_set(x_269, 0, x_281);
return x_269;
}
else
{
lean_object* x_282; 
lean_dec(x_280);
lean_free_object(x_269);
x_282 = lean_box(0);
x_273 = x_282;
goto block_279;
}
block_279:
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
lean_dec(x_273);
x_274 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_274, 0, x_267);
x_275 = l_Lean_indentExpr(x_274);
x_276 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_277 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_277, 0, x_276);
lean_ctor_set(x_277, 1, x_275);
x_278 = l_Lean_Elab_Term_throwError___rarg(x_1, x_277, x_4, x_271);
return x_278;
}
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_291; 
x_283 = lean_ctor_get(x_269, 1);
lean_inc(x_283);
lean_dec(x_269);
x_291 = l_Lean_Expr_getAppFn___main(x_267);
if (lean_obj_tag(x_291) == 4)
{
lean_object* x_292; lean_object* x_293; 
lean_dec(x_267);
lean_dec(x_4);
x_292 = lean_ctor_get(x_291, 0);
lean_inc(x_292);
lean_dec(x_291);
x_293 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_293, 0, x_292);
lean_ctor_set(x_293, 1, x_283);
return x_293;
}
else
{
lean_object* x_294; 
lean_dec(x_291);
x_294 = lean_box(0);
x_284 = x_294;
goto block_290;
}
block_290:
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; 
lean_dec(x_284);
x_285 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_285, 0, x_267);
x_286 = l_Lean_indentExpr(x_285);
x_287 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_288 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_288, 0, x_287);
lean_ctor_set(x_288, 1, x_286);
x_289 = l_Lean_Elab_Term_throwError___rarg(x_1, x_288, x_4, x_283);
return x_289;
}
}
}
else
{
uint8_t x_295; 
lean_dec(x_267);
lean_dec(x_4);
x_295 = !lean_is_exclusive(x_269);
if (x_295 == 0)
{
return x_269;
}
else
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; 
x_296 = lean_ctor_get(x_269, 0);
x_297 = lean_ctor_get(x_269, 1);
lean_inc(x_297);
lean_inc(x_296);
lean_dec(x_269);
x_298 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_298, 0, x_296);
lean_ctor_set(x_298, 1, x_297);
return x_298;
}
}
}
else
{
uint8_t x_299; 
lean_dec(x_4);
x_299 = !lean_is_exclusive(x_266);
if (x_299 == 0)
{
return x_266;
}
else
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; 
x_300 = lean_ctor_get(x_266, 0);
x_301 = lean_ctor_get(x_266, 1);
lean_inc(x_301);
lean_inc(x_300);
lean_dec(x_266);
x_302 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_302, 0, x_300);
lean_ctor_set(x_302, 1, x_301);
return x_302;
}
}
}
else
{
uint8_t x_303; 
lean_dec(x_4);
x_303 = !lean_is_exclusive(x_263);
if (x_303 == 0)
{
return x_263;
}
else
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_304 = lean_ctor_get(x_263, 0);
x_305 = lean_ctor_get(x_263, 1);
lean_inc(x_305);
lean_inc(x_304);
lean_dec(x_263);
x_306 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_306, 0, x_304);
lean_ctor_set(x_306, 1, x_305);
return x_306;
}
}
}
else
{
lean_object* x_307; 
lean_dec(x_3);
x_307 = lean_box(0);
x_116 = x_307;
goto block_122;
}
}
case 4:
{
lean_object* x_308; 
lean_dec(x_111);
lean_dec(x_4);
lean_dec(x_3);
x_308 = lean_ctor_get(x_123, 0);
lean_inc(x_308);
lean_dec(x_123);
lean_ctor_set(x_112, 0, x_308);
return x_112;
}
case 5:
{
lean_dec(x_123);
lean_free_object(x_112);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_309; lean_object* x_310; 
lean_dec(x_111);
x_309 = lean_ctor_get(x_3, 1);
lean_inc(x_309);
lean_dec(x_3);
lean_inc(x_4);
x_310 = l_Lean_Elab_Term_inferType(x_1, x_309, x_4, x_115);
if (lean_obj_tag(x_310) == 0)
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_311 = lean_ctor_get(x_310, 0);
lean_inc(x_311);
x_312 = lean_ctor_get(x_310, 1);
lean_inc(x_312);
lean_dec(x_310);
lean_inc(x_4);
x_313 = l_Lean_Elab_Term_whnf(x_1, x_311, x_4, x_312);
if (lean_obj_tag(x_313) == 0)
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; 
x_314 = lean_ctor_get(x_313, 0);
lean_inc(x_314);
x_315 = lean_ctor_get(x_313, 1);
lean_inc(x_315);
lean_dec(x_313);
x_316 = l_Lean_Elab_Term_tryPostponeIfMVar(x_314, x_4, x_315);
if (lean_obj_tag(x_316) == 0)
{
uint8_t x_317; 
x_317 = !lean_is_exclusive(x_316);
if (x_317 == 0)
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_327; 
x_318 = lean_ctor_get(x_316, 1);
x_319 = lean_ctor_get(x_316, 0);
lean_dec(x_319);
x_327 = l_Lean_Expr_getAppFn___main(x_314);
if (lean_obj_tag(x_327) == 4)
{
lean_object* x_328; 
lean_dec(x_314);
lean_dec(x_4);
x_328 = lean_ctor_get(x_327, 0);
lean_inc(x_328);
lean_dec(x_327);
lean_ctor_set(x_316, 0, x_328);
return x_316;
}
else
{
lean_object* x_329; 
lean_dec(x_327);
lean_free_object(x_316);
x_329 = lean_box(0);
x_320 = x_329;
goto block_326;
}
block_326:
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; 
lean_dec(x_320);
x_321 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_321, 0, x_314);
x_322 = l_Lean_indentExpr(x_321);
x_323 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_324 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_324, 0, x_323);
lean_ctor_set(x_324, 1, x_322);
x_325 = l_Lean_Elab_Term_throwError___rarg(x_1, x_324, x_4, x_318);
return x_325;
}
}
else
{
lean_object* x_330; lean_object* x_331; lean_object* x_338; 
x_330 = lean_ctor_get(x_316, 1);
lean_inc(x_330);
lean_dec(x_316);
x_338 = l_Lean_Expr_getAppFn___main(x_314);
if (lean_obj_tag(x_338) == 4)
{
lean_object* x_339; lean_object* x_340; 
lean_dec(x_314);
lean_dec(x_4);
x_339 = lean_ctor_get(x_338, 0);
lean_inc(x_339);
lean_dec(x_338);
x_340 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_340, 0, x_339);
lean_ctor_set(x_340, 1, x_330);
return x_340;
}
else
{
lean_object* x_341; 
lean_dec(x_338);
x_341 = lean_box(0);
x_331 = x_341;
goto block_337;
}
block_337:
{
lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; 
lean_dec(x_331);
x_332 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_332, 0, x_314);
x_333 = l_Lean_indentExpr(x_332);
x_334 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_335 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_335, 0, x_334);
lean_ctor_set(x_335, 1, x_333);
x_336 = l_Lean_Elab_Term_throwError___rarg(x_1, x_335, x_4, x_330);
return x_336;
}
}
}
else
{
uint8_t x_342; 
lean_dec(x_314);
lean_dec(x_4);
x_342 = !lean_is_exclusive(x_316);
if (x_342 == 0)
{
return x_316;
}
else
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; 
x_343 = lean_ctor_get(x_316, 0);
x_344 = lean_ctor_get(x_316, 1);
lean_inc(x_344);
lean_inc(x_343);
lean_dec(x_316);
x_345 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_345, 0, x_343);
lean_ctor_set(x_345, 1, x_344);
return x_345;
}
}
}
else
{
uint8_t x_346; 
lean_dec(x_4);
x_346 = !lean_is_exclusive(x_313);
if (x_346 == 0)
{
return x_313;
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; 
x_347 = lean_ctor_get(x_313, 0);
x_348 = lean_ctor_get(x_313, 1);
lean_inc(x_348);
lean_inc(x_347);
lean_dec(x_313);
x_349 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_349, 0, x_347);
lean_ctor_set(x_349, 1, x_348);
return x_349;
}
}
}
else
{
uint8_t x_350; 
lean_dec(x_4);
x_350 = !lean_is_exclusive(x_310);
if (x_350 == 0)
{
return x_310;
}
else
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; 
x_351 = lean_ctor_get(x_310, 0);
x_352 = lean_ctor_get(x_310, 1);
lean_inc(x_352);
lean_inc(x_351);
lean_dec(x_310);
x_353 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_353, 0, x_351);
lean_ctor_set(x_353, 1, x_352);
return x_353;
}
}
}
else
{
lean_object* x_354; 
lean_dec(x_3);
x_354 = lean_box(0);
x_116 = x_354;
goto block_122;
}
}
case 6:
{
lean_dec(x_123);
lean_free_object(x_112);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_355; lean_object* x_356; 
lean_dec(x_111);
x_355 = lean_ctor_get(x_3, 1);
lean_inc(x_355);
lean_dec(x_3);
lean_inc(x_4);
x_356 = l_Lean_Elab_Term_inferType(x_1, x_355, x_4, x_115);
if (lean_obj_tag(x_356) == 0)
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; 
x_357 = lean_ctor_get(x_356, 0);
lean_inc(x_357);
x_358 = lean_ctor_get(x_356, 1);
lean_inc(x_358);
lean_dec(x_356);
lean_inc(x_4);
x_359 = l_Lean_Elab_Term_whnf(x_1, x_357, x_4, x_358);
if (lean_obj_tag(x_359) == 0)
{
lean_object* x_360; lean_object* x_361; lean_object* x_362; 
x_360 = lean_ctor_get(x_359, 0);
lean_inc(x_360);
x_361 = lean_ctor_get(x_359, 1);
lean_inc(x_361);
lean_dec(x_359);
x_362 = l_Lean_Elab_Term_tryPostponeIfMVar(x_360, x_4, x_361);
if (lean_obj_tag(x_362) == 0)
{
uint8_t x_363; 
x_363 = !lean_is_exclusive(x_362);
if (x_363 == 0)
{
lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_373; 
x_364 = lean_ctor_get(x_362, 1);
x_365 = lean_ctor_get(x_362, 0);
lean_dec(x_365);
x_373 = l_Lean_Expr_getAppFn___main(x_360);
if (lean_obj_tag(x_373) == 4)
{
lean_object* x_374; 
lean_dec(x_360);
lean_dec(x_4);
x_374 = lean_ctor_get(x_373, 0);
lean_inc(x_374);
lean_dec(x_373);
lean_ctor_set(x_362, 0, x_374);
return x_362;
}
else
{
lean_object* x_375; 
lean_dec(x_373);
lean_free_object(x_362);
x_375 = lean_box(0);
x_366 = x_375;
goto block_372;
}
block_372:
{
lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; 
lean_dec(x_366);
x_367 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_367, 0, x_360);
x_368 = l_Lean_indentExpr(x_367);
x_369 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_370 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_370, 0, x_369);
lean_ctor_set(x_370, 1, x_368);
x_371 = l_Lean_Elab_Term_throwError___rarg(x_1, x_370, x_4, x_364);
return x_371;
}
}
else
{
lean_object* x_376; lean_object* x_377; lean_object* x_384; 
x_376 = lean_ctor_get(x_362, 1);
lean_inc(x_376);
lean_dec(x_362);
x_384 = l_Lean_Expr_getAppFn___main(x_360);
if (lean_obj_tag(x_384) == 4)
{
lean_object* x_385; lean_object* x_386; 
lean_dec(x_360);
lean_dec(x_4);
x_385 = lean_ctor_get(x_384, 0);
lean_inc(x_385);
lean_dec(x_384);
x_386 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_386, 0, x_385);
lean_ctor_set(x_386, 1, x_376);
return x_386;
}
else
{
lean_object* x_387; 
lean_dec(x_384);
x_387 = lean_box(0);
x_377 = x_387;
goto block_383;
}
block_383:
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; 
lean_dec(x_377);
x_378 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_378, 0, x_360);
x_379 = l_Lean_indentExpr(x_378);
x_380 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_381 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_381, 0, x_380);
lean_ctor_set(x_381, 1, x_379);
x_382 = l_Lean_Elab_Term_throwError___rarg(x_1, x_381, x_4, x_376);
return x_382;
}
}
}
else
{
uint8_t x_388; 
lean_dec(x_360);
lean_dec(x_4);
x_388 = !lean_is_exclusive(x_362);
if (x_388 == 0)
{
return x_362;
}
else
{
lean_object* x_389; lean_object* x_390; lean_object* x_391; 
x_389 = lean_ctor_get(x_362, 0);
x_390 = lean_ctor_get(x_362, 1);
lean_inc(x_390);
lean_inc(x_389);
lean_dec(x_362);
x_391 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_391, 0, x_389);
lean_ctor_set(x_391, 1, x_390);
return x_391;
}
}
}
else
{
uint8_t x_392; 
lean_dec(x_4);
x_392 = !lean_is_exclusive(x_359);
if (x_392 == 0)
{
return x_359;
}
else
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; 
x_393 = lean_ctor_get(x_359, 0);
x_394 = lean_ctor_get(x_359, 1);
lean_inc(x_394);
lean_inc(x_393);
lean_dec(x_359);
x_395 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_395, 0, x_393);
lean_ctor_set(x_395, 1, x_394);
return x_395;
}
}
}
else
{
uint8_t x_396; 
lean_dec(x_4);
x_396 = !lean_is_exclusive(x_356);
if (x_396 == 0)
{
return x_356;
}
else
{
lean_object* x_397; lean_object* x_398; lean_object* x_399; 
x_397 = lean_ctor_get(x_356, 0);
x_398 = lean_ctor_get(x_356, 1);
lean_inc(x_398);
lean_inc(x_397);
lean_dec(x_356);
x_399 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_399, 0, x_397);
lean_ctor_set(x_399, 1, x_398);
return x_399;
}
}
}
else
{
lean_object* x_400; 
lean_dec(x_3);
x_400 = lean_box(0);
x_116 = x_400;
goto block_122;
}
}
case 7:
{
lean_dec(x_123);
lean_free_object(x_112);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_401; lean_object* x_402; 
lean_dec(x_111);
x_401 = lean_ctor_get(x_3, 1);
lean_inc(x_401);
lean_dec(x_3);
lean_inc(x_4);
x_402 = l_Lean_Elab_Term_inferType(x_1, x_401, x_4, x_115);
if (lean_obj_tag(x_402) == 0)
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; 
x_403 = lean_ctor_get(x_402, 0);
lean_inc(x_403);
x_404 = lean_ctor_get(x_402, 1);
lean_inc(x_404);
lean_dec(x_402);
lean_inc(x_4);
x_405 = l_Lean_Elab_Term_whnf(x_1, x_403, x_4, x_404);
if (lean_obj_tag(x_405) == 0)
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; 
x_406 = lean_ctor_get(x_405, 0);
lean_inc(x_406);
x_407 = lean_ctor_get(x_405, 1);
lean_inc(x_407);
lean_dec(x_405);
x_408 = l_Lean_Elab_Term_tryPostponeIfMVar(x_406, x_4, x_407);
if (lean_obj_tag(x_408) == 0)
{
uint8_t x_409; 
x_409 = !lean_is_exclusive(x_408);
if (x_409 == 0)
{
lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_419; 
x_410 = lean_ctor_get(x_408, 1);
x_411 = lean_ctor_get(x_408, 0);
lean_dec(x_411);
x_419 = l_Lean_Expr_getAppFn___main(x_406);
if (lean_obj_tag(x_419) == 4)
{
lean_object* x_420; 
lean_dec(x_406);
lean_dec(x_4);
x_420 = lean_ctor_get(x_419, 0);
lean_inc(x_420);
lean_dec(x_419);
lean_ctor_set(x_408, 0, x_420);
return x_408;
}
else
{
lean_object* x_421; 
lean_dec(x_419);
lean_free_object(x_408);
x_421 = lean_box(0);
x_412 = x_421;
goto block_418;
}
block_418:
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; 
lean_dec(x_412);
x_413 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_413, 0, x_406);
x_414 = l_Lean_indentExpr(x_413);
x_415 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_416 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_416, 0, x_415);
lean_ctor_set(x_416, 1, x_414);
x_417 = l_Lean_Elab_Term_throwError___rarg(x_1, x_416, x_4, x_410);
return x_417;
}
}
else
{
lean_object* x_422; lean_object* x_423; lean_object* x_430; 
x_422 = lean_ctor_get(x_408, 1);
lean_inc(x_422);
lean_dec(x_408);
x_430 = l_Lean_Expr_getAppFn___main(x_406);
if (lean_obj_tag(x_430) == 4)
{
lean_object* x_431; lean_object* x_432; 
lean_dec(x_406);
lean_dec(x_4);
x_431 = lean_ctor_get(x_430, 0);
lean_inc(x_431);
lean_dec(x_430);
x_432 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_432, 0, x_431);
lean_ctor_set(x_432, 1, x_422);
return x_432;
}
else
{
lean_object* x_433; 
lean_dec(x_430);
x_433 = lean_box(0);
x_423 = x_433;
goto block_429;
}
block_429:
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; 
lean_dec(x_423);
x_424 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_424, 0, x_406);
x_425 = l_Lean_indentExpr(x_424);
x_426 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_427 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_427, 0, x_426);
lean_ctor_set(x_427, 1, x_425);
x_428 = l_Lean_Elab_Term_throwError___rarg(x_1, x_427, x_4, x_422);
return x_428;
}
}
}
else
{
uint8_t x_434; 
lean_dec(x_406);
lean_dec(x_4);
x_434 = !lean_is_exclusive(x_408);
if (x_434 == 0)
{
return x_408;
}
else
{
lean_object* x_435; lean_object* x_436; lean_object* x_437; 
x_435 = lean_ctor_get(x_408, 0);
x_436 = lean_ctor_get(x_408, 1);
lean_inc(x_436);
lean_inc(x_435);
lean_dec(x_408);
x_437 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_437, 0, x_435);
lean_ctor_set(x_437, 1, x_436);
return x_437;
}
}
}
else
{
uint8_t x_438; 
lean_dec(x_4);
x_438 = !lean_is_exclusive(x_405);
if (x_438 == 0)
{
return x_405;
}
else
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; 
x_439 = lean_ctor_get(x_405, 0);
x_440 = lean_ctor_get(x_405, 1);
lean_inc(x_440);
lean_inc(x_439);
lean_dec(x_405);
x_441 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_441, 0, x_439);
lean_ctor_set(x_441, 1, x_440);
return x_441;
}
}
}
else
{
uint8_t x_442; 
lean_dec(x_4);
x_442 = !lean_is_exclusive(x_402);
if (x_442 == 0)
{
return x_402;
}
else
{
lean_object* x_443; lean_object* x_444; lean_object* x_445; 
x_443 = lean_ctor_get(x_402, 0);
x_444 = lean_ctor_get(x_402, 1);
lean_inc(x_444);
lean_inc(x_443);
lean_dec(x_402);
x_445 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_445, 0, x_443);
lean_ctor_set(x_445, 1, x_444);
return x_445;
}
}
}
else
{
lean_object* x_446; 
lean_dec(x_3);
x_446 = lean_box(0);
x_116 = x_446;
goto block_122;
}
}
case 8:
{
lean_dec(x_123);
lean_free_object(x_112);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_447; lean_object* x_448; 
lean_dec(x_111);
x_447 = lean_ctor_get(x_3, 1);
lean_inc(x_447);
lean_dec(x_3);
lean_inc(x_4);
x_448 = l_Lean_Elab_Term_inferType(x_1, x_447, x_4, x_115);
if (lean_obj_tag(x_448) == 0)
{
lean_object* x_449; lean_object* x_450; lean_object* x_451; 
x_449 = lean_ctor_get(x_448, 0);
lean_inc(x_449);
x_450 = lean_ctor_get(x_448, 1);
lean_inc(x_450);
lean_dec(x_448);
lean_inc(x_4);
x_451 = l_Lean_Elab_Term_whnf(x_1, x_449, x_4, x_450);
if (lean_obj_tag(x_451) == 0)
{
lean_object* x_452; lean_object* x_453; lean_object* x_454; 
x_452 = lean_ctor_get(x_451, 0);
lean_inc(x_452);
x_453 = lean_ctor_get(x_451, 1);
lean_inc(x_453);
lean_dec(x_451);
x_454 = l_Lean_Elab_Term_tryPostponeIfMVar(x_452, x_4, x_453);
if (lean_obj_tag(x_454) == 0)
{
uint8_t x_455; 
x_455 = !lean_is_exclusive(x_454);
if (x_455 == 0)
{
lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_465; 
x_456 = lean_ctor_get(x_454, 1);
x_457 = lean_ctor_get(x_454, 0);
lean_dec(x_457);
x_465 = l_Lean_Expr_getAppFn___main(x_452);
if (lean_obj_tag(x_465) == 4)
{
lean_object* x_466; 
lean_dec(x_452);
lean_dec(x_4);
x_466 = lean_ctor_get(x_465, 0);
lean_inc(x_466);
lean_dec(x_465);
lean_ctor_set(x_454, 0, x_466);
return x_454;
}
else
{
lean_object* x_467; 
lean_dec(x_465);
lean_free_object(x_454);
x_467 = lean_box(0);
x_458 = x_467;
goto block_464;
}
block_464:
{
lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; 
lean_dec(x_458);
x_459 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_459, 0, x_452);
x_460 = l_Lean_indentExpr(x_459);
x_461 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_462 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_462, 0, x_461);
lean_ctor_set(x_462, 1, x_460);
x_463 = l_Lean_Elab_Term_throwError___rarg(x_1, x_462, x_4, x_456);
return x_463;
}
}
else
{
lean_object* x_468; lean_object* x_469; lean_object* x_476; 
x_468 = lean_ctor_get(x_454, 1);
lean_inc(x_468);
lean_dec(x_454);
x_476 = l_Lean_Expr_getAppFn___main(x_452);
if (lean_obj_tag(x_476) == 4)
{
lean_object* x_477; lean_object* x_478; 
lean_dec(x_452);
lean_dec(x_4);
x_477 = lean_ctor_get(x_476, 0);
lean_inc(x_477);
lean_dec(x_476);
x_478 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_478, 0, x_477);
lean_ctor_set(x_478, 1, x_468);
return x_478;
}
else
{
lean_object* x_479; 
lean_dec(x_476);
x_479 = lean_box(0);
x_469 = x_479;
goto block_475;
}
block_475:
{
lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; 
lean_dec(x_469);
x_470 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_470, 0, x_452);
x_471 = l_Lean_indentExpr(x_470);
x_472 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_473 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_473, 0, x_472);
lean_ctor_set(x_473, 1, x_471);
x_474 = l_Lean_Elab_Term_throwError___rarg(x_1, x_473, x_4, x_468);
return x_474;
}
}
}
else
{
uint8_t x_480; 
lean_dec(x_452);
lean_dec(x_4);
x_480 = !lean_is_exclusive(x_454);
if (x_480 == 0)
{
return x_454;
}
else
{
lean_object* x_481; lean_object* x_482; lean_object* x_483; 
x_481 = lean_ctor_get(x_454, 0);
x_482 = lean_ctor_get(x_454, 1);
lean_inc(x_482);
lean_inc(x_481);
lean_dec(x_454);
x_483 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_483, 0, x_481);
lean_ctor_set(x_483, 1, x_482);
return x_483;
}
}
}
else
{
uint8_t x_484; 
lean_dec(x_4);
x_484 = !lean_is_exclusive(x_451);
if (x_484 == 0)
{
return x_451;
}
else
{
lean_object* x_485; lean_object* x_486; lean_object* x_487; 
x_485 = lean_ctor_get(x_451, 0);
x_486 = lean_ctor_get(x_451, 1);
lean_inc(x_486);
lean_inc(x_485);
lean_dec(x_451);
x_487 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_487, 0, x_485);
lean_ctor_set(x_487, 1, x_486);
return x_487;
}
}
}
else
{
uint8_t x_488; 
lean_dec(x_4);
x_488 = !lean_is_exclusive(x_448);
if (x_488 == 0)
{
return x_448;
}
else
{
lean_object* x_489; lean_object* x_490; lean_object* x_491; 
x_489 = lean_ctor_get(x_448, 0);
x_490 = lean_ctor_get(x_448, 1);
lean_inc(x_490);
lean_inc(x_489);
lean_dec(x_448);
x_491 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_491, 0, x_489);
lean_ctor_set(x_491, 1, x_490);
return x_491;
}
}
}
else
{
lean_object* x_492; 
lean_dec(x_3);
x_492 = lean_box(0);
x_116 = x_492;
goto block_122;
}
}
case 9:
{
lean_dec(x_123);
lean_free_object(x_112);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_493; lean_object* x_494; 
lean_dec(x_111);
x_493 = lean_ctor_get(x_3, 1);
lean_inc(x_493);
lean_dec(x_3);
lean_inc(x_4);
x_494 = l_Lean_Elab_Term_inferType(x_1, x_493, x_4, x_115);
if (lean_obj_tag(x_494) == 0)
{
lean_object* x_495; lean_object* x_496; lean_object* x_497; 
x_495 = lean_ctor_get(x_494, 0);
lean_inc(x_495);
x_496 = lean_ctor_get(x_494, 1);
lean_inc(x_496);
lean_dec(x_494);
lean_inc(x_4);
x_497 = l_Lean_Elab_Term_whnf(x_1, x_495, x_4, x_496);
if (lean_obj_tag(x_497) == 0)
{
lean_object* x_498; lean_object* x_499; lean_object* x_500; 
x_498 = lean_ctor_get(x_497, 0);
lean_inc(x_498);
x_499 = lean_ctor_get(x_497, 1);
lean_inc(x_499);
lean_dec(x_497);
x_500 = l_Lean_Elab_Term_tryPostponeIfMVar(x_498, x_4, x_499);
if (lean_obj_tag(x_500) == 0)
{
uint8_t x_501; 
x_501 = !lean_is_exclusive(x_500);
if (x_501 == 0)
{
lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_511; 
x_502 = lean_ctor_get(x_500, 1);
x_503 = lean_ctor_get(x_500, 0);
lean_dec(x_503);
x_511 = l_Lean_Expr_getAppFn___main(x_498);
if (lean_obj_tag(x_511) == 4)
{
lean_object* x_512; 
lean_dec(x_498);
lean_dec(x_4);
x_512 = lean_ctor_get(x_511, 0);
lean_inc(x_512);
lean_dec(x_511);
lean_ctor_set(x_500, 0, x_512);
return x_500;
}
else
{
lean_object* x_513; 
lean_dec(x_511);
lean_free_object(x_500);
x_513 = lean_box(0);
x_504 = x_513;
goto block_510;
}
block_510:
{
lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; 
lean_dec(x_504);
x_505 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_505, 0, x_498);
x_506 = l_Lean_indentExpr(x_505);
x_507 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_508 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_508, 0, x_507);
lean_ctor_set(x_508, 1, x_506);
x_509 = l_Lean_Elab_Term_throwError___rarg(x_1, x_508, x_4, x_502);
return x_509;
}
}
else
{
lean_object* x_514; lean_object* x_515; lean_object* x_522; 
x_514 = lean_ctor_get(x_500, 1);
lean_inc(x_514);
lean_dec(x_500);
x_522 = l_Lean_Expr_getAppFn___main(x_498);
if (lean_obj_tag(x_522) == 4)
{
lean_object* x_523; lean_object* x_524; 
lean_dec(x_498);
lean_dec(x_4);
x_523 = lean_ctor_get(x_522, 0);
lean_inc(x_523);
lean_dec(x_522);
x_524 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_524, 0, x_523);
lean_ctor_set(x_524, 1, x_514);
return x_524;
}
else
{
lean_object* x_525; 
lean_dec(x_522);
x_525 = lean_box(0);
x_515 = x_525;
goto block_521;
}
block_521:
{
lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; 
lean_dec(x_515);
x_516 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_516, 0, x_498);
x_517 = l_Lean_indentExpr(x_516);
x_518 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_519 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_519, 0, x_518);
lean_ctor_set(x_519, 1, x_517);
x_520 = l_Lean_Elab_Term_throwError___rarg(x_1, x_519, x_4, x_514);
return x_520;
}
}
}
else
{
uint8_t x_526; 
lean_dec(x_498);
lean_dec(x_4);
x_526 = !lean_is_exclusive(x_500);
if (x_526 == 0)
{
return x_500;
}
else
{
lean_object* x_527; lean_object* x_528; lean_object* x_529; 
x_527 = lean_ctor_get(x_500, 0);
x_528 = lean_ctor_get(x_500, 1);
lean_inc(x_528);
lean_inc(x_527);
lean_dec(x_500);
x_529 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_529, 0, x_527);
lean_ctor_set(x_529, 1, x_528);
return x_529;
}
}
}
else
{
uint8_t x_530; 
lean_dec(x_4);
x_530 = !lean_is_exclusive(x_497);
if (x_530 == 0)
{
return x_497;
}
else
{
lean_object* x_531; lean_object* x_532; lean_object* x_533; 
x_531 = lean_ctor_get(x_497, 0);
x_532 = lean_ctor_get(x_497, 1);
lean_inc(x_532);
lean_inc(x_531);
lean_dec(x_497);
x_533 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_533, 0, x_531);
lean_ctor_set(x_533, 1, x_532);
return x_533;
}
}
}
else
{
uint8_t x_534; 
lean_dec(x_4);
x_534 = !lean_is_exclusive(x_494);
if (x_534 == 0)
{
return x_494;
}
else
{
lean_object* x_535; lean_object* x_536; lean_object* x_537; 
x_535 = lean_ctor_get(x_494, 0);
x_536 = lean_ctor_get(x_494, 1);
lean_inc(x_536);
lean_inc(x_535);
lean_dec(x_494);
x_537 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_537, 0, x_535);
lean_ctor_set(x_537, 1, x_536);
return x_537;
}
}
}
else
{
lean_object* x_538; 
lean_dec(x_3);
x_538 = lean_box(0);
x_116 = x_538;
goto block_122;
}
}
case 10:
{
lean_dec(x_123);
lean_free_object(x_112);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_539; lean_object* x_540; 
lean_dec(x_111);
x_539 = lean_ctor_get(x_3, 1);
lean_inc(x_539);
lean_dec(x_3);
lean_inc(x_4);
x_540 = l_Lean_Elab_Term_inferType(x_1, x_539, x_4, x_115);
if (lean_obj_tag(x_540) == 0)
{
lean_object* x_541; lean_object* x_542; lean_object* x_543; 
x_541 = lean_ctor_get(x_540, 0);
lean_inc(x_541);
x_542 = lean_ctor_get(x_540, 1);
lean_inc(x_542);
lean_dec(x_540);
lean_inc(x_4);
x_543 = l_Lean_Elab_Term_whnf(x_1, x_541, x_4, x_542);
if (lean_obj_tag(x_543) == 0)
{
lean_object* x_544; lean_object* x_545; lean_object* x_546; 
x_544 = lean_ctor_get(x_543, 0);
lean_inc(x_544);
x_545 = lean_ctor_get(x_543, 1);
lean_inc(x_545);
lean_dec(x_543);
x_546 = l_Lean_Elab_Term_tryPostponeIfMVar(x_544, x_4, x_545);
if (lean_obj_tag(x_546) == 0)
{
uint8_t x_547; 
x_547 = !lean_is_exclusive(x_546);
if (x_547 == 0)
{
lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_557; 
x_548 = lean_ctor_get(x_546, 1);
x_549 = lean_ctor_get(x_546, 0);
lean_dec(x_549);
x_557 = l_Lean_Expr_getAppFn___main(x_544);
if (lean_obj_tag(x_557) == 4)
{
lean_object* x_558; 
lean_dec(x_544);
lean_dec(x_4);
x_558 = lean_ctor_get(x_557, 0);
lean_inc(x_558);
lean_dec(x_557);
lean_ctor_set(x_546, 0, x_558);
return x_546;
}
else
{
lean_object* x_559; 
lean_dec(x_557);
lean_free_object(x_546);
x_559 = lean_box(0);
x_550 = x_559;
goto block_556;
}
block_556:
{
lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; 
lean_dec(x_550);
x_551 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_551, 0, x_544);
x_552 = l_Lean_indentExpr(x_551);
x_553 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_554 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_554, 0, x_553);
lean_ctor_set(x_554, 1, x_552);
x_555 = l_Lean_Elab_Term_throwError___rarg(x_1, x_554, x_4, x_548);
return x_555;
}
}
else
{
lean_object* x_560; lean_object* x_561; lean_object* x_568; 
x_560 = lean_ctor_get(x_546, 1);
lean_inc(x_560);
lean_dec(x_546);
x_568 = l_Lean_Expr_getAppFn___main(x_544);
if (lean_obj_tag(x_568) == 4)
{
lean_object* x_569; lean_object* x_570; 
lean_dec(x_544);
lean_dec(x_4);
x_569 = lean_ctor_get(x_568, 0);
lean_inc(x_569);
lean_dec(x_568);
x_570 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_570, 0, x_569);
lean_ctor_set(x_570, 1, x_560);
return x_570;
}
else
{
lean_object* x_571; 
lean_dec(x_568);
x_571 = lean_box(0);
x_561 = x_571;
goto block_567;
}
block_567:
{
lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; 
lean_dec(x_561);
x_562 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_562, 0, x_544);
x_563 = l_Lean_indentExpr(x_562);
x_564 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_565 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_565, 0, x_564);
lean_ctor_set(x_565, 1, x_563);
x_566 = l_Lean_Elab_Term_throwError___rarg(x_1, x_565, x_4, x_560);
return x_566;
}
}
}
else
{
uint8_t x_572; 
lean_dec(x_544);
lean_dec(x_4);
x_572 = !lean_is_exclusive(x_546);
if (x_572 == 0)
{
return x_546;
}
else
{
lean_object* x_573; lean_object* x_574; lean_object* x_575; 
x_573 = lean_ctor_get(x_546, 0);
x_574 = lean_ctor_get(x_546, 1);
lean_inc(x_574);
lean_inc(x_573);
lean_dec(x_546);
x_575 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_575, 0, x_573);
lean_ctor_set(x_575, 1, x_574);
return x_575;
}
}
}
else
{
uint8_t x_576; 
lean_dec(x_4);
x_576 = !lean_is_exclusive(x_543);
if (x_576 == 0)
{
return x_543;
}
else
{
lean_object* x_577; lean_object* x_578; lean_object* x_579; 
x_577 = lean_ctor_get(x_543, 0);
x_578 = lean_ctor_get(x_543, 1);
lean_inc(x_578);
lean_inc(x_577);
lean_dec(x_543);
x_579 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_579, 0, x_577);
lean_ctor_set(x_579, 1, x_578);
return x_579;
}
}
}
else
{
uint8_t x_580; 
lean_dec(x_4);
x_580 = !lean_is_exclusive(x_540);
if (x_580 == 0)
{
return x_540;
}
else
{
lean_object* x_581; lean_object* x_582; lean_object* x_583; 
x_581 = lean_ctor_get(x_540, 0);
x_582 = lean_ctor_get(x_540, 1);
lean_inc(x_582);
lean_inc(x_581);
lean_dec(x_540);
x_583 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_583, 0, x_581);
lean_ctor_set(x_583, 1, x_582);
return x_583;
}
}
}
else
{
lean_object* x_584; 
lean_dec(x_3);
x_584 = lean_box(0);
x_116 = x_584;
goto block_122;
}
}
case 11:
{
lean_dec(x_123);
lean_free_object(x_112);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_585; lean_object* x_586; 
lean_dec(x_111);
x_585 = lean_ctor_get(x_3, 1);
lean_inc(x_585);
lean_dec(x_3);
lean_inc(x_4);
x_586 = l_Lean_Elab_Term_inferType(x_1, x_585, x_4, x_115);
if (lean_obj_tag(x_586) == 0)
{
lean_object* x_587; lean_object* x_588; lean_object* x_589; 
x_587 = lean_ctor_get(x_586, 0);
lean_inc(x_587);
x_588 = lean_ctor_get(x_586, 1);
lean_inc(x_588);
lean_dec(x_586);
lean_inc(x_4);
x_589 = l_Lean_Elab_Term_whnf(x_1, x_587, x_4, x_588);
if (lean_obj_tag(x_589) == 0)
{
lean_object* x_590; lean_object* x_591; lean_object* x_592; 
x_590 = lean_ctor_get(x_589, 0);
lean_inc(x_590);
x_591 = lean_ctor_get(x_589, 1);
lean_inc(x_591);
lean_dec(x_589);
x_592 = l_Lean_Elab_Term_tryPostponeIfMVar(x_590, x_4, x_591);
if (lean_obj_tag(x_592) == 0)
{
uint8_t x_593; 
x_593 = !lean_is_exclusive(x_592);
if (x_593 == 0)
{
lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_603; 
x_594 = lean_ctor_get(x_592, 1);
x_595 = lean_ctor_get(x_592, 0);
lean_dec(x_595);
x_603 = l_Lean_Expr_getAppFn___main(x_590);
if (lean_obj_tag(x_603) == 4)
{
lean_object* x_604; 
lean_dec(x_590);
lean_dec(x_4);
x_604 = lean_ctor_get(x_603, 0);
lean_inc(x_604);
lean_dec(x_603);
lean_ctor_set(x_592, 0, x_604);
return x_592;
}
else
{
lean_object* x_605; 
lean_dec(x_603);
lean_free_object(x_592);
x_605 = lean_box(0);
x_596 = x_605;
goto block_602;
}
block_602:
{
lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; 
lean_dec(x_596);
x_597 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_597, 0, x_590);
x_598 = l_Lean_indentExpr(x_597);
x_599 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_600 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_600, 0, x_599);
lean_ctor_set(x_600, 1, x_598);
x_601 = l_Lean_Elab_Term_throwError___rarg(x_1, x_600, x_4, x_594);
return x_601;
}
}
else
{
lean_object* x_606; lean_object* x_607; lean_object* x_614; 
x_606 = lean_ctor_get(x_592, 1);
lean_inc(x_606);
lean_dec(x_592);
x_614 = l_Lean_Expr_getAppFn___main(x_590);
if (lean_obj_tag(x_614) == 4)
{
lean_object* x_615; lean_object* x_616; 
lean_dec(x_590);
lean_dec(x_4);
x_615 = lean_ctor_get(x_614, 0);
lean_inc(x_615);
lean_dec(x_614);
x_616 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_616, 0, x_615);
lean_ctor_set(x_616, 1, x_606);
return x_616;
}
else
{
lean_object* x_617; 
lean_dec(x_614);
x_617 = lean_box(0);
x_607 = x_617;
goto block_613;
}
block_613:
{
lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; 
lean_dec(x_607);
x_608 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_608, 0, x_590);
x_609 = l_Lean_indentExpr(x_608);
x_610 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_611 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_611, 0, x_610);
lean_ctor_set(x_611, 1, x_609);
x_612 = l_Lean_Elab_Term_throwError___rarg(x_1, x_611, x_4, x_606);
return x_612;
}
}
}
else
{
uint8_t x_618; 
lean_dec(x_590);
lean_dec(x_4);
x_618 = !lean_is_exclusive(x_592);
if (x_618 == 0)
{
return x_592;
}
else
{
lean_object* x_619; lean_object* x_620; lean_object* x_621; 
x_619 = lean_ctor_get(x_592, 0);
x_620 = lean_ctor_get(x_592, 1);
lean_inc(x_620);
lean_inc(x_619);
lean_dec(x_592);
x_621 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_621, 0, x_619);
lean_ctor_set(x_621, 1, x_620);
return x_621;
}
}
}
else
{
uint8_t x_622; 
lean_dec(x_4);
x_622 = !lean_is_exclusive(x_589);
if (x_622 == 0)
{
return x_589;
}
else
{
lean_object* x_623; lean_object* x_624; lean_object* x_625; 
x_623 = lean_ctor_get(x_589, 0);
x_624 = lean_ctor_get(x_589, 1);
lean_inc(x_624);
lean_inc(x_623);
lean_dec(x_589);
x_625 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_625, 0, x_623);
lean_ctor_set(x_625, 1, x_624);
return x_625;
}
}
}
else
{
uint8_t x_626; 
lean_dec(x_4);
x_626 = !lean_is_exclusive(x_586);
if (x_626 == 0)
{
return x_586;
}
else
{
lean_object* x_627; lean_object* x_628; lean_object* x_629; 
x_627 = lean_ctor_get(x_586, 0);
x_628 = lean_ctor_get(x_586, 1);
lean_inc(x_628);
lean_inc(x_627);
lean_dec(x_586);
x_629 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_629, 0, x_627);
lean_ctor_set(x_629, 1, x_628);
return x_629;
}
}
}
else
{
lean_object* x_630; 
lean_dec(x_3);
x_630 = lean_box(0);
x_116 = x_630;
goto block_122;
}
}
default: 
{
lean_dec(x_123);
lean_free_object(x_112);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_631; lean_object* x_632; 
lean_dec(x_111);
x_631 = lean_ctor_get(x_3, 1);
lean_inc(x_631);
lean_dec(x_3);
lean_inc(x_4);
x_632 = l_Lean_Elab_Term_inferType(x_1, x_631, x_4, x_115);
if (lean_obj_tag(x_632) == 0)
{
lean_object* x_633; lean_object* x_634; lean_object* x_635; 
x_633 = lean_ctor_get(x_632, 0);
lean_inc(x_633);
x_634 = lean_ctor_get(x_632, 1);
lean_inc(x_634);
lean_dec(x_632);
lean_inc(x_4);
x_635 = l_Lean_Elab_Term_whnf(x_1, x_633, x_4, x_634);
if (lean_obj_tag(x_635) == 0)
{
lean_object* x_636; lean_object* x_637; lean_object* x_638; 
x_636 = lean_ctor_get(x_635, 0);
lean_inc(x_636);
x_637 = lean_ctor_get(x_635, 1);
lean_inc(x_637);
lean_dec(x_635);
x_638 = l_Lean_Elab_Term_tryPostponeIfMVar(x_636, x_4, x_637);
if (lean_obj_tag(x_638) == 0)
{
uint8_t x_639; 
x_639 = !lean_is_exclusive(x_638);
if (x_639 == 0)
{
lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_649; 
x_640 = lean_ctor_get(x_638, 1);
x_641 = lean_ctor_get(x_638, 0);
lean_dec(x_641);
x_649 = l_Lean_Expr_getAppFn___main(x_636);
if (lean_obj_tag(x_649) == 4)
{
lean_object* x_650; 
lean_dec(x_636);
lean_dec(x_4);
x_650 = lean_ctor_get(x_649, 0);
lean_inc(x_650);
lean_dec(x_649);
lean_ctor_set(x_638, 0, x_650);
return x_638;
}
else
{
lean_object* x_651; 
lean_dec(x_649);
lean_free_object(x_638);
x_651 = lean_box(0);
x_642 = x_651;
goto block_648;
}
block_648:
{
lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; 
lean_dec(x_642);
x_643 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_643, 0, x_636);
x_644 = l_Lean_indentExpr(x_643);
x_645 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_646 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_646, 0, x_645);
lean_ctor_set(x_646, 1, x_644);
x_647 = l_Lean_Elab_Term_throwError___rarg(x_1, x_646, x_4, x_640);
return x_647;
}
}
else
{
lean_object* x_652; lean_object* x_653; lean_object* x_660; 
x_652 = lean_ctor_get(x_638, 1);
lean_inc(x_652);
lean_dec(x_638);
x_660 = l_Lean_Expr_getAppFn___main(x_636);
if (lean_obj_tag(x_660) == 4)
{
lean_object* x_661; lean_object* x_662; 
lean_dec(x_636);
lean_dec(x_4);
x_661 = lean_ctor_get(x_660, 0);
lean_inc(x_661);
lean_dec(x_660);
x_662 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_662, 0, x_661);
lean_ctor_set(x_662, 1, x_652);
return x_662;
}
else
{
lean_object* x_663; 
lean_dec(x_660);
x_663 = lean_box(0);
x_653 = x_663;
goto block_659;
}
block_659:
{
lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; 
lean_dec(x_653);
x_654 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_654, 0, x_636);
x_655 = l_Lean_indentExpr(x_654);
x_656 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_657 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_657, 0, x_656);
lean_ctor_set(x_657, 1, x_655);
x_658 = l_Lean_Elab_Term_throwError___rarg(x_1, x_657, x_4, x_652);
return x_658;
}
}
}
else
{
uint8_t x_664; 
lean_dec(x_636);
lean_dec(x_4);
x_664 = !lean_is_exclusive(x_638);
if (x_664 == 0)
{
return x_638;
}
else
{
lean_object* x_665; lean_object* x_666; lean_object* x_667; 
x_665 = lean_ctor_get(x_638, 0);
x_666 = lean_ctor_get(x_638, 1);
lean_inc(x_666);
lean_inc(x_665);
lean_dec(x_638);
x_667 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_667, 0, x_665);
lean_ctor_set(x_667, 1, x_666);
return x_667;
}
}
}
else
{
uint8_t x_668; 
lean_dec(x_4);
x_668 = !lean_is_exclusive(x_635);
if (x_668 == 0)
{
return x_635;
}
else
{
lean_object* x_669; lean_object* x_670; lean_object* x_671; 
x_669 = lean_ctor_get(x_635, 0);
x_670 = lean_ctor_get(x_635, 1);
lean_inc(x_670);
lean_inc(x_669);
lean_dec(x_635);
x_671 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_671, 0, x_669);
lean_ctor_set(x_671, 1, x_670);
return x_671;
}
}
}
else
{
uint8_t x_672; 
lean_dec(x_4);
x_672 = !lean_is_exclusive(x_632);
if (x_672 == 0)
{
return x_632;
}
else
{
lean_object* x_673; lean_object* x_674; lean_object* x_675; 
x_673 = lean_ctor_get(x_632, 0);
x_674 = lean_ctor_get(x_632, 1);
lean_inc(x_674);
lean_inc(x_673);
lean_dec(x_632);
x_675 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_675, 0, x_673);
lean_ctor_set(x_675, 1, x_674);
return x_675;
}
}
}
else
{
lean_object* x_676; 
lean_dec(x_3);
x_676 = lean_box(0);
x_116 = x_676;
goto block_122;
}
}
}
block_122:
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
lean_dec(x_116);
x_117 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_117, 0, x_111);
x_118 = l_Lean_indentExpr(x_117);
x_119 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__9;
x_120 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_118);
x_121 = l_Lean_Elab_Term_throwError___rarg(x_1, x_120, x_4, x_115);
return x_121;
}
}
else
{
lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_686; 
x_677 = lean_ctor_get(x_112, 0);
x_678 = lean_ctor_get(x_112, 1);
lean_inc(x_678);
lean_inc(x_677);
lean_dec(x_112);
x_686 = l_Lean_Expr_getAppFn___main(x_677);
lean_dec(x_677);
switch (lean_obj_tag(x_686)) {
case 0:
{
lean_dec(x_686);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_687; lean_object* x_688; 
lean_dec(x_111);
x_687 = lean_ctor_get(x_3, 1);
lean_inc(x_687);
lean_dec(x_3);
lean_inc(x_4);
x_688 = l_Lean_Elab_Term_inferType(x_1, x_687, x_4, x_678);
if (lean_obj_tag(x_688) == 0)
{
lean_object* x_689; lean_object* x_690; lean_object* x_691; 
x_689 = lean_ctor_get(x_688, 0);
lean_inc(x_689);
x_690 = lean_ctor_get(x_688, 1);
lean_inc(x_690);
lean_dec(x_688);
lean_inc(x_4);
x_691 = l_Lean_Elab_Term_whnf(x_1, x_689, x_4, x_690);
if (lean_obj_tag(x_691) == 0)
{
lean_object* x_692; lean_object* x_693; lean_object* x_694; 
x_692 = lean_ctor_get(x_691, 0);
lean_inc(x_692);
x_693 = lean_ctor_get(x_691, 1);
lean_inc(x_693);
lean_dec(x_691);
x_694 = l_Lean_Elab_Term_tryPostponeIfMVar(x_692, x_4, x_693);
if (lean_obj_tag(x_694) == 0)
{
lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_704; 
x_695 = lean_ctor_get(x_694, 1);
lean_inc(x_695);
if (lean_is_exclusive(x_694)) {
 lean_ctor_release(x_694, 0);
 lean_ctor_release(x_694, 1);
 x_696 = x_694;
} else {
 lean_dec_ref(x_694);
 x_696 = lean_box(0);
}
x_704 = l_Lean_Expr_getAppFn___main(x_692);
if (lean_obj_tag(x_704) == 4)
{
lean_object* x_705; lean_object* x_706; 
lean_dec(x_692);
lean_dec(x_4);
x_705 = lean_ctor_get(x_704, 0);
lean_inc(x_705);
lean_dec(x_704);
if (lean_is_scalar(x_696)) {
 x_706 = lean_alloc_ctor(0, 2, 0);
} else {
 x_706 = x_696;
}
lean_ctor_set(x_706, 0, x_705);
lean_ctor_set(x_706, 1, x_695);
return x_706;
}
else
{
lean_object* x_707; 
lean_dec(x_704);
lean_dec(x_696);
x_707 = lean_box(0);
x_697 = x_707;
goto block_703;
}
block_703:
{
lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; 
lean_dec(x_697);
x_698 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_698, 0, x_692);
x_699 = l_Lean_indentExpr(x_698);
x_700 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_701 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_701, 0, x_700);
lean_ctor_set(x_701, 1, x_699);
x_702 = l_Lean_Elab_Term_throwError___rarg(x_1, x_701, x_4, x_695);
return x_702;
}
}
else
{
lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; 
lean_dec(x_692);
lean_dec(x_4);
x_708 = lean_ctor_get(x_694, 0);
lean_inc(x_708);
x_709 = lean_ctor_get(x_694, 1);
lean_inc(x_709);
if (lean_is_exclusive(x_694)) {
 lean_ctor_release(x_694, 0);
 lean_ctor_release(x_694, 1);
 x_710 = x_694;
} else {
 lean_dec_ref(x_694);
 x_710 = lean_box(0);
}
if (lean_is_scalar(x_710)) {
 x_711 = lean_alloc_ctor(1, 2, 0);
} else {
 x_711 = x_710;
}
lean_ctor_set(x_711, 0, x_708);
lean_ctor_set(x_711, 1, x_709);
return x_711;
}
}
else
{
lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; 
lean_dec(x_4);
x_712 = lean_ctor_get(x_691, 0);
lean_inc(x_712);
x_713 = lean_ctor_get(x_691, 1);
lean_inc(x_713);
if (lean_is_exclusive(x_691)) {
 lean_ctor_release(x_691, 0);
 lean_ctor_release(x_691, 1);
 x_714 = x_691;
} else {
 lean_dec_ref(x_691);
 x_714 = lean_box(0);
}
if (lean_is_scalar(x_714)) {
 x_715 = lean_alloc_ctor(1, 2, 0);
} else {
 x_715 = x_714;
}
lean_ctor_set(x_715, 0, x_712);
lean_ctor_set(x_715, 1, x_713);
return x_715;
}
}
else
{
lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; 
lean_dec(x_4);
x_716 = lean_ctor_get(x_688, 0);
lean_inc(x_716);
x_717 = lean_ctor_get(x_688, 1);
lean_inc(x_717);
if (lean_is_exclusive(x_688)) {
 lean_ctor_release(x_688, 0);
 lean_ctor_release(x_688, 1);
 x_718 = x_688;
} else {
 lean_dec_ref(x_688);
 x_718 = lean_box(0);
}
if (lean_is_scalar(x_718)) {
 x_719 = lean_alloc_ctor(1, 2, 0);
} else {
 x_719 = x_718;
}
lean_ctor_set(x_719, 0, x_716);
lean_ctor_set(x_719, 1, x_717);
return x_719;
}
}
else
{
lean_object* x_720; 
lean_dec(x_3);
x_720 = lean_box(0);
x_679 = x_720;
goto block_685;
}
}
case 1:
{
lean_dec(x_686);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_721; lean_object* x_722; 
lean_dec(x_111);
x_721 = lean_ctor_get(x_3, 1);
lean_inc(x_721);
lean_dec(x_3);
lean_inc(x_4);
x_722 = l_Lean_Elab_Term_inferType(x_1, x_721, x_4, x_678);
if (lean_obj_tag(x_722) == 0)
{
lean_object* x_723; lean_object* x_724; lean_object* x_725; 
x_723 = lean_ctor_get(x_722, 0);
lean_inc(x_723);
x_724 = lean_ctor_get(x_722, 1);
lean_inc(x_724);
lean_dec(x_722);
lean_inc(x_4);
x_725 = l_Lean_Elab_Term_whnf(x_1, x_723, x_4, x_724);
if (lean_obj_tag(x_725) == 0)
{
lean_object* x_726; lean_object* x_727; lean_object* x_728; 
x_726 = lean_ctor_get(x_725, 0);
lean_inc(x_726);
x_727 = lean_ctor_get(x_725, 1);
lean_inc(x_727);
lean_dec(x_725);
x_728 = l_Lean_Elab_Term_tryPostponeIfMVar(x_726, x_4, x_727);
if (lean_obj_tag(x_728) == 0)
{
lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_738; 
x_729 = lean_ctor_get(x_728, 1);
lean_inc(x_729);
if (lean_is_exclusive(x_728)) {
 lean_ctor_release(x_728, 0);
 lean_ctor_release(x_728, 1);
 x_730 = x_728;
} else {
 lean_dec_ref(x_728);
 x_730 = lean_box(0);
}
x_738 = l_Lean_Expr_getAppFn___main(x_726);
if (lean_obj_tag(x_738) == 4)
{
lean_object* x_739; lean_object* x_740; 
lean_dec(x_726);
lean_dec(x_4);
x_739 = lean_ctor_get(x_738, 0);
lean_inc(x_739);
lean_dec(x_738);
if (lean_is_scalar(x_730)) {
 x_740 = lean_alloc_ctor(0, 2, 0);
} else {
 x_740 = x_730;
}
lean_ctor_set(x_740, 0, x_739);
lean_ctor_set(x_740, 1, x_729);
return x_740;
}
else
{
lean_object* x_741; 
lean_dec(x_738);
lean_dec(x_730);
x_741 = lean_box(0);
x_731 = x_741;
goto block_737;
}
block_737:
{
lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; 
lean_dec(x_731);
x_732 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_732, 0, x_726);
x_733 = l_Lean_indentExpr(x_732);
x_734 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_735 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_735, 0, x_734);
lean_ctor_set(x_735, 1, x_733);
x_736 = l_Lean_Elab_Term_throwError___rarg(x_1, x_735, x_4, x_729);
return x_736;
}
}
else
{
lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; 
lean_dec(x_726);
lean_dec(x_4);
x_742 = lean_ctor_get(x_728, 0);
lean_inc(x_742);
x_743 = lean_ctor_get(x_728, 1);
lean_inc(x_743);
if (lean_is_exclusive(x_728)) {
 lean_ctor_release(x_728, 0);
 lean_ctor_release(x_728, 1);
 x_744 = x_728;
} else {
 lean_dec_ref(x_728);
 x_744 = lean_box(0);
}
if (lean_is_scalar(x_744)) {
 x_745 = lean_alloc_ctor(1, 2, 0);
} else {
 x_745 = x_744;
}
lean_ctor_set(x_745, 0, x_742);
lean_ctor_set(x_745, 1, x_743);
return x_745;
}
}
else
{
lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; 
lean_dec(x_4);
x_746 = lean_ctor_get(x_725, 0);
lean_inc(x_746);
x_747 = lean_ctor_get(x_725, 1);
lean_inc(x_747);
if (lean_is_exclusive(x_725)) {
 lean_ctor_release(x_725, 0);
 lean_ctor_release(x_725, 1);
 x_748 = x_725;
} else {
 lean_dec_ref(x_725);
 x_748 = lean_box(0);
}
if (lean_is_scalar(x_748)) {
 x_749 = lean_alloc_ctor(1, 2, 0);
} else {
 x_749 = x_748;
}
lean_ctor_set(x_749, 0, x_746);
lean_ctor_set(x_749, 1, x_747);
return x_749;
}
}
else
{
lean_object* x_750; lean_object* x_751; lean_object* x_752; lean_object* x_753; 
lean_dec(x_4);
x_750 = lean_ctor_get(x_722, 0);
lean_inc(x_750);
x_751 = lean_ctor_get(x_722, 1);
lean_inc(x_751);
if (lean_is_exclusive(x_722)) {
 lean_ctor_release(x_722, 0);
 lean_ctor_release(x_722, 1);
 x_752 = x_722;
} else {
 lean_dec_ref(x_722);
 x_752 = lean_box(0);
}
if (lean_is_scalar(x_752)) {
 x_753 = lean_alloc_ctor(1, 2, 0);
} else {
 x_753 = x_752;
}
lean_ctor_set(x_753, 0, x_750);
lean_ctor_set(x_753, 1, x_751);
return x_753;
}
}
else
{
lean_object* x_754; 
lean_dec(x_3);
x_754 = lean_box(0);
x_679 = x_754;
goto block_685;
}
}
case 2:
{
lean_dec(x_686);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_755; lean_object* x_756; 
lean_dec(x_111);
x_755 = lean_ctor_get(x_3, 1);
lean_inc(x_755);
lean_dec(x_3);
lean_inc(x_4);
x_756 = l_Lean_Elab_Term_inferType(x_1, x_755, x_4, x_678);
if (lean_obj_tag(x_756) == 0)
{
lean_object* x_757; lean_object* x_758; lean_object* x_759; 
x_757 = lean_ctor_get(x_756, 0);
lean_inc(x_757);
x_758 = lean_ctor_get(x_756, 1);
lean_inc(x_758);
lean_dec(x_756);
lean_inc(x_4);
x_759 = l_Lean_Elab_Term_whnf(x_1, x_757, x_4, x_758);
if (lean_obj_tag(x_759) == 0)
{
lean_object* x_760; lean_object* x_761; lean_object* x_762; 
x_760 = lean_ctor_get(x_759, 0);
lean_inc(x_760);
x_761 = lean_ctor_get(x_759, 1);
lean_inc(x_761);
lean_dec(x_759);
x_762 = l_Lean_Elab_Term_tryPostponeIfMVar(x_760, x_4, x_761);
if (lean_obj_tag(x_762) == 0)
{
lean_object* x_763; lean_object* x_764; lean_object* x_765; lean_object* x_772; 
x_763 = lean_ctor_get(x_762, 1);
lean_inc(x_763);
if (lean_is_exclusive(x_762)) {
 lean_ctor_release(x_762, 0);
 lean_ctor_release(x_762, 1);
 x_764 = x_762;
} else {
 lean_dec_ref(x_762);
 x_764 = lean_box(0);
}
x_772 = l_Lean_Expr_getAppFn___main(x_760);
if (lean_obj_tag(x_772) == 4)
{
lean_object* x_773; lean_object* x_774; 
lean_dec(x_760);
lean_dec(x_4);
x_773 = lean_ctor_get(x_772, 0);
lean_inc(x_773);
lean_dec(x_772);
if (lean_is_scalar(x_764)) {
 x_774 = lean_alloc_ctor(0, 2, 0);
} else {
 x_774 = x_764;
}
lean_ctor_set(x_774, 0, x_773);
lean_ctor_set(x_774, 1, x_763);
return x_774;
}
else
{
lean_object* x_775; 
lean_dec(x_772);
lean_dec(x_764);
x_775 = lean_box(0);
x_765 = x_775;
goto block_771;
}
block_771:
{
lean_object* x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; lean_object* x_770; 
lean_dec(x_765);
x_766 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_766, 0, x_760);
x_767 = l_Lean_indentExpr(x_766);
x_768 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_769 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_769, 0, x_768);
lean_ctor_set(x_769, 1, x_767);
x_770 = l_Lean_Elab_Term_throwError___rarg(x_1, x_769, x_4, x_763);
return x_770;
}
}
else
{
lean_object* x_776; lean_object* x_777; lean_object* x_778; lean_object* x_779; 
lean_dec(x_760);
lean_dec(x_4);
x_776 = lean_ctor_get(x_762, 0);
lean_inc(x_776);
x_777 = lean_ctor_get(x_762, 1);
lean_inc(x_777);
if (lean_is_exclusive(x_762)) {
 lean_ctor_release(x_762, 0);
 lean_ctor_release(x_762, 1);
 x_778 = x_762;
} else {
 lean_dec_ref(x_762);
 x_778 = lean_box(0);
}
if (lean_is_scalar(x_778)) {
 x_779 = lean_alloc_ctor(1, 2, 0);
} else {
 x_779 = x_778;
}
lean_ctor_set(x_779, 0, x_776);
lean_ctor_set(x_779, 1, x_777);
return x_779;
}
}
else
{
lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; 
lean_dec(x_4);
x_780 = lean_ctor_get(x_759, 0);
lean_inc(x_780);
x_781 = lean_ctor_get(x_759, 1);
lean_inc(x_781);
if (lean_is_exclusive(x_759)) {
 lean_ctor_release(x_759, 0);
 lean_ctor_release(x_759, 1);
 x_782 = x_759;
} else {
 lean_dec_ref(x_759);
 x_782 = lean_box(0);
}
if (lean_is_scalar(x_782)) {
 x_783 = lean_alloc_ctor(1, 2, 0);
} else {
 x_783 = x_782;
}
lean_ctor_set(x_783, 0, x_780);
lean_ctor_set(x_783, 1, x_781);
return x_783;
}
}
else
{
lean_object* x_784; lean_object* x_785; lean_object* x_786; lean_object* x_787; 
lean_dec(x_4);
x_784 = lean_ctor_get(x_756, 0);
lean_inc(x_784);
x_785 = lean_ctor_get(x_756, 1);
lean_inc(x_785);
if (lean_is_exclusive(x_756)) {
 lean_ctor_release(x_756, 0);
 lean_ctor_release(x_756, 1);
 x_786 = x_756;
} else {
 lean_dec_ref(x_756);
 x_786 = lean_box(0);
}
if (lean_is_scalar(x_786)) {
 x_787 = lean_alloc_ctor(1, 2, 0);
} else {
 x_787 = x_786;
}
lean_ctor_set(x_787, 0, x_784);
lean_ctor_set(x_787, 1, x_785);
return x_787;
}
}
else
{
lean_object* x_788; 
lean_dec(x_3);
x_788 = lean_box(0);
x_679 = x_788;
goto block_685;
}
}
case 3:
{
lean_dec(x_686);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_789; lean_object* x_790; 
lean_dec(x_111);
x_789 = lean_ctor_get(x_3, 1);
lean_inc(x_789);
lean_dec(x_3);
lean_inc(x_4);
x_790 = l_Lean_Elab_Term_inferType(x_1, x_789, x_4, x_678);
if (lean_obj_tag(x_790) == 0)
{
lean_object* x_791; lean_object* x_792; lean_object* x_793; 
x_791 = lean_ctor_get(x_790, 0);
lean_inc(x_791);
x_792 = lean_ctor_get(x_790, 1);
lean_inc(x_792);
lean_dec(x_790);
lean_inc(x_4);
x_793 = l_Lean_Elab_Term_whnf(x_1, x_791, x_4, x_792);
if (lean_obj_tag(x_793) == 0)
{
lean_object* x_794; lean_object* x_795; lean_object* x_796; 
x_794 = lean_ctor_get(x_793, 0);
lean_inc(x_794);
x_795 = lean_ctor_get(x_793, 1);
lean_inc(x_795);
lean_dec(x_793);
x_796 = l_Lean_Elab_Term_tryPostponeIfMVar(x_794, x_4, x_795);
if (lean_obj_tag(x_796) == 0)
{
lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_806; 
x_797 = lean_ctor_get(x_796, 1);
lean_inc(x_797);
if (lean_is_exclusive(x_796)) {
 lean_ctor_release(x_796, 0);
 lean_ctor_release(x_796, 1);
 x_798 = x_796;
} else {
 lean_dec_ref(x_796);
 x_798 = lean_box(0);
}
x_806 = l_Lean_Expr_getAppFn___main(x_794);
if (lean_obj_tag(x_806) == 4)
{
lean_object* x_807; lean_object* x_808; 
lean_dec(x_794);
lean_dec(x_4);
x_807 = lean_ctor_get(x_806, 0);
lean_inc(x_807);
lean_dec(x_806);
if (lean_is_scalar(x_798)) {
 x_808 = lean_alloc_ctor(0, 2, 0);
} else {
 x_808 = x_798;
}
lean_ctor_set(x_808, 0, x_807);
lean_ctor_set(x_808, 1, x_797);
return x_808;
}
else
{
lean_object* x_809; 
lean_dec(x_806);
lean_dec(x_798);
x_809 = lean_box(0);
x_799 = x_809;
goto block_805;
}
block_805:
{
lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; 
lean_dec(x_799);
x_800 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_800, 0, x_794);
x_801 = l_Lean_indentExpr(x_800);
x_802 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_803 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_803, 0, x_802);
lean_ctor_set(x_803, 1, x_801);
x_804 = l_Lean_Elab_Term_throwError___rarg(x_1, x_803, x_4, x_797);
return x_804;
}
}
else
{
lean_object* x_810; lean_object* x_811; lean_object* x_812; lean_object* x_813; 
lean_dec(x_794);
lean_dec(x_4);
x_810 = lean_ctor_get(x_796, 0);
lean_inc(x_810);
x_811 = lean_ctor_get(x_796, 1);
lean_inc(x_811);
if (lean_is_exclusive(x_796)) {
 lean_ctor_release(x_796, 0);
 lean_ctor_release(x_796, 1);
 x_812 = x_796;
} else {
 lean_dec_ref(x_796);
 x_812 = lean_box(0);
}
if (lean_is_scalar(x_812)) {
 x_813 = lean_alloc_ctor(1, 2, 0);
} else {
 x_813 = x_812;
}
lean_ctor_set(x_813, 0, x_810);
lean_ctor_set(x_813, 1, x_811);
return x_813;
}
}
else
{
lean_object* x_814; lean_object* x_815; lean_object* x_816; lean_object* x_817; 
lean_dec(x_4);
x_814 = lean_ctor_get(x_793, 0);
lean_inc(x_814);
x_815 = lean_ctor_get(x_793, 1);
lean_inc(x_815);
if (lean_is_exclusive(x_793)) {
 lean_ctor_release(x_793, 0);
 lean_ctor_release(x_793, 1);
 x_816 = x_793;
} else {
 lean_dec_ref(x_793);
 x_816 = lean_box(0);
}
if (lean_is_scalar(x_816)) {
 x_817 = lean_alloc_ctor(1, 2, 0);
} else {
 x_817 = x_816;
}
lean_ctor_set(x_817, 0, x_814);
lean_ctor_set(x_817, 1, x_815);
return x_817;
}
}
else
{
lean_object* x_818; lean_object* x_819; lean_object* x_820; lean_object* x_821; 
lean_dec(x_4);
x_818 = lean_ctor_get(x_790, 0);
lean_inc(x_818);
x_819 = lean_ctor_get(x_790, 1);
lean_inc(x_819);
if (lean_is_exclusive(x_790)) {
 lean_ctor_release(x_790, 0);
 lean_ctor_release(x_790, 1);
 x_820 = x_790;
} else {
 lean_dec_ref(x_790);
 x_820 = lean_box(0);
}
if (lean_is_scalar(x_820)) {
 x_821 = lean_alloc_ctor(1, 2, 0);
} else {
 x_821 = x_820;
}
lean_ctor_set(x_821, 0, x_818);
lean_ctor_set(x_821, 1, x_819);
return x_821;
}
}
else
{
lean_object* x_822; 
lean_dec(x_3);
x_822 = lean_box(0);
x_679 = x_822;
goto block_685;
}
}
case 4:
{
lean_object* x_823; lean_object* x_824; 
lean_dec(x_111);
lean_dec(x_4);
lean_dec(x_3);
x_823 = lean_ctor_get(x_686, 0);
lean_inc(x_823);
lean_dec(x_686);
x_824 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_824, 0, x_823);
lean_ctor_set(x_824, 1, x_678);
return x_824;
}
case 5:
{
lean_dec(x_686);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_825; lean_object* x_826; 
lean_dec(x_111);
x_825 = lean_ctor_get(x_3, 1);
lean_inc(x_825);
lean_dec(x_3);
lean_inc(x_4);
x_826 = l_Lean_Elab_Term_inferType(x_1, x_825, x_4, x_678);
if (lean_obj_tag(x_826) == 0)
{
lean_object* x_827; lean_object* x_828; lean_object* x_829; 
x_827 = lean_ctor_get(x_826, 0);
lean_inc(x_827);
x_828 = lean_ctor_get(x_826, 1);
lean_inc(x_828);
lean_dec(x_826);
lean_inc(x_4);
x_829 = l_Lean_Elab_Term_whnf(x_1, x_827, x_4, x_828);
if (lean_obj_tag(x_829) == 0)
{
lean_object* x_830; lean_object* x_831; lean_object* x_832; 
x_830 = lean_ctor_get(x_829, 0);
lean_inc(x_830);
x_831 = lean_ctor_get(x_829, 1);
lean_inc(x_831);
lean_dec(x_829);
x_832 = l_Lean_Elab_Term_tryPostponeIfMVar(x_830, x_4, x_831);
if (lean_obj_tag(x_832) == 0)
{
lean_object* x_833; lean_object* x_834; lean_object* x_835; lean_object* x_842; 
x_833 = lean_ctor_get(x_832, 1);
lean_inc(x_833);
if (lean_is_exclusive(x_832)) {
 lean_ctor_release(x_832, 0);
 lean_ctor_release(x_832, 1);
 x_834 = x_832;
} else {
 lean_dec_ref(x_832);
 x_834 = lean_box(0);
}
x_842 = l_Lean_Expr_getAppFn___main(x_830);
if (lean_obj_tag(x_842) == 4)
{
lean_object* x_843; lean_object* x_844; 
lean_dec(x_830);
lean_dec(x_4);
x_843 = lean_ctor_get(x_842, 0);
lean_inc(x_843);
lean_dec(x_842);
if (lean_is_scalar(x_834)) {
 x_844 = lean_alloc_ctor(0, 2, 0);
} else {
 x_844 = x_834;
}
lean_ctor_set(x_844, 0, x_843);
lean_ctor_set(x_844, 1, x_833);
return x_844;
}
else
{
lean_object* x_845; 
lean_dec(x_842);
lean_dec(x_834);
x_845 = lean_box(0);
x_835 = x_845;
goto block_841;
}
block_841:
{
lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; 
lean_dec(x_835);
x_836 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_836, 0, x_830);
x_837 = l_Lean_indentExpr(x_836);
x_838 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_839 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_839, 0, x_838);
lean_ctor_set(x_839, 1, x_837);
x_840 = l_Lean_Elab_Term_throwError___rarg(x_1, x_839, x_4, x_833);
return x_840;
}
}
else
{
lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; 
lean_dec(x_830);
lean_dec(x_4);
x_846 = lean_ctor_get(x_832, 0);
lean_inc(x_846);
x_847 = lean_ctor_get(x_832, 1);
lean_inc(x_847);
if (lean_is_exclusive(x_832)) {
 lean_ctor_release(x_832, 0);
 lean_ctor_release(x_832, 1);
 x_848 = x_832;
} else {
 lean_dec_ref(x_832);
 x_848 = lean_box(0);
}
if (lean_is_scalar(x_848)) {
 x_849 = lean_alloc_ctor(1, 2, 0);
} else {
 x_849 = x_848;
}
lean_ctor_set(x_849, 0, x_846);
lean_ctor_set(x_849, 1, x_847);
return x_849;
}
}
else
{
lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; 
lean_dec(x_4);
x_850 = lean_ctor_get(x_829, 0);
lean_inc(x_850);
x_851 = lean_ctor_get(x_829, 1);
lean_inc(x_851);
if (lean_is_exclusive(x_829)) {
 lean_ctor_release(x_829, 0);
 lean_ctor_release(x_829, 1);
 x_852 = x_829;
} else {
 lean_dec_ref(x_829);
 x_852 = lean_box(0);
}
if (lean_is_scalar(x_852)) {
 x_853 = lean_alloc_ctor(1, 2, 0);
} else {
 x_853 = x_852;
}
lean_ctor_set(x_853, 0, x_850);
lean_ctor_set(x_853, 1, x_851);
return x_853;
}
}
else
{
lean_object* x_854; lean_object* x_855; lean_object* x_856; lean_object* x_857; 
lean_dec(x_4);
x_854 = lean_ctor_get(x_826, 0);
lean_inc(x_854);
x_855 = lean_ctor_get(x_826, 1);
lean_inc(x_855);
if (lean_is_exclusive(x_826)) {
 lean_ctor_release(x_826, 0);
 lean_ctor_release(x_826, 1);
 x_856 = x_826;
} else {
 lean_dec_ref(x_826);
 x_856 = lean_box(0);
}
if (lean_is_scalar(x_856)) {
 x_857 = lean_alloc_ctor(1, 2, 0);
} else {
 x_857 = x_856;
}
lean_ctor_set(x_857, 0, x_854);
lean_ctor_set(x_857, 1, x_855);
return x_857;
}
}
else
{
lean_object* x_858; 
lean_dec(x_3);
x_858 = lean_box(0);
x_679 = x_858;
goto block_685;
}
}
case 6:
{
lean_dec(x_686);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_859; lean_object* x_860; 
lean_dec(x_111);
x_859 = lean_ctor_get(x_3, 1);
lean_inc(x_859);
lean_dec(x_3);
lean_inc(x_4);
x_860 = l_Lean_Elab_Term_inferType(x_1, x_859, x_4, x_678);
if (lean_obj_tag(x_860) == 0)
{
lean_object* x_861; lean_object* x_862; lean_object* x_863; 
x_861 = lean_ctor_get(x_860, 0);
lean_inc(x_861);
x_862 = lean_ctor_get(x_860, 1);
lean_inc(x_862);
lean_dec(x_860);
lean_inc(x_4);
x_863 = l_Lean_Elab_Term_whnf(x_1, x_861, x_4, x_862);
if (lean_obj_tag(x_863) == 0)
{
lean_object* x_864; lean_object* x_865; lean_object* x_866; 
x_864 = lean_ctor_get(x_863, 0);
lean_inc(x_864);
x_865 = lean_ctor_get(x_863, 1);
lean_inc(x_865);
lean_dec(x_863);
x_866 = l_Lean_Elab_Term_tryPostponeIfMVar(x_864, x_4, x_865);
if (lean_obj_tag(x_866) == 0)
{
lean_object* x_867; lean_object* x_868; lean_object* x_869; lean_object* x_876; 
x_867 = lean_ctor_get(x_866, 1);
lean_inc(x_867);
if (lean_is_exclusive(x_866)) {
 lean_ctor_release(x_866, 0);
 lean_ctor_release(x_866, 1);
 x_868 = x_866;
} else {
 lean_dec_ref(x_866);
 x_868 = lean_box(0);
}
x_876 = l_Lean_Expr_getAppFn___main(x_864);
if (lean_obj_tag(x_876) == 4)
{
lean_object* x_877; lean_object* x_878; 
lean_dec(x_864);
lean_dec(x_4);
x_877 = lean_ctor_get(x_876, 0);
lean_inc(x_877);
lean_dec(x_876);
if (lean_is_scalar(x_868)) {
 x_878 = lean_alloc_ctor(0, 2, 0);
} else {
 x_878 = x_868;
}
lean_ctor_set(x_878, 0, x_877);
lean_ctor_set(x_878, 1, x_867);
return x_878;
}
else
{
lean_object* x_879; 
lean_dec(x_876);
lean_dec(x_868);
x_879 = lean_box(0);
x_869 = x_879;
goto block_875;
}
block_875:
{
lean_object* x_870; lean_object* x_871; lean_object* x_872; lean_object* x_873; lean_object* x_874; 
lean_dec(x_869);
x_870 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_870, 0, x_864);
x_871 = l_Lean_indentExpr(x_870);
x_872 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_873 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_873, 0, x_872);
lean_ctor_set(x_873, 1, x_871);
x_874 = l_Lean_Elab_Term_throwError___rarg(x_1, x_873, x_4, x_867);
return x_874;
}
}
else
{
lean_object* x_880; lean_object* x_881; lean_object* x_882; lean_object* x_883; 
lean_dec(x_864);
lean_dec(x_4);
x_880 = lean_ctor_get(x_866, 0);
lean_inc(x_880);
x_881 = lean_ctor_get(x_866, 1);
lean_inc(x_881);
if (lean_is_exclusive(x_866)) {
 lean_ctor_release(x_866, 0);
 lean_ctor_release(x_866, 1);
 x_882 = x_866;
} else {
 lean_dec_ref(x_866);
 x_882 = lean_box(0);
}
if (lean_is_scalar(x_882)) {
 x_883 = lean_alloc_ctor(1, 2, 0);
} else {
 x_883 = x_882;
}
lean_ctor_set(x_883, 0, x_880);
lean_ctor_set(x_883, 1, x_881);
return x_883;
}
}
else
{
lean_object* x_884; lean_object* x_885; lean_object* x_886; lean_object* x_887; 
lean_dec(x_4);
x_884 = lean_ctor_get(x_863, 0);
lean_inc(x_884);
x_885 = lean_ctor_get(x_863, 1);
lean_inc(x_885);
if (lean_is_exclusive(x_863)) {
 lean_ctor_release(x_863, 0);
 lean_ctor_release(x_863, 1);
 x_886 = x_863;
} else {
 lean_dec_ref(x_863);
 x_886 = lean_box(0);
}
if (lean_is_scalar(x_886)) {
 x_887 = lean_alloc_ctor(1, 2, 0);
} else {
 x_887 = x_886;
}
lean_ctor_set(x_887, 0, x_884);
lean_ctor_set(x_887, 1, x_885);
return x_887;
}
}
else
{
lean_object* x_888; lean_object* x_889; lean_object* x_890; lean_object* x_891; 
lean_dec(x_4);
x_888 = lean_ctor_get(x_860, 0);
lean_inc(x_888);
x_889 = lean_ctor_get(x_860, 1);
lean_inc(x_889);
if (lean_is_exclusive(x_860)) {
 lean_ctor_release(x_860, 0);
 lean_ctor_release(x_860, 1);
 x_890 = x_860;
} else {
 lean_dec_ref(x_860);
 x_890 = lean_box(0);
}
if (lean_is_scalar(x_890)) {
 x_891 = lean_alloc_ctor(1, 2, 0);
} else {
 x_891 = x_890;
}
lean_ctor_set(x_891, 0, x_888);
lean_ctor_set(x_891, 1, x_889);
return x_891;
}
}
else
{
lean_object* x_892; 
lean_dec(x_3);
x_892 = lean_box(0);
x_679 = x_892;
goto block_685;
}
}
case 7:
{
lean_dec(x_686);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_893; lean_object* x_894; 
lean_dec(x_111);
x_893 = lean_ctor_get(x_3, 1);
lean_inc(x_893);
lean_dec(x_3);
lean_inc(x_4);
x_894 = l_Lean_Elab_Term_inferType(x_1, x_893, x_4, x_678);
if (lean_obj_tag(x_894) == 0)
{
lean_object* x_895; lean_object* x_896; lean_object* x_897; 
x_895 = lean_ctor_get(x_894, 0);
lean_inc(x_895);
x_896 = lean_ctor_get(x_894, 1);
lean_inc(x_896);
lean_dec(x_894);
lean_inc(x_4);
x_897 = l_Lean_Elab_Term_whnf(x_1, x_895, x_4, x_896);
if (lean_obj_tag(x_897) == 0)
{
lean_object* x_898; lean_object* x_899; lean_object* x_900; 
x_898 = lean_ctor_get(x_897, 0);
lean_inc(x_898);
x_899 = lean_ctor_get(x_897, 1);
lean_inc(x_899);
lean_dec(x_897);
x_900 = l_Lean_Elab_Term_tryPostponeIfMVar(x_898, x_4, x_899);
if (lean_obj_tag(x_900) == 0)
{
lean_object* x_901; lean_object* x_902; lean_object* x_903; lean_object* x_910; 
x_901 = lean_ctor_get(x_900, 1);
lean_inc(x_901);
if (lean_is_exclusive(x_900)) {
 lean_ctor_release(x_900, 0);
 lean_ctor_release(x_900, 1);
 x_902 = x_900;
} else {
 lean_dec_ref(x_900);
 x_902 = lean_box(0);
}
x_910 = l_Lean_Expr_getAppFn___main(x_898);
if (lean_obj_tag(x_910) == 4)
{
lean_object* x_911; lean_object* x_912; 
lean_dec(x_898);
lean_dec(x_4);
x_911 = lean_ctor_get(x_910, 0);
lean_inc(x_911);
lean_dec(x_910);
if (lean_is_scalar(x_902)) {
 x_912 = lean_alloc_ctor(0, 2, 0);
} else {
 x_912 = x_902;
}
lean_ctor_set(x_912, 0, x_911);
lean_ctor_set(x_912, 1, x_901);
return x_912;
}
else
{
lean_object* x_913; 
lean_dec(x_910);
lean_dec(x_902);
x_913 = lean_box(0);
x_903 = x_913;
goto block_909;
}
block_909:
{
lean_object* x_904; lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; 
lean_dec(x_903);
x_904 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_904, 0, x_898);
x_905 = l_Lean_indentExpr(x_904);
x_906 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_907 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_907, 0, x_906);
lean_ctor_set(x_907, 1, x_905);
x_908 = l_Lean_Elab_Term_throwError___rarg(x_1, x_907, x_4, x_901);
return x_908;
}
}
else
{
lean_object* x_914; lean_object* x_915; lean_object* x_916; lean_object* x_917; 
lean_dec(x_898);
lean_dec(x_4);
x_914 = lean_ctor_get(x_900, 0);
lean_inc(x_914);
x_915 = lean_ctor_get(x_900, 1);
lean_inc(x_915);
if (lean_is_exclusive(x_900)) {
 lean_ctor_release(x_900, 0);
 lean_ctor_release(x_900, 1);
 x_916 = x_900;
} else {
 lean_dec_ref(x_900);
 x_916 = lean_box(0);
}
if (lean_is_scalar(x_916)) {
 x_917 = lean_alloc_ctor(1, 2, 0);
} else {
 x_917 = x_916;
}
lean_ctor_set(x_917, 0, x_914);
lean_ctor_set(x_917, 1, x_915);
return x_917;
}
}
else
{
lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; 
lean_dec(x_4);
x_918 = lean_ctor_get(x_897, 0);
lean_inc(x_918);
x_919 = lean_ctor_get(x_897, 1);
lean_inc(x_919);
if (lean_is_exclusive(x_897)) {
 lean_ctor_release(x_897, 0);
 lean_ctor_release(x_897, 1);
 x_920 = x_897;
} else {
 lean_dec_ref(x_897);
 x_920 = lean_box(0);
}
if (lean_is_scalar(x_920)) {
 x_921 = lean_alloc_ctor(1, 2, 0);
} else {
 x_921 = x_920;
}
lean_ctor_set(x_921, 0, x_918);
lean_ctor_set(x_921, 1, x_919);
return x_921;
}
}
else
{
lean_object* x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; 
lean_dec(x_4);
x_922 = lean_ctor_get(x_894, 0);
lean_inc(x_922);
x_923 = lean_ctor_get(x_894, 1);
lean_inc(x_923);
if (lean_is_exclusive(x_894)) {
 lean_ctor_release(x_894, 0);
 lean_ctor_release(x_894, 1);
 x_924 = x_894;
} else {
 lean_dec_ref(x_894);
 x_924 = lean_box(0);
}
if (lean_is_scalar(x_924)) {
 x_925 = lean_alloc_ctor(1, 2, 0);
} else {
 x_925 = x_924;
}
lean_ctor_set(x_925, 0, x_922);
lean_ctor_set(x_925, 1, x_923);
return x_925;
}
}
else
{
lean_object* x_926; 
lean_dec(x_3);
x_926 = lean_box(0);
x_679 = x_926;
goto block_685;
}
}
case 8:
{
lean_dec(x_686);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_927; lean_object* x_928; 
lean_dec(x_111);
x_927 = lean_ctor_get(x_3, 1);
lean_inc(x_927);
lean_dec(x_3);
lean_inc(x_4);
x_928 = l_Lean_Elab_Term_inferType(x_1, x_927, x_4, x_678);
if (lean_obj_tag(x_928) == 0)
{
lean_object* x_929; lean_object* x_930; lean_object* x_931; 
x_929 = lean_ctor_get(x_928, 0);
lean_inc(x_929);
x_930 = lean_ctor_get(x_928, 1);
lean_inc(x_930);
lean_dec(x_928);
lean_inc(x_4);
x_931 = l_Lean_Elab_Term_whnf(x_1, x_929, x_4, x_930);
if (lean_obj_tag(x_931) == 0)
{
lean_object* x_932; lean_object* x_933; lean_object* x_934; 
x_932 = lean_ctor_get(x_931, 0);
lean_inc(x_932);
x_933 = lean_ctor_get(x_931, 1);
lean_inc(x_933);
lean_dec(x_931);
x_934 = l_Lean_Elab_Term_tryPostponeIfMVar(x_932, x_4, x_933);
if (lean_obj_tag(x_934) == 0)
{
lean_object* x_935; lean_object* x_936; lean_object* x_937; lean_object* x_944; 
x_935 = lean_ctor_get(x_934, 1);
lean_inc(x_935);
if (lean_is_exclusive(x_934)) {
 lean_ctor_release(x_934, 0);
 lean_ctor_release(x_934, 1);
 x_936 = x_934;
} else {
 lean_dec_ref(x_934);
 x_936 = lean_box(0);
}
x_944 = l_Lean_Expr_getAppFn___main(x_932);
if (lean_obj_tag(x_944) == 4)
{
lean_object* x_945; lean_object* x_946; 
lean_dec(x_932);
lean_dec(x_4);
x_945 = lean_ctor_get(x_944, 0);
lean_inc(x_945);
lean_dec(x_944);
if (lean_is_scalar(x_936)) {
 x_946 = lean_alloc_ctor(0, 2, 0);
} else {
 x_946 = x_936;
}
lean_ctor_set(x_946, 0, x_945);
lean_ctor_set(x_946, 1, x_935);
return x_946;
}
else
{
lean_object* x_947; 
lean_dec(x_944);
lean_dec(x_936);
x_947 = lean_box(0);
x_937 = x_947;
goto block_943;
}
block_943:
{
lean_object* x_938; lean_object* x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; 
lean_dec(x_937);
x_938 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_938, 0, x_932);
x_939 = l_Lean_indentExpr(x_938);
x_940 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_941 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_941, 0, x_940);
lean_ctor_set(x_941, 1, x_939);
x_942 = l_Lean_Elab_Term_throwError___rarg(x_1, x_941, x_4, x_935);
return x_942;
}
}
else
{
lean_object* x_948; lean_object* x_949; lean_object* x_950; lean_object* x_951; 
lean_dec(x_932);
lean_dec(x_4);
x_948 = lean_ctor_get(x_934, 0);
lean_inc(x_948);
x_949 = lean_ctor_get(x_934, 1);
lean_inc(x_949);
if (lean_is_exclusive(x_934)) {
 lean_ctor_release(x_934, 0);
 lean_ctor_release(x_934, 1);
 x_950 = x_934;
} else {
 lean_dec_ref(x_934);
 x_950 = lean_box(0);
}
if (lean_is_scalar(x_950)) {
 x_951 = lean_alloc_ctor(1, 2, 0);
} else {
 x_951 = x_950;
}
lean_ctor_set(x_951, 0, x_948);
lean_ctor_set(x_951, 1, x_949);
return x_951;
}
}
else
{
lean_object* x_952; lean_object* x_953; lean_object* x_954; lean_object* x_955; 
lean_dec(x_4);
x_952 = lean_ctor_get(x_931, 0);
lean_inc(x_952);
x_953 = lean_ctor_get(x_931, 1);
lean_inc(x_953);
if (lean_is_exclusive(x_931)) {
 lean_ctor_release(x_931, 0);
 lean_ctor_release(x_931, 1);
 x_954 = x_931;
} else {
 lean_dec_ref(x_931);
 x_954 = lean_box(0);
}
if (lean_is_scalar(x_954)) {
 x_955 = lean_alloc_ctor(1, 2, 0);
} else {
 x_955 = x_954;
}
lean_ctor_set(x_955, 0, x_952);
lean_ctor_set(x_955, 1, x_953);
return x_955;
}
}
else
{
lean_object* x_956; lean_object* x_957; lean_object* x_958; lean_object* x_959; 
lean_dec(x_4);
x_956 = lean_ctor_get(x_928, 0);
lean_inc(x_956);
x_957 = lean_ctor_get(x_928, 1);
lean_inc(x_957);
if (lean_is_exclusive(x_928)) {
 lean_ctor_release(x_928, 0);
 lean_ctor_release(x_928, 1);
 x_958 = x_928;
} else {
 lean_dec_ref(x_928);
 x_958 = lean_box(0);
}
if (lean_is_scalar(x_958)) {
 x_959 = lean_alloc_ctor(1, 2, 0);
} else {
 x_959 = x_958;
}
lean_ctor_set(x_959, 0, x_956);
lean_ctor_set(x_959, 1, x_957);
return x_959;
}
}
else
{
lean_object* x_960; 
lean_dec(x_3);
x_960 = lean_box(0);
x_679 = x_960;
goto block_685;
}
}
case 9:
{
lean_dec(x_686);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_961; lean_object* x_962; 
lean_dec(x_111);
x_961 = lean_ctor_get(x_3, 1);
lean_inc(x_961);
lean_dec(x_3);
lean_inc(x_4);
x_962 = l_Lean_Elab_Term_inferType(x_1, x_961, x_4, x_678);
if (lean_obj_tag(x_962) == 0)
{
lean_object* x_963; lean_object* x_964; lean_object* x_965; 
x_963 = lean_ctor_get(x_962, 0);
lean_inc(x_963);
x_964 = lean_ctor_get(x_962, 1);
lean_inc(x_964);
lean_dec(x_962);
lean_inc(x_4);
x_965 = l_Lean_Elab_Term_whnf(x_1, x_963, x_4, x_964);
if (lean_obj_tag(x_965) == 0)
{
lean_object* x_966; lean_object* x_967; lean_object* x_968; 
x_966 = lean_ctor_get(x_965, 0);
lean_inc(x_966);
x_967 = lean_ctor_get(x_965, 1);
lean_inc(x_967);
lean_dec(x_965);
x_968 = l_Lean_Elab_Term_tryPostponeIfMVar(x_966, x_4, x_967);
if (lean_obj_tag(x_968) == 0)
{
lean_object* x_969; lean_object* x_970; lean_object* x_971; lean_object* x_978; 
x_969 = lean_ctor_get(x_968, 1);
lean_inc(x_969);
if (lean_is_exclusive(x_968)) {
 lean_ctor_release(x_968, 0);
 lean_ctor_release(x_968, 1);
 x_970 = x_968;
} else {
 lean_dec_ref(x_968);
 x_970 = lean_box(0);
}
x_978 = l_Lean_Expr_getAppFn___main(x_966);
if (lean_obj_tag(x_978) == 4)
{
lean_object* x_979; lean_object* x_980; 
lean_dec(x_966);
lean_dec(x_4);
x_979 = lean_ctor_get(x_978, 0);
lean_inc(x_979);
lean_dec(x_978);
if (lean_is_scalar(x_970)) {
 x_980 = lean_alloc_ctor(0, 2, 0);
} else {
 x_980 = x_970;
}
lean_ctor_set(x_980, 0, x_979);
lean_ctor_set(x_980, 1, x_969);
return x_980;
}
else
{
lean_object* x_981; 
lean_dec(x_978);
lean_dec(x_970);
x_981 = lean_box(0);
x_971 = x_981;
goto block_977;
}
block_977:
{
lean_object* x_972; lean_object* x_973; lean_object* x_974; lean_object* x_975; lean_object* x_976; 
lean_dec(x_971);
x_972 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_972, 0, x_966);
x_973 = l_Lean_indentExpr(x_972);
x_974 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_975 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_975, 0, x_974);
lean_ctor_set(x_975, 1, x_973);
x_976 = l_Lean_Elab_Term_throwError___rarg(x_1, x_975, x_4, x_969);
return x_976;
}
}
else
{
lean_object* x_982; lean_object* x_983; lean_object* x_984; lean_object* x_985; 
lean_dec(x_966);
lean_dec(x_4);
x_982 = lean_ctor_get(x_968, 0);
lean_inc(x_982);
x_983 = lean_ctor_get(x_968, 1);
lean_inc(x_983);
if (lean_is_exclusive(x_968)) {
 lean_ctor_release(x_968, 0);
 lean_ctor_release(x_968, 1);
 x_984 = x_968;
} else {
 lean_dec_ref(x_968);
 x_984 = lean_box(0);
}
if (lean_is_scalar(x_984)) {
 x_985 = lean_alloc_ctor(1, 2, 0);
} else {
 x_985 = x_984;
}
lean_ctor_set(x_985, 0, x_982);
lean_ctor_set(x_985, 1, x_983);
return x_985;
}
}
else
{
lean_object* x_986; lean_object* x_987; lean_object* x_988; lean_object* x_989; 
lean_dec(x_4);
x_986 = lean_ctor_get(x_965, 0);
lean_inc(x_986);
x_987 = lean_ctor_get(x_965, 1);
lean_inc(x_987);
if (lean_is_exclusive(x_965)) {
 lean_ctor_release(x_965, 0);
 lean_ctor_release(x_965, 1);
 x_988 = x_965;
} else {
 lean_dec_ref(x_965);
 x_988 = lean_box(0);
}
if (lean_is_scalar(x_988)) {
 x_989 = lean_alloc_ctor(1, 2, 0);
} else {
 x_989 = x_988;
}
lean_ctor_set(x_989, 0, x_986);
lean_ctor_set(x_989, 1, x_987);
return x_989;
}
}
else
{
lean_object* x_990; lean_object* x_991; lean_object* x_992; lean_object* x_993; 
lean_dec(x_4);
x_990 = lean_ctor_get(x_962, 0);
lean_inc(x_990);
x_991 = lean_ctor_get(x_962, 1);
lean_inc(x_991);
if (lean_is_exclusive(x_962)) {
 lean_ctor_release(x_962, 0);
 lean_ctor_release(x_962, 1);
 x_992 = x_962;
} else {
 lean_dec_ref(x_962);
 x_992 = lean_box(0);
}
if (lean_is_scalar(x_992)) {
 x_993 = lean_alloc_ctor(1, 2, 0);
} else {
 x_993 = x_992;
}
lean_ctor_set(x_993, 0, x_990);
lean_ctor_set(x_993, 1, x_991);
return x_993;
}
}
else
{
lean_object* x_994; 
lean_dec(x_3);
x_994 = lean_box(0);
x_679 = x_994;
goto block_685;
}
}
case 10:
{
lean_dec(x_686);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_995; lean_object* x_996; 
lean_dec(x_111);
x_995 = lean_ctor_get(x_3, 1);
lean_inc(x_995);
lean_dec(x_3);
lean_inc(x_4);
x_996 = l_Lean_Elab_Term_inferType(x_1, x_995, x_4, x_678);
if (lean_obj_tag(x_996) == 0)
{
lean_object* x_997; lean_object* x_998; lean_object* x_999; 
x_997 = lean_ctor_get(x_996, 0);
lean_inc(x_997);
x_998 = lean_ctor_get(x_996, 1);
lean_inc(x_998);
lean_dec(x_996);
lean_inc(x_4);
x_999 = l_Lean_Elab_Term_whnf(x_1, x_997, x_4, x_998);
if (lean_obj_tag(x_999) == 0)
{
lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; 
x_1000 = lean_ctor_get(x_999, 0);
lean_inc(x_1000);
x_1001 = lean_ctor_get(x_999, 1);
lean_inc(x_1001);
lean_dec(x_999);
x_1002 = l_Lean_Elab_Term_tryPostponeIfMVar(x_1000, x_4, x_1001);
if (lean_obj_tag(x_1002) == 0)
{
lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1012; 
x_1003 = lean_ctor_get(x_1002, 1);
lean_inc(x_1003);
if (lean_is_exclusive(x_1002)) {
 lean_ctor_release(x_1002, 0);
 lean_ctor_release(x_1002, 1);
 x_1004 = x_1002;
} else {
 lean_dec_ref(x_1002);
 x_1004 = lean_box(0);
}
x_1012 = l_Lean_Expr_getAppFn___main(x_1000);
if (lean_obj_tag(x_1012) == 4)
{
lean_object* x_1013; lean_object* x_1014; 
lean_dec(x_1000);
lean_dec(x_4);
x_1013 = lean_ctor_get(x_1012, 0);
lean_inc(x_1013);
lean_dec(x_1012);
if (lean_is_scalar(x_1004)) {
 x_1014 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1014 = x_1004;
}
lean_ctor_set(x_1014, 0, x_1013);
lean_ctor_set(x_1014, 1, x_1003);
return x_1014;
}
else
{
lean_object* x_1015; 
lean_dec(x_1012);
lean_dec(x_1004);
x_1015 = lean_box(0);
x_1005 = x_1015;
goto block_1011;
}
block_1011:
{
lean_object* x_1006; lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; 
lean_dec(x_1005);
x_1006 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1006, 0, x_1000);
x_1007 = l_Lean_indentExpr(x_1006);
x_1008 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_1009 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_1009, 0, x_1008);
lean_ctor_set(x_1009, 1, x_1007);
x_1010 = l_Lean_Elab_Term_throwError___rarg(x_1, x_1009, x_4, x_1003);
return x_1010;
}
}
else
{
lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; 
lean_dec(x_1000);
lean_dec(x_4);
x_1016 = lean_ctor_get(x_1002, 0);
lean_inc(x_1016);
x_1017 = lean_ctor_get(x_1002, 1);
lean_inc(x_1017);
if (lean_is_exclusive(x_1002)) {
 lean_ctor_release(x_1002, 0);
 lean_ctor_release(x_1002, 1);
 x_1018 = x_1002;
} else {
 lean_dec_ref(x_1002);
 x_1018 = lean_box(0);
}
if (lean_is_scalar(x_1018)) {
 x_1019 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1019 = x_1018;
}
lean_ctor_set(x_1019, 0, x_1016);
lean_ctor_set(x_1019, 1, x_1017);
return x_1019;
}
}
else
{
lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; 
lean_dec(x_4);
x_1020 = lean_ctor_get(x_999, 0);
lean_inc(x_1020);
x_1021 = lean_ctor_get(x_999, 1);
lean_inc(x_1021);
if (lean_is_exclusive(x_999)) {
 lean_ctor_release(x_999, 0);
 lean_ctor_release(x_999, 1);
 x_1022 = x_999;
} else {
 lean_dec_ref(x_999);
 x_1022 = lean_box(0);
}
if (lean_is_scalar(x_1022)) {
 x_1023 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1023 = x_1022;
}
lean_ctor_set(x_1023, 0, x_1020);
lean_ctor_set(x_1023, 1, x_1021);
return x_1023;
}
}
else
{
lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; 
lean_dec(x_4);
x_1024 = lean_ctor_get(x_996, 0);
lean_inc(x_1024);
x_1025 = lean_ctor_get(x_996, 1);
lean_inc(x_1025);
if (lean_is_exclusive(x_996)) {
 lean_ctor_release(x_996, 0);
 lean_ctor_release(x_996, 1);
 x_1026 = x_996;
} else {
 lean_dec_ref(x_996);
 x_1026 = lean_box(0);
}
if (lean_is_scalar(x_1026)) {
 x_1027 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1027 = x_1026;
}
lean_ctor_set(x_1027, 0, x_1024);
lean_ctor_set(x_1027, 1, x_1025);
return x_1027;
}
}
else
{
lean_object* x_1028; 
lean_dec(x_3);
x_1028 = lean_box(0);
x_679 = x_1028;
goto block_685;
}
}
case 11:
{
lean_dec(x_686);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_1029; lean_object* x_1030; 
lean_dec(x_111);
x_1029 = lean_ctor_get(x_3, 1);
lean_inc(x_1029);
lean_dec(x_3);
lean_inc(x_4);
x_1030 = l_Lean_Elab_Term_inferType(x_1, x_1029, x_4, x_678);
if (lean_obj_tag(x_1030) == 0)
{
lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; 
x_1031 = lean_ctor_get(x_1030, 0);
lean_inc(x_1031);
x_1032 = lean_ctor_get(x_1030, 1);
lean_inc(x_1032);
lean_dec(x_1030);
lean_inc(x_4);
x_1033 = l_Lean_Elab_Term_whnf(x_1, x_1031, x_4, x_1032);
if (lean_obj_tag(x_1033) == 0)
{
lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; 
x_1034 = lean_ctor_get(x_1033, 0);
lean_inc(x_1034);
x_1035 = lean_ctor_get(x_1033, 1);
lean_inc(x_1035);
lean_dec(x_1033);
x_1036 = l_Lean_Elab_Term_tryPostponeIfMVar(x_1034, x_4, x_1035);
if (lean_obj_tag(x_1036) == 0)
{
lean_object* x_1037; lean_object* x_1038; lean_object* x_1039; lean_object* x_1046; 
x_1037 = lean_ctor_get(x_1036, 1);
lean_inc(x_1037);
if (lean_is_exclusive(x_1036)) {
 lean_ctor_release(x_1036, 0);
 lean_ctor_release(x_1036, 1);
 x_1038 = x_1036;
} else {
 lean_dec_ref(x_1036);
 x_1038 = lean_box(0);
}
x_1046 = l_Lean_Expr_getAppFn___main(x_1034);
if (lean_obj_tag(x_1046) == 4)
{
lean_object* x_1047; lean_object* x_1048; 
lean_dec(x_1034);
lean_dec(x_4);
x_1047 = lean_ctor_get(x_1046, 0);
lean_inc(x_1047);
lean_dec(x_1046);
if (lean_is_scalar(x_1038)) {
 x_1048 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1048 = x_1038;
}
lean_ctor_set(x_1048, 0, x_1047);
lean_ctor_set(x_1048, 1, x_1037);
return x_1048;
}
else
{
lean_object* x_1049; 
lean_dec(x_1046);
lean_dec(x_1038);
x_1049 = lean_box(0);
x_1039 = x_1049;
goto block_1045;
}
block_1045:
{
lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; 
lean_dec(x_1039);
x_1040 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1040, 0, x_1034);
x_1041 = l_Lean_indentExpr(x_1040);
x_1042 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_1043 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_1043, 0, x_1042);
lean_ctor_set(x_1043, 1, x_1041);
x_1044 = l_Lean_Elab_Term_throwError___rarg(x_1, x_1043, x_4, x_1037);
return x_1044;
}
}
else
{
lean_object* x_1050; lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; 
lean_dec(x_1034);
lean_dec(x_4);
x_1050 = lean_ctor_get(x_1036, 0);
lean_inc(x_1050);
x_1051 = lean_ctor_get(x_1036, 1);
lean_inc(x_1051);
if (lean_is_exclusive(x_1036)) {
 lean_ctor_release(x_1036, 0);
 lean_ctor_release(x_1036, 1);
 x_1052 = x_1036;
} else {
 lean_dec_ref(x_1036);
 x_1052 = lean_box(0);
}
if (lean_is_scalar(x_1052)) {
 x_1053 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1053 = x_1052;
}
lean_ctor_set(x_1053, 0, x_1050);
lean_ctor_set(x_1053, 1, x_1051);
return x_1053;
}
}
else
{
lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; 
lean_dec(x_4);
x_1054 = lean_ctor_get(x_1033, 0);
lean_inc(x_1054);
x_1055 = lean_ctor_get(x_1033, 1);
lean_inc(x_1055);
if (lean_is_exclusive(x_1033)) {
 lean_ctor_release(x_1033, 0);
 lean_ctor_release(x_1033, 1);
 x_1056 = x_1033;
} else {
 lean_dec_ref(x_1033);
 x_1056 = lean_box(0);
}
if (lean_is_scalar(x_1056)) {
 x_1057 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1057 = x_1056;
}
lean_ctor_set(x_1057, 0, x_1054);
lean_ctor_set(x_1057, 1, x_1055);
return x_1057;
}
}
else
{
lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; 
lean_dec(x_4);
x_1058 = lean_ctor_get(x_1030, 0);
lean_inc(x_1058);
x_1059 = lean_ctor_get(x_1030, 1);
lean_inc(x_1059);
if (lean_is_exclusive(x_1030)) {
 lean_ctor_release(x_1030, 0);
 lean_ctor_release(x_1030, 1);
 x_1060 = x_1030;
} else {
 lean_dec_ref(x_1030);
 x_1060 = lean_box(0);
}
if (lean_is_scalar(x_1060)) {
 x_1061 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1061 = x_1060;
}
lean_ctor_set(x_1061, 0, x_1058);
lean_ctor_set(x_1061, 1, x_1059);
return x_1061;
}
}
else
{
lean_object* x_1062; 
lean_dec(x_3);
x_1062 = lean_box(0);
x_679 = x_1062;
goto block_685;
}
}
default: 
{
lean_dec(x_686);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_1063; lean_object* x_1064; 
lean_dec(x_111);
x_1063 = lean_ctor_get(x_3, 1);
lean_inc(x_1063);
lean_dec(x_3);
lean_inc(x_4);
x_1064 = l_Lean_Elab_Term_inferType(x_1, x_1063, x_4, x_678);
if (lean_obj_tag(x_1064) == 0)
{
lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; 
x_1065 = lean_ctor_get(x_1064, 0);
lean_inc(x_1065);
x_1066 = lean_ctor_get(x_1064, 1);
lean_inc(x_1066);
lean_dec(x_1064);
lean_inc(x_4);
x_1067 = l_Lean_Elab_Term_whnf(x_1, x_1065, x_4, x_1066);
if (lean_obj_tag(x_1067) == 0)
{
lean_object* x_1068; lean_object* x_1069; lean_object* x_1070; 
x_1068 = lean_ctor_get(x_1067, 0);
lean_inc(x_1068);
x_1069 = lean_ctor_get(x_1067, 1);
lean_inc(x_1069);
lean_dec(x_1067);
x_1070 = l_Lean_Elab_Term_tryPostponeIfMVar(x_1068, x_4, x_1069);
if (lean_obj_tag(x_1070) == 0)
{
lean_object* x_1071; lean_object* x_1072; lean_object* x_1073; lean_object* x_1080; 
x_1071 = lean_ctor_get(x_1070, 1);
lean_inc(x_1071);
if (lean_is_exclusive(x_1070)) {
 lean_ctor_release(x_1070, 0);
 lean_ctor_release(x_1070, 1);
 x_1072 = x_1070;
} else {
 lean_dec_ref(x_1070);
 x_1072 = lean_box(0);
}
x_1080 = l_Lean_Expr_getAppFn___main(x_1068);
if (lean_obj_tag(x_1080) == 4)
{
lean_object* x_1081; lean_object* x_1082; 
lean_dec(x_1068);
lean_dec(x_4);
x_1081 = lean_ctor_get(x_1080, 0);
lean_inc(x_1081);
lean_dec(x_1080);
if (lean_is_scalar(x_1072)) {
 x_1082 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1082 = x_1072;
}
lean_ctor_set(x_1082, 0, x_1081);
lean_ctor_set(x_1082, 1, x_1071);
return x_1082;
}
else
{
lean_object* x_1083; 
lean_dec(x_1080);
lean_dec(x_1072);
x_1083 = lean_box(0);
x_1073 = x_1083;
goto block_1079;
}
block_1079:
{
lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; 
lean_dec(x_1073);
x_1074 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1074, 0, x_1068);
x_1075 = l_Lean_indentExpr(x_1074);
x_1076 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12;
x_1077 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_1077, 0, x_1076);
lean_ctor_set(x_1077, 1, x_1075);
x_1078 = l_Lean_Elab_Term_throwError___rarg(x_1, x_1077, x_4, x_1071);
return x_1078;
}
}
else
{
lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; lean_object* x_1087; 
lean_dec(x_1068);
lean_dec(x_4);
x_1084 = lean_ctor_get(x_1070, 0);
lean_inc(x_1084);
x_1085 = lean_ctor_get(x_1070, 1);
lean_inc(x_1085);
if (lean_is_exclusive(x_1070)) {
 lean_ctor_release(x_1070, 0);
 lean_ctor_release(x_1070, 1);
 x_1086 = x_1070;
} else {
 lean_dec_ref(x_1070);
 x_1086 = lean_box(0);
}
if (lean_is_scalar(x_1086)) {
 x_1087 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1087 = x_1086;
}
lean_ctor_set(x_1087, 0, x_1084);
lean_ctor_set(x_1087, 1, x_1085);
return x_1087;
}
}
else
{
lean_object* x_1088; lean_object* x_1089; lean_object* x_1090; lean_object* x_1091; 
lean_dec(x_4);
x_1088 = lean_ctor_get(x_1067, 0);
lean_inc(x_1088);
x_1089 = lean_ctor_get(x_1067, 1);
lean_inc(x_1089);
if (lean_is_exclusive(x_1067)) {
 lean_ctor_release(x_1067, 0);
 lean_ctor_release(x_1067, 1);
 x_1090 = x_1067;
} else {
 lean_dec_ref(x_1067);
 x_1090 = lean_box(0);
}
if (lean_is_scalar(x_1090)) {
 x_1091 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1091 = x_1090;
}
lean_ctor_set(x_1091, 0, x_1088);
lean_ctor_set(x_1091, 1, x_1089);
return x_1091;
}
}
else
{
lean_object* x_1092; lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; 
lean_dec(x_4);
x_1092 = lean_ctor_get(x_1064, 0);
lean_inc(x_1092);
x_1093 = lean_ctor_get(x_1064, 1);
lean_inc(x_1093);
if (lean_is_exclusive(x_1064)) {
 lean_ctor_release(x_1064, 0);
 lean_ctor_release(x_1064, 1);
 x_1094 = x_1064;
} else {
 lean_dec_ref(x_1064);
 x_1094 = lean_box(0);
}
if (lean_is_scalar(x_1094)) {
 x_1095 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1095 = x_1094;
}
lean_ctor_set(x_1095, 0, x_1092);
lean_ctor_set(x_1095, 1, x_1093);
return x_1095;
}
}
else
{
lean_object* x_1096; 
lean_dec(x_3);
x_1096 = lean_box(0);
x_679 = x_1096;
goto block_685;
}
}
}
block_685:
{
lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; 
lean_dec(x_679);
x_680 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_680, 0, x_111);
x_681 = l_Lean_indentExpr(x_680);
x_682 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__9;
x_683 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_683, 0, x_682);
lean_ctor_set(x_683, 1, x_681);
x_684 = l_Lean_Elab_Term_throwError___rarg(x_1, x_683, x_4, x_678);
return x_684;
}
}
}
else
{
uint8_t x_1097; 
lean_dec(x_111);
lean_dec(x_4);
lean_dec(x_3);
x_1097 = !lean_is_exclusive(x_112);
if (x_1097 == 0)
{
return x_112;
}
else
{
lean_object* x_1098; lean_object* x_1099; lean_object* x_1100; 
x_1098 = lean_ctor_get(x_112, 0);
x_1099 = lean_ctor_get(x_112, 1);
lean_inc(x_1099);
lean_inc(x_1098);
lean_dec(x_112);
x_1100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1100, 0, x_1098);
lean_ctor_set(x_1100, 1, x_1099);
return x_1100;
}
}
}
block_64:
{
lean_dec(x_49);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_50 = l_Lean_Expr_Inhabited;
x_51 = l_Option_get_x21___rarg___closed__3;
x_52 = lean_panic_fn(x_50, x_51);
x_53 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_53, 0, x_52);
x_54 = l_Lean_indentExpr(x_53);
x_55 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__9;
x_56 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
x_57 = l_Lean_Elab_Term_throwError___rarg(x_1, x_56, x_4, x_48);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_58 = lean_ctor_get(x_2, 0);
lean_inc(x_58);
lean_dec(x_2);
x_59 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_59, 0, x_58);
x_60 = l_Lean_indentExpr(x_59);
x_61 = l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__9;
x_62 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_60);
x_63 = l_Lean_Elab_Term_throwError___rarg(x_1, x_62, x_4, x_48);
return x_63;
}
}
}
else
{
uint8_t x_1101; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1101 = !lean_is_exclusive(x_47);
if (x_1101 == 0)
{
return x_47;
}
else
{
lean_object* x_1102; lean_object* x_1103; lean_object* x_1104; 
x_1102 = lean_ctor_get(x_47, 0);
x_1103 = lean_ctor_get(x_47, 1);
lean_inc(x_1103);
lean_inc(x_1102);
lean_dec(x_47);
x_1104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1104, 0, x_1102);
lean_ctor_set(x_1104, 1, x_1103);
return x_1104;
}
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_5__getStructName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_Elab_StructInst_5__getStructName(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_FieldLHS_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_FieldLHS_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_hasFormat(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_Lean_fmt___at_Lean_Level_LevelToFormat_toResult___main___spec__1(x_2);
return x_3;
}
case 1:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Lean_fmt___at_Lean_Position_Lean_HasFormat___spec__1(x_4);
return x_5;
}
default: 
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Lean_Syntax_prettyPrint(x_6);
x_8 = 0;
x_9 = l_Lean_Format_sbracket___closed__2;
x_10 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set_uint8(x_10, sizeof(void*)*2, x_8);
x_11 = l_Lean_Format_sbracket___closed__3;
x_12 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*2, x_8);
return x_12;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Field_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Field_inhabited___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = l_Lean_Elab_Term_StructInst_Field_inhabited___closed__1;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_2);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_inhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_Field_inhabited___closed__2;
return x_2;
}
}
uint8_t l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 1);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Field_isSimple___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Struct_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_1);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Struct_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_StructInst_Struct_inhabited___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_source(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_source___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Format_joinSep___main___at_Lean_Elab_Term_StructInst_formatField___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
switch (lean_obj_tag(x_5)) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_fmt___at_Lean_Level_LevelToFormat_toResult___main___spec__1(x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = l_Lean_fmt___at_Lean_Position_Lean_HasFormat___spec__1(x_8);
return x_9;
}
default: 
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = l_Lean_Syntax_prettyPrint(x_10);
x_12 = 0;
x_13 = l_Lean_Format_sbracket___closed__2;
x_14 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set_uint8(x_14, sizeof(void*)*2, x_12);
x_15 = l_Lean_Format_sbracket___closed__3;
x_16 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set_uint8(x_16, sizeof(void*)*2, x_12);
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
lean_inc(x_2);
x_18 = l_Lean_Format_joinSep___main___at_Lean_Elab_Term_StructInst_formatField___spec__1(x_4, x_2);
switch (lean_obj_tag(x_17)) {
case 0:
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_fmt___at_Lean_Level_LevelToFormat_toResult___main___spec__1(x_19);
x_21 = 0;
x_22 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_2);
lean_ctor_set_uint8(x_22, sizeof(void*)*2, x_21);
x_23 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_18);
lean_ctor_set_uint8(x_23, sizeof(void*)*2, x_21);
return x_23;
}
case 1:
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_dec(x_17);
x_25 = l_Lean_fmt___at_Lean_Position_Lean_HasFormat___spec__1(x_24);
x_26 = 0;
x_27 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_2);
lean_ctor_set_uint8(x_27, sizeof(void*)*2, x_26);
x_28 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_18);
lean_ctor_set_uint8(x_28, sizeof(void*)*2, x_26);
return x_28;
}
default: 
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_29 = lean_ctor_get(x_17, 1);
lean_inc(x_29);
lean_dec(x_17);
x_30 = l_Lean_Syntax_prettyPrint(x_29);
x_31 = 0;
x_32 = l_Lean_Format_sbracket___closed__2;
x_33 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
lean_ctor_set_uint8(x_33, sizeof(void*)*2, x_31);
x_34 = l_Lean_Format_sbracket___closed__3;
x_35 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set_uint8(x_35, sizeof(void*)*2, x_31);
x_36 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_2);
lean_ctor_set_uint8(x_36, sizeof(void*)*2, x_31);
x_37 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_18);
lean_ctor_set_uint8(x_37, sizeof(void*)*2, x_31);
return x_37;
}
}
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_formatField___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Term_structInst___elambda__1___closed__6;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_formatField___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("<default>");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_formatField___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_formatField___closed__2;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_formatField(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = l_Lean_Elab_Term_StructInst_formatField___closed__1;
x_5 = l_Lean_Format_joinSep___main___at_Lean_Elab_Term_StructInst_formatField___spec__1(x_3, x_4);
x_6 = 0;
x_7 = l_Lean_formatEntry___closed__2;
x_8 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
lean_ctor_set_uint8(x_8, sizeof(void*)*2, x_6);
x_9 = lean_ctor_get(x_2, 2);
lean_inc(x_9);
lean_dec(x_2);
switch (lean_obj_tag(x_9)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_Syntax_prettyPrint(x_10);
x_12 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*2, x_6);
return x_12;
}
case 1:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_apply_1(x_1, x_13);
x_15 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_uint8(x_15, sizeof(void*)*2, x_6);
return x_15;
}
default: 
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_1);
x_16 = l_Lean_Elab_Term_StructInst_formatField___closed__3;
x_17 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_17, 0, x_8);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set_uint8(x_17, sizeof(void*)*2, x_6);
return x_17;
}
}
}
}
lean_object* _init_l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatStruct___main), 1, 0);
return x_1;
}
}
lean_object* l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__1___closed__1;
x_7 = l_Lean_Elab_Term_StructInst_formatField(x_6, x_4);
x_8 = l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__1(x_5);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__1___closed__1;
x_12 = l_Lean_Elab_Term_StructInst_formatField(x_11, x_9);
x_13 = l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__1(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_fmt___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__2(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_Lean_Format_join___closed__1;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__2;
return x_3;
}
default: 
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_expr_dbg_to_string(x_4);
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = 0;
x_8 = l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__4;
x_9 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set_uint8(x_9, sizeof(void*)*2, x_7);
return x_9;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_formatStruct___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_addParenHeuristic___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_formatStruct___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_PersistentArray_Stats_toString___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_formatStruct___main(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Lean_fmt___at_Lean_Level_LevelToFormat_toResult___main___spec__1(x_2);
x_6 = 0;
x_7 = l_Lean_Elab_Term_StructInst_formatStruct___main___closed__1;
x_8 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set_uint8(x_8, sizeof(void*)*2, x_6);
x_9 = l_Lean_Elab_Term_StructInst_formatField___closed__1;
x_10 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
lean_ctor_set_uint8(x_10, sizeof(void*)*2, x_6);
x_11 = l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__1(x_3);
x_12 = l_Lean_formatKVMap___closed__1;
x_13 = l_Lean_Format_joinSep___main___at___private_Init_Lean_Data_Trie_6__toStringAux___main___spec__1(x_11, x_12);
lean_dec(x_11);
x_14 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set_uint8(x_14, sizeof(void*)*2, x_6);
x_15 = l_Lean_fmt___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__2(x_4);
lean_dec(x_4);
x_16 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set_uint8(x_16, sizeof(void*)*2, x_6);
x_17 = l_Lean_Elab_Term_StructInst_formatStruct___main___closed__2;
x_18 = lean_alloc_ctor(4, 2, 1);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_6);
return x_18;
}
}
lean_object* l_Lean_fmt___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_fmt___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_formatStruct(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_formatStruct___main(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Struct_hasFormat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatStruct), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Struct_hasFormat() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_StructInst_Struct_hasFormat___closed__1;
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Struct_hasToString___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_HasRepr___closed__1;
x_2 = l_Lean_Elab_Term_StructInst_Struct_hasFormat___closed__1;
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Struct_hasToString() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_StructInst_Struct_hasToString___closed__1;
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Field_hasFormat___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_Struct_hasFormat___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatField), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Field_hasFormat() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_StructInst_Field_hasFormat___closed__1;
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Field_hasToString___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_HasRepr___closed__1;
x_2 = l_Lean_Elab_Term_StructInst_Field_hasFormat___closed__1;
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_Field_hasToString() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_StructInst_Field_hasToString___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax(uint8_t x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
if (x_1 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_System_FilePath_dirName___closed__1;
x_6 = l_Lean_mkAtomFrom(x_3, x_5);
x_7 = l_Lean_mkIdentFrom(x_3, x_4);
lean_dec(x_3);
x_8 = l_Lean_mkAppStx___closed__9;
x_9 = lean_array_push(x_8, x_6);
x_10 = lean_array_push(x_9, x_7);
x_11 = l_Lean_nullKind;
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = l_Lean_mkIdentFrom(x_13, x_14);
lean_dec(x_13);
return x_15;
}
}
case 1:
{
if (x_1 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
lean_dec(x_2);
x_17 = l_System_FilePath_dirName___closed__1;
x_18 = l_Lean_mkAtomFrom(x_16, x_17);
x_19 = l_Lean_mkAppStx___closed__9;
x_20 = lean_array_push(x_19, x_18);
x_21 = lean_array_push(x_20, x_16);
x_22 = l_Lean_nullKind;
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
else
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
return x_24;
}
}
default: 
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_2, 0);
lean_inc(x_25);
lean_dec(x_2);
return x_25;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Syntax_inhabited;
x_4 = l_unreachable_x21___rarg(x_3);
return x_4;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_FieldVal_toSyntax(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_Field_toSyntax___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = l_Array_empty___closed__1;
x_6 = x_2;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_7 = lean_array_fget(x_2, x_1);
x_8 = lean_box(0);
x_9 = x_8;
x_10 = lean_array_fset(x_2, x_1, x_9);
x_11 = 0;
lean_inc(x_7);
x_12 = l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax(x_11, x_7);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_1, x_13);
x_15 = x_12;
lean_dec(x_7);
x_16 = lean_array_fset(x_10, x_1, x_15);
lean_dec(x_1);
x_1 = x_14;
x_2 = x_16;
goto _start;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; 
lean_dec(x_1);
x_3 = l_Lean_Syntax_inhabited;
x_4 = l_unreachable_x21___rarg(x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_Lean_Elab_Term_StructInst_FieldVal_toSyntax(x_8);
lean_dec(x_8);
x_10 = lean_unsigned_to_nat(3u);
x_11 = l_Lean_Syntax_setArg(x_7, x_10, x_9);
x_12 = 1;
x_13 = l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax(x_12, x_5);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_Syntax_setArg(x_11, x_14, x_13);
x_16 = l_List_redLength___main___rarg(x_6);
x_17 = lean_mk_empty_array_with_capacity(x_16);
lean_dec(x_16);
x_18 = l_List_toArrayAux___main___rarg(x_6, x_17);
x_19 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_Field_toSyntax___spec__1(x_14, x_18);
x_20 = l_Lean_nullKind;
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_unsigned_to_nat(1u);
x_23 = l_Lean_Syntax_setArg(x_15, x_22, x_21);
return x_23;
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_6__toFieldLHS(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
lean_inc(x_1);
x_2 = l_Lean_Syntax_getKind(x_1);
x_3 = l_Lean_Parser_Term_structInstArrayRef___elambda__1___closed__2;
x_4 = lean_name_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_nullKind;
x_6 = lean_name_eq(x_2, x_5);
lean_dec(x_2);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = l_Lean_Syntax_isIdent(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_numLitKind;
x_9 = l_Lean_Syntax_isNatLitAux(x_8, x_1);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_10 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_11 = l_unreachable_x21___rarg(x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_Syntax_getId(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
lean_dec(x_1);
x_18 = l_Lean_Syntax_isIdent(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = l_Lean_numLitKind;
x_20 = l_Lean_Syntax_isNatLitAux(x_19, x_17);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_17);
x_21 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_22 = l_unreachable_x21___rarg(x_21);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 0);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_17);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = l_Lean_Syntax_getId(x_17);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_17);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_2);
x_27 = lean_unsigned_to_nat(1u);
x_28 = l_Lean_Syntax_getArg(x_1, x_27);
x_29 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_29, 0, x_1);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
lean_object* l_Array_filterAux___main___at___private_Init_Lean_Elab_StructInst_7__mkStructView___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = l_Array_shrink___main___rarg(x_1, x_3);
lean_dec(x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_1, x_2);
x_8 = l_Lean_Syntax_getKind(x_7);
x_9 = l_Lean_Parser_Term_structInstField___elambda__1___closed__2;
x_10 = lean_name_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_2, x_11);
lean_dec(x_2);
x_2 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_lt(x_3, x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_2, x_15);
lean_dec(x_2);
x_17 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_2 = x_16;
x_3 = x_17;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_array_fswap(x_1, x_2, x_3);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_2, x_20);
lean_dec(x_2);
x_22 = lean_nat_add(x_3, x_20);
lean_dec(x_3);
x_1 = x_19;
x_2 = x_21;
x_3 = x_22;
goto _start;
}
}
}
}
}
lean_object* l_List_map___main___at___private_Init_Lean_Elab_StructInst_7__mkStructView___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l___private_Init_Lean_Elab_StructInst_6__toFieldLHS(x_4);
x_7 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_7__mkStructView___spec__2(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l___private_Init_Lean_Elab_StructInst_6__toFieldLHS(x_8);
x_11 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_7__mkStructView___spec__2(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_List_map___main___at___private_Init_Lean_Elab_StructInst_7__mkStructView___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_unsigned_to_nat(3u);
x_7 = l_Lean_Syntax_getArg(x_4, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_4, x_8);
x_10 = l___private_Init_Lean_Elab_StructInst_6__toFieldLHS(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_4, x_11);
x_13 = l_Lean_Syntax_getArgs(x_12);
lean_dec(x_12);
x_14 = l_Array_toList___rarg(x_13);
lean_dec(x_13);
x_15 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_7__mkStructView___spec__2(x_14);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_10);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_7);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_4);
lean_ctor_set(x_18, 1, x_1);
lean_ctor_set(x_18, 2, x_16);
lean_ctor_set(x_18, 3, x_17);
x_19 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_7__mkStructView___spec__3(x_5);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_21 = lean_ctor_get(x_1, 0);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_1);
x_23 = lean_unsigned_to_nat(3u);
x_24 = l_Lean_Syntax_getArg(x_21, x_23);
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Lean_Syntax_getArg(x_21, x_25);
x_27 = l___private_Init_Lean_Elab_StructInst_6__toFieldLHS(x_26);
x_28 = lean_unsigned_to_nat(1u);
x_29 = l_Lean_Syntax_getArg(x_21, x_28);
x_30 = l_Lean_Syntax_getArgs(x_29);
lean_dec(x_29);
x_31 = l_Array_toList___rarg(x_30);
lean_dec(x_30);
x_32 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_7__mkStructView___spec__2(x_31);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_27);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_34, 0, x_24);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_36, 0, x_21);
lean_ctor_set(x_36, 1, x_33);
lean_ctor_set(x_36, 2, x_34);
lean_ctor_set(x_36, 3, x_35);
x_37 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_7__mkStructView___spec__3(x_22);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_7__mkStructView(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_unsigned_to_nat(2u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArgs(x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_filterAux___main___at___private_Init_Lean_Elab_StructInst_7__mkStructView___spec__1(x_6, x_7, x_7);
x_9 = l_Array_toList___rarg(x_8);
lean_dec(x_8);
x_10 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_7__mkStructView___spec__3(x_9);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_2);
lean_ctor_set(x_11, 2, x_10);
lean_ctor_set(x_11, 3, x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_5);
lean_ctor_set(x_8, 3, x_4);
x_9 = lean_apply_2(x_7, lean_box(0), x_8);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 3);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_apply_1(x_3, x_6);
x_10 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg___lambda__1), 5, 4);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_4);
lean_closure_set(x_10, 2, x_5);
lean_closure_set(x_10, 3, x_7);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
x_5 = lean_apply_1(x_2, x_4);
lean_ctor_set(x_1, 2, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 2);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_10 = lean_apply_1(x_2, x_8);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_10);
lean_ctor_set(x_11, 3, x_9);
return x_11;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFields(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_setFields(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_fix1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(x_1, x_3);
return x_4;
}
}
lean_object* l_List_map___main___at___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_5);
x_8 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
lean_inc(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___spec__1(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___main___at___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___spec__2(x_5);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_4, 3);
lean_inc(x_11);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_13 = x_7;
} else {
 lean_dec_ref(x_7);
 x_13 = lean_box(0);
}
x_14 = lean_ctor_get(x_8, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
if (lean_obj_tag(x_15) == 1)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_15, 0);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 0)
{
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_object* x_24; 
lean_dec(x_23);
lean_free_object(x_1);
lean_dec(x_4);
x_24 = lean_box(0);
x_16 = x_24;
goto block_22;
}
}
else
{
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
block_22:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_16);
x_17 = l_Lean_Name_components(x_15);
x_18 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___spec__1(x_14, x_17);
x_19 = l_List_append___rarg(x_18, x_12);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_9);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_20, 2, x_10);
lean_ctor_set(x_20, 3, x_11);
if (lean_is_scalar(x_13)) {
 x_21 = lean_alloc_ctor(1, 2, 0);
} else {
 x_21 = x_13;
}
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_6);
return x_21;
}
}
else
{
uint8_t x_25; 
lean_dec(x_8);
lean_free_object(x_1);
x_25 = !lean_is_exclusive(x_7);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_7, 1);
lean_dec(x_26);
x_27 = lean_ctor_get(x_7, 0);
lean_dec(x_27);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
else
{
lean_object* x_28; 
lean_dec(x_7);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_4);
lean_ctor_set(x_28, 1, x_6);
return x_28;
}
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_1, 0);
x_30 = lean_ctor_get(x_1, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_1);
x_31 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___spec__2(x_30);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_29);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
else
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_35 = lean_ctor_get(x_29, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_29, 2);
lean_inc(x_36);
x_37 = lean_ctor_get(x_29, 3);
lean_inc(x_37);
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_39 = x_32;
} else {
 lean_dec_ref(x_32);
 x_39 = lean_box(0);
}
x_40 = lean_ctor_get(x_34, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_34, 1);
lean_inc(x_41);
lean_dec(x_34);
if (lean_obj_tag(x_41) == 1)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_41, 0);
lean_inc(x_49);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; 
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_29);
lean_ctor_set(x_50, 1, x_31);
return x_50;
}
else
{
lean_object* x_51; 
lean_dec(x_49);
lean_dec(x_29);
x_51 = lean_box(0);
x_42 = x_51;
goto block_48;
}
}
else
{
lean_object* x_52; 
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_29);
lean_ctor_set(x_52, 1, x_31);
return x_52;
}
block_48:
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_42);
x_43 = l_Lean_Name_components(x_41);
x_44 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___spec__1(x_40, x_43);
x_45 = l_List_append___rarg(x_44, x_38);
x_46 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_46, 0, x_35);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_46, 2, x_36);
lean_ctor_set(x_46, 3, x_37);
if (lean_is_scalar(x_39)) {
 x_47 = lean_alloc_ctor(1, 2, 0);
} else {
 x_47 = x_39;
}
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_31);
return x_47;
}
}
else
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_34);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_53 = x_32;
} else {
 lean_dec_ref(x_32);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_29);
lean_ctor_set(x_54, 1, x_31);
return x_54;
}
}
}
}
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_map___main___at___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___spec__2), 1, 0);
return x_1;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_8__expandCompositeFields(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___closed__1;
x_3 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid field index, structure has only #");
return x_1;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" fields");
return x_1;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid field index, index must be greater than 0");
return x_1;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_25; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_9 = x_2;
} else {
 lean_dec_ref(x_2);
 x_9 = lean_box(0);
}
x_25 = lean_ctor_get(x_7, 1);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
x_10 = x_7;
x_11 = x_4;
goto block_24;
}
else
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 1)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_7);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_28 = lean_ctor_get(x_7, 0);
x_29 = lean_ctor_get(x_7, 2);
x_30 = lean_ctor_get(x_7, 3);
x_31 = lean_ctor_get(x_7, 1);
lean_dec(x_31);
x_32 = !lean_is_exclusive(x_25);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_25, 1);
x_34 = lean_ctor_get(x_25, 0);
lean_dec(x_34);
x_35 = !lean_is_exclusive(x_26);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_36 = lean_ctor_get(x_26, 0);
x_37 = lean_ctor_get(x_26, 1);
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_nat_dec_eq(x_37, x_38);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; 
x_40 = lean_array_get_size(x_1);
x_41 = lean_nat_dec_lt(x_40, x_37);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_40);
x_42 = lean_unsigned_to_nat(1u);
x_43 = lean_nat_sub(x_37, x_42);
lean_dec(x_37);
x_44 = l_Lean_Name_inhabited;
x_45 = lean_array_get(x_44, x_1, x_43);
lean_dec(x_43);
lean_ctor_set_tag(x_26, 0);
lean_ctor_set(x_26, 1, x_45);
x_10 = x_7;
x_11 = x_4;
goto block_24;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_free_object(x_26);
lean_dec(x_37);
lean_free_object(x_25);
lean_dec(x_33);
lean_free_object(x_7);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_9);
lean_dec(x_8);
x_46 = l_Nat_repr(x_40);
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__3;
x_50 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__6;
x_52 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_Elab_Term_throwError___rarg(x_36, x_52, x_3, x_4);
lean_dec(x_36);
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
return x_53;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_53, 0);
x_56 = lean_ctor_get(x_53, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_53);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; 
lean_free_object(x_26);
lean_dec(x_37);
lean_free_object(x_25);
lean_dec(x_33);
lean_free_object(x_7);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_9);
lean_dec(x_8);
x_58 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__9;
x_59 = l_Lean_Elab_Term_throwError___rarg(x_36, x_58, x_3, x_4);
lean_dec(x_36);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
return x_59;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_59, 0);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_59);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_64 = lean_ctor_get(x_26, 0);
x_65 = lean_ctor_get(x_26, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_26);
x_66 = lean_unsigned_to_nat(0u);
x_67 = lean_nat_dec_eq(x_65, x_66);
if (x_67 == 0)
{
lean_object* x_68; uint8_t x_69; 
x_68 = lean_array_get_size(x_1);
x_69 = lean_nat_dec_lt(x_68, x_65);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_68);
x_70 = lean_unsigned_to_nat(1u);
x_71 = lean_nat_sub(x_65, x_70);
lean_dec(x_65);
x_72 = l_Lean_Name_inhabited;
x_73 = lean_array_get(x_72, x_1, x_71);
lean_dec(x_71);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_64);
lean_ctor_set(x_74, 1, x_73);
lean_ctor_set(x_25, 0, x_74);
x_10 = x_7;
x_11 = x_4;
goto block_24;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_65);
lean_free_object(x_25);
lean_dec(x_33);
lean_free_object(x_7);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_9);
lean_dec(x_8);
x_75 = l_Nat_repr(x_68);
x_76 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_78 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__3;
x_79 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
x_80 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__6;
x_81 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = l_Lean_Elab_Term_throwError___rarg(x_64, x_81, x_3, x_4);
lean_dec(x_64);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_85 = x_82;
} else {
 lean_dec_ref(x_82);
 x_85 = lean_box(0);
}
if (lean_is_scalar(x_85)) {
 x_86 = lean_alloc_ctor(1, 2, 0);
} else {
 x_86 = x_85;
}
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_84);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_65);
lean_free_object(x_25);
lean_dec(x_33);
lean_free_object(x_7);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_9);
lean_dec(x_8);
x_87 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__9;
x_88 = l_Lean_Elab_Term_throwError___rarg(x_64, x_87, x_3, x_4);
lean_dec(x_64);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_91 = x_88;
} else {
 lean_dec_ref(x_88);
 x_91 = lean_box(0);
}
if (lean_is_scalar(x_91)) {
 x_92 = lean_alloc_ctor(1, 2, 0);
} else {
 x_92 = x_91;
}
lean_ctor_set(x_92, 0, x_89);
lean_ctor_set(x_92, 1, x_90);
return x_92;
}
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_93 = lean_ctor_get(x_25, 1);
lean_inc(x_93);
lean_dec(x_25);
x_94 = lean_ctor_get(x_26, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_26, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_96 = x_26;
} else {
 lean_dec_ref(x_26);
 x_96 = lean_box(0);
}
x_97 = lean_unsigned_to_nat(0u);
x_98 = lean_nat_dec_eq(x_95, x_97);
if (x_98 == 0)
{
lean_object* x_99; uint8_t x_100; 
x_99 = lean_array_get_size(x_1);
x_100 = lean_nat_dec_lt(x_99, x_95);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_dec(x_99);
x_101 = lean_unsigned_to_nat(1u);
x_102 = lean_nat_sub(x_95, x_101);
lean_dec(x_95);
x_103 = l_Lean_Name_inhabited;
x_104 = lean_array_get(x_103, x_1, x_102);
lean_dec(x_102);
if (lean_is_scalar(x_96)) {
 x_105 = lean_alloc_ctor(0, 2, 0);
} else {
 x_105 = x_96;
 lean_ctor_set_tag(x_105, 0);
}
lean_ctor_set(x_105, 0, x_94);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_93);
lean_ctor_set(x_7, 1, x_106);
x_10 = x_7;
x_11 = x_4;
goto block_24;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_93);
lean_free_object(x_7);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_9);
lean_dec(x_8);
x_107 = l_Nat_repr(x_99);
x_108 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_108, 0, x_107);
x_109 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_109, 0, x_108);
x_110 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__3;
x_111 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
x_112 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__6;
x_113 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
x_114 = l_Lean_Elab_Term_throwError___rarg(x_94, x_113, x_3, x_4);
lean_dec(x_94);
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_117 = x_114;
} else {
 lean_dec_ref(x_114);
 x_117 = lean_box(0);
}
if (lean_is_scalar(x_117)) {
 x_118 = lean_alloc_ctor(1, 2, 0);
} else {
 x_118 = x_117;
}
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_116);
return x_118;
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_93);
lean_free_object(x_7);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_9);
lean_dec(x_8);
x_119 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__9;
x_120 = l_Lean_Elab_Term_throwError___rarg(x_94, x_119, x_3, x_4);
lean_dec(x_94);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_120)) {
 lean_ctor_release(x_120, 0);
 lean_ctor_release(x_120, 1);
 x_123 = x_120;
} else {
 lean_dec_ref(x_120);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(1, 2, 0);
} else {
 x_124 = x_123;
}
lean_ctor_set(x_124, 0, x_121);
lean_ctor_set(x_124, 1, x_122);
return x_124;
}
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_125 = lean_ctor_get(x_7, 0);
x_126 = lean_ctor_get(x_7, 2);
x_127 = lean_ctor_get(x_7, 3);
lean_inc(x_127);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_7);
x_128 = lean_ctor_get(x_25, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_129 = x_25;
} else {
 lean_dec_ref(x_25);
 x_129 = lean_box(0);
}
x_130 = lean_ctor_get(x_26, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_26, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_132 = x_26;
} else {
 lean_dec_ref(x_26);
 x_132 = lean_box(0);
}
x_133 = lean_unsigned_to_nat(0u);
x_134 = lean_nat_dec_eq(x_131, x_133);
if (x_134 == 0)
{
lean_object* x_135; uint8_t x_136; 
x_135 = lean_array_get_size(x_1);
x_136 = lean_nat_dec_lt(x_135, x_131);
if (x_136 == 0)
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_135);
x_137 = lean_unsigned_to_nat(1u);
x_138 = lean_nat_sub(x_131, x_137);
lean_dec(x_131);
x_139 = l_Lean_Name_inhabited;
x_140 = lean_array_get(x_139, x_1, x_138);
lean_dec(x_138);
if (lean_is_scalar(x_132)) {
 x_141 = lean_alloc_ctor(0, 2, 0);
} else {
 x_141 = x_132;
 lean_ctor_set_tag(x_141, 0);
}
lean_ctor_set(x_141, 0, x_130);
lean_ctor_set(x_141, 1, x_140);
if (lean_is_scalar(x_129)) {
 x_142 = lean_alloc_ctor(1, 2, 0);
} else {
 x_142 = x_129;
}
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_128);
x_143 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_143, 0, x_125);
lean_ctor_set(x_143, 1, x_142);
lean_ctor_set(x_143, 2, x_126);
lean_ctor_set(x_143, 3, x_127);
x_10 = x_143;
x_11 = x_4;
goto block_24;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_132);
lean_dec(x_131);
lean_dec(x_129);
lean_dec(x_128);
lean_dec(x_127);
lean_dec(x_126);
lean_dec(x_125);
lean_dec(x_9);
lean_dec(x_8);
x_144 = l_Nat_repr(x_135);
x_145 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_145, 0, x_144);
x_146 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_146, 0, x_145);
x_147 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__3;
x_148 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_146);
x_149 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__6;
x_150 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
x_151 = l_Lean_Elab_Term_throwError___rarg(x_130, x_150, x_3, x_4);
lean_dec(x_130);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
if (lean_is_exclusive(x_151)) {
 lean_ctor_release(x_151, 0);
 lean_ctor_release(x_151, 1);
 x_154 = x_151;
} else {
 lean_dec_ref(x_151);
 x_154 = lean_box(0);
}
if (lean_is_scalar(x_154)) {
 x_155 = lean_alloc_ctor(1, 2, 0);
} else {
 x_155 = x_154;
}
lean_ctor_set(x_155, 0, x_152);
lean_ctor_set(x_155, 1, x_153);
return x_155;
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
lean_dec(x_132);
lean_dec(x_131);
lean_dec(x_129);
lean_dec(x_128);
lean_dec(x_127);
lean_dec(x_126);
lean_dec(x_125);
lean_dec(x_9);
lean_dec(x_8);
x_156 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__9;
x_157 = l_Lean_Elab_Term_throwError___rarg(x_130, x_156, x_3, x_4);
lean_dec(x_130);
x_158 = lean_ctor_get(x_157, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_157, 1);
lean_inc(x_159);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 x_160 = x_157;
} else {
 lean_dec_ref(x_157);
 x_160 = lean_box(0);
}
if (lean_is_scalar(x_160)) {
 x_161 = lean_alloc_ctor(1, 2, 0);
} else {
 x_161 = x_160;
}
lean_ctor_set(x_161, 0, x_158);
lean_ctor_set(x_161, 1, x_159);
return x_161;
}
}
}
else
{
lean_dec(x_26);
lean_dec(x_25);
x_10 = x_7;
x_11 = x_4;
goto block_24;
}
}
block_24:
{
lean_object* x_12; 
x_12 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1(x_1, x_8, x_3, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
if (lean_is_scalar(x_9)) {
 x_15 = lean_alloc_ctor(1, 2, 0);
} else {
 x_15 = x_9;
}
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
if (lean_is_scalar(x_9)) {
 x_18 = lean_alloc_ctor(1, 2, 0);
} else {
 x_18 = x_9;
}
lean_ctor_set(x_18, 0, x_10);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_9);
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 0);
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_12);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 2);
x_9 = lean_ctor_get(x_1, 3);
x_10 = lean_apply_3(x_2, x_8, x_3, x_4);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 0);
lean_ctor_set(x_1, 2, x_12);
lean_ctor_set(x_10, 0, x_1);
return x_10;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_10, 0);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_10);
lean_ctor_set(x_1, 2, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
uint8_t x_16; 
lean_free_object(x_1);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
x_16 = !lean_is_exclusive(x_10);
if (x_16 == 0)
{
return x_10;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_10, 0);
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_10);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_ctor_get(x_1, 2);
x_23 = lean_ctor_get(x_1, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_24 = lean_apply_3(x_2, x_22, x_3, x_4);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_27 = x_24;
} else {
 lean_dec_ref(x_24);
 x_27 = lean_box(0);
}
x_28 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_28, 0, x_20);
lean_ctor_set(x_28, 1, x_21);
lean_ctor_set(x_28, 2, x_25);
lean_ctor_set(x_28, 3, x_23);
if (lean_is_scalar(x_27)) {
 x_29 = lean_alloc_ctor(0, 2, 0);
} else {
 x_29 = x_27;
}
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_26);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_20);
x_30 = lean_ctor_get(x_24, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_32 = x_24;
} else {
 lean_dec_ref(x_24);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(1, 2, 0);
} else {
 x_33 = x_32;
}
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Elab_Term_getEnv___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
x_9 = l_Lean_getStructureFields(x_6, x_8);
x_10 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1(x_9, x_2, x_3, x_7);
lean_dec(x_9);
return x_10;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_9__expandNumLitFields(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___lambda__1___boxed), 4, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__2(x_1, x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_List_map___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__1(x_1, x_6);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_box(0);
x_10 = lean_name_mk_string(x_9, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_2, 1, x_7);
lean_ctor_set(x_2, 0, x_11);
return x_2;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_1);
x_12 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_13 = l_unreachable_x21___rarg(x_12);
lean_ctor_set(x_2, 1, x_7);
lean_ctor_set(x_2, 0, x_13);
return x_2;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
lean_inc(x_1);
x_16 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__1(x_1, x_15);
if (lean_obj_tag(x_14) == 1)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_box(0);
x_19 = lean_name_mk_string(x_18, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_16);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_14);
lean_dec(x_1);
x_22 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_23 = l_unreachable_x21___rarg(x_22);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_16);
return x_24;
}
}
}
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is not a field of structure '");
return x_1;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to access field '");
return x_1;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' in parent structure");
return x_1;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_26; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_10 = x_3;
} else {
 lean_dec_ref(x_3);
 x_10 = lean_box(0);
}
x_26 = lean_ctor_get(x_8, 1);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
x_11 = x_8;
x_12 = x_5;
goto block_25;
}
else
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_8, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_8, 2);
lean_inc(x_29);
x_30 = lean_ctor_get(x_8, 3);
lean_inc(x_30);
x_31 = lean_ctor_get(x_27, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_dec(x_27);
x_33 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_inc(x_33);
lean_inc(x_2);
x_34 = l_Lean_findField_x3f___main(x_2, x_33, x_32);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_35 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_35, 0, x_32);
x_36 = l_Array_forMAux___main___at_Lean_Meta_clear___spec__5___closed__8;
x_37 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__3;
x_39 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_40, 0, x_33);
x_41 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_36);
x_43 = l_Lean_Elab_Term_throwError___rarg(x_31, x_42, x_4, x_5);
lean_dec(x_31);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_ctor_get(x_34, 0);
lean_inc(x_48);
lean_dec(x_34);
x_49 = lean_name_eq(x_48, x_33);
if (x_49 == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_8);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_51 = lean_ctor_get(x_8, 3);
lean_dec(x_51);
x_52 = lean_ctor_get(x_8, 2);
lean_dec(x_52);
x_53 = lean_ctor_get(x_8, 1);
lean_dec(x_53);
x_54 = lean_ctor_get(x_8, 0);
lean_dec(x_54);
lean_inc(x_2);
x_55 = l_Lean_getPathToBaseStructure_x3f(x_2, x_48, x_33);
lean_dec(x_48);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
lean_free_object(x_8);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_56 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_56, 0, x_32);
x_57 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__6;
x_58 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
x_59 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__9;
x_60 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = l_Lean_Elab_Term_throwError___rarg(x_31, x_60, x_4, x_5);
lean_dec(x_31);
x_62 = !lean_is_exclusive(x_61);
if (x_62 == 0)
{
return x_61;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_61, 0);
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_61);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_32);
x_66 = lean_ctor_get(x_55, 0);
lean_inc(x_66);
lean_dec(x_55);
x_67 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__1(x_31, x_66);
x_68 = l_List_append___rarg(x_67, x_26);
lean_ctor_set(x_8, 1, x_68);
x_11 = x_8;
x_12 = x_5;
goto block_25;
}
}
else
{
lean_object* x_69; 
lean_dec(x_8);
lean_inc(x_2);
x_69 = l_Lean_getPathToBaseStructure_x3f(x_2, x_48, x_33);
lean_dec(x_48);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_70 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_70, 0, x_32);
x_71 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__6;
x_72 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
x_73 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__9;
x_74 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
x_75 = l_Lean_Elab_Term_throwError___rarg(x_31, x_74, x_4, x_5);
lean_dec(x_31);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_78 = x_75;
} else {
 lean_dec_ref(x_75);
 x_78 = lean_box(0);
}
if (lean_is_scalar(x_78)) {
 x_79 = lean_alloc_ctor(1, 2, 0);
} else {
 x_79 = x_78;
}
lean_ctor_set(x_79, 0, x_76);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_32);
x_80 = lean_ctor_get(x_69, 0);
lean_inc(x_80);
lean_dec(x_69);
x_81 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__1(x_31, x_80);
x_82 = l_List_append___rarg(x_81, x_26);
x_83 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_83, 0, x_28);
lean_ctor_set(x_83, 1, x_82);
lean_ctor_set(x_83, 2, x_29);
lean_ctor_set(x_83, 3, x_30);
x_11 = x_83;
x_12 = x_5;
goto block_25;
}
}
}
else
{
lean_dec(x_48);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_26);
x_11 = x_8;
x_12 = x_5;
goto block_25;
}
}
}
else
{
lean_dec(x_27);
lean_dec(x_26);
x_11 = x_8;
x_12 = x_5;
goto block_25;
}
}
block_25:
{
lean_object* x_13; 
x_13 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2(x_1, x_2, x_9, x_4, x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
if (lean_is_scalar(x_10)) {
 x_16 = lean_alloc_ctor(1, 2, 0);
} else {
 x_16 = x_10;
}
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
if (lean_is_scalar(x_10)) {
 x_19 = lean_alloc_ctor(1, 2, 0);
} else {
 x_19 = x_10;
}
lean_ctor_set(x_19, 0, x_11);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_10);
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
return x_13;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_10__expandParentFields(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_Lean_Elab_Term_getEnv___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___boxed), 5, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_5);
x_8 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__2(x_1, x_7, x_2, x_6);
return x_8;
}
}
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_AssocList_find___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_HashMapImp_find_x3f___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Name_hash(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_AssocList_find___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__2(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
uint8_t l_AssocList_contains___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_AssocList_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = l_Lean_Name_hash(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_HashMapImp_moveEntries___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_AssocList_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__7(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_HashMapImp_expand___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_HashMapImp_moveEntries___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__6(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_AssocList_replace___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
x_8 = lean_name_eq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_AssocList_replace___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__8(x_1, x_2, x_7);
lean_ctor_set(x_3, 2, x_9);
return x_3;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_13 = lean_name_eq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_AssocList_replace___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__8(x_1, x_2, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_12);
return x_16;
}
}
}
}
}
lean_object* l_HashMapImp_insert___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_AssocList_contains___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__4(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_HashMapImp_expand___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__5(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_AssocList_replace___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__8(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = l_Lean_Name_hash(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_AssocList_contains___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__4(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_HashMapImp_expand___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__5(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_AssocList_replace___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__8(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_mkHashMap___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("field '");
return x_1;
}
}
lean_object* _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' has already beed specified");
return x_1;
}
}
lean_object* _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l___private_Init_Lean_Elab_Quotation_5__quoteSyntax___main___closed__1;
x_10 = l_unreachable_x21___rarg(x_9);
lean_inc(x_3);
x_11 = lean_apply_2(x_10, x_3, x_4);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_1 = x_12;
x_2 = x_8;
x_4 = x_13;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_8);
lean_dec(x_3);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_7);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 1);
lean_dec(x_21);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = l_HashMapImp_find_x3f___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__1(x_1, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_box(0);
lean_ctor_set(x_7, 1, x_25);
lean_ctor_set(x_7, 0, x_6);
x_26 = l_HashMapImp_insert___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__3(x_1, x_23, x_7);
x_1 = x_26;
x_2 = x_22;
goto _start;
}
else
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_24, 0);
lean_inc(x_28);
lean_dec(x_24);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; 
lean_ctor_set(x_7, 1, x_28);
lean_ctor_set(x_7, 0, x_6);
x_29 = l_HashMapImp_insert___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__3(x_1, x_23, x_7);
x_1 = x_29;
x_2 = x_22;
goto _start;
}
else
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_28, 0);
lean_inc(x_31);
x_32 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_6);
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_31);
lean_dec(x_31);
if (x_33 == 0)
{
lean_object* x_34; 
lean_ctor_set(x_7, 1, x_28);
lean_ctor_set(x_7, 0, x_6);
x_34 = l_HashMapImp_insert___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__3(x_1, x_23, x_7);
x_1 = x_34;
x_2 = x_22;
goto _start;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_dec(x_28);
lean_dec(x_22);
lean_free_object(x_7);
lean_dec(x_1);
x_36 = lean_ctor_get(x_6, 0);
lean_inc(x_36);
lean_dec(x_6);
x_37 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_37, 0, x_23);
x_38 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__3;
x_39 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_40 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__6;
x_41 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_Lean_Elab_Term_throwError___rarg(x_36, x_41, x_3, x_4);
lean_dec(x_36);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
return x_42;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_42, 0);
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_42);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_dec(x_31);
lean_dec(x_28);
lean_dec(x_22);
lean_free_object(x_7);
lean_dec(x_1);
x_47 = lean_ctor_get(x_6, 0);
lean_inc(x_47);
lean_dec(x_6);
x_48 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_48, 0, x_23);
x_49 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__3;
x_50 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__6;
x_52 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_Elab_Term_throwError___rarg(x_47, x_52, x_3, x_4);
lean_dec(x_47);
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
return x_53;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_53, 0);
x_56 = lean_ctor_get(x_53, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_53);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_free_object(x_7);
lean_dec(x_20);
lean_dec(x_6);
lean_dec(x_1);
x_58 = lean_ctor_get(x_2, 1);
lean_inc(x_58);
lean_dec(x_2);
x_59 = l___private_Init_Lean_Elab_Quotation_5__quoteSyntax___main___closed__1;
x_60 = l_unreachable_x21___rarg(x_59);
lean_inc(x_3);
x_61 = lean_apply_2(x_60, x_3, x_4);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_1 = x_62;
x_2 = x_58;
x_4 = x_63;
goto _start;
}
else
{
uint8_t x_65; 
lean_dec(x_58);
lean_dec(x_3);
x_65 = !lean_is_exclusive(x_61);
if (x_65 == 0)
{
return x_61;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_61, 0);
x_67 = lean_ctor_get(x_61, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_61);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
else
{
lean_object* x_69; 
x_69 = lean_ctor_get(x_7, 0);
lean_inc(x_69);
lean_dec(x_7);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_2, 1);
lean_inc(x_70);
lean_dec(x_2);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = l_HashMapImp_find_x3f___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__1(x_1, x_71);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_box(0);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_6);
lean_ctor_set(x_74, 1, x_73);
x_75 = l_HashMapImp_insert___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__3(x_1, x_71, x_74);
x_1 = x_75;
x_2 = x_70;
goto _start;
}
else
{
lean_object* x_77; 
x_77 = lean_ctor_get(x_72, 0);
lean_inc(x_77);
lean_dec(x_72);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_6);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_HashMapImp_insert___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__3(x_1, x_71, x_78);
x_1 = x_79;
x_2 = x_70;
goto _start;
}
else
{
lean_object* x_81; uint8_t x_82; 
x_81 = lean_ctor_get(x_77, 0);
lean_inc(x_81);
x_82 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_6);
if (x_82 == 0)
{
uint8_t x_83; 
x_83 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_81);
lean_dec(x_81);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_6);
lean_ctor_set(x_84, 1, x_77);
x_85 = l_HashMapImp_insert___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__3(x_1, x_71, x_84);
x_1 = x_85;
x_2 = x_70;
goto _start;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_77);
lean_dec(x_70);
lean_dec(x_1);
x_87 = lean_ctor_get(x_6, 0);
lean_inc(x_87);
lean_dec(x_6);
x_88 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_88, 0, x_71);
x_89 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__3;
x_90 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_88);
x_91 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__6;
x_92 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
x_93 = l_Lean_Elab_Term_throwError___rarg(x_87, x_92, x_3, x_4);
lean_dec(x_87);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_96 = x_93;
} else {
 lean_dec_ref(x_93);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(1, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_81);
lean_dec(x_77);
lean_dec(x_70);
lean_dec(x_1);
x_98 = lean_ctor_get(x_6, 0);
lean_inc(x_98);
lean_dec(x_6);
x_99 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_99, 0, x_71);
x_100 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__3;
x_101 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
x_102 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__6;
x_103 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
x_104 = l_Lean_Elab_Term_throwError___rarg(x_98, x_103, x_3, x_4);
lean_dec(x_98);
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_107 = x_104;
} else {
 lean_dec_ref(x_104);
 x_107 = lean_box(0);
}
if (lean_is_scalar(x_107)) {
 x_108 = lean_alloc_ctor(1, 2, 0);
} else {
 x_108 = x_107;
}
lean_ctor_set(x_108, 0, x_105);
lean_ctor_set(x_108, 1, x_106);
return x_108;
}
}
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_69);
lean_dec(x_6);
lean_dec(x_1);
x_109 = lean_ctor_get(x_2, 1);
lean_inc(x_109);
lean_dec(x_2);
x_110 = l___private_Init_Lean_Elab_Quotation_5__quoteSyntax___main___closed__1;
x_111 = l_unreachable_x21___rarg(x_110);
lean_inc(x_3);
x_112 = lean_apply_2(x_111, x_3, x_4);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; lean_object* x_114; 
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
x_1 = x_113;
x_2 = x_109;
x_4 = x_114;
goto _start;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_109);
lean_dec(x_3);
x_116 = lean_ctor_get(x_112, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_112, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_118 = x_112;
} else {
 lean_dec_ref(x_112);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(1, 2, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_116);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
}
}
}
}
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_12__mkFieldMap___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_12__mkFieldMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l___private_Init_Lean_Elab_StructInst_12__mkFieldMap___closed__1;
x_5 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_AssocList_find___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AssocList_find___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_HashMapImp_find_x3f___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_HashMapImp_find_x3f___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_AssocList_contains___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_AssocList_contains___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_13__isSimpleField_x3f(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; 
lean_inc(x_4);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
}
else
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_13__isSimpleField_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Init_Lean_Elab_StructInst_13__isSimpleField_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_StructInst_14__getFieldIdx___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_name_eq(x_7, x_1);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_3);
return x_12;
}
}
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is not a valid field of '");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_14__getFieldIdx(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_findIdxAux___main___at___private_Init_Lean_Elab_StructInst_14__getFieldIdx___spec__1(x_4, x_3, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_9 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_9, 0, x_4);
x_10 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__3;
x_11 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__3;
x_13 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_14, 0, x_2);
x_15 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Array_forMAux___main___at_Lean_Meta_clear___spec__5___closed__8;
x_17 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_Elab_Term_throwError___rarg(x_1, x_17, x_5, x_6);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_19 = lean_ctor_get(x_8, 0);
lean_inc(x_19);
lean_dec(x_8);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_6);
return x_20;
}
}
}
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_StructInst_14__getFieldIdx___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_findIdxAux___main___at___private_Init_Lean_Elab_StructInst_14__getFieldIdx___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Elab_StructInst_14__getFieldIdx(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_15__mkProjStx(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = l_System_FilePath_dirName___closed__1;
x_4 = l_Lean_mkAtomFrom(x_1, x_3);
x_5 = l_Lean_mkIdentFrom(x_1, x_2);
x_6 = l_Lean_Parser_declareBuiltinParser___closed__8;
x_7 = lean_array_push(x_6, x_1);
x_8 = lean_array_push(x_7, x_4);
x_9 = lean_array_push(x_8, x_5);
x_10 = l_Lean_Parser_Term_proj___elambda__1___closed__2;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_16__mkSubstructSource(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_5) == 2)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_4);
lean_inc(x_2);
x_11 = l___private_Init_Lean_Elab_StructInst_14__getFieldIdx(x_1, x_2, x_3, x_4, x_6, x_7);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = l_Lean_mkProj(x_2, x_13, x_10);
if (lean_obj_tag(x_9) == 1)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
x_18 = lean_array_get_size(x_17);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_dec_lt(x_19, x_18);
lean_dec(x_18);
if (x_20 == 0)
{
lean_dec(x_4);
lean_ctor_set(x_5, 1, x_14);
lean_ctor_set(x_11, 0, x_5);
return x_11;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_array_fget(x_17, x_19);
x_22 = lean_box(0);
x_23 = lean_array_fset(x_17, x_19, x_22);
switch (lean_obj_tag(x_21)) {
case 1:
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_21);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_21, 1);
x_26 = lean_array_get_size(x_25);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_nat_dec_lt(x_27, x_26);
lean_dec(x_26);
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_4);
x_29 = lean_array_fset(x_23, x_19, x_21);
lean_ctor_set(x_9, 1, x_29);
lean_ctor_set(x_5, 1, x_14);
lean_ctor_set(x_11, 0, x_5);
return x_11;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_array_fget(x_25, x_27);
x_31 = lean_array_fset(x_25, x_27, x_22);
x_32 = l___private_Init_Lean_Elab_StructInst_15__mkProjStx(x_30, x_4);
x_33 = lean_array_fset(x_31, x_27, x_32);
lean_ctor_set(x_21, 1, x_33);
x_34 = lean_array_fset(x_23, x_19, x_21);
lean_ctor_set(x_9, 1, x_34);
lean_ctor_set(x_5, 1, x_14);
lean_ctor_set(x_11, 0, x_5);
return x_11;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_35 = lean_ctor_get(x_21, 0);
x_36 = lean_ctor_get(x_21, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_21);
x_37 = lean_array_get_size(x_36);
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_nat_dec_lt(x_38, x_37);
lean_dec(x_37);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_4);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_35);
lean_ctor_set(x_40, 1, x_36);
x_41 = lean_array_fset(x_23, x_19, x_40);
lean_ctor_set(x_9, 1, x_41);
lean_ctor_set(x_5, 1, x_14);
lean_ctor_set(x_11, 0, x_5);
return x_11;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_42 = lean_array_fget(x_36, x_38);
x_43 = lean_array_fset(x_36, x_38, x_22);
x_44 = l___private_Init_Lean_Elab_StructInst_15__mkProjStx(x_42, x_4);
x_45 = lean_array_fset(x_43, x_38, x_44);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_35);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_array_fset(x_23, x_19, x_46);
lean_ctor_set(x_9, 1, x_47);
lean_ctor_set(x_5, 1, x_14);
lean_ctor_set(x_11, 0, x_5);
return x_11;
}
}
}
case 2:
{
lean_object* x_48; uint8_t x_49; 
lean_free_object(x_9);
lean_dec(x_4);
lean_inc(x_21);
x_48 = lean_array_fset(x_23, x_19, x_21);
x_49 = !lean_is_exclusive(x_21);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_21, 1);
lean_dec(x_50);
x_51 = lean_ctor_get(x_21, 0);
lean_dec(x_51);
lean_ctor_set_tag(x_21, 1);
lean_ctor_set(x_21, 1, x_48);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_5, 1, x_14);
lean_ctor_set(x_5, 0, x_21);
lean_ctor_set(x_11, 0, x_5);
return x_11;
}
else
{
lean_object* x_52; 
lean_dec(x_21);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_16);
lean_ctor_set(x_52, 1, x_48);
lean_ctor_set(x_5, 1, x_14);
lean_ctor_set(x_5, 0, x_52);
lean_ctor_set(x_11, 0, x_5);
return x_11;
}
}
default: 
{
lean_object* x_53; 
lean_dec(x_4);
x_53 = lean_array_fset(x_23, x_19, x_21);
lean_ctor_set(x_9, 1, x_53);
lean_ctor_set(x_5, 1, x_14);
lean_ctor_set(x_11, 0, x_5);
return x_11;
}
}
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_54 = lean_ctor_get(x_9, 0);
x_55 = lean_ctor_get(x_9, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_9);
x_56 = lean_array_get_size(x_55);
x_57 = lean_unsigned_to_nat(1u);
x_58 = lean_nat_dec_lt(x_57, x_56);
lean_dec(x_56);
if (x_58 == 0)
{
lean_object* x_59; 
lean_dec(x_4);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_54);
lean_ctor_set(x_59, 1, x_55);
lean_ctor_set(x_5, 1, x_14);
lean_ctor_set(x_5, 0, x_59);
lean_ctor_set(x_11, 0, x_5);
return x_11;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_array_fget(x_55, x_57);
x_61 = lean_box(0);
x_62 = lean_array_fset(x_55, x_57, x_61);
switch (lean_obj_tag(x_60)) {
case 1:
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_63 = lean_ctor_get(x_60, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_60, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_65 = x_60;
} else {
 lean_dec_ref(x_60);
 x_65 = lean_box(0);
}
x_66 = lean_array_get_size(x_64);
x_67 = lean_unsigned_to_nat(0u);
x_68 = lean_nat_dec_lt(x_67, x_66);
lean_dec(x_66);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_4);
if (lean_is_scalar(x_65)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_65;
}
lean_ctor_set(x_69, 0, x_63);
lean_ctor_set(x_69, 1, x_64);
x_70 = lean_array_fset(x_62, x_57, x_69);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_54);
lean_ctor_set(x_71, 1, x_70);
lean_ctor_set(x_5, 1, x_14);
lean_ctor_set(x_5, 0, x_71);
lean_ctor_set(x_11, 0, x_5);
return x_11;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_72 = lean_array_fget(x_64, x_67);
x_73 = lean_array_fset(x_64, x_67, x_61);
x_74 = l___private_Init_Lean_Elab_StructInst_15__mkProjStx(x_72, x_4);
x_75 = lean_array_fset(x_73, x_67, x_74);
if (lean_is_scalar(x_65)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_65;
}
lean_ctor_set(x_76, 0, x_63);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_array_fset(x_62, x_57, x_76);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_54);
lean_ctor_set(x_78, 1, x_77);
lean_ctor_set(x_5, 1, x_14);
lean_ctor_set(x_5, 0, x_78);
lean_ctor_set(x_11, 0, x_5);
return x_11;
}
}
case 2:
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_4);
lean_inc(x_60);
x_79 = lean_array_fset(x_62, x_57, x_60);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_80 = x_60;
} else {
 lean_dec_ref(x_60);
 x_80 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_81 = lean_alloc_ctor(1, 2, 0);
} else {
 x_81 = x_80;
 lean_ctor_set_tag(x_81, 1);
}
lean_ctor_set(x_81, 0, x_54);
lean_ctor_set(x_81, 1, x_79);
lean_ctor_set(x_5, 1, x_14);
lean_ctor_set(x_5, 0, x_81);
lean_ctor_set(x_11, 0, x_5);
return x_11;
}
default: 
{
lean_object* x_82; lean_object* x_83; 
lean_dec(x_4);
x_82 = lean_array_fset(x_62, x_57, x_60);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_54);
lean_ctor_set(x_83, 1, x_82);
lean_ctor_set(x_5, 1, x_14);
lean_ctor_set(x_5, 0, x_83);
lean_ctor_set(x_11, 0, x_5);
return x_11;
}
}
}
}
}
else
{
lean_dec(x_4);
lean_ctor_set(x_5, 1, x_14);
lean_ctor_set(x_11, 0, x_5);
return x_11;
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_11, 0);
x_85 = lean_ctor_get(x_11, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_11);
x_86 = l_Lean_mkProj(x_2, x_84, x_10);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
x_87 = lean_ctor_get(x_9, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_9, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_89 = x_9;
} else {
 lean_dec_ref(x_9);
 x_89 = lean_box(0);
}
x_90 = lean_array_get_size(x_88);
x_91 = lean_unsigned_to_nat(1u);
x_92 = lean_nat_dec_lt(x_91, x_90);
lean_dec(x_90);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; 
lean_dec(x_4);
if (lean_is_scalar(x_89)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_89;
}
lean_ctor_set(x_93, 0, x_87);
lean_ctor_set(x_93, 1, x_88);
lean_ctor_set(x_5, 1, x_86);
lean_ctor_set(x_5, 0, x_93);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_5);
lean_ctor_set(x_94, 1, x_85);
return x_94;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_array_fget(x_88, x_91);
x_96 = lean_box(0);
x_97 = lean_array_fset(x_88, x_91, x_96);
switch (lean_obj_tag(x_95)) {
case 1:
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_98 = lean_ctor_get(x_95, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_95, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_100 = x_95;
} else {
 lean_dec_ref(x_95);
 x_100 = lean_box(0);
}
x_101 = lean_array_get_size(x_99);
x_102 = lean_unsigned_to_nat(0u);
x_103 = lean_nat_dec_lt(x_102, x_101);
lean_dec(x_101);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_dec(x_4);
if (lean_is_scalar(x_100)) {
 x_104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_104 = x_100;
}
lean_ctor_set(x_104, 0, x_98);
lean_ctor_set(x_104, 1, x_99);
x_105 = lean_array_fset(x_97, x_91, x_104);
if (lean_is_scalar(x_89)) {
 x_106 = lean_alloc_ctor(1, 2, 0);
} else {
 x_106 = x_89;
}
lean_ctor_set(x_106, 0, x_87);
lean_ctor_set(x_106, 1, x_105);
lean_ctor_set(x_5, 1, x_86);
lean_ctor_set(x_5, 0, x_106);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_5);
lean_ctor_set(x_107, 1, x_85);
return x_107;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_108 = lean_array_fget(x_99, x_102);
x_109 = lean_array_fset(x_99, x_102, x_96);
x_110 = l___private_Init_Lean_Elab_StructInst_15__mkProjStx(x_108, x_4);
x_111 = lean_array_fset(x_109, x_102, x_110);
if (lean_is_scalar(x_100)) {
 x_112 = lean_alloc_ctor(1, 2, 0);
} else {
 x_112 = x_100;
}
lean_ctor_set(x_112, 0, x_98);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_array_fset(x_97, x_91, x_112);
if (lean_is_scalar(x_89)) {
 x_114 = lean_alloc_ctor(1, 2, 0);
} else {
 x_114 = x_89;
}
lean_ctor_set(x_114, 0, x_87);
lean_ctor_set(x_114, 1, x_113);
lean_ctor_set(x_5, 1, x_86);
lean_ctor_set(x_5, 0, x_114);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_5);
lean_ctor_set(x_115, 1, x_85);
return x_115;
}
}
case 2:
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_89);
lean_dec(x_4);
lean_inc(x_95);
x_116 = lean_array_fset(x_97, x_91, x_95);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_117 = x_95;
} else {
 lean_dec_ref(x_95);
 x_117 = lean_box(0);
}
if (lean_is_scalar(x_117)) {
 x_118 = lean_alloc_ctor(1, 2, 0);
} else {
 x_118 = x_117;
 lean_ctor_set_tag(x_118, 1);
}
lean_ctor_set(x_118, 0, x_87);
lean_ctor_set(x_118, 1, x_116);
lean_ctor_set(x_5, 1, x_86);
lean_ctor_set(x_5, 0, x_118);
x_119 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_119, 0, x_5);
lean_ctor_set(x_119, 1, x_85);
return x_119;
}
default: 
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_4);
x_120 = lean_array_fset(x_97, x_91, x_95);
if (lean_is_scalar(x_89)) {
 x_121 = lean_alloc_ctor(1, 2, 0);
} else {
 x_121 = x_89;
}
lean_ctor_set(x_121, 0, x_87);
lean_ctor_set(x_121, 1, x_120);
lean_ctor_set(x_5, 1, x_86);
lean_ctor_set(x_5, 0, x_121);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_5);
lean_ctor_set(x_122, 1, x_85);
return x_122;
}
}
}
}
else
{
lean_object* x_123; 
lean_dec(x_4);
lean_ctor_set(x_5, 1, x_86);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_5);
lean_ctor_set(x_123, 1, x_85);
return x_123;
}
}
}
else
{
uint8_t x_124; 
lean_free_object(x_5);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
x_124 = !lean_is_exclusive(x_11);
if (x_124 == 0)
{
return x_11;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_11, 0);
x_126 = lean_ctor_get(x_11, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_11);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_5, 0);
x_129 = lean_ctor_get(x_5, 1);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_130 = l___private_Init_Lean_Elab_StructInst_14__getFieldIdx(x_1, x_2, x_3, x_4, x_6, x_7);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_133 = x_130;
} else {
 lean_dec_ref(x_130);
 x_133 = lean_box(0);
}
x_134 = l_Lean_mkProj(x_2, x_131, x_129);
if (lean_obj_tag(x_128) == 1)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; uint8_t x_140; 
x_135 = lean_ctor_get(x_128, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_128, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_137 = x_128;
} else {
 lean_dec_ref(x_128);
 x_137 = lean_box(0);
}
x_138 = lean_array_get_size(x_136);
x_139 = lean_unsigned_to_nat(1u);
x_140 = lean_nat_dec_lt(x_139, x_138);
lean_dec(x_138);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_4);
if (lean_is_scalar(x_137)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_137;
}
lean_ctor_set(x_141, 0, x_135);
lean_ctor_set(x_141, 1, x_136);
x_142 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_134);
if (lean_is_scalar(x_133)) {
 x_143 = lean_alloc_ctor(0, 2, 0);
} else {
 x_143 = x_133;
}
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_132);
return x_143;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_array_fget(x_136, x_139);
x_145 = lean_box(0);
x_146 = lean_array_fset(x_136, x_139, x_145);
switch (lean_obj_tag(x_144)) {
case 1:
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; 
x_147 = lean_ctor_get(x_144, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_144, 1);
lean_inc(x_148);
if (lean_is_exclusive(x_144)) {
 lean_ctor_release(x_144, 0);
 lean_ctor_release(x_144, 1);
 x_149 = x_144;
} else {
 lean_dec_ref(x_144);
 x_149 = lean_box(0);
}
x_150 = lean_array_get_size(x_148);
x_151 = lean_unsigned_to_nat(0u);
x_152 = lean_nat_dec_lt(x_151, x_150);
lean_dec(x_150);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_4);
if (lean_is_scalar(x_149)) {
 x_153 = lean_alloc_ctor(1, 2, 0);
} else {
 x_153 = x_149;
}
lean_ctor_set(x_153, 0, x_147);
lean_ctor_set(x_153, 1, x_148);
x_154 = lean_array_fset(x_146, x_139, x_153);
if (lean_is_scalar(x_137)) {
 x_155 = lean_alloc_ctor(1, 2, 0);
} else {
 x_155 = x_137;
}
lean_ctor_set(x_155, 0, x_135);
lean_ctor_set(x_155, 1, x_154);
x_156 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_134);
if (lean_is_scalar(x_133)) {
 x_157 = lean_alloc_ctor(0, 2, 0);
} else {
 x_157 = x_133;
}
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_132);
return x_157;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_158 = lean_array_fget(x_148, x_151);
x_159 = lean_array_fset(x_148, x_151, x_145);
x_160 = l___private_Init_Lean_Elab_StructInst_15__mkProjStx(x_158, x_4);
x_161 = lean_array_fset(x_159, x_151, x_160);
if (lean_is_scalar(x_149)) {
 x_162 = lean_alloc_ctor(1, 2, 0);
} else {
 x_162 = x_149;
}
lean_ctor_set(x_162, 0, x_147);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_array_fset(x_146, x_139, x_162);
if (lean_is_scalar(x_137)) {
 x_164 = lean_alloc_ctor(1, 2, 0);
} else {
 x_164 = x_137;
}
lean_ctor_set(x_164, 0, x_135);
lean_ctor_set(x_164, 1, x_163);
x_165 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_134);
if (lean_is_scalar(x_133)) {
 x_166 = lean_alloc_ctor(0, 2, 0);
} else {
 x_166 = x_133;
}
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_132);
return x_166;
}
}
case 2:
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_dec(x_137);
lean_dec(x_4);
lean_inc(x_144);
x_167 = lean_array_fset(x_146, x_139, x_144);
if (lean_is_exclusive(x_144)) {
 lean_ctor_release(x_144, 0);
 lean_ctor_release(x_144, 1);
 x_168 = x_144;
} else {
 lean_dec_ref(x_144);
 x_168 = lean_box(0);
}
if (lean_is_scalar(x_168)) {
 x_169 = lean_alloc_ctor(1, 2, 0);
} else {
 x_169 = x_168;
 lean_ctor_set_tag(x_169, 1);
}
lean_ctor_set(x_169, 0, x_135);
lean_ctor_set(x_169, 1, x_167);
x_170 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_170, 1, x_134);
if (lean_is_scalar(x_133)) {
 x_171 = lean_alloc_ctor(0, 2, 0);
} else {
 x_171 = x_133;
}
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_132);
return x_171;
}
default: 
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_4);
x_172 = lean_array_fset(x_146, x_139, x_144);
if (lean_is_scalar(x_137)) {
 x_173 = lean_alloc_ctor(1, 2, 0);
} else {
 x_173 = x_137;
}
lean_ctor_set(x_173, 0, x_135);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_134);
if (lean_is_scalar(x_133)) {
 x_175 = lean_alloc_ctor(0, 2, 0);
} else {
 x_175 = x_133;
}
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_132);
return x_175;
}
}
}
}
else
{
lean_object* x_176; lean_object* x_177; 
lean_dec(x_4);
x_176 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_176, 0, x_128);
lean_ctor_set(x_176, 1, x_134);
if (lean_is_scalar(x_133)) {
 x_177 = lean_alloc_ctor(0, 2, 0);
} else {
 x_177 = x_133;
}
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_132);
return x_177;
}
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_129);
lean_dec(x_128);
lean_dec(x_4);
lean_dec(x_2);
x_178 = lean_ctor_get(x_130, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_130, 1);
lean_inc(x_179);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_180 = x_130;
} else {
 lean_dec_ref(x_130);
 x_180 = lean_box(0);
}
if (lean_is_scalar(x_180)) {
 x_181 = lean_alloc_ctor(1, 2, 0);
} else {
 x_181 = x_180;
}
lean_ctor_set(x_181, 0, x_178);
lean_ctor_set(x_181, 1, x_179);
return x_181;
}
}
}
else
{
lean_object* x_182; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_182 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_182, 0, x_5);
lean_ctor_set(x_182, 1, x_7);
return x_182;
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_16__mkSubstructSource___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Elab_StructInst_16__mkSubstructSource(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_List_tail_x21___rarg(x_3);
lean_dec(x_3);
lean_ctor_set(x_1, 1, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_9 = l_List_tail_x21___rarg(x_6);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_9);
lean_ctor_set(x_10, 2, x_7);
lean_ctor_set(x_10, 3, x_8);
return x_10;
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_Field_toSyntax(x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__1), 1, 0);
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_StructInst_Field_inhabited(lean_box(0));
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__2___boxed), 2, 0);
return x_1;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = l___private_Init_Lean_Elab_StructInst_13__isSimpleField_x3f(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__1;
lean_inc(x_10);
x_13 = l_List_map___main___rarg(x_12, x_10);
x_14 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
x_15 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_inc(x_7);
lean_inc(x_9);
lean_inc(x_2);
x_16 = l___private_Init_Lean_Elab_StructInst_16__mkSubstructSource(x_14, x_2, x_3, x_9, x_15, x_7, x_8);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
x_20 = l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__2;
x_21 = l_List_head_x21___rarg(x_20, x_10);
lean_dec(x_10);
x_22 = l_Lean_isSubobjectField_x3f(x_4, x_2, x_9);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_dec(x_7);
lean_dec(x_5);
x_23 = lean_unsigned_to_nat(1u);
x_24 = l_Lean_mkOptionalNode___closed__1;
lean_inc(x_14);
x_25 = l_Lean_Syntax_setArg(x_14, x_23, x_24);
x_26 = l_List_redLength___main___rarg(x_13);
x_27 = lean_mk_empty_array_with_capacity(x_26);
lean_dec(x_26);
x_28 = l_List_toArrayAux___main___rarg(x_13, x_27);
x_29 = l_Id_monad;
x_30 = l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__3;
x_31 = lean_unsigned_to_nat(0u);
x_32 = l_Array_umapMAux___main___rarg(x_29, lean_box(0), x_30, x_31, x_28);
x_33 = l_Lean_Elab_Term_StructInst_Source_addSyntax(x_18, x_32);
x_34 = l_Lean_List_format___rarg___closed__2;
x_35 = l_Lean_mkAtomFrom(x_14, x_34);
lean_dec(x_14);
x_36 = l_Lean_mkSepStx(x_33, x_35);
lean_dec(x_33);
x_37 = lean_unsigned_to_nat(2u);
x_38 = l_Lean_Syntax_setArg(x_25, x_37, x_36);
x_39 = !lean_is_exclusive(x_21);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_40 = lean_ctor_get(x_21, 1);
x_41 = lean_ctor_get(x_21, 2);
lean_dec(x_41);
x_42 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_43 = l_List_head_x21___rarg(x_42, x_40);
lean_dec(x_40);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_46, 0, x_38);
lean_ctor_set(x_21, 2, x_46);
lean_ctor_set(x_21, 1, x_45);
lean_ctor_set(x_16, 0, x_21);
return x_16;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_47 = lean_ctor_get(x_21, 0);
x_48 = lean_ctor_get(x_21, 1);
x_49 = lean_ctor_get(x_21, 3);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_21);
x_50 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_51 = l_List_head_x21___rarg(x_50, x_48);
lean_dec(x_48);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_54, 0, x_38);
x_55 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_55, 0, x_47);
lean_ctor_set(x_55, 1, x_53);
lean_ctor_set(x_55, 2, x_54);
lean_ctor_set(x_55, 3, x_49);
lean_ctor_set(x_16, 0, x_55);
return x_16;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_free_object(x_16);
x_56 = lean_ctor_get(x_22, 0);
lean_inc(x_56);
lean_dec(x_22);
x_57 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_57, 0, x_14);
lean_ctor_set(x_57, 1, x_56);
lean_ctor_set(x_57, 2, x_13);
lean_ctor_set(x_57, 3, x_18);
x_58 = lean_apply_3(x_5, x_57, x_7, x_19);
if (lean_obj_tag(x_58) == 0)
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_58);
if (x_59 == 0)
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_21);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_61 = lean_ctor_get(x_58, 0);
x_62 = lean_ctor_get(x_21, 1);
x_63 = lean_ctor_get(x_21, 2);
lean_dec(x_63);
x_64 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_65 = l_List_head_x21___rarg(x_64, x_62);
lean_dec(x_62);
x_66 = lean_box(0);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_68, 0, x_61);
lean_ctor_set(x_21, 2, x_68);
lean_ctor_set(x_21, 1, x_67);
lean_ctor_set(x_58, 0, x_21);
return x_58;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_69 = lean_ctor_get(x_58, 0);
x_70 = lean_ctor_get(x_21, 0);
x_71 = lean_ctor_get(x_21, 1);
x_72 = lean_ctor_get(x_21, 3);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_21);
x_73 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_74 = l_List_head_x21___rarg(x_73, x_71);
lean_dec(x_71);
x_75 = lean_box(0);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_77, 0, x_69);
x_78 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_78, 0, x_70);
lean_ctor_set(x_78, 1, x_76);
lean_ctor_set(x_78, 2, x_77);
lean_ctor_set(x_78, 3, x_72);
lean_ctor_set(x_58, 0, x_78);
return x_58;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_79 = lean_ctor_get(x_58, 0);
x_80 = lean_ctor_get(x_58, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_58);
x_81 = lean_ctor_get(x_21, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_21, 1);
lean_inc(x_82);
x_83 = lean_ctor_get(x_21, 3);
lean_inc(x_83);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 lean_ctor_release(x_21, 1);
 lean_ctor_release(x_21, 2);
 lean_ctor_release(x_21, 3);
 x_84 = x_21;
} else {
 lean_dec_ref(x_21);
 x_84 = lean_box(0);
}
x_85 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_86 = l_List_head_x21___rarg(x_85, x_82);
lean_dec(x_82);
x_87 = lean_box(0);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_89, 0, x_79);
if (lean_is_scalar(x_84)) {
 x_90 = lean_alloc_ctor(0, 4, 0);
} else {
 x_90 = x_84;
}
lean_ctor_set(x_90, 0, x_81);
lean_ctor_set(x_90, 1, x_88);
lean_ctor_set(x_90, 2, x_89);
lean_ctor_set(x_90, 3, x_83);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_80);
return x_91;
}
}
else
{
uint8_t x_92; 
lean_dec(x_21);
x_92 = !lean_is_exclusive(x_58);
if (x_92 == 0)
{
return x_58;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_58, 0);
x_94 = lean_ctor_get(x_58, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_58);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_96 = lean_ctor_get(x_16, 0);
x_97 = lean_ctor_get(x_16, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_16);
x_98 = l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__2;
x_99 = l_List_head_x21___rarg(x_98, x_10);
lean_dec(x_10);
x_100 = l_Lean_isSubobjectField_x3f(x_4, x_2, x_9);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_7);
lean_dec(x_5);
x_101 = lean_unsigned_to_nat(1u);
x_102 = l_Lean_mkOptionalNode___closed__1;
lean_inc(x_14);
x_103 = l_Lean_Syntax_setArg(x_14, x_101, x_102);
x_104 = l_List_redLength___main___rarg(x_13);
x_105 = lean_mk_empty_array_with_capacity(x_104);
lean_dec(x_104);
x_106 = l_List_toArrayAux___main___rarg(x_13, x_105);
x_107 = l_Id_monad;
x_108 = l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__3;
x_109 = lean_unsigned_to_nat(0u);
x_110 = l_Array_umapMAux___main___rarg(x_107, lean_box(0), x_108, x_109, x_106);
x_111 = l_Lean_Elab_Term_StructInst_Source_addSyntax(x_96, x_110);
x_112 = l_Lean_List_format___rarg___closed__2;
x_113 = l_Lean_mkAtomFrom(x_14, x_112);
lean_dec(x_14);
x_114 = l_Lean_mkSepStx(x_111, x_113);
lean_dec(x_111);
x_115 = lean_unsigned_to_nat(2u);
x_116 = l_Lean_Syntax_setArg(x_103, x_115, x_114);
x_117 = lean_ctor_get(x_99, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_99, 1);
lean_inc(x_118);
x_119 = lean_ctor_get(x_99, 3);
lean_inc(x_119);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 lean_ctor_release(x_99, 2);
 lean_ctor_release(x_99, 3);
 x_120 = x_99;
} else {
 lean_dec_ref(x_99);
 x_120 = lean_box(0);
}
x_121 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_122 = l_List_head_x21___rarg(x_121, x_118);
lean_dec(x_118);
x_123 = lean_box(0);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
x_125 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_125, 0, x_116);
if (lean_is_scalar(x_120)) {
 x_126 = lean_alloc_ctor(0, 4, 0);
} else {
 x_126 = x_120;
}
lean_ctor_set(x_126, 0, x_117);
lean_ctor_set(x_126, 1, x_124);
lean_ctor_set(x_126, 2, x_125);
lean_ctor_set(x_126, 3, x_119);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_97);
return x_127;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_100, 0);
lean_inc(x_128);
lean_dec(x_100);
x_129 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_129, 0, x_14);
lean_ctor_set(x_129, 1, x_128);
lean_ctor_set(x_129, 2, x_13);
lean_ctor_set(x_129, 3, x_96);
x_130 = lean_apply_3(x_5, x_129, x_7, x_97);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_133 = x_130;
} else {
 lean_dec_ref(x_130);
 x_133 = lean_box(0);
}
x_134 = lean_ctor_get(x_99, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_99, 1);
lean_inc(x_135);
x_136 = lean_ctor_get(x_99, 3);
lean_inc(x_136);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 lean_ctor_release(x_99, 2);
 lean_ctor_release(x_99, 3);
 x_137 = x_99;
} else {
 lean_dec_ref(x_99);
 x_137 = lean_box(0);
}
x_138 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_139 = l_List_head_x21___rarg(x_138, x_135);
lean_dec(x_135);
x_140 = lean_box(0);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_139);
lean_ctor_set(x_141, 1, x_140);
x_142 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_142, 0, x_131);
if (lean_is_scalar(x_137)) {
 x_143 = lean_alloc_ctor(0, 4, 0);
} else {
 x_143 = x_137;
}
lean_ctor_set(x_143, 0, x_134);
lean_ctor_set(x_143, 1, x_141);
lean_ctor_set(x_143, 2, x_142);
lean_ctor_set(x_143, 3, x_136);
if (lean_is_scalar(x_133)) {
 x_144 = lean_alloc_ctor(0, 2, 0);
} else {
 x_144 = x_133;
}
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_132);
return x_144;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_99);
x_145 = lean_ctor_get(x_130, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_130, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_147 = x_130;
} else {
 lean_dec_ref(x_130);
 x_147 = lean_box(0);
}
if (lean_is_scalar(x_147)) {
 x_148 = lean_alloc_ctor(1, 2, 0);
} else {
 x_148 = x_147;
}
lean_ctor_set(x_148, 0, x_145);
lean_ctor_set(x_148, 1, x_146);
return x_148;
}
}
}
}
else
{
uint8_t x_149; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_149 = !lean_is_exclusive(x_16);
if (x_149 == 0)
{
return x_16;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_150 = lean_ctor_get(x_16, 0);
x_151 = lean_ctor_get(x_16, 1);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_16);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
return x_152;
}
}
}
else
{
lean_object* x_153; lean_object* x_154; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_153 = lean_ctor_get(x_11, 0);
lean_inc(x_153);
lean_dec(x_11);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_8);
return x_154;
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
x_10 = l___private_Init_Lean_Elab_StructInst_12__mkFieldMap(x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_closure((void*)(l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___boxed), 8, 5);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_3);
lean_closure_set(x_13, 3, x_4);
lean_closure_set(x_13, 4, x_5);
x_14 = l_HashMap_toList___rarg(x_11);
lean_dec(x_11);
x_15 = l_List_mapM___main___rarg(x_6, lean_box(0), lean_box(0), x_13, x_14);
x_16 = lean_apply_2(x_15, x_8, x_12);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_10);
if (x_17 == 0)
{
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_10, 0);
x_19 = lean_ctor_get(x_10, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_10);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = l_Lean_Elab_Term_getEnv___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_Elab_Term_StructInst_Struct_structName(x_2);
lean_inc(x_8);
lean_inc(x_6);
x_9 = l_Lean_getStructureFields(x_6, x_8);
x_10 = l_Lean_MetavarContext_MkBinding_mkBinding___closed__1;
lean_inc(x_2);
x_11 = lean_alloc_closure((void*)(l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__4), 9, 6);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_8);
lean_closure_set(x_11, 2, x_9);
lean_closure_set(x_11, 3, x_6);
lean_closure_set(x_11, 4, x_1);
lean_closure_set(x_11, 5, x_10);
x_12 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg(x_10, x_2, x_11);
x_13 = lean_apply_2(x_12, x_3, x_7);
return x_13;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
uint8_t l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 1);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 1);
x_8 = lean_name_eq(x_7, x_1);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_List_find_x3f___main___rarg(x_3, x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_18__addMissingFields___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
lean_inc(x_9);
x_14 = l_Lean_Elab_Term_StructInst_findField_x3f(x_13, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
lean_inc(x_9);
lean_inc(x_3);
x_15 = l_Lean_isSubobjectField_x3f(x_2, x_3, x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_3);
x_16 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
switch (lean_obj_tag(x_16)) {
case 0:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_box(2);
lean_inc(x_4);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_4);
lean_ctor_set(x_18, 1, x_9);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_5);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_21, 0, x_4);
lean_ctor_set(x_21, 1, x_19);
lean_ctor_set(x_21, 2, x_17);
lean_ctor_set(x_21, 3, x_20);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_10);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_12);
return x_23;
}
case 1:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_16);
x_24 = l_Lean_mkHole(x_4);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
lean_inc(x_4);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_4);
lean_ctor_set(x_26, 1, x_9);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_5);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_29, 0, x_4);
lean_ctor_set(x_29, 1, x_27);
lean_ctor_set(x_29, 2, x_25);
lean_ctor_set(x_29, 3, x_28);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_10);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_12);
return x_31;
}
default: 
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_32 = lean_ctor_get(x_16, 0);
lean_inc(x_32);
lean_dec(x_16);
x_33 = lean_unsigned_to_nat(1u);
x_34 = l_Lean_Syntax_getArg(x_32, x_33);
lean_dec(x_32);
x_35 = lean_unsigned_to_nat(0u);
x_36 = l_Lean_Syntax_getArg(x_34, x_35);
lean_dec(x_34);
lean_inc(x_9);
x_37 = l___private_Init_Lean_Elab_StructInst_15__mkProjStx(x_36, x_9);
x_38 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_38, 0, x_37);
lean_inc(x_4);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_4);
lean_ctor_set(x_39, 1, x_9);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_5);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_42, 0, x_4);
lean_ctor_set(x_42, 1, x_40);
lean_ctor_set(x_42, 2, x_38);
lean_ctor_set(x_42, 3, x_41);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_10);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_12);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_15, 0);
lean_inc(x_45);
lean_dec(x_15);
x_46 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_inc(x_11);
lean_inc(x_9);
x_47 = l___private_Init_Lean_Elab_StructInst_16__mkSubstructSource(x_4, x_3, x_6, x_9, x_46, x_11, x_12);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
lean_inc(x_5);
lean_inc(x_4);
x_50 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_50, 0, x_4);
lean_ctor_set(x_50, 1, x_45);
lean_ctor_set(x_50, 2, x_5);
lean_ctor_set(x_50, 3, x_48);
x_51 = lean_apply_3(x_7, x_50, x_11, x_49);
if (lean_obj_tag(x_51) == 0)
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
lean_inc(x_4);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_4);
lean_ctor_set(x_55, 1, x_9);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_5);
x_57 = lean_box(0);
x_58 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_58, 0, x_4);
lean_ctor_set(x_58, 1, x_56);
lean_ctor_set(x_58, 2, x_54);
lean_ctor_set(x_58, 3, x_57);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_10);
lean_ctor_set(x_51, 0, x_59);
return x_51;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_60 = lean_ctor_get(x_51, 0);
x_61 = lean_ctor_get(x_51, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_51);
x_62 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_62, 0, x_60);
lean_inc(x_4);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_4);
lean_ctor_set(x_63, 1, x_9);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_5);
x_65 = lean_box(0);
x_66 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_66, 0, x_4);
lean_ctor_set(x_66, 1, x_64);
lean_ctor_set(x_66, 2, x_62);
lean_ctor_set(x_66, 3, x_65);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_10);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_61);
return x_68;
}
}
else
{
uint8_t x_69; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
x_69 = !lean_is_exclusive(x_51);
if (x_69 == 0)
{
return x_51;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_51, 0);
x_71 = lean_ctor_get(x_51, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_51);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_45);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_73 = !lean_is_exclusive(x_47);
if (x_73 == 0)
{
return x_47;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_47, 0);
x_75 = lean_ctor_get(x_47, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_47);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_77 = lean_ctor_get(x_14, 0);
lean_inc(x_77);
lean_dec(x_14);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_10);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_12);
return x_79;
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_18__addMissingFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_5 = l_Lean_Elab_Term_getEnv___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_Elab_Term_StructInst_Struct_structName(x_2);
lean_inc(x_8);
lean_inc(x_6);
x_9 = l_Lean_getStructureFields(x_6, x_8);
x_10 = l_Lean_Elab_Term_StructInst_Struct_ref(x_2);
x_11 = lean_box(0);
lean_inc(x_9);
lean_inc(x_2);
x_12 = lean_alloc_closure((void*)(l___private_Init_Lean_Elab_StructInst_18__addMissingFields___lambda__1___boxed), 12, 7);
lean_closure_set(x_12, 0, x_2);
lean_closure_set(x_12, 1, x_6);
lean_closure_set(x_12, 2, x_8);
lean_closure_set(x_12, 3, x_10);
lean_closure_set(x_12, 4, x_11);
lean_closure_set(x_12, 5, x_9);
lean_closure_set(x_12, 6, x_1);
x_13 = l_Lean_MetavarContext_MkBinding_mkBinding___closed__1;
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Array_iterateMAux___main___rarg(x_13, lean_box(0), x_9, x_12, x_14, x_11);
x_16 = lean_apply_2(x_15, x_3, x_7);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = l_List_reverse___rarg(x_18);
x_20 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_2, x_19);
lean_ctor_set(x_16, 0, x_20);
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_16);
x_23 = l_List_reverse___rarg(x_21);
x_24 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_2, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_16);
if (x_26 == 0)
{
return x_16;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_16, 0);
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_16);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_18__addMissingFields___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Init_Lean_Elab_StructInst_18__addMissingFields___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_List_map___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_4, 1);
x_8 = l_List_tail_x21___rarg(x_7);
lean_dec(x_7);
lean_ctor_set(x_4, 1, x_8);
x_9 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__2(x_6);
lean_ctor_set(x_1, 1, x_9);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_15 = l_List_tail_x21___rarg(x_12);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 2, x_13);
lean_ctor_set(x_16, 3, x_14);
x_17 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__2(x_10);
lean_ctor_set(x_1, 1, x_17);
lean_ctor_set(x_1, 0, x_16);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_18, 2);
lean_inc(x_22);
x_23 = lean_ctor_get(x_18, 3);
lean_inc(x_23);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 lean_ctor_release(x_18, 2);
 lean_ctor_release(x_18, 3);
 x_24 = x_18;
} else {
 lean_dec_ref(x_18);
 x_24 = lean_box(0);
}
x_25 = l_List_tail_x21___rarg(x_21);
lean_dec(x_21);
if (lean_is_scalar(x_24)) {
 x_26 = lean_alloc_ctor(0, 4, 0);
} else {
 x_26 = x_24;
}
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_22);
lean_ctor_set(x_26, 3, x_23);
x_27 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__2(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__2;
x_3 = l_List_head_x21___rarg___closed__2;
x_4 = lean_panic_fn(x_2, x_3);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
return x_5;
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = l_Array_empty___closed__1;
x_6 = x_2;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_array_fget(x_2, x_1);
x_8 = lean_box(0);
x_9 = x_8;
x_10 = lean_array_fset(x_2, x_1, x_9);
lean_inc(x_7);
x_11 = l_Lean_Elab_Term_StructInst_Field_toSyntax(x_7);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_1, x_12);
x_14 = x_11;
lean_dec(x_7);
x_15 = lean_array_fset(x_10, x_1, x_14);
lean_dec(x_1);
x_1 = x_13;
x_2 = x_15;
goto _start;
}
}
}
lean_object* l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__5(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_3 = l_List_head_x21___rarg___closed__2;
x_4 = lean_panic_fn(x_2, x_3);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
return x_5;
}
}
}
lean_object* l_AssocList_foldlM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_AssocList_foldlM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__7(x_4, x_7);
lean_dec(x_7);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
x_4 = x_8;
goto _start;
}
}
}
lean_object* l_HashMap_toList___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_iterateMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__8(x_1, x_3, x_4, x_2);
return x_5;
}
}
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get(x_5, 1);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l___private_Init_Lean_Elab_StructInst_13__isSimpleField_x3f(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc(x_14);
x_16 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__2(x_14);
x_17 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
x_18 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_inc(x_6);
lean_inc(x_13);
lean_inc(x_3);
x_19 = l___private_Init_Lean_Elab_StructInst_16__mkSubstructSource(x_17, x_3, x_4, x_13, x_18, x_6, x_7);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__3(x_14);
lean_dec(x_14);
lean_inc(x_3);
lean_inc(x_2);
x_23 = l_Lean_isSubobjectField_x3f(x_2, x_3, x_13);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_24 = lean_unsigned_to_nat(1u);
x_25 = l_Lean_mkOptionalNode___closed__1;
lean_inc(x_17);
x_26 = l_Lean_Syntax_setArg(x_17, x_24, x_25);
x_27 = l_List_redLength___main___rarg(x_16);
x_28 = lean_mk_empty_array_with_capacity(x_27);
lean_dec(x_27);
x_29 = l_List_toArrayAux___main___rarg(x_16, x_28);
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Array_umapMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__4(x_30, x_29);
x_32 = l_Lean_Elab_Term_StructInst_Source_addSyntax(x_20, x_31);
x_33 = l_Lean_List_format___rarg___closed__2;
x_34 = l_Lean_mkAtomFrom(x_17, x_33);
lean_dec(x_17);
x_35 = l_Lean_mkSepStx(x_32, x_34);
lean_dec(x_32);
x_36 = lean_unsigned_to_nat(2u);
x_37 = l_Lean_Syntax_setArg(x_26, x_36, x_35);
x_38 = !lean_is_exclusive(x_22);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_22, 1);
x_40 = lean_ctor_get(x_22, 2);
lean_dec(x_40);
x_41 = l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__5(x_39);
lean_dec(x_39);
x_42 = lean_box(0);
lean_ctor_set(x_5, 1, x_42);
lean_ctor_set(x_5, 0, x_41);
x_43 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_43, 0, x_37);
lean_ctor_set(x_22, 2, x_43);
lean_ctor_set(x_22, 1, x_5);
x_44 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__9(x_1, x_2, x_3, x_4, x_12, x_6, x_21);
if (lean_obj_tag(x_44) == 0)
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_44, 0);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_22);
lean_ctor_set(x_47, 1, x_46);
lean_ctor_set(x_44, 0, x_47);
return x_44;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_44, 0);
x_49 = lean_ctor_get(x_44, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_44);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_22);
lean_ctor_set(x_50, 1, x_48);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
else
{
uint8_t x_52; 
lean_dec(x_22);
x_52 = !lean_is_exclusive(x_44);
if (x_52 == 0)
{
return x_44;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_44, 0);
x_54 = lean_ctor_get(x_44, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_44);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_56 = lean_ctor_get(x_22, 0);
x_57 = lean_ctor_get(x_22, 1);
x_58 = lean_ctor_get(x_22, 3);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_22);
x_59 = l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__5(x_57);
lean_dec(x_57);
x_60 = lean_box(0);
lean_ctor_set(x_5, 1, x_60);
lean_ctor_set(x_5, 0, x_59);
x_61 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_61, 0, x_37);
x_62 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_62, 0, x_56);
lean_ctor_set(x_62, 1, x_5);
lean_ctor_set(x_62, 2, x_61);
lean_ctor_set(x_62, 3, x_58);
x_63 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__9(x_1, x_2, x_3, x_4, x_12, x_6, x_21);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_66 = x_63;
} else {
 lean_dec_ref(x_63);
 x_66 = lean_box(0);
}
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_62);
lean_ctor_set(x_67, 1, x_64);
if (lean_is_scalar(x_66)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_66;
}
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_65);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_62);
x_69 = lean_ctor_get(x_63, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_63, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_71 = x_63;
} else {
 lean_dec_ref(x_63);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_23, 0);
lean_inc(x_73);
lean_dec(x_23);
x_74 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_74, 0, x_17);
lean_ctor_set(x_74, 1, x_73);
lean_ctor_set(x_74, 2, x_16);
lean_ctor_set(x_74, 3, x_20);
lean_inc(x_6);
x_75 = l___private_Init_Lean_Elab_StructInst_19__expandStruct___main(x_74, x_6, x_21);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = !lean_is_exclusive(x_22);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_79 = lean_ctor_get(x_22, 1);
x_80 = lean_ctor_get(x_22, 2);
lean_dec(x_80);
x_81 = l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__5(x_79);
lean_dec(x_79);
x_82 = lean_box(0);
lean_ctor_set(x_5, 1, x_82);
lean_ctor_set(x_5, 0, x_81);
x_83 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_83, 0, x_76);
lean_ctor_set(x_22, 2, x_83);
lean_ctor_set(x_22, 1, x_5);
x_84 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__9(x_1, x_2, x_3, x_4, x_12, x_6, x_77);
if (lean_obj_tag(x_84) == 0)
{
uint8_t x_85; 
x_85 = !lean_is_exclusive(x_84);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_ctor_get(x_84, 0);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_22);
lean_ctor_set(x_87, 1, x_86);
lean_ctor_set(x_84, 0, x_87);
return x_84;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_88 = lean_ctor_get(x_84, 0);
x_89 = lean_ctor_get(x_84, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_84);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_22);
lean_ctor_set(x_90, 1, x_88);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
}
else
{
uint8_t x_92; 
lean_dec(x_22);
x_92 = !lean_is_exclusive(x_84);
if (x_92 == 0)
{
return x_84;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_84, 0);
x_94 = lean_ctor_get(x_84, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_84);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_96 = lean_ctor_get(x_22, 0);
x_97 = lean_ctor_get(x_22, 1);
x_98 = lean_ctor_get(x_22, 3);
lean_inc(x_98);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_22);
x_99 = l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__5(x_97);
lean_dec(x_97);
x_100 = lean_box(0);
lean_ctor_set(x_5, 1, x_100);
lean_ctor_set(x_5, 0, x_99);
x_101 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_101, 0, x_76);
x_102 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_102, 0, x_96);
lean_ctor_set(x_102, 1, x_5);
lean_ctor_set(x_102, 2, x_101);
lean_ctor_set(x_102, 3, x_98);
x_103 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__9(x_1, x_2, x_3, x_4, x_12, x_6, x_77);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_106 = x_103;
} else {
 lean_dec_ref(x_103);
 x_106 = lean_box(0);
}
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_102);
lean_ctor_set(x_107, 1, x_104);
if (lean_is_scalar(x_106)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_106;
}
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_105);
return x_108;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_102);
x_109 = lean_ctor_get(x_103, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_103, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_111 = x_103;
} else {
 lean_dec_ref(x_103);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(1, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
}
}
else
{
uint8_t x_113; 
lean_dec(x_22);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_113 = !lean_is_exclusive(x_75);
if (x_113 == 0)
{
return x_75;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_75, 0);
x_115 = lean_ctor_get(x_75, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_75);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
}
else
{
uint8_t x_117; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_117 = !lean_is_exclusive(x_19);
if (x_117 == 0)
{
return x_19;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_19, 0);
x_119 = lean_ctor_get(x_19, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_19);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
return x_120;
}
}
}
else
{
lean_object* x_121; lean_object* x_122; 
lean_dec(x_14);
lean_dec(x_13);
x_121 = lean_ctor_get(x_15, 0);
lean_inc(x_121);
lean_dec(x_15);
x_122 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__9(x_1, x_2, x_3, x_4, x_12, x_6, x_7);
if (lean_obj_tag(x_122) == 0)
{
uint8_t x_123; 
x_123 = !lean_is_exclusive(x_122);
if (x_123 == 0)
{
lean_object* x_124; 
x_124 = lean_ctor_get(x_122, 0);
lean_ctor_set(x_5, 1, x_124);
lean_ctor_set(x_5, 0, x_121);
lean_ctor_set(x_122, 0, x_5);
return x_122;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_122, 0);
x_126 = lean_ctor_get(x_122, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_122);
lean_ctor_set(x_5, 1, x_125);
lean_ctor_set(x_5, 0, x_121);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_5);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
else
{
uint8_t x_128; 
lean_dec(x_121);
lean_free_object(x_5);
x_128 = !lean_is_exclusive(x_122);
if (x_128 == 0)
{
return x_122;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_122, 0);
x_130 = lean_ctor_get(x_122, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_122);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_132 = lean_ctor_get(x_5, 0);
x_133 = lean_ctor_get(x_5, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_5);
x_134 = lean_ctor_get(x_132, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_132, 1);
lean_inc(x_135);
lean_dec(x_132);
x_136 = l___private_Init_Lean_Elab_StructInst_13__isSimpleField_x3f(x_135);
if (lean_obj_tag(x_136) == 0)
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_inc(x_135);
x_137 = l_List_map___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__2(x_135);
x_138 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
x_139 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_inc(x_6);
lean_inc(x_134);
lean_inc(x_3);
x_140 = l___private_Init_Lean_Elab_StructInst_16__mkSubstructSource(x_138, x_3, x_4, x_134, x_139, x_6, x_7);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
lean_dec(x_140);
x_143 = l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__3(x_135);
lean_dec(x_135);
lean_inc(x_3);
lean_inc(x_2);
x_144 = l_Lean_isSubobjectField_x3f(x_2, x_3, x_134);
if (lean_obj_tag(x_144) == 0)
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_145 = lean_unsigned_to_nat(1u);
x_146 = l_Lean_mkOptionalNode___closed__1;
lean_inc(x_138);
x_147 = l_Lean_Syntax_setArg(x_138, x_145, x_146);
x_148 = l_List_redLength___main___rarg(x_137);
x_149 = lean_mk_empty_array_with_capacity(x_148);
lean_dec(x_148);
x_150 = l_List_toArrayAux___main___rarg(x_137, x_149);
x_151 = lean_unsigned_to_nat(0u);
x_152 = l_Array_umapMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__4(x_151, x_150);
x_153 = l_Lean_Elab_Term_StructInst_Source_addSyntax(x_141, x_152);
x_154 = l_Lean_List_format___rarg___closed__2;
x_155 = l_Lean_mkAtomFrom(x_138, x_154);
lean_dec(x_138);
x_156 = l_Lean_mkSepStx(x_153, x_155);
lean_dec(x_153);
x_157 = lean_unsigned_to_nat(2u);
x_158 = l_Lean_Syntax_setArg(x_147, x_157, x_156);
x_159 = lean_ctor_get(x_143, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_143, 1);
lean_inc(x_160);
x_161 = lean_ctor_get(x_143, 3);
lean_inc(x_161);
if (lean_is_exclusive(x_143)) {
 lean_ctor_release(x_143, 0);
 lean_ctor_release(x_143, 1);
 lean_ctor_release(x_143, 2);
 lean_ctor_release(x_143, 3);
 x_162 = x_143;
} else {
 lean_dec_ref(x_143);
 x_162 = lean_box(0);
}
x_163 = l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__5(x_160);
lean_dec(x_160);
x_164 = lean_box(0);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
x_166 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_166, 0, x_158);
if (lean_is_scalar(x_162)) {
 x_167 = lean_alloc_ctor(0, 4, 0);
} else {
 x_167 = x_162;
}
lean_ctor_set(x_167, 0, x_159);
lean_ctor_set(x_167, 1, x_165);
lean_ctor_set(x_167, 2, x_166);
lean_ctor_set(x_167, 3, x_161);
x_168 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__9(x_1, x_2, x_3, x_4, x_133, x_6, x_142);
if (lean_obj_tag(x_168) == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_169 = lean_ctor_get(x_168, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_168, 1);
lean_inc(x_170);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 x_171 = x_168;
} else {
 lean_dec_ref(x_168);
 x_171 = lean_box(0);
}
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_167);
lean_ctor_set(x_172, 1, x_169);
if (lean_is_scalar(x_171)) {
 x_173 = lean_alloc_ctor(0, 2, 0);
} else {
 x_173 = x_171;
}
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_170);
return x_173;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_167);
x_174 = lean_ctor_get(x_168, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_168, 1);
lean_inc(x_175);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 x_176 = x_168;
} else {
 lean_dec_ref(x_168);
 x_176 = lean_box(0);
}
if (lean_is_scalar(x_176)) {
 x_177 = lean_alloc_ctor(1, 2, 0);
} else {
 x_177 = x_176;
}
lean_ctor_set(x_177, 0, x_174);
lean_ctor_set(x_177, 1, x_175);
return x_177;
}
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_144, 0);
lean_inc(x_178);
lean_dec(x_144);
x_179 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_179, 0, x_138);
lean_ctor_set(x_179, 1, x_178);
lean_ctor_set(x_179, 2, x_137);
lean_ctor_set(x_179, 3, x_141);
lean_inc(x_6);
x_180 = l___private_Init_Lean_Elab_StructInst_19__expandStruct___main(x_179, x_6, x_142);
if (lean_obj_tag(x_180) == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_180, 1);
lean_inc(x_182);
lean_dec(x_180);
x_183 = lean_ctor_get(x_143, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_143, 1);
lean_inc(x_184);
x_185 = lean_ctor_get(x_143, 3);
lean_inc(x_185);
if (lean_is_exclusive(x_143)) {
 lean_ctor_release(x_143, 0);
 lean_ctor_release(x_143, 1);
 lean_ctor_release(x_143, 2);
 lean_ctor_release(x_143, 3);
 x_186 = x_143;
} else {
 lean_dec_ref(x_143);
 x_186 = lean_box(0);
}
x_187 = l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__5(x_184);
lean_dec(x_184);
x_188 = lean_box(0);
x_189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_189, 0, x_187);
lean_ctor_set(x_189, 1, x_188);
x_190 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_190, 0, x_181);
if (lean_is_scalar(x_186)) {
 x_191 = lean_alloc_ctor(0, 4, 0);
} else {
 x_191 = x_186;
}
lean_ctor_set(x_191, 0, x_183);
lean_ctor_set(x_191, 1, x_189);
lean_ctor_set(x_191, 2, x_190);
lean_ctor_set(x_191, 3, x_185);
x_192 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__9(x_1, x_2, x_3, x_4, x_133, x_6, x_182);
if (lean_obj_tag(x_192) == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_192, 1);
lean_inc(x_194);
if (lean_is_exclusive(x_192)) {
 lean_ctor_release(x_192, 0);
 lean_ctor_release(x_192, 1);
 x_195 = x_192;
} else {
 lean_dec_ref(x_192);
 x_195 = lean_box(0);
}
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_191);
lean_ctor_set(x_196, 1, x_193);
if (lean_is_scalar(x_195)) {
 x_197 = lean_alloc_ctor(0, 2, 0);
} else {
 x_197 = x_195;
}
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_194);
return x_197;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_191);
x_198 = lean_ctor_get(x_192, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_192, 1);
lean_inc(x_199);
if (lean_is_exclusive(x_192)) {
 lean_ctor_release(x_192, 0);
 lean_ctor_release(x_192, 1);
 x_200 = x_192;
} else {
 lean_dec_ref(x_192);
 x_200 = lean_box(0);
}
if (lean_is_scalar(x_200)) {
 x_201 = lean_alloc_ctor(1, 2, 0);
} else {
 x_201 = x_200;
}
lean_ctor_set(x_201, 0, x_198);
lean_ctor_set(x_201, 1, x_199);
return x_201;
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
lean_dec(x_143);
lean_dec(x_133);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_202 = lean_ctor_get(x_180, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_180, 1);
lean_inc(x_203);
if (lean_is_exclusive(x_180)) {
 lean_ctor_release(x_180, 0);
 lean_ctor_release(x_180, 1);
 x_204 = x_180;
} else {
 lean_dec_ref(x_180);
 x_204 = lean_box(0);
}
if (lean_is_scalar(x_204)) {
 x_205 = lean_alloc_ctor(1, 2, 0);
} else {
 x_205 = x_204;
}
lean_ctor_set(x_205, 0, x_202);
lean_ctor_set(x_205, 1, x_203);
return x_205;
}
}
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
lean_dec(x_138);
lean_dec(x_137);
lean_dec(x_135);
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_206 = lean_ctor_get(x_140, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_140, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_208 = x_140;
} else {
 lean_dec_ref(x_140);
 x_208 = lean_box(0);
}
if (lean_is_scalar(x_208)) {
 x_209 = lean_alloc_ctor(1, 2, 0);
} else {
 x_209 = x_208;
}
lean_ctor_set(x_209, 0, x_206);
lean_ctor_set(x_209, 1, x_207);
return x_209;
}
}
else
{
lean_object* x_210; lean_object* x_211; 
lean_dec(x_135);
lean_dec(x_134);
x_210 = lean_ctor_get(x_136, 0);
lean_inc(x_210);
lean_dec(x_136);
x_211 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__9(x_1, x_2, x_3, x_4, x_133, x_6, x_7);
if (lean_obj_tag(x_211) == 0)
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_212 = lean_ctor_get(x_211, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_211, 1);
lean_inc(x_213);
if (lean_is_exclusive(x_211)) {
 lean_ctor_release(x_211, 0);
 lean_ctor_release(x_211, 1);
 x_214 = x_211;
} else {
 lean_dec_ref(x_211);
 x_214 = lean_box(0);
}
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_210);
lean_ctor_set(x_215, 1, x_212);
if (lean_is_scalar(x_214)) {
 x_216 = lean_alloc_ctor(0, 2, 0);
} else {
 x_216 = x_214;
}
lean_ctor_set(x_216, 0, x_215);
lean_ctor_set(x_216, 1, x_213);
return x_216;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_210);
x_217 = lean_ctor_get(x_211, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_211, 1);
lean_inc(x_218);
if (lean_is_exclusive(x_211)) {
 lean_ctor_release(x_211, 0);
 lean_ctor_release(x_211, 1);
 x_219 = x_211;
} else {
 lean_dec_ref(x_211);
 x_219 = lean_box(0);
}
if (lean_is_scalar(x_219)) {
 x_220 = lean_alloc_ctor(1, 2, 0);
} else {
 x_220 = x_219;
}
lean_ctor_set(x_220, 0, x_217);
lean_ctor_set(x_220, 1, x_218);
return x_220;
}
}
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
x_8 = l___private_Init_Lean_Elab_StructInst_12__mkFieldMap(x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_HashMap_toList___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__6(x_9);
lean_dec(x_9);
x_12 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__9(x_1, x_2, x_3, x_4, x_11, x_6, x_10);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = l_Lean_Elab_Term_getEnv___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_inc(x_7);
lean_inc(x_5);
x_8 = l_Lean_getStructureFields(x_5, x_7);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l___private_Init_Lean_Elab_StructInst_17__groupFields___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__1___lambda__1___boxed), 7, 4);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_5);
lean_closure_set(x_9, 2, x_7);
lean_closure_set(x_9, 3, x_8);
x_10 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__2(x_1, x_9, x_2, x_6);
return x_10;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_7);
x_13 = lean_nat_dec_lt(x_8, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_array_fget(x_7, x_8);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_8, x_16);
lean_dec(x_8);
x_18 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
lean_inc(x_15);
x_19 = l_Lean_Elab_Term_StructInst_findField_x3f(x_18, x_15);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
lean_inc(x_15);
lean_inc(x_3);
lean_inc(x_2);
x_20 = l_Lean_isSubobjectField_x3f(x_2, x_3, x_15);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
switch (lean_obj_tag(x_21)) {
case 0:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_22 = lean_box(2);
lean_inc(x_5);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_5);
lean_ctor_set(x_23, 1, x_15);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_box(0);
lean_inc(x_5);
x_27 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_27, 0, x_5);
lean_ctor_set(x_27, 1, x_25);
lean_ctor_set(x_27, 2, x_22);
lean_ctor_set(x_27, 3, x_26);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_9);
x_8 = x_17;
x_9 = x_28;
goto _start;
}
case 1:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_21);
x_30 = l_Lean_mkHole(x_5);
x_31 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_31, 0, x_30);
lean_inc(x_5);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_5);
lean_ctor_set(x_32, 1, x_15);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_box(0);
lean_inc(x_5);
x_36 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_36, 0, x_5);
lean_ctor_set(x_36, 1, x_34);
lean_ctor_set(x_36, 2, x_31);
lean_ctor_set(x_36, 3, x_35);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_9);
x_8 = x_17;
x_9 = x_37;
goto _start;
}
default: 
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_39 = lean_ctor_get(x_21, 0);
lean_inc(x_39);
lean_dec(x_21);
x_40 = l_Lean_Syntax_getArg(x_39, x_16);
lean_dec(x_39);
x_41 = lean_unsigned_to_nat(0u);
x_42 = l_Lean_Syntax_getArg(x_40, x_41);
lean_dec(x_40);
lean_inc(x_15);
x_43 = l___private_Init_Lean_Elab_StructInst_15__mkProjStx(x_42, x_15);
x_44 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_44, 0, x_43);
lean_inc(x_5);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_5);
lean_ctor_set(x_45, 1, x_15);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_box(0);
lean_inc(x_5);
x_49 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_49, 0, x_5);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set(x_49, 2, x_44);
lean_ctor_set(x_49, 3, x_48);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_9);
x_8 = x_17;
x_9 = x_50;
goto _start;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_20, 0);
lean_inc(x_52);
lean_dec(x_20);
x_53 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_inc(x_10);
lean_inc(x_15);
lean_inc(x_3);
x_54 = l___private_Init_Lean_Elab_StructInst_16__mkSubstructSource(x_5, x_3, x_4, x_15, x_53, x_10, x_11);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
lean_inc(x_6);
lean_inc(x_5);
x_57 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_57, 0, x_5);
lean_ctor_set(x_57, 1, x_52);
lean_ctor_set(x_57, 2, x_6);
lean_ctor_set(x_57, 3, x_55);
lean_inc(x_10);
x_58 = l___private_Init_Lean_Elab_StructInst_19__expandStruct___main(x_57, x_10, x_56);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_59);
lean_inc(x_5);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_5);
lean_ctor_set(x_62, 1, x_15);
x_63 = lean_box(0);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_box(0);
lean_inc(x_5);
x_66 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_66, 0, x_5);
lean_ctor_set(x_66, 1, x_64);
lean_ctor_set(x_66, 2, x_61);
lean_ctor_set(x_66, 3, x_65);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_9);
x_8 = x_17;
x_9 = x_67;
x_11 = x_60;
goto _start;
}
else
{
uint8_t x_69; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_69 = !lean_is_exclusive(x_58);
if (x_69 == 0)
{
return x_58;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_58, 0);
x_71 = lean_ctor_get(x_58, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_58);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_52);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_73 = !lean_is_exclusive(x_54);
if (x_73 == 0)
{
return x_54;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_54, 0);
x_75 = lean_ctor_get(x_54, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_54);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
else
{
lean_object* x_77; lean_object* x_78; 
lean_dec(x_15);
x_77 = lean_ctor_get(x_19, 0);
lean_inc(x_77);
lean_dec(x_19);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_9);
x_8 = x_17;
x_9 = x_78;
goto _start;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_18__addMissingFields___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = l_Lean_Elab_Term_getEnv___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_inc(x_7);
lean_inc(x_5);
x_8 = l_Lean_getStructureFields(x_5, x_7);
x_9 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
x_10 = lean_box(0);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_iterateMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__11(x_1, x_5, x_7, x_8, x_9, x_10, x_8, x_11, x_10, x_2, x_6);
lean_dec(x_8);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_List_reverse___rarg(x_14);
x_16 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_15);
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = l_List_reverse___rarg(x_17);
x_20 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_12);
if (x_22 == 0)
{
return x_12;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_19__expandStruct___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___closed__1;
x_5 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(x_1, x_4);
lean_inc(x_2);
x_6 = l___private_Init_Lean_Elab_StructInst_9__expandNumLitFields(x_5, x_2, x_3);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
lean_inc(x_2);
x_9 = l___private_Init_Lean_Elab_StructInst_10__expandParentFields(x_7, x_2, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_2);
x_12 = l___private_Init_Lean_Elab_StructInst_17__groupFields___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__1(x_10, x_2, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Init_Lean_Elab_StructInst_18__addMissingFields___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__10(x_13, x_2, x_14);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
uint8_t x_20; 
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_9);
if (x_20 == 0)
{
return x_9;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_6);
if (x_24 == 0)
{
return x_6;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_6, 0);
x_26 = lean_ctor_get(x_6, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_6);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__5___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_head_x21___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__5(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_AssocList_foldlM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AssocList_foldlM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_iterateMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__8(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_HashMap_toList___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__6___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_HashMap_toList___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__6(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_17__groupFields___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Elab_StructInst_17__groupFields___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateMAux___main___at___private_Init_Lean_Elab_StructInst_19__expandStruct___main___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_19__expandStruct(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Elab_StructInst_19__expandStruct___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected constructor type");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_2, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_2, x_10);
lean_dec(x_2);
lean_inc(x_6);
x_12 = l_Lean_Elab_Term_whnfForall(x_1, x_3, x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 7)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; lean_object* x_18; uint8_t x_29; lean_object* x_30; 
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 2);
lean_inc(x_16);
x_17 = lean_ctor_get_uint64(x_13, sizeof(void*)*3);
lean_dec(x_13);
x_29 = (uint8_t)((x_17 << 24) >> 61);
x_30 = lean_box(x_29);
if (lean_obj_tag(x_30) == 3)
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_15);
x_32 = 1;
x_33 = lean_box(0);
lean_inc(x_6);
x_34 = l_Lean_Elab_Term_mkFreshExprMVar(x_1, x_31, x_32, x_33, x_6, x_14);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_expr_instantiate1(x_16, x_35);
lean_dec(x_16);
lean_inc(x_35);
x_38 = l_Lean_mkApp(x_4, x_35);
x_39 = l_Lean_Expr_mvarId_x21(x_35);
lean_dec(x_35);
x_40 = lean_array_push(x_5, x_39);
x_2 = x_11;
x_3 = x_37;
x_4 = x_38;
x_5 = x_40;
x_7 = x_36;
goto _start;
}
else
{
lean_object* x_42; 
lean_dec(x_30);
x_42 = lean_box(0);
x_18 = x_42;
goto block_28;
}
block_28:
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_18);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_15);
x_20 = 0;
x_21 = lean_box(0);
lean_inc(x_6);
x_22 = l_Lean_Elab_Term_mkFreshExprMVar(x_1, x_19, x_20, x_21, x_6, x_14);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_expr_instantiate1(x_16, x_23);
lean_dec(x_16);
x_26 = l_Lean_mkApp(x_4, x_23);
x_2 = x_11;
x_3 = x_25;
x_4 = x_26;
x_7 = x_24;
goto _start;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
x_43 = lean_ctor_get(x_12, 1);
lean_inc(x_43);
lean_dec(x_12);
x_44 = l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__3;
x_45 = l_Lean_Elab_Term_throwError___rarg(x_1, x_44, x_6, x_43);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_46 = !lean_is_exclusive(x_12);
if (x_46 == 0)
{
return x_12;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_12, 0);
x_48 = lean_ctor_get(x_12, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_12);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_6);
lean_dec(x_2);
x_50 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_50, 0, x_4);
lean_ctor_set(x_50, 1, x_3);
lean_ctor_set(x_50, 2, x_5);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_7);
return x_51;
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_21__getForallBody___main(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
if (lean_obj_tag(x_2) == 7)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
lean_dec(x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
}
else
{
lean_object* x_10; 
lean_dec(x_1);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_2);
return x_10;
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_21__getForallBody(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_Lean_Elab_StructInst_21__getForallBody___main(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_22__propagateExpectedType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec(x_4);
x_10 = l___private_Init_Lean_Elab_StructInst_21__getForallBody___main(x_3, x_2);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_5);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l_Lean_Expr_hasLooseBVars(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = l_Lean_Elab_Term_isDefEq(x_1, x_9, x_13, x_5, x_6);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
x_18 = lean_box(0);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_15);
if (x_22 == 0)
{
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_15, 0);
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_15);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_5);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_6);
return x_27;
}
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_22__propagateExpectedType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Elab_StructInst_22__propagateExpectedType(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_23__mkCtorHeader___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_2, 0);
lean_dec(x_9);
lean_inc(x_3);
x_10 = l_Lean_Elab_Term_mkFreshLevelMVar(x_1, x_3, x_4);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_23__mkCtorHeader___spec__1(x_1, x_8, x_3, x_12);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_ctor_set(x_2, 1, x_15);
lean_ctor_set(x_2, 0, x_11);
lean_ctor_set(x_13, 0, x_2);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_2, 1, x_16);
lean_ctor_set(x_2, 0, x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_19 = lean_ctor_get(x_2, 1);
lean_inc(x_19);
lean_dec(x_2);
lean_inc(x_3);
x_20 = l_Lean_Elab_Term_mkFreshLevelMVar(x_1, x_3, x_4);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_23__mkCtorHeader___spec__1(x_1, x_19, x_3, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_24);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_23__mkCtorHeader(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_inc(x_4);
x_8 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_23__mkCtorHeader___spec__1(x_1, x_7, x_4, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
lean_inc(x_9);
x_12 = l_Lean_mkConst(x_11, x_9);
lean_inc(x_2);
x_13 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_13, 0, x_2);
x_14 = lean_instantiate_type_lparams(x_13, x_9);
lean_dec(x_9);
lean_dec(x_13);
x_15 = lean_ctor_get(x_2, 3);
lean_inc(x_15);
x_16 = l_Array_empty___closed__1;
lean_inc(x_4);
x_17 = l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main(x_1, x_15, x_14, x_12, x_16, x_4, x_10);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_2, 4);
lean_inc(x_21);
lean_dec(x_2);
lean_inc(x_4);
x_22 = l___private_Init_Lean_Elab_StructInst_22__propagateExpectedType(x_1, x_20, x_21, x_3, x_4, x_19);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_ctor_get(x_18, 2);
lean_inc(x_24);
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Array_forMAux___main___at_Lean_Elab_Term_synthesizeAppInstMVars___spec__1(x_1, x_24, x_25, x_4, x_23);
lean_dec(x_24);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_18);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_18);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_dec(x_18);
x_31 = !lean_is_exclusive(x_26);
if (x_31 == 0)
{
return x_26;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_26, 0);
x_33 = lean_ctor_get(x_26, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_26);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_18);
lean_dec(x_4);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_22);
if (x_35 == 0)
{
return x_22;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_22, 0);
x_37 = lean_ctor_get(x_22, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_22);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_17);
if (x_39 == 0)
{
return x_17;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_17, 0);
x_41 = lean_ctor_get(x_17, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_17);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
lean_object* l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_23__mkCtorHeader___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_23__mkCtorHeader___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("structInstDefault");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_markDefaultMissing(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__2;
x_3 = l_Lean_mkAnnotation(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_isDefaultMissing_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__2;
x_3 = l_Lean_isAnnotation_x3f(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_isDefaultMissing_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_isDefaultMissing_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to elaborate field '");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' of '");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_7 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_7, 0, x_2);
x_8 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__3;
x_9 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__6;
x_11 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_12, 0, x_3);
x_13 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_MessageData_arrayExpr_toMessageData___main___closed__2;
x_15 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_4);
x_17 = l_Lean_Elab_Term_throwError___rarg(x_1, x_16, x_5, x_6);
return x_17;
}
}
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected unexpanded structure field");
return x_1;
}
}
lean_object* _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_19; lean_object* x_24; lean_object* x_25; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 1);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
lean_dec(x_24);
lean_free_object(x_3);
lean_dec(x_2);
x_26 = lean_box(0);
x_19 = x_26;
goto block_23;
}
else
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_2);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_2, 0);
x_31 = lean_ctor_get(x_2, 1);
lean_dec(x_31);
x_32 = !lean_is_exclusive(x_24);
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_8);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_24, 0);
x_35 = lean_ctor_get(x_24, 1);
x_36 = lean_ctor_get(x_8, 0);
x_37 = lean_ctor_get(x_8, 2);
x_38 = lean_ctor_get(x_8, 3);
lean_dec(x_38);
x_39 = lean_ctor_get(x_8, 1);
lean_dec(x_39);
x_40 = lean_ctor_get(x_27, 1);
lean_inc(x_40);
lean_dec(x_27);
lean_inc(x_4);
x_41 = l_Lean_Elab_Term_whnfForall(x_36, x_34, x_4, x_5);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
if (lean_obj_tag(x_42) == 7)
{
lean_dec(x_40);
switch (lean_obj_tag(x_37)) {
case 0:
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; 
x_51 = lean_ctor_get(x_42, 1);
lean_inc(x_51);
x_52 = lean_ctor_get(x_42, 2);
lean_inc(x_52);
lean_dec(x_42);
x_53 = lean_ctor_get(x_37, 0);
lean_inc(x_53);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_51);
x_55 = 1;
lean_inc(x_4);
x_56 = l_Lean_Elab_Term_elabTerm(x_53, x_54, x_55, x_4, x_43);
if (lean_obj_tag(x_56) == 0)
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_58 = lean_ctor_get(x_56, 0);
lean_inc(x_58);
x_59 = l_Lean_mkApp(x_30, x_58);
x_60 = lean_expr_instantiate1(x_52, x_58);
lean_dec(x_52);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_8, 3, x_61);
lean_ctor_set(x_3, 1, x_35);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_60);
lean_ctor_set(x_2, 0, x_59);
lean_ctor_set(x_56, 0, x_2);
x_10 = x_56;
goto block_18;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_62 = lean_ctor_get(x_56, 0);
x_63 = lean_ctor_get(x_56, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_56);
lean_inc(x_62);
x_64 = l_Lean_mkApp(x_30, x_62);
x_65 = lean_expr_instantiate1(x_52, x_62);
lean_dec(x_52);
x_66 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_66, 0, x_62);
lean_ctor_set(x_8, 3, x_66);
lean_ctor_set(x_3, 1, x_35);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_65);
lean_ctor_set(x_2, 0, x_64);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_2);
lean_ctor_set(x_67, 1, x_63);
x_10 = x_67;
goto block_18;
}
}
else
{
uint8_t x_68; 
lean_dec(x_52);
lean_free_object(x_8);
lean_dec(x_37);
lean_dec(x_36);
lean_free_object(x_24);
lean_dec(x_35);
lean_free_object(x_2);
lean_dec(x_30);
lean_dec(x_25);
lean_free_object(x_3);
x_68 = !lean_is_exclusive(x_56);
if (x_68 == 0)
{
x_10 = x_56;
goto block_18;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_56, 0);
x_70 = lean_ctor_get(x_56, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_56);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
x_10 = x_71;
goto block_18;
}
}
}
case 1:
{
lean_object* x_72; lean_object* x_73; uint8_t x_74; 
lean_free_object(x_2);
x_72 = lean_ctor_get(x_42, 1);
lean_inc(x_72);
x_73 = lean_ctor_get(x_42, 2);
lean_inc(x_73);
lean_dec(x_42);
x_74 = !lean_is_exclusive(x_37);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_37, 0);
x_76 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_76, 0, x_72);
lean_inc(x_4);
x_77 = l___private_Init_Lean_Elab_StructInst_24__elabStruct___main(x_75, x_76, x_4, x_43);
if (lean_obj_tag(x_77) == 0)
{
uint8_t x_78; 
x_78 = !lean_is_exclusive(x_77);
if (x_78 == 0)
{
lean_object* x_79; uint8_t x_80; 
x_79 = lean_ctor_get(x_77, 0);
x_80 = !lean_is_exclusive(x_79);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_81 = lean_ctor_get(x_79, 0);
x_82 = lean_ctor_get(x_79, 1);
lean_ctor_set(x_37, 0, x_82);
lean_inc(x_81);
x_83 = l_Lean_mkApp(x_30, x_81);
x_84 = lean_expr_instantiate1(x_73, x_81);
lean_dec(x_73);
x_85 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_85, 0, x_81);
lean_ctor_set(x_8, 3, x_85);
lean_ctor_set(x_3, 1, x_35);
lean_ctor_set(x_79, 1, x_3);
lean_ctor_set(x_79, 0, x_84);
lean_ctor_set(x_24, 1, x_79);
lean_ctor_set(x_24, 0, x_83);
lean_ctor_set(x_77, 0, x_24);
x_10 = x_77;
goto block_18;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_86 = lean_ctor_get(x_79, 0);
x_87 = lean_ctor_get(x_79, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_79);
lean_ctor_set(x_37, 0, x_87);
lean_inc(x_86);
x_88 = l_Lean_mkApp(x_30, x_86);
x_89 = lean_expr_instantiate1(x_73, x_86);
lean_dec(x_73);
x_90 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_90, 0, x_86);
lean_ctor_set(x_8, 3, x_90);
lean_ctor_set(x_3, 1, x_35);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_3);
lean_ctor_set(x_24, 1, x_91);
lean_ctor_set(x_24, 0, x_88);
lean_ctor_set(x_77, 0, x_24);
x_10 = x_77;
goto block_18;
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_92 = lean_ctor_get(x_77, 0);
x_93 = lean_ctor_get(x_77, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_77);
x_94 = lean_ctor_get(x_92, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_92, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_96 = x_92;
} else {
 lean_dec_ref(x_92);
 x_96 = lean_box(0);
}
lean_ctor_set(x_37, 0, x_95);
lean_inc(x_94);
x_97 = l_Lean_mkApp(x_30, x_94);
x_98 = lean_expr_instantiate1(x_73, x_94);
lean_dec(x_73);
x_99 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_99, 0, x_94);
lean_ctor_set(x_8, 3, x_99);
lean_ctor_set(x_3, 1, x_35);
if (lean_is_scalar(x_96)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_96;
}
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_3);
lean_ctor_set(x_24, 1, x_100);
lean_ctor_set(x_24, 0, x_97);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_24);
lean_ctor_set(x_101, 1, x_93);
x_10 = x_101;
goto block_18;
}
}
else
{
uint8_t x_102; 
lean_free_object(x_37);
lean_dec(x_73);
lean_free_object(x_8);
lean_dec(x_36);
lean_free_object(x_24);
lean_dec(x_35);
lean_dec(x_30);
lean_dec(x_25);
lean_free_object(x_3);
x_102 = !lean_is_exclusive(x_77);
if (x_102 == 0)
{
x_10 = x_77;
goto block_18;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_77, 0);
x_104 = lean_ctor_get(x_77, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_77);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
x_10 = x_105;
goto block_18;
}
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_37, 0);
lean_inc(x_106);
lean_dec(x_37);
x_107 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_107, 0, x_72);
lean_inc(x_4);
x_108 = l___private_Init_Lean_Elab_StructInst_24__elabStruct___main(x_106, x_107, x_4, x_43);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_111 = x_108;
} else {
 lean_dec_ref(x_108);
 x_111 = lean_box(0);
}
x_112 = lean_ctor_get(x_109, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_109, 1);
lean_inc(x_113);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_114 = x_109;
} else {
 lean_dec_ref(x_109);
 x_114 = lean_box(0);
}
x_115 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_115, 0, x_113);
lean_inc(x_112);
x_116 = l_Lean_mkApp(x_30, x_112);
x_117 = lean_expr_instantiate1(x_73, x_112);
lean_dec(x_73);
x_118 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_118, 0, x_112);
lean_ctor_set(x_8, 3, x_118);
lean_ctor_set(x_8, 2, x_115);
lean_ctor_set(x_3, 1, x_35);
if (lean_is_scalar(x_114)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_114;
}
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_3);
lean_ctor_set(x_24, 1, x_119);
lean_ctor_set(x_24, 0, x_116);
if (lean_is_scalar(x_111)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_111;
}
lean_ctor_set(x_120, 0, x_24);
lean_ctor_set(x_120, 1, x_110);
x_10 = x_120;
goto block_18;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
lean_dec(x_73);
lean_free_object(x_8);
lean_dec(x_36);
lean_free_object(x_24);
lean_dec(x_35);
lean_dec(x_30);
lean_dec(x_25);
lean_free_object(x_3);
x_121 = lean_ctor_get(x_108, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_108, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_123 = x_108;
} else {
 lean_dec_ref(x_108);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(1, 2, 0);
} else {
 x_124 = x_123;
}
lean_ctor_set(x_124, 0, x_121);
lean_ctor_set(x_124, 1, x_122);
x_10 = x_124;
goto block_18;
}
}
}
default: 
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; 
x_125 = lean_ctor_get(x_42, 1);
lean_inc(x_125);
x_126 = lean_ctor_get(x_42, 2);
lean_inc(x_126);
lean_dec(x_42);
x_127 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_127, 0, x_125);
x_128 = 0;
x_129 = lean_box(0);
lean_inc(x_4);
x_130 = l_Lean_Elab_Term_mkFreshExprMVar(x_36, x_127, x_128, x_129, x_4, x_43);
x_131 = !lean_is_exclusive(x_130);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_132 = lean_ctor_get(x_130, 0);
x_133 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_132);
lean_inc(x_133);
x_134 = l_Lean_mkApp(x_30, x_133);
x_135 = lean_expr_instantiate1(x_126, x_133);
lean_dec(x_126);
x_136 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_8, 3, x_136);
lean_ctor_set(x_3, 1, x_35);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_135);
lean_ctor_set(x_2, 0, x_134);
lean_ctor_set(x_130, 0, x_2);
x_10 = x_130;
goto block_18;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_137 = lean_ctor_get(x_130, 0);
x_138 = lean_ctor_get(x_130, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_130);
x_139 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_137);
lean_inc(x_139);
x_140 = l_Lean_mkApp(x_30, x_139);
x_141 = lean_expr_instantiate1(x_126, x_139);
lean_dec(x_126);
x_142 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_142, 0, x_139);
lean_ctor_set(x_8, 3, x_142);
lean_ctor_set(x_3, 1, x_35);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_141);
lean_ctor_set(x_2, 0, x_140);
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_2);
lean_ctor_set(x_143, 1, x_138);
x_10 = x_143;
goto block_18;
}
}
}
}
else
{
lean_object* x_144; 
lean_free_object(x_8);
lean_dec(x_37);
lean_free_object(x_24);
lean_dec(x_35);
lean_free_object(x_2);
lean_dec(x_30);
lean_dec(x_25);
lean_free_object(x_3);
x_144 = lean_box(0);
x_44 = x_144;
goto block_50;
}
block_50:
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_44);
x_45 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_45, 0, x_42);
x_46 = l_Lean_indentExpr(x_45);
x_47 = l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__3;
x_48 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
lean_inc(x_4);
lean_inc(x_1);
x_49 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_36, x_40, x_1, x_48, x_4, x_43);
lean_dec(x_36);
x_10 = x_49;
goto block_18;
}
}
else
{
uint8_t x_145; 
lean_dec(x_40);
lean_free_object(x_8);
lean_dec(x_37);
lean_dec(x_36);
lean_free_object(x_24);
lean_dec(x_35);
lean_free_object(x_2);
lean_dec(x_30);
lean_dec(x_25);
lean_free_object(x_3);
x_145 = !lean_is_exclusive(x_41);
if (x_145 == 0)
{
x_10 = x_41;
goto block_18;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_146 = lean_ctor_get(x_41, 0);
x_147 = lean_ctor_get(x_41, 1);
lean_inc(x_147);
lean_inc(x_146);
lean_dec(x_41);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_147);
x_10 = x_148;
goto block_18;
}
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_149 = lean_ctor_get(x_24, 0);
x_150 = lean_ctor_get(x_24, 1);
x_151 = lean_ctor_get(x_8, 0);
x_152 = lean_ctor_get(x_8, 2);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_8);
x_153 = lean_ctor_get(x_27, 1);
lean_inc(x_153);
lean_dec(x_27);
lean_inc(x_4);
x_154 = l_Lean_Elab_Term_whnfForall(x_151, x_149, x_4, x_5);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_154, 1);
lean_inc(x_156);
lean_dec(x_154);
if (lean_obj_tag(x_155) == 7)
{
lean_dec(x_153);
switch (lean_obj_tag(x_152)) {
case 0:
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; 
x_164 = lean_ctor_get(x_155, 1);
lean_inc(x_164);
x_165 = lean_ctor_get(x_155, 2);
lean_inc(x_165);
lean_dec(x_155);
x_166 = lean_ctor_get(x_152, 0);
lean_inc(x_166);
x_167 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_167, 0, x_164);
x_168 = 1;
lean_inc(x_4);
x_169 = l_Lean_Elab_Term_elabTerm(x_166, x_167, x_168, x_4, x_156);
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_169, 1);
lean_inc(x_171);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 x_172 = x_169;
} else {
 lean_dec_ref(x_169);
 x_172 = lean_box(0);
}
lean_inc(x_170);
x_173 = l_Lean_mkApp(x_30, x_170);
x_174 = lean_expr_instantiate1(x_165, x_170);
lean_dec(x_165);
x_175 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_175, 0, x_170);
x_176 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_176, 0, x_151);
lean_ctor_set(x_176, 1, x_25);
lean_ctor_set(x_176, 2, x_152);
lean_ctor_set(x_176, 3, x_175);
lean_ctor_set(x_3, 1, x_150);
lean_ctor_set(x_3, 0, x_176);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_174);
lean_ctor_set(x_2, 0, x_173);
if (lean_is_scalar(x_172)) {
 x_177 = lean_alloc_ctor(0, 2, 0);
} else {
 x_177 = x_172;
}
lean_ctor_set(x_177, 0, x_2);
lean_ctor_set(x_177, 1, x_171);
x_10 = x_177;
goto block_18;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_165);
lean_dec(x_152);
lean_dec(x_151);
lean_free_object(x_24);
lean_dec(x_150);
lean_free_object(x_2);
lean_dec(x_30);
lean_dec(x_25);
lean_free_object(x_3);
x_178 = lean_ctor_get(x_169, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_169, 1);
lean_inc(x_179);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 x_180 = x_169;
} else {
 lean_dec_ref(x_169);
 x_180 = lean_box(0);
}
if (lean_is_scalar(x_180)) {
 x_181 = lean_alloc_ctor(1, 2, 0);
} else {
 x_181 = x_180;
}
lean_ctor_set(x_181, 0, x_178);
lean_ctor_set(x_181, 1, x_179);
x_10 = x_181;
goto block_18;
}
}
case 1:
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
lean_free_object(x_2);
x_182 = lean_ctor_get(x_155, 1);
lean_inc(x_182);
x_183 = lean_ctor_get(x_155, 2);
lean_inc(x_183);
lean_dec(x_155);
x_184 = lean_ctor_get(x_152, 0);
lean_inc(x_184);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 x_185 = x_152;
} else {
 lean_dec_ref(x_152);
 x_185 = lean_box(0);
}
x_186 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_186, 0, x_182);
lean_inc(x_4);
x_187 = l___private_Init_Lean_Elab_StructInst_24__elabStruct___main(x_184, x_186, x_4, x_156);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_190 = x_187;
} else {
 lean_dec_ref(x_187);
 x_190 = lean_box(0);
}
x_191 = lean_ctor_get(x_188, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_188, 1);
lean_inc(x_192);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_193 = x_188;
} else {
 lean_dec_ref(x_188);
 x_193 = lean_box(0);
}
if (lean_is_scalar(x_185)) {
 x_194 = lean_alloc_ctor(1, 1, 0);
} else {
 x_194 = x_185;
}
lean_ctor_set(x_194, 0, x_192);
lean_inc(x_191);
x_195 = l_Lean_mkApp(x_30, x_191);
x_196 = lean_expr_instantiate1(x_183, x_191);
lean_dec(x_183);
x_197 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_197, 0, x_191);
x_198 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_198, 0, x_151);
lean_ctor_set(x_198, 1, x_25);
lean_ctor_set(x_198, 2, x_194);
lean_ctor_set(x_198, 3, x_197);
lean_ctor_set(x_3, 1, x_150);
lean_ctor_set(x_3, 0, x_198);
if (lean_is_scalar(x_193)) {
 x_199 = lean_alloc_ctor(0, 2, 0);
} else {
 x_199 = x_193;
}
lean_ctor_set(x_199, 0, x_196);
lean_ctor_set(x_199, 1, x_3);
lean_ctor_set(x_24, 1, x_199);
lean_ctor_set(x_24, 0, x_195);
if (lean_is_scalar(x_190)) {
 x_200 = lean_alloc_ctor(0, 2, 0);
} else {
 x_200 = x_190;
}
lean_ctor_set(x_200, 0, x_24);
lean_ctor_set(x_200, 1, x_189);
x_10 = x_200;
goto block_18;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
lean_dec(x_185);
lean_dec(x_183);
lean_dec(x_151);
lean_free_object(x_24);
lean_dec(x_150);
lean_dec(x_30);
lean_dec(x_25);
lean_free_object(x_3);
x_201 = lean_ctor_get(x_187, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_187, 1);
lean_inc(x_202);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_203 = x_187;
} else {
 lean_dec_ref(x_187);
 x_203 = lean_box(0);
}
if (lean_is_scalar(x_203)) {
 x_204 = lean_alloc_ctor(1, 2, 0);
} else {
 x_204 = x_203;
}
lean_ctor_set(x_204, 0, x_201);
lean_ctor_set(x_204, 1, x_202);
x_10 = x_204;
goto block_18;
}
}
default: 
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; uint8_t x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_205 = lean_ctor_get(x_155, 1);
lean_inc(x_205);
x_206 = lean_ctor_get(x_155, 2);
lean_inc(x_206);
lean_dec(x_155);
x_207 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_207, 0, x_205);
x_208 = 0;
x_209 = lean_box(0);
lean_inc(x_4);
x_210 = l_Lean_Elab_Term_mkFreshExprMVar(x_151, x_207, x_208, x_209, x_4, x_156);
x_211 = lean_ctor_get(x_210, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_210, 1);
lean_inc(x_212);
if (lean_is_exclusive(x_210)) {
 lean_ctor_release(x_210, 0);
 lean_ctor_release(x_210, 1);
 x_213 = x_210;
} else {
 lean_dec_ref(x_210);
 x_213 = lean_box(0);
}
x_214 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_211);
lean_inc(x_214);
x_215 = l_Lean_mkApp(x_30, x_214);
x_216 = lean_expr_instantiate1(x_206, x_214);
lean_dec(x_206);
x_217 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_217, 0, x_214);
x_218 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_218, 0, x_151);
lean_ctor_set(x_218, 1, x_25);
lean_ctor_set(x_218, 2, x_152);
lean_ctor_set(x_218, 3, x_217);
lean_ctor_set(x_3, 1, x_150);
lean_ctor_set(x_3, 0, x_218);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_216);
lean_ctor_set(x_2, 0, x_215);
if (lean_is_scalar(x_213)) {
 x_219 = lean_alloc_ctor(0, 2, 0);
} else {
 x_219 = x_213;
}
lean_ctor_set(x_219, 0, x_2);
lean_ctor_set(x_219, 1, x_212);
x_10 = x_219;
goto block_18;
}
}
}
else
{
lean_object* x_220; 
lean_dec(x_152);
lean_free_object(x_24);
lean_dec(x_150);
lean_free_object(x_2);
lean_dec(x_30);
lean_dec(x_25);
lean_free_object(x_3);
x_220 = lean_box(0);
x_157 = x_220;
goto block_163;
}
block_163:
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
lean_dec(x_157);
x_158 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_158, 0, x_155);
x_159 = l_Lean_indentExpr(x_158);
x_160 = l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__3;
x_161 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_159);
lean_inc(x_4);
lean_inc(x_1);
x_162 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_151, x_153, x_1, x_161, x_4, x_156);
lean_dec(x_151);
x_10 = x_162;
goto block_18;
}
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; 
lean_dec(x_153);
lean_dec(x_152);
lean_dec(x_151);
lean_free_object(x_24);
lean_dec(x_150);
lean_free_object(x_2);
lean_dec(x_30);
lean_dec(x_25);
lean_free_object(x_3);
x_221 = lean_ctor_get(x_154, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_154, 1);
lean_inc(x_222);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 lean_ctor_release(x_154, 1);
 x_223 = x_154;
} else {
 lean_dec_ref(x_154);
 x_223 = lean_box(0);
}
if (lean_is_scalar(x_223)) {
 x_224 = lean_alloc_ctor(1, 2, 0);
} else {
 x_224 = x_223;
}
lean_ctor_set(x_224, 0, x_221);
lean_ctor_set(x_224, 1, x_222);
x_10 = x_224;
goto block_18;
}
}
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_225 = lean_ctor_get(x_24, 0);
x_226 = lean_ctor_get(x_24, 1);
lean_inc(x_226);
lean_inc(x_225);
lean_dec(x_24);
x_227 = lean_ctor_get(x_8, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_8, 2);
lean_inc(x_228);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 lean_ctor_release(x_8, 2);
 lean_ctor_release(x_8, 3);
 x_229 = x_8;
} else {
 lean_dec_ref(x_8);
 x_229 = lean_box(0);
}
x_230 = lean_ctor_get(x_27, 1);
lean_inc(x_230);
lean_dec(x_27);
lean_inc(x_4);
x_231 = l_Lean_Elab_Term_whnfForall(x_227, x_225, x_4, x_5);
if (lean_obj_tag(x_231) == 0)
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_232 = lean_ctor_get(x_231, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_231, 1);
lean_inc(x_233);
lean_dec(x_231);
if (lean_obj_tag(x_232) == 7)
{
lean_dec(x_230);
switch (lean_obj_tag(x_228)) {
case 0:
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; uint8_t x_245; lean_object* x_246; 
x_241 = lean_ctor_get(x_232, 1);
lean_inc(x_241);
x_242 = lean_ctor_get(x_232, 2);
lean_inc(x_242);
lean_dec(x_232);
x_243 = lean_ctor_get(x_228, 0);
lean_inc(x_243);
x_244 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_244, 0, x_241);
x_245 = 1;
lean_inc(x_4);
x_246 = l_Lean_Elab_Term_elabTerm(x_243, x_244, x_245, x_4, x_233);
if (lean_obj_tag(x_246) == 0)
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_247 = lean_ctor_get(x_246, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_246, 1);
lean_inc(x_248);
if (lean_is_exclusive(x_246)) {
 lean_ctor_release(x_246, 0);
 lean_ctor_release(x_246, 1);
 x_249 = x_246;
} else {
 lean_dec_ref(x_246);
 x_249 = lean_box(0);
}
lean_inc(x_247);
x_250 = l_Lean_mkApp(x_30, x_247);
x_251 = lean_expr_instantiate1(x_242, x_247);
lean_dec(x_242);
x_252 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_252, 0, x_247);
if (lean_is_scalar(x_229)) {
 x_253 = lean_alloc_ctor(0, 4, 0);
} else {
 x_253 = x_229;
}
lean_ctor_set(x_253, 0, x_227);
lean_ctor_set(x_253, 1, x_25);
lean_ctor_set(x_253, 2, x_228);
lean_ctor_set(x_253, 3, x_252);
lean_ctor_set(x_3, 1, x_226);
lean_ctor_set(x_3, 0, x_253);
x_254 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_254, 0, x_251);
lean_ctor_set(x_254, 1, x_3);
lean_ctor_set(x_2, 1, x_254);
lean_ctor_set(x_2, 0, x_250);
if (lean_is_scalar(x_249)) {
 x_255 = lean_alloc_ctor(0, 2, 0);
} else {
 x_255 = x_249;
}
lean_ctor_set(x_255, 0, x_2);
lean_ctor_set(x_255, 1, x_248);
x_10 = x_255;
goto block_18;
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; 
lean_dec(x_242);
lean_dec(x_229);
lean_dec(x_228);
lean_dec(x_227);
lean_dec(x_226);
lean_free_object(x_2);
lean_dec(x_30);
lean_dec(x_25);
lean_free_object(x_3);
x_256 = lean_ctor_get(x_246, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_246, 1);
lean_inc(x_257);
if (lean_is_exclusive(x_246)) {
 lean_ctor_release(x_246, 0);
 lean_ctor_release(x_246, 1);
 x_258 = x_246;
} else {
 lean_dec_ref(x_246);
 x_258 = lean_box(0);
}
if (lean_is_scalar(x_258)) {
 x_259 = lean_alloc_ctor(1, 2, 0);
} else {
 x_259 = x_258;
}
lean_ctor_set(x_259, 0, x_256);
lean_ctor_set(x_259, 1, x_257);
x_10 = x_259;
goto block_18;
}
}
case 1:
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; 
lean_free_object(x_2);
x_260 = lean_ctor_get(x_232, 1);
lean_inc(x_260);
x_261 = lean_ctor_get(x_232, 2);
lean_inc(x_261);
lean_dec(x_232);
x_262 = lean_ctor_get(x_228, 0);
lean_inc(x_262);
if (lean_is_exclusive(x_228)) {
 lean_ctor_release(x_228, 0);
 x_263 = x_228;
} else {
 lean_dec_ref(x_228);
 x_263 = lean_box(0);
}
x_264 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_264, 0, x_260);
lean_inc(x_4);
x_265 = l___private_Init_Lean_Elab_StructInst_24__elabStruct___main(x_262, x_264, x_4, x_233);
if (lean_obj_tag(x_265) == 0)
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_266 = lean_ctor_get(x_265, 0);
lean_inc(x_266);
x_267 = lean_ctor_get(x_265, 1);
lean_inc(x_267);
if (lean_is_exclusive(x_265)) {
 lean_ctor_release(x_265, 0);
 lean_ctor_release(x_265, 1);
 x_268 = x_265;
} else {
 lean_dec_ref(x_265);
 x_268 = lean_box(0);
}
x_269 = lean_ctor_get(x_266, 0);
lean_inc(x_269);
x_270 = lean_ctor_get(x_266, 1);
lean_inc(x_270);
if (lean_is_exclusive(x_266)) {
 lean_ctor_release(x_266, 0);
 lean_ctor_release(x_266, 1);
 x_271 = x_266;
} else {
 lean_dec_ref(x_266);
 x_271 = lean_box(0);
}
if (lean_is_scalar(x_263)) {
 x_272 = lean_alloc_ctor(1, 1, 0);
} else {
 x_272 = x_263;
}
lean_ctor_set(x_272, 0, x_270);
lean_inc(x_269);
x_273 = l_Lean_mkApp(x_30, x_269);
x_274 = lean_expr_instantiate1(x_261, x_269);
lean_dec(x_261);
x_275 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_275, 0, x_269);
if (lean_is_scalar(x_229)) {
 x_276 = lean_alloc_ctor(0, 4, 0);
} else {
 x_276 = x_229;
}
lean_ctor_set(x_276, 0, x_227);
lean_ctor_set(x_276, 1, x_25);
lean_ctor_set(x_276, 2, x_272);
lean_ctor_set(x_276, 3, x_275);
lean_ctor_set(x_3, 1, x_226);
lean_ctor_set(x_3, 0, x_276);
if (lean_is_scalar(x_271)) {
 x_277 = lean_alloc_ctor(0, 2, 0);
} else {
 x_277 = x_271;
}
lean_ctor_set(x_277, 0, x_274);
lean_ctor_set(x_277, 1, x_3);
x_278 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_278, 0, x_273);
lean_ctor_set(x_278, 1, x_277);
if (lean_is_scalar(x_268)) {
 x_279 = lean_alloc_ctor(0, 2, 0);
} else {
 x_279 = x_268;
}
lean_ctor_set(x_279, 0, x_278);
lean_ctor_set(x_279, 1, x_267);
x_10 = x_279;
goto block_18;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
lean_dec(x_263);
lean_dec(x_261);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_30);
lean_dec(x_25);
lean_free_object(x_3);
x_280 = lean_ctor_get(x_265, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_265, 1);
lean_inc(x_281);
if (lean_is_exclusive(x_265)) {
 lean_ctor_release(x_265, 0);
 lean_ctor_release(x_265, 1);
 x_282 = x_265;
} else {
 lean_dec_ref(x_265);
 x_282 = lean_box(0);
}
if (lean_is_scalar(x_282)) {
 x_283 = lean_alloc_ctor(1, 2, 0);
} else {
 x_283 = x_282;
}
lean_ctor_set(x_283, 0, x_280);
lean_ctor_set(x_283, 1, x_281);
x_10 = x_283;
goto block_18;
}
}
default: 
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; uint8_t x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; 
x_284 = lean_ctor_get(x_232, 1);
lean_inc(x_284);
x_285 = lean_ctor_get(x_232, 2);
lean_inc(x_285);
lean_dec(x_232);
x_286 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_286, 0, x_284);
x_287 = 0;
x_288 = lean_box(0);
lean_inc(x_4);
x_289 = l_Lean_Elab_Term_mkFreshExprMVar(x_227, x_286, x_287, x_288, x_4, x_233);
x_290 = lean_ctor_get(x_289, 0);
lean_inc(x_290);
x_291 = lean_ctor_get(x_289, 1);
lean_inc(x_291);
if (lean_is_exclusive(x_289)) {
 lean_ctor_release(x_289, 0);
 lean_ctor_release(x_289, 1);
 x_292 = x_289;
} else {
 lean_dec_ref(x_289);
 x_292 = lean_box(0);
}
x_293 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_290);
lean_inc(x_293);
x_294 = l_Lean_mkApp(x_30, x_293);
x_295 = lean_expr_instantiate1(x_285, x_293);
lean_dec(x_285);
x_296 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_296, 0, x_293);
if (lean_is_scalar(x_229)) {
 x_297 = lean_alloc_ctor(0, 4, 0);
} else {
 x_297 = x_229;
}
lean_ctor_set(x_297, 0, x_227);
lean_ctor_set(x_297, 1, x_25);
lean_ctor_set(x_297, 2, x_228);
lean_ctor_set(x_297, 3, x_296);
lean_ctor_set(x_3, 1, x_226);
lean_ctor_set(x_3, 0, x_297);
x_298 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_298, 0, x_295);
lean_ctor_set(x_298, 1, x_3);
lean_ctor_set(x_2, 1, x_298);
lean_ctor_set(x_2, 0, x_294);
if (lean_is_scalar(x_292)) {
 x_299 = lean_alloc_ctor(0, 2, 0);
} else {
 x_299 = x_292;
}
lean_ctor_set(x_299, 0, x_2);
lean_ctor_set(x_299, 1, x_291);
x_10 = x_299;
goto block_18;
}
}
}
else
{
lean_object* x_300; 
lean_dec(x_229);
lean_dec(x_228);
lean_dec(x_226);
lean_free_object(x_2);
lean_dec(x_30);
lean_dec(x_25);
lean_free_object(x_3);
x_300 = lean_box(0);
x_234 = x_300;
goto block_240;
}
block_240:
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; 
lean_dec(x_234);
x_235 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_235, 0, x_232);
x_236 = l_Lean_indentExpr(x_235);
x_237 = l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__3;
x_238 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_238, 0, x_237);
lean_ctor_set(x_238, 1, x_236);
lean_inc(x_4);
lean_inc(x_1);
x_239 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_227, x_230, x_1, x_238, x_4, x_233);
lean_dec(x_227);
x_10 = x_239;
goto block_18;
}
}
else
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; 
lean_dec(x_230);
lean_dec(x_229);
lean_dec(x_228);
lean_dec(x_227);
lean_dec(x_226);
lean_free_object(x_2);
lean_dec(x_30);
lean_dec(x_25);
lean_free_object(x_3);
x_301 = lean_ctor_get(x_231, 0);
lean_inc(x_301);
x_302 = lean_ctor_get(x_231, 1);
lean_inc(x_302);
if (lean_is_exclusive(x_231)) {
 lean_ctor_release(x_231, 0);
 lean_ctor_release(x_231, 1);
 x_303 = x_231;
} else {
 lean_dec_ref(x_231);
 x_303 = lean_box(0);
}
if (lean_is_scalar(x_303)) {
 x_304 = lean_alloc_ctor(1, 2, 0);
} else {
 x_304 = x_303;
}
lean_ctor_set(x_304, 0, x_301);
lean_ctor_set(x_304, 1, x_302);
x_10 = x_304;
goto block_18;
}
}
}
else
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_305 = lean_ctor_get(x_2, 0);
lean_inc(x_305);
lean_dec(x_2);
x_306 = lean_ctor_get(x_24, 0);
lean_inc(x_306);
x_307 = lean_ctor_get(x_24, 1);
lean_inc(x_307);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_308 = x_24;
} else {
 lean_dec_ref(x_24);
 x_308 = lean_box(0);
}
x_309 = lean_ctor_get(x_8, 0);
lean_inc(x_309);
x_310 = lean_ctor_get(x_8, 2);
lean_inc(x_310);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 lean_ctor_release(x_8, 2);
 lean_ctor_release(x_8, 3);
 x_311 = x_8;
} else {
 lean_dec_ref(x_8);
 x_311 = lean_box(0);
}
x_312 = lean_ctor_get(x_27, 1);
lean_inc(x_312);
lean_dec(x_27);
lean_inc(x_4);
x_313 = l_Lean_Elab_Term_whnfForall(x_309, x_306, x_4, x_5);
if (lean_obj_tag(x_313) == 0)
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; 
x_314 = lean_ctor_get(x_313, 0);
lean_inc(x_314);
x_315 = lean_ctor_get(x_313, 1);
lean_inc(x_315);
lean_dec(x_313);
if (lean_obj_tag(x_314) == 7)
{
lean_dec(x_312);
switch (lean_obj_tag(x_310)) {
case 0:
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; uint8_t x_327; lean_object* x_328; 
x_323 = lean_ctor_get(x_314, 1);
lean_inc(x_323);
x_324 = lean_ctor_get(x_314, 2);
lean_inc(x_324);
lean_dec(x_314);
x_325 = lean_ctor_get(x_310, 0);
lean_inc(x_325);
x_326 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_326, 0, x_323);
x_327 = 1;
lean_inc(x_4);
x_328 = l_Lean_Elab_Term_elabTerm(x_325, x_326, x_327, x_4, x_315);
if (lean_obj_tag(x_328) == 0)
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; 
x_329 = lean_ctor_get(x_328, 0);
lean_inc(x_329);
x_330 = lean_ctor_get(x_328, 1);
lean_inc(x_330);
if (lean_is_exclusive(x_328)) {
 lean_ctor_release(x_328, 0);
 lean_ctor_release(x_328, 1);
 x_331 = x_328;
} else {
 lean_dec_ref(x_328);
 x_331 = lean_box(0);
}
lean_inc(x_329);
x_332 = l_Lean_mkApp(x_305, x_329);
x_333 = lean_expr_instantiate1(x_324, x_329);
lean_dec(x_324);
x_334 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_334, 0, x_329);
if (lean_is_scalar(x_311)) {
 x_335 = lean_alloc_ctor(0, 4, 0);
} else {
 x_335 = x_311;
}
lean_ctor_set(x_335, 0, x_309);
lean_ctor_set(x_335, 1, x_25);
lean_ctor_set(x_335, 2, x_310);
lean_ctor_set(x_335, 3, x_334);
lean_ctor_set(x_3, 1, x_307);
lean_ctor_set(x_3, 0, x_335);
if (lean_is_scalar(x_308)) {
 x_336 = lean_alloc_ctor(0, 2, 0);
} else {
 x_336 = x_308;
}
lean_ctor_set(x_336, 0, x_333);
lean_ctor_set(x_336, 1, x_3);
x_337 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_337, 0, x_332);
lean_ctor_set(x_337, 1, x_336);
if (lean_is_scalar(x_331)) {
 x_338 = lean_alloc_ctor(0, 2, 0);
} else {
 x_338 = x_331;
}
lean_ctor_set(x_338, 0, x_337);
lean_ctor_set(x_338, 1, x_330);
x_10 = x_338;
goto block_18;
}
else
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; 
lean_dec(x_324);
lean_dec(x_311);
lean_dec(x_310);
lean_dec(x_309);
lean_dec(x_308);
lean_dec(x_307);
lean_dec(x_305);
lean_dec(x_25);
lean_free_object(x_3);
x_339 = lean_ctor_get(x_328, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_328, 1);
lean_inc(x_340);
if (lean_is_exclusive(x_328)) {
 lean_ctor_release(x_328, 0);
 lean_ctor_release(x_328, 1);
 x_341 = x_328;
} else {
 lean_dec_ref(x_328);
 x_341 = lean_box(0);
}
if (lean_is_scalar(x_341)) {
 x_342 = lean_alloc_ctor(1, 2, 0);
} else {
 x_342 = x_341;
}
lean_ctor_set(x_342, 0, x_339);
lean_ctor_set(x_342, 1, x_340);
x_10 = x_342;
goto block_18;
}
}
case 1:
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; 
x_343 = lean_ctor_get(x_314, 1);
lean_inc(x_343);
x_344 = lean_ctor_get(x_314, 2);
lean_inc(x_344);
lean_dec(x_314);
x_345 = lean_ctor_get(x_310, 0);
lean_inc(x_345);
if (lean_is_exclusive(x_310)) {
 lean_ctor_release(x_310, 0);
 x_346 = x_310;
} else {
 lean_dec_ref(x_310);
 x_346 = lean_box(0);
}
x_347 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_347, 0, x_343);
lean_inc(x_4);
x_348 = l___private_Init_Lean_Elab_StructInst_24__elabStruct___main(x_345, x_347, x_4, x_315);
if (lean_obj_tag(x_348) == 0)
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; 
x_349 = lean_ctor_get(x_348, 0);
lean_inc(x_349);
x_350 = lean_ctor_get(x_348, 1);
lean_inc(x_350);
if (lean_is_exclusive(x_348)) {
 lean_ctor_release(x_348, 0);
 lean_ctor_release(x_348, 1);
 x_351 = x_348;
} else {
 lean_dec_ref(x_348);
 x_351 = lean_box(0);
}
x_352 = lean_ctor_get(x_349, 0);
lean_inc(x_352);
x_353 = lean_ctor_get(x_349, 1);
lean_inc(x_353);
if (lean_is_exclusive(x_349)) {
 lean_ctor_release(x_349, 0);
 lean_ctor_release(x_349, 1);
 x_354 = x_349;
} else {
 lean_dec_ref(x_349);
 x_354 = lean_box(0);
}
if (lean_is_scalar(x_346)) {
 x_355 = lean_alloc_ctor(1, 1, 0);
} else {
 x_355 = x_346;
}
lean_ctor_set(x_355, 0, x_353);
lean_inc(x_352);
x_356 = l_Lean_mkApp(x_305, x_352);
x_357 = lean_expr_instantiate1(x_344, x_352);
lean_dec(x_344);
x_358 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_358, 0, x_352);
if (lean_is_scalar(x_311)) {
 x_359 = lean_alloc_ctor(0, 4, 0);
} else {
 x_359 = x_311;
}
lean_ctor_set(x_359, 0, x_309);
lean_ctor_set(x_359, 1, x_25);
lean_ctor_set(x_359, 2, x_355);
lean_ctor_set(x_359, 3, x_358);
lean_ctor_set(x_3, 1, x_307);
lean_ctor_set(x_3, 0, x_359);
if (lean_is_scalar(x_354)) {
 x_360 = lean_alloc_ctor(0, 2, 0);
} else {
 x_360 = x_354;
}
lean_ctor_set(x_360, 0, x_357);
lean_ctor_set(x_360, 1, x_3);
if (lean_is_scalar(x_308)) {
 x_361 = lean_alloc_ctor(0, 2, 0);
} else {
 x_361 = x_308;
}
lean_ctor_set(x_361, 0, x_356);
lean_ctor_set(x_361, 1, x_360);
if (lean_is_scalar(x_351)) {
 x_362 = lean_alloc_ctor(0, 2, 0);
} else {
 x_362 = x_351;
}
lean_ctor_set(x_362, 0, x_361);
lean_ctor_set(x_362, 1, x_350);
x_10 = x_362;
goto block_18;
}
else
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; 
lean_dec(x_346);
lean_dec(x_344);
lean_dec(x_311);
lean_dec(x_309);
lean_dec(x_308);
lean_dec(x_307);
lean_dec(x_305);
lean_dec(x_25);
lean_free_object(x_3);
x_363 = lean_ctor_get(x_348, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_348, 1);
lean_inc(x_364);
if (lean_is_exclusive(x_348)) {
 lean_ctor_release(x_348, 0);
 lean_ctor_release(x_348, 1);
 x_365 = x_348;
} else {
 lean_dec_ref(x_348);
 x_365 = lean_box(0);
}
if (lean_is_scalar(x_365)) {
 x_366 = lean_alloc_ctor(1, 2, 0);
} else {
 x_366 = x_365;
}
lean_ctor_set(x_366, 0, x_363);
lean_ctor_set(x_366, 1, x_364);
x_10 = x_366;
goto block_18;
}
}
default: 
{
lean_object* x_367; lean_object* x_368; lean_object* x_369; uint8_t x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; 
x_367 = lean_ctor_get(x_314, 1);
lean_inc(x_367);
x_368 = lean_ctor_get(x_314, 2);
lean_inc(x_368);
lean_dec(x_314);
x_369 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_369, 0, x_367);
x_370 = 0;
x_371 = lean_box(0);
lean_inc(x_4);
x_372 = l_Lean_Elab_Term_mkFreshExprMVar(x_309, x_369, x_370, x_371, x_4, x_315);
x_373 = lean_ctor_get(x_372, 0);
lean_inc(x_373);
x_374 = lean_ctor_get(x_372, 1);
lean_inc(x_374);
if (lean_is_exclusive(x_372)) {
 lean_ctor_release(x_372, 0);
 lean_ctor_release(x_372, 1);
 x_375 = x_372;
} else {
 lean_dec_ref(x_372);
 x_375 = lean_box(0);
}
x_376 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_373);
lean_inc(x_376);
x_377 = l_Lean_mkApp(x_305, x_376);
x_378 = lean_expr_instantiate1(x_368, x_376);
lean_dec(x_368);
x_379 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_379, 0, x_376);
if (lean_is_scalar(x_311)) {
 x_380 = lean_alloc_ctor(0, 4, 0);
} else {
 x_380 = x_311;
}
lean_ctor_set(x_380, 0, x_309);
lean_ctor_set(x_380, 1, x_25);
lean_ctor_set(x_380, 2, x_310);
lean_ctor_set(x_380, 3, x_379);
lean_ctor_set(x_3, 1, x_307);
lean_ctor_set(x_3, 0, x_380);
if (lean_is_scalar(x_308)) {
 x_381 = lean_alloc_ctor(0, 2, 0);
} else {
 x_381 = x_308;
}
lean_ctor_set(x_381, 0, x_378);
lean_ctor_set(x_381, 1, x_3);
x_382 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_382, 0, x_377);
lean_ctor_set(x_382, 1, x_381);
if (lean_is_scalar(x_375)) {
 x_383 = lean_alloc_ctor(0, 2, 0);
} else {
 x_383 = x_375;
}
lean_ctor_set(x_383, 0, x_382);
lean_ctor_set(x_383, 1, x_374);
x_10 = x_383;
goto block_18;
}
}
}
else
{
lean_object* x_384; 
lean_dec(x_311);
lean_dec(x_310);
lean_dec(x_308);
lean_dec(x_307);
lean_dec(x_305);
lean_dec(x_25);
lean_free_object(x_3);
x_384 = lean_box(0);
x_316 = x_384;
goto block_322;
}
block_322:
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
lean_dec(x_316);
x_317 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_317, 0, x_314);
x_318 = l_Lean_indentExpr(x_317);
x_319 = l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__3;
x_320 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_320, 0, x_319);
lean_ctor_set(x_320, 1, x_318);
lean_inc(x_4);
lean_inc(x_1);
x_321 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_309, x_312, x_1, x_320, x_4, x_315);
lean_dec(x_309);
x_10 = x_321;
goto block_18;
}
}
else
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; 
lean_dec(x_312);
lean_dec(x_311);
lean_dec(x_310);
lean_dec(x_309);
lean_dec(x_308);
lean_dec(x_307);
lean_dec(x_305);
lean_dec(x_25);
lean_free_object(x_3);
x_385 = lean_ctor_get(x_313, 0);
lean_inc(x_385);
x_386 = lean_ctor_get(x_313, 1);
lean_inc(x_386);
if (lean_is_exclusive(x_313)) {
 lean_ctor_release(x_313, 0);
 lean_ctor_release(x_313, 1);
 x_387 = x_313;
} else {
 lean_dec_ref(x_313);
 x_387 = lean_box(0);
}
if (lean_is_scalar(x_387)) {
 x_388 = lean_alloc_ctor(1, 2, 0);
} else {
 x_388 = x_387;
}
lean_ctor_set(x_388, 0, x_385);
lean_ctor_set(x_388, 1, x_386);
x_10 = x_388;
goto block_18;
}
}
}
else
{
lean_object* x_389; 
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_24);
lean_free_object(x_3);
lean_dec(x_2);
x_389 = lean_box(0);
x_19 = x_389;
goto block_23;
}
}
else
{
lean_object* x_390; 
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_24);
lean_free_object(x_3);
lean_dec(x_2);
x_390 = lean_box(0);
x_19 = x_390;
goto block_23;
}
}
block_18:
{
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_2 = x_11;
x_3 = x_9;
x_5 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
block_23:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_19);
x_20 = lean_ctor_get(x_8, 0);
lean_inc(x_20);
lean_dec(x_8);
x_21 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__3;
lean_inc(x_4);
x_22 = l_Lean_Elab_Term_throwError___rarg(x_20, x_21, x_4, x_5);
lean_dec(x_20);
x_10 = x_22;
goto block_18;
}
}
else
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_402; lean_object* x_407; lean_object* x_408; 
x_391 = lean_ctor_get(x_3, 0);
x_392 = lean_ctor_get(x_3, 1);
lean_inc(x_392);
lean_inc(x_391);
lean_dec(x_3);
x_407 = lean_ctor_get(x_2, 1);
lean_inc(x_407);
x_408 = lean_ctor_get(x_391, 1);
lean_inc(x_408);
if (lean_obj_tag(x_408) == 0)
{
lean_object* x_409; 
lean_dec(x_407);
lean_dec(x_2);
x_409 = lean_box(0);
x_402 = x_409;
goto block_406;
}
else
{
lean_object* x_410; 
x_410 = lean_ctor_get(x_408, 0);
lean_inc(x_410);
if (lean_obj_tag(x_410) == 0)
{
lean_object* x_411; 
x_411 = lean_ctor_get(x_408, 1);
lean_inc(x_411);
if (lean_obj_tag(x_411) == 0)
{
lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; 
x_412 = lean_ctor_get(x_2, 0);
lean_inc(x_412);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_413 = x_2;
} else {
 lean_dec_ref(x_2);
 x_413 = lean_box(0);
}
x_414 = lean_ctor_get(x_407, 0);
lean_inc(x_414);
x_415 = lean_ctor_get(x_407, 1);
lean_inc(x_415);
if (lean_is_exclusive(x_407)) {
 lean_ctor_release(x_407, 0);
 lean_ctor_release(x_407, 1);
 x_416 = x_407;
} else {
 lean_dec_ref(x_407);
 x_416 = lean_box(0);
}
x_417 = lean_ctor_get(x_391, 0);
lean_inc(x_417);
x_418 = lean_ctor_get(x_391, 2);
lean_inc(x_418);
if (lean_is_exclusive(x_391)) {
 lean_ctor_release(x_391, 0);
 lean_ctor_release(x_391, 1);
 lean_ctor_release(x_391, 2);
 lean_ctor_release(x_391, 3);
 x_419 = x_391;
} else {
 lean_dec_ref(x_391);
 x_419 = lean_box(0);
}
x_420 = lean_ctor_get(x_410, 1);
lean_inc(x_420);
lean_dec(x_410);
lean_inc(x_4);
x_421 = l_Lean_Elab_Term_whnfForall(x_417, x_414, x_4, x_5);
if (lean_obj_tag(x_421) == 0)
{
lean_object* x_422; lean_object* x_423; lean_object* x_424; 
x_422 = lean_ctor_get(x_421, 0);
lean_inc(x_422);
x_423 = lean_ctor_get(x_421, 1);
lean_inc(x_423);
lean_dec(x_421);
if (lean_obj_tag(x_422) == 7)
{
lean_dec(x_420);
switch (lean_obj_tag(x_418)) {
case 0:
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; uint8_t x_435; lean_object* x_436; 
x_431 = lean_ctor_get(x_422, 1);
lean_inc(x_431);
x_432 = lean_ctor_get(x_422, 2);
lean_inc(x_432);
lean_dec(x_422);
x_433 = lean_ctor_get(x_418, 0);
lean_inc(x_433);
x_434 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_434, 0, x_431);
x_435 = 1;
lean_inc(x_4);
x_436 = l_Lean_Elab_Term_elabTerm(x_433, x_434, x_435, x_4, x_423);
if (lean_obj_tag(x_436) == 0)
{
lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; 
x_437 = lean_ctor_get(x_436, 0);
lean_inc(x_437);
x_438 = lean_ctor_get(x_436, 1);
lean_inc(x_438);
if (lean_is_exclusive(x_436)) {
 lean_ctor_release(x_436, 0);
 lean_ctor_release(x_436, 1);
 x_439 = x_436;
} else {
 lean_dec_ref(x_436);
 x_439 = lean_box(0);
}
lean_inc(x_437);
x_440 = l_Lean_mkApp(x_412, x_437);
x_441 = lean_expr_instantiate1(x_432, x_437);
lean_dec(x_432);
x_442 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_442, 0, x_437);
if (lean_is_scalar(x_419)) {
 x_443 = lean_alloc_ctor(0, 4, 0);
} else {
 x_443 = x_419;
}
lean_ctor_set(x_443, 0, x_417);
lean_ctor_set(x_443, 1, x_408);
lean_ctor_set(x_443, 2, x_418);
lean_ctor_set(x_443, 3, x_442);
x_444 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_444, 0, x_443);
lean_ctor_set(x_444, 1, x_415);
if (lean_is_scalar(x_416)) {
 x_445 = lean_alloc_ctor(0, 2, 0);
} else {
 x_445 = x_416;
}
lean_ctor_set(x_445, 0, x_441);
lean_ctor_set(x_445, 1, x_444);
if (lean_is_scalar(x_413)) {
 x_446 = lean_alloc_ctor(0, 2, 0);
} else {
 x_446 = x_413;
}
lean_ctor_set(x_446, 0, x_440);
lean_ctor_set(x_446, 1, x_445);
if (lean_is_scalar(x_439)) {
 x_447 = lean_alloc_ctor(0, 2, 0);
} else {
 x_447 = x_439;
}
lean_ctor_set(x_447, 0, x_446);
lean_ctor_set(x_447, 1, x_438);
x_393 = x_447;
goto block_401;
}
else
{
lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; 
lean_dec(x_432);
lean_dec(x_419);
lean_dec(x_418);
lean_dec(x_417);
lean_dec(x_416);
lean_dec(x_415);
lean_dec(x_413);
lean_dec(x_412);
lean_dec(x_408);
x_448 = lean_ctor_get(x_436, 0);
lean_inc(x_448);
x_449 = lean_ctor_get(x_436, 1);
lean_inc(x_449);
if (lean_is_exclusive(x_436)) {
 lean_ctor_release(x_436, 0);
 lean_ctor_release(x_436, 1);
 x_450 = x_436;
} else {
 lean_dec_ref(x_436);
 x_450 = lean_box(0);
}
if (lean_is_scalar(x_450)) {
 x_451 = lean_alloc_ctor(1, 2, 0);
} else {
 x_451 = x_450;
}
lean_ctor_set(x_451, 0, x_448);
lean_ctor_set(x_451, 1, x_449);
x_393 = x_451;
goto block_401;
}
}
case 1:
{
lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; 
lean_dec(x_413);
x_452 = lean_ctor_get(x_422, 1);
lean_inc(x_452);
x_453 = lean_ctor_get(x_422, 2);
lean_inc(x_453);
lean_dec(x_422);
x_454 = lean_ctor_get(x_418, 0);
lean_inc(x_454);
if (lean_is_exclusive(x_418)) {
 lean_ctor_release(x_418, 0);
 x_455 = x_418;
} else {
 lean_dec_ref(x_418);
 x_455 = lean_box(0);
}
x_456 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_456, 0, x_452);
lean_inc(x_4);
x_457 = l___private_Init_Lean_Elab_StructInst_24__elabStruct___main(x_454, x_456, x_4, x_423);
if (lean_obj_tag(x_457) == 0)
{
lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; 
x_458 = lean_ctor_get(x_457, 0);
lean_inc(x_458);
x_459 = lean_ctor_get(x_457, 1);
lean_inc(x_459);
if (lean_is_exclusive(x_457)) {
 lean_ctor_release(x_457, 0);
 lean_ctor_release(x_457, 1);
 x_460 = x_457;
} else {
 lean_dec_ref(x_457);
 x_460 = lean_box(0);
}
x_461 = lean_ctor_get(x_458, 0);
lean_inc(x_461);
x_462 = lean_ctor_get(x_458, 1);
lean_inc(x_462);
if (lean_is_exclusive(x_458)) {
 lean_ctor_release(x_458, 0);
 lean_ctor_release(x_458, 1);
 x_463 = x_458;
} else {
 lean_dec_ref(x_458);
 x_463 = lean_box(0);
}
if (lean_is_scalar(x_455)) {
 x_464 = lean_alloc_ctor(1, 1, 0);
} else {
 x_464 = x_455;
}
lean_ctor_set(x_464, 0, x_462);
lean_inc(x_461);
x_465 = l_Lean_mkApp(x_412, x_461);
x_466 = lean_expr_instantiate1(x_453, x_461);
lean_dec(x_453);
x_467 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_467, 0, x_461);
if (lean_is_scalar(x_419)) {
 x_468 = lean_alloc_ctor(0, 4, 0);
} else {
 x_468 = x_419;
}
lean_ctor_set(x_468, 0, x_417);
lean_ctor_set(x_468, 1, x_408);
lean_ctor_set(x_468, 2, x_464);
lean_ctor_set(x_468, 3, x_467);
x_469 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_469, 0, x_468);
lean_ctor_set(x_469, 1, x_415);
if (lean_is_scalar(x_463)) {
 x_470 = lean_alloc_ctor(0, 2, 0);
} else {
 x_470 = x_463;
}
lean_ctor_set(x_470, 0, x_466);
lean_ctor_set(x_470, 1, x_469);
if (lean_is_scalar(x_416)) {
 x_471 = lean_alloc_ctor(0, 2, 0);
} else {
 x_471 = x_416;
}
lean_ctor_set(x_471, 0, x_465);
lean_ctor_set(x_471, 1, x_470);
if (lean_is_scalar(x_460)) {
 x_472 = lean_alloc_ctor(0, 2, 0);
} else {
 x_472 = x_460;
}
lean_ctor_set(x_472, 0, x_471);
lean_ctor_set(x_472, 1, x_459);
x_393 = x_472;
goto block_401;
}
else
{
lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; 
lean_dec(x_455);
lean_dec(x_453);
lean_dec(x_419);
lean_dec(x_417);
lean_dec(x_416);
lean_dec(x_415);
lean_dec(x_412);
lean_dec(x_408);
x_473 = lean_ctor_get(x_457, 0);
lean_inc(x_473);
x_474 = lean_ctor_get(x_457, 1);
lean_inc(x_474);
if (lean_is_exclusive(x_457)) {
 lean_ctor_release(x_457, 0);
 lean_ctor_release(x_457, 1);
 x_475 = x_457;
} else {
 lean_dec_ref(x_457);
 x_475 = lean_box(0);
}
if (lean_is_scalar(x_475)) {
 x_476 = lean_alloc_ctor(1, 2, 0);
} else {
 x_476 = x_475;
}
lean_ctor_set(x_476, 0, x_473);
lean_ctor_set(x_476, 1, x_474);
x_393 = x_476;
goto block_401;
}
}
default: 
{
lean_object* x_477; lean_object* x_478; lean_object* x_479; uint8_t x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; 
x_477 = lean_ctor_get(x_422, 1);
lean_inc(x_477);
x_478 = lean_ctor_get(x_422, 2);
lean_inc(x_478);
lean_dec(x_422);
x_479 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_479, 0, x_477);
x_480 = 0;
x_481 = lean_box(0);
lean_inc(x_4);
x_482 = l_Lean_Elab_Term_mkFreshExprMVar(x_417, x_479, x_480, x_481, x_4, x_423);
x_483 = lean_ctor_get(x_482, 0);
lean_inc(x_483);
x_484 = lean_ctor_get(x_482, 1);
lean_inc(x_484);
if (lean_is_exclusive(x_482)) {
 lean_ctor_release(x_482, 0);
 lean_ctor_release(x_482, 1);
 x_485 = x_482;
} else {
 lean_dec_ref(x_482);
 x_485 = lean_box(0);
}
x_486 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_483);
lean_inc(x_486);
x_487 = l_Lean_mkApp(x_412, x_486);
x_488 = lean_expr_instantiate1(x_478, x_486);
lean_dec(x_478);
x_489 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_489, 0, x_486);
if (lean_is_scalar(x_419)) {
 x_490 = lean_alloc_ctor(0, 4, 0);
} else {
 x_490 = x_419;
}
lean_ctor_set(x_490, 0, x_417);
lean_ctor_set(x_490, 1, x_408);
lean_ctor_set(x_490, 2, x_418);
lean_ctor_set(x_490, 3, x_489);
x_491 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_491, 0, x_490);
lean_ctor_set(x_491, 1, x_415);
if (lean_is_scalar(x_416)) {
 x_492 = lean_alloc_ctor(0, 2, 0);
} else {
 x_492 = x_416;
}
lean_ctor_set(x_492, 0, x_488);
lean_ctor_set(x_492, 1, x_491);
if (lean_is_scalar(x_413)) {
 x_493 = lean_alloc_ctor(0, 2, 0);
} else {
 x_493 = x_413;
}
lean_ctor_set(x_493, 0, x_487);
lean_ctor_set(x_493, 1, x_492);
if (lean_is_scalar(x_485)) {
 x_494 = lean_alloc_ctor(0, 2, 0);
} else {
 x_494 = x_485;
}
lean_ctor_set(x_494, 0, x_493);
lean_ctor_set(x_494, 1, x_484);
x_393 = x_494;
goto block_401;
}
}
}
else
{
lean_object* x_495; 
lean_dec(x_419);
lean_dec(x_418);
lean_dec(x_416);
lean_dec(x_415);
lean_dec(x_413);
lean_dec(x_412);
lean_dec(x_408);
x_495 = lean_box(0);
x_424 = x_495;
goto block_430;
}
block_430:
{
lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; 
lean_dec(x_424);
x_425 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_425, 0, x_422);
x_426 = l_Lean_indentExpr(x_425);
x_427 = l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__3;
x_428 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_428, 0, x_427);
lean_ctor_set(x_428, 1, x_426);
lean_inc(x_4);
lean_inc(x_1);
x_429 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_417, x_420, x_1, x_428, x_4, x_423);
lean_dec(x_417);
x_393 = x_429;
goto block_401;
}
}
else
{
lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; 
lean_dec(x_420);
lean_dec(x_419);
lean_dec(x_418);
lean_dec(x_417);
lean_dec(x_416);
lean_dec(x_415);
lean_dec(x_413);
lean_dec(x_412);
lean_dec(x_408);
x_496 = lean_ctor_get(x_421, 0);
lean_inc(x_496);
x_497 = lean_ctor_get(x_421, 1);
lean_inc(x_497);
if (lean_is_exclusive(x_421)) {
 lean_ctor_release(x_421, 0);
 lean_ctor_release(x_421, 1);
 x_498 = x_421;
} else {
 lean_dec_ref(x_421);
 x_498 = lean_box(0);
}
if (lean_is_scalar(x_498)) {
 x_499 = lean_alloc_ctor(1, 2, 0);
} else {
 x_499 = x_498;
}
lean_ctor_set(x_499, 0, x_496);
lean_ctor_set(x_499, 1, x_497);
x_393 = x_499;
goto block_401;
}
}
else
{
lean_object* x_500; 
lean_dec(x_411);
lean_dec(x_410);
lean_dec(x_408);
lean_dec(x_407);
lean_dec(x_2);
x_500 = lean_box(0);
x_402 = x_500;
goto block_406;
}
}
else
{
lean_object* x_501; 
lean_dec(x_410);
lean_dec(x_408);
lean_dec(x_407);
lean_dec(x_2);
x_501 = lean_box(0);
x_402 = x_501;
goto block_406;
}
}
block_401:
{
if (lean_obj_tag(x_393) == 0)
{
lean_object* x_394; lean_object* x_395; 
x_394 = lean_ctor_get(x_393, 0);
lean_inc(x_394);
x_395 = lean_ctor_get(x_393, 1);
lean_inc(x_395);
lean_dec(x_393);
x_2 = x_394;
x_3 = x_392;
x_5 = x_395;
goto _start;
}
else
{
lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; 
lean_dec(x_392);
lean_dec(x_4);
lean_dec(x_1);
x_397 = lean_ctor_get(x_393, 0);
lean_inc(x_397);
x_398 = lean_ctor_get(x_393, 1);
lean_inc(x_398);
if (lean_is_exclusive(x_393)) {
 lean_ctor_release(x_393, 0);
 lean_ctor_release(x_393, 1);
 x_399 = x_393;
} else {
 lean_dec_ref(x_393);
 x_399 = lean_box(0);
}
if (lean_is_scalar(x_399)) {
 x_400 = lean_alloc_ctor(1, 2, 0);
} else {
 x_400 = x_399;
}
lean_ctor_set(x_400, 0, x_397);
lean_ctor_set(x_400, 1, x_398);
return x_400;
}
}
block_406:
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; 
lean_dec(x_402);
x_403 = lean_ctor_get(x_391, 0);
lean_inc(x_403);
lean_dec(x_391);
x_404 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__3;
lean_inc(x_4);
x_405 = l_Lean_Elab_Term_throwError___rarg(x_403, x_404, x_4, x_5);
lean_dec(x_403);
x_393 = x_405;
goto block_401;
}
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_24__elabStruct___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = l_Lean_Elab_Term_getEnv___rarg(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_inc(x_8);
x_9 = l_Lean_getStructureCtor(x_6, x_8);
x_10 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
lean_inc(x_3);
x_11 = l___private_Init_Lean_Elab_StructInst_23__mkCtorHeader(x_10, x_9, x_2, x_3, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_20 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1(x_8, x_18, x_19, x_3, x_13);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_20, 0);
lean_dec(x_24);
x_25 = lean_ctor_get(x_21, 0);
lean_inc(x_25);
lean_dec(x_21);
x_26 = !lean_is_exclusive(x_22);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_22, 1);
x_28 = lean_ctor_get(x_22, 0);
lean_dec(x_28);
x_29 = l_List_reverse___rarg(x_27);
x_30 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_29);
lean_ctor_set(x_22, 1, x_30);
lean_ctor_set(x_22, 0, x_25);
lean_ctor_set(x_20, 0, x_22);
return x_20;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_22, 1);
lean_inc(x_31);
lean_dec(x_22);
x_32 = l_List_reverse___rarg(x_31);
x_33 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_25);
lean_ctor_set(x_34, 1, x_33);
lean_ctor_set(x_20, 0, x_34);
return x_20;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_35 = lean_ctor_get(x_20, 1);
lean_inc(x_35);
lean_dec(x_20);
x_36 = lean_ctor_get(x_21, 0);
lean_inc(x_36);
lean_dec(x_21);
x_37 = lean_ctor_get(x_22, 1);
lean_inc(x_37);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_38 = x_22;
} else {
 lean_dec_ref(x_22);
 x_38 = lean_box(0);
}
x_39 = l_List_reverse___rarg(x_37);
x_40 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_39);
if (lean_is_scalar(x_38)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_38;
}
lean_ctor_set(x_41, 0, x_36);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_35);
return x_42;
}
}
else
{
uint8_t x_43; 
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_20);
if (x_43 == 0)
{
return x_20;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_20, 0);
x_45 = lean_ctor_get(x_20, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_20);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_11);
if (x_47 == 0)
{
return x_11;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_11, 0);
x_49 = lean_ctor_get(x_11, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_11);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_24__elabStruct(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Elab_StructInst_24__elabStruct___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 2);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___main(x_6, x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_2, 1);
x_2 = x_9;
goto _start;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___main(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
x_4 = lean_array_push(x_2, x_3);
x_5 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_6 = l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___main___spec__1(x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___main___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___main___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___main(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 2);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___main(x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_7, x_8);
lean_dec(x_7);
x_10 = l_Nat_max(x_1, x_9);
lean_dec(x_9);
lean_dec(x_1);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_2, 1);
x_2 = x_12;
goto _start;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___main(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___main___spec__1(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___main___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___main___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___main___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___main(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___main(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___main___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_23; 
x_23 = lean_ctor_get(x_2, 2);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 1)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_2);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___main(x_1, x_24);
lean_dec(x_24);
return x_25;
}
else
{
lean_object* x_26; 
lean_dec(x_23);
x_26 = lean_box(0);
x_3 = x_26;
goto block_22;
}
block_22:
{
lean_object* x_4; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_2, 3);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = l_unreachable_x21___rarg(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_Lean_Elab_Term_StructInst_isDefaultMissing_x3f(x_7);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_8, 0);
if (lean_obj_tag(x_11) == 2)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_metavar_ctx_is_expr_assigned(x_1, x_12);
if (x_13 == 0)
{
lean_ctor_set(x_8, 0, x_2);
return x_8;
}
else
{
lean_object* x_14; 
lean_free_object(x_8);
lean_dec(x_2);
x_14 = lean_box(0);
return x_14;
}
}
else
{
lean_object* x_15; 
lean_free_object(x_8);
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_box(0);
return x_15;
}
}
else
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
if (lean_obj_tag(x_16) == 2)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_metavar_ctx_is_expr_assigned(x_1, x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_2);
return x_19;
}
else
{
lean_object* x_20; 
lean_dec(x_2);
x_20 = lean_box(0);
return x_20;
}
}
else
{
lean_object* x_21; 
lean_dec(x_16);
lean_dec(x_2);
lean_dec(x_1);
x_21 = lean_box(0);
return x_21;
}
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___main(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___main___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Lean_Elab_Term_StructInst_Struct_fields(x_2);
x_5 = l_List_findSome_x3f___main___rarg(x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___main(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Name_inhabited;
x_4 = l_unreachable_x21___rarg(x_3);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_2, 0);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_2, 1);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_Name_inhabited;
x_9 = l_unreachable_x21___rarg(x_8);
return x_9;
}
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Name_inhabited;
x_11 = l_unreachable_x21___rarg(x_10);
return x_11;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_unbox(x_2);
if (x_5 == 0)
{
uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = 0;
x_7 = lean_box(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
x_13 = lean_box(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_4);
return x_15;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(x_2);
x_4 = lean_name_eq(x_3, x_1);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
return x_6;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_5 = l_List_findSome_x3f___main___rarg(x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_mkTermIdFromIdent___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
if (lean_obj_tag(x_2) == 6)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint64_t x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; 
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 2);
lean_inc(x_17);
x_18 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
lean_dec(x_2);
x_19 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
x_20 = (uint8_t)((x_18 << 24) >> 61);
x_21 = l_Lean_BinderInfo_isExplicit(x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_15);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_16);
x_23 = 0;
x_24 = lean_box(0);
lean_inc(x_3);
x_25 = l_Lean_Elab_Term_mkFreshExprMVar(x_19, x_22, x_23, x_24, x_3, x_4);
lean_dec(x_19);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_expr_instantiate1(x_17, x_26);
lean_dec(x_26);
lean_dec(x_17);
x_2 = x_28;
x_4 = x_27;
goto _start;
}
else
{
lean_object* x_30; 
x_30 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f(x_1, x_15);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_3);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_4);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
lean_dec(x_30);
lean_inc(x_3);
lean_inc(x_32);
x_33 = l_Lean_Elab_Term_inferType(x_19, x_32, x_3, x_4);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
lean_inc(x_3);
x_36 = l_Lean_Elab_Term_isDefEq(x_19, x_34, x_16, x_3, x_35);
lean_dec(x_19);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
lean_dec(x_37);
if (x_38 == 0)
{
uint8_t x_39; 
lean_dec(x_32);
lean_dec(x_17);
lean_dec(x_3);
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_36, 0);
lean_dec(x_40);
x_41 = lean_box(0);
lean_ctor_set(x_36, 0, x_41);
return x_36;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_36, 1);
lean_inc(x_42);
lean_dec(x_36);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_dec(x_36);
x_46 = lean_expr_instantiate1(x_17, x_32);
lean_dec(x_32);
lean_dec(x_17);
x_2 = x_46;
x_4 = x_45;
goto _start;
}
}
else
{
uint8_t x_48; 
lean_dec(x_32);
lean_dec(x_17);
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_36);
if (x_48 == 0)
{
return x_36;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_36, 0);
x_50 = lean_ctor_get(x_36, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_36);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_32);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_3);
x_52 = !lean_is_exclusive(x_33);
if (x_52 == 0)
{
return x_33;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_33, 0);
x_54 = lean_ctor_get(x_33, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_33);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
}
else
{
lean_object* x_56; 
lean_dec(x_3);
x_56 = lean_box(0);
x_5 = x_56;
goto block_14;
}
block_14:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
lean_dec(x_5);
x_6 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___main___closed__1;
x_7 = lean_unsigned_to_nat(2u);
x_8 = l_Lean_Expr_isAppOfArity___main(x_2, x_6, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_appArg_x21(x_2);
lean_dec(x_2);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_4);
return x_13;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___main(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_List_mapM___main___at_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_2, 0);
lean_dec(x_9);
lean_inc(x_3);
x_10 = l_Lean_Elab_Term_mkFreshLevelMVar(x_1, x_3, x_4);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_List_mapM___main___at_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f___spec__1(x_1, x_8, x_3, x_12);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_ctor_set(x_2, 1, x_15);
lean_ctor_set(x_2, 0, x_11);
lean_ctor_set(x_13, 0, x_2);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_2, 1, x_16);
lean_ctor_set(x_2, 0, x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_19 = lean_ctor_get(x_2, 1);
lean_inc(x_19);
lean_dec(x_2);
lean_inc(x_3);
x_20 = l_Lean_Elab_Term_mkFreshLevelMVar(x_1, x_3, x_4);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_List_mapM___main___at_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f___spec__1(x_1, x_19, x_3, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_24);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
x_6 = l_Lean_ConstantInfo_lparams(x_2);
lean_inc(x_3);
x_7 = l_List_mapM___main___at_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f___spec__1(x_5, x_6, x_3, x_4);
lean_dec(x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_instantiate_value_lparams(x_2, x_8);
lean_dec(x_8);
x_11 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___main(x_1, x_10, x_3, x_9);
return x_11;
}
}
lean_object* l_List_mapM___main___at_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_mapM___main___at_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_Expr_isApp(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = l_Lean_Expr_getAppFn___main(x_2);
if (lean_obj_tag(x_8) == 4)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_inc(x_9);
x_11 = l_Lean_Environment_isProjectionFn(x_10, x_9);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_4);
return x_13;
}
else
{
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
lean_dec(x_9);
x_15 = l_Array_contains___at_Lean_findField_x3f___main___spec__1(x_1, x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_4);
return x_17;
}
else
{
lean_object* x_18; 
x_18 = l_Lean_WHNF_unfoldDefinitionAux___at_Lean_Meta_unfoldDefinition_x3f___spec__1(x_2, x_3, x_4);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_4);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_4);
return x_22;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_DefaultFields_reduce___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_2, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = l_Array_empty___closed__1;
x_9 = x_3;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_5);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_array_fget(x_3, x_2);
x_12 = lean_box(0);
x_13 = x_12;
x_14 = lean_array_fset(x_3, x_2, x_13);
lean_inc(x_4);
lean_inc(x_11);
lean_inc(x_1);
x_15 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main(x_1, x_11, x_4, x_5);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_2, x_18);
x_20 = x_16;
lean_dec(x_11);
x_21 = lean_array_fset(x_14, x_2, x_20);
lean_dec(x_2);
x_2 = x_19;
x_3 = x_21;
x_5 = x_17;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
x_6 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main(x_1, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_Meta_mkLambda(x_2, x_7, x_4, x_8);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
x_6 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main(x_1, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_Meta_mkForall(x_2, x_7, x_4, x_8);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_metavar_ctx_get_expr_assignment(x_6, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
lean_dec(x_2);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Expr_isMVar(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_4);
return x_11;
}
else
{
x_2 = x_9;
goto _start;
}
}
}
case 5:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_inc(x_3);
lean_inc(x_2);
x_14 = l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Expr_getAppFn___main(x_13);
lean_dec(x_13);
lean_inc(x_3);
lean_inc(x_1);
x_18 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main(x_1, x_17, x_3, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Expr_isLambda(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_22);
x_24 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_23);
x_25 = lean_mk_array(x_23, x_24);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_sub(x_23, x_26);
lean_dec(x_23);
x_28 = l___private_Init_Lean_Expr_3__getAppArgsAux___main(x_2, x_25, x_27);
x_29 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_DefaultFields_reduce___main___spec__1(x_1, x_22, x_28, x_3, x_20);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_31, x_31, x_22, x_19);
lean_dec(x_31);
lean_ctor_set(x_29, 0, x_32);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_29, 0);
x_34 = lean_ctor_get(x_29, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_29);
x_35 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_33, x_33, x_22, x_19);
lean_dec(x_33);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_dec(x_19);
x_37 = !lean_is_exclusive(x_29);
if (x_37 == 0)
{
return x_29;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_29, 0);
x_39 = lean_ctor_get(x_29, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_29);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_41 = lean_unsigned_to_nat(0u);
x_42 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_41);
x_43 = lean_mk_empty_array_with_capacity(x_42);
lean_dec(x_42);
x_44 = l___private_Init_Lean_Expr_4__getAppRevArgsAux___main(x_2, x_43);
x_45 = l_Lean_Expr_betaRev(x_19, x_44);
lean_dec(x_44);
lean_dec(x_19);
x_2 = x_45;
x_4 = x_20;
goto _start;
}
}
else
{
uint8_t x_47; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_18);
if (x_47 == 0)
{
return x_18;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_18, 0);
x_49 = lean_ctor_get(x_18, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_18);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_13);
lean_dec(x_2);
x_51 = lean_ctor_get(x_14, 1);
lean_inc(x_51);
lean_dec(x_14);
x_52 = lean_ctor_get(x_15, 0);
lean_inc(x_52);
lean_dec(x_15);
x_2 = x_52;
x_4 = x_51;
goto _start;
}
}
else
{
uint8_t x_54; 
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_14);
if (x_54 == 0)
{
return x_14;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_14, 0);
x_56 = lean_ctor_get(x_14, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_14);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
case 6:
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main___lambda__1), 5, 1);
lean_closure_set(x_58, 0, x_1);
x_59 = l_Lean_Meta_lambdaTelescope___rarg(x_2, x_58, x_3, x_4);
return x_59;
}
case 7:
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main___lambda__2), 5, 1);
lean_closure_set(x_60, 0, x_1);
x_61 = l_Lean_Meta_forallTelescope___rarg(x_2, x_60, x_3, x_4);
return x_61;
}
case 8:
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main___lambda__1), 5, 1);
lean_closure_set(x_62, 0, x_1);
x_63 = l_Lean_Meta_lambdaTelescope___rarg(x_2, x_62, x_3, x_4);
return x_63;
}
case 10:
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_2, 1);
lean_inc(x_64);
x_65 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main(x_1, x_64, x_3, x_4);
if (lean_obj_tag(x_65) == 0)
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_65, 0);
x_68 = l_Lean_Elab_Term_StructInst_isDefaultMissing_x3f(x_2);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; 
x_69 = lean_expr_update_mdata(x_2, x_67);
lean_ctor_set(x_65, 0, x_69);
return x_65;
}
else
{
uint8_t x_70; 
lean_dec(x_68);
x_70 = l_Lean_Expr_isMVar(x_67);
if (x_70 == 0)
{
lean_dec(x_2);
return x_65;
}
else
{
lean_object* x_71; 
x_71 = lean_expr_update_mdata(x_2, x_67);
lean_ctor_set(x_65, 0, x_71);
return x_65;
}
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_65, 0);
x_73 = lean_ctor_get(x_65, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_65);
x_74 = l_Lean_Elab_Term_StructInst_isDefaultMissing_x3f(x_2);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_expr_update_mdata(x_2, x_72);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_73);
return x_76;
}
else
{
uint8_t x_77; 
lean_dec(x_74);
x_77 = l_Lean_Expr_isMVar(x_72);
if (x_77 == 0)
{
lean_object* x_78; 
lean_dec(x_2);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_72);
lean_ctor_set(x_78, 1, x_73);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_expr_update_mdata(x_2, x_72);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_73);
return x_80;
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_2);
x_81 = !lean_is_exclusive(x_65);
if (x_81 == 0)
{
return x_65;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_65, 0);
x_83 = lean_ctor_get(x_65, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_65);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
case 11:
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_2, 1);
lean_inc(x_85);
x_86 = lean_ctor_get(x_2, 2);
lean_inc(x_86);
lean_inc(x_3);
lean_inc(x_86);
x_87 = l_Lean_Meta_reduceProj_x3f(x_86, x_85, x_3, x_4);
lean_dec(x_85);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; 
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main(x_1, x_86, x_3, x_89);
if (lean_obj_tag(x_90) == 0)
{
uint8_t x_91; 
x_91 = !lean_is_exclusive(x_90);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_90, 0);
x_93 = lean_expr_update_proj(x_2, x_92);
lean_ctor_set(x_90, 0, x_93);
return x_90;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_94 = lean_ctor_get(x_90, 0);
x_95 = lean_ctor_get(x_90, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_90);
x_96 = lean_expr_update_proj(x_2, x_94);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
else
{
uint8_t x_98; 
lean_dec(x_2);
x_98 = !lean_is_exclusive(x_90);
if (x_98 == 0)
{
return x_90;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_90, 0);
x_100 = lean_ctor_get(x_90, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_90);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
else
{
lean_object* x_102; lean_object* x_103; 
lean_dec(x_86);
lean_dec(x_2);
x_102 = lean_ctor_get(x_87, 1);
lean_inc(x_102);
lean_dec(x_87);
x_103 = lean_ctor_get(x_88, 0);
lean_inc(x_103);
lean_dec(x_88);
x_2 = x_103;
x_4 = x_102;
goto _start;
}
}
else
{
uint8_t x_105; 
lean_dec(x_86);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_105 = !lean_is_exclusive(x_87);
if (x_105 == 0)
{
return x_87;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_87, 0);
x_107 = lean_ctor_get(x_87, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_87);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
default: 
{
lean_object* x_109; 
lean_dec(x_3);
lean_dec(x_1);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_2);
lean_ctor_set(x_109, 1, x_4);
return x_109;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Expr_FindImpl_findM_x3f___main___at_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___spec__1(size_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; size_t x_99; size_t x_100; lean_object* x_101; size_t x_102; uint8_t x_103; 
x_99 = lean_ptr_addr(x_2);
x_100 = x_1 == 0 ? 0 : x_99 % x_1;
x_101 = lean_array_uget(x_3, x_100);
x_102 = lean_ptr_addr(x_101);
lean_dec(x_101);
x_103 = x_102 == x_99;
if (x_103 == 0)
{
lean_object* x_104; uint8_t x_105; 
lean_inc(x_2);
x_104 = lean_array_uset(x_3, x_100, x_2);
x_105 = 0;
x_4 = x_105;
x_5 = x_104;
goto block_98;
}
else
{
uint8_t x_106; 
x_106 = 1;
x_4 = x_106;
x_5 = x_3;
goto block_98;
}
block_98:
{
if (x_4 == 0)
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Term_StructInst_isDefaultMissing_x3f(x_2);
if (lean_obj_tag(x_6) == 0)
{
switch (lean_obj_tag(x_2)) {
case 5:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_Lean_Expr_FindImpl_findM_x3f___main___at_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___spec__1(x_1, x_7, x_5);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_2 = x_8;
x_3 = x_11;
goto _start;
}
else
{
uint8_t x_13; 
lean_dec(x_8);
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_9, 0);
lean_dec(x_14);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_9, 0, x_17);
return x_9;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_dec(x_9);
x_19 = lean_ctor_get(x_10, 0);
lean_inc(x_19);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 x_20 = x_10;
} else {
 lean_dec_ref(x_10);
 x_20 = lean_box(0);
}
if (lean_is_scalar(x_20)) {
 x_21 = lean_alloc_ctor(1, 1, 0);
} else {
 x_21 = x_20;
}
lean_ctor_set(x_21, 0, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
}
case 6:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_2, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
lean_dec(x_2);
x_25 = l_Lean_Expr_FindImpl_findM_x3f___main___at_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___spec__1(x_1, x_23, x_5);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_2 = x_24;
x_3 = x_27;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_24);
x_29 = !lean_is_exclusive(x_25);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_25, 0);
lean_dec(x_30);
x_31 = !lean_is_exclusive(x_26);
if (x_31 == 0)
{
return x_25;
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_25, 0, x_33);
return x_25;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_25, 1);
lean_inc(x_34);
lean_dec(x_25);
x_35 = lean_ctor_get(x_26, 0);
lean_inc(x_35);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 x_36 = x_26;
} else {
 lean_dec_ref(x_26);
 x_36 = lean_box(0);
}
if (lean_is_scalar(x_36)) {
 x_37 = lean_alloc_ctor(1, 1, 0);
} else {
 x_37 = x_36;
}
lean_ctor_set(x_37, 0, x_35);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_34);
return x_38;
}
}
}
case 7:
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_2, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_2, 2);
lean_inc(x_40);
lean_dec(x_2);
x_41 = l_Lean_Expr_FindImpl_findM_x3f___main___at_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___spec__1(x_1, x_39, x_5);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_2 = x_40;
x_3 = x_43;
goto _start;
}
else
{
uint8_t x_45; 
lean_dec(x_40);
x_45 = !lean_is_exclusive(x_41);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; 
x_46 = lean_ctor_get(x_41, 0);
lean_dec(x_46);
x_47 = !lean_is_exclusive(x_42);
if (x_47 == 0)
{
return x_41;
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_42, 0);
lean_inc(x_48);
lean_dec(x_42);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_41, 0, x_49);
return x_41;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
lean_dec(x_41);
x_51 = lean_ctor_get(x_42, 0);
lean_inc(x_51);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 x_52 = x_42;
} else {
 lean_dec_ref(x_42);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(1, 1, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_51);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_50);
return x_54;
}
}
}
case 8:
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_55 = lean_ctor_get(x_2, 1);
lean_inc(x_55);
x_56 = lean_ctor_get(x_2, 2);
lean_inc(x_56);
x_57 = lean_ctor_get(x_2, 3);
lean_inc(x_57);
lean_dec(x_2);
x_58 = l_Lean_Expr_FindImpl_findM_x3f___main___at_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___spec__1(x_1, x_55, x_5);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = l_Lean_Expr_FindImpl_findM_x3f___main___at_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___spec__1(x_1, x_56, x_60);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_2 = x_57;
x_3 = x_63;
goto _start;
}
else
{
uint8_t x_65; 
lean_dec(x_57);
x_65 = !lean_is_exclusive(x_61);
if (x_65 == 0)
{
lean_object* x_66; uint8_t x_67; 
x_66 = lean_ctor_get(x_61, 0);
lean_dec(x_66);
x_67 = !lean_is_exclusive(x_62);
if (x_67 == 0)
{
return x_61;
}
else
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_62, 0);
lean_inc(x_68);
lean_dec(x_62);
x_69 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_61, 0, x_69);
return x_61;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_70 = lean_ctor_get(x_61, 1);
lean_inc(x_70);
lean_dec(x_61);
x_71 = lean_ctor_get(x_62, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 x_72 = x_62;
} else {
 lean_dec_ref(x_62);
 x_72 = lean_box(0);
}
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(1, 1, 0);
} else {
 x_73 = x_72;
}
lean_ctor_set(x_73, 0, x_71);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_70);
return x_74;
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_57);
lean_dec(x_56);
x_75 = !lean_is_exclusive(x_58);
if (x_75 == 0)
{
lean_object* x_76; uint8_t x_77; 
x_76 = lean_ctor_get(x_58, 0);
lean_dec(x_76);
x_77 = !lean_is_exclusive(x_59);
if (x_77 == 0)
{
return x_58;
}
else
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_59, 0);
lean_inc(x_78);
lean_dec(x_59);
x_79 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_58, 0, x_79);
return x_58;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_80 = lean_ctor_get(x_58, 1);
lean_inc(x_80);
lean_dec(x_58);
x_81 = lean_ctor_get(x_59, 0);
lean_inc(x_81);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 x_82 = x_59;
} else {
 lean_dec_ref(x_59);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 1, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_81);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_80);
return x_84;
}
}
}
case 10:
{
lean_object* x_85; 
x_85 = lean_ctor_get(x_2, 1);
lean_inc(x_85);
lean_dec(x_2);
x_2 = x_85;
x_3 = x_5;
goto _start;
}
case 11:
{
lean_object* x_87; 
x_87 = lean_ctor_get(x_2, 2);
lean_inc(x_87);
lean_dec(x_2);
x_2 = x_87;
x_3 = x_5;
goto _start;
}
default: 
{
lean_object* x_89; lean_object* x_90; 
lean_dec(x_2);
x_89 = lean_box(0);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_5);
return x_90;
}
}
}
else
{
uint8_t x_91; 
x_91 = !lean_is_exclusive(x_6);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_6, 0);
lean_dec(x_92);
lean_ctor_set(x_6, 0, x_2);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_6);
lean_ctor_set(x_93, 1, x_5);
return x_93;
}
else
{
lean_object* x_94; lean_object* x_95; 
lean_dec(x_6);
x_94 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_94, 0, x_2);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_5);
return x_95;
}
}
}
else
{
lean_object* x_96; lean_object* x_97; 
lean_dec(x_2);
x_96 = lean_box(0);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_5);
return x_97;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_default");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_nat_dec_lt(x_3, x_7);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_1);
x_12 = lean_nat_dec_lt(x_6, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_9);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_array_fget(x_1, x_6);
x_17 = l_Lean_Elab_Term_StructInst_Struct_structName(x_16);
lean_inc(x_4);
x_18 = l_Lean_Name_append___main(x_17, x_4);
lean_dec(x_17);
x_19 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___closed__2;
x_20 = l_Lean_Name_append___main(x_18, x_19);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_getEnv___rarg(x_9);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_environment_find(x_22, x_20);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_16);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_6, x_25);
lean_dec(x_6);
x_6 = x_26;
x_9 = x_23;
goto _start;
}
else
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_24, 0);
lean_inc(x_28);
lean_dec(x_24);
if (lean_obj_tag(x_28) == 1)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = l_Lean_Elab_Term_getMCtx___rarg(x_23);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_8);
x_32 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f(x_16, x_28, x_8, x_31);
lean_dec(x_28);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_16);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Lean_Elab_Term_setMCtx(x_30, x_8, x_34);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_6, x_37);
lean_dec(x_6);
x_39 = lean_nat_add(x_7, x_37);
lean_dec(x_7);
x_6 = x_38;
x_7 = x_39;
x_9 = x_36;
goto _start;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_41 = lean_ctor_get(x_32, 1);
lean_inc(x_41);
lean_dec(x_32);
x_42 = lean_ctor_get(x_33, 0);
lean_inc(x_42);
lean_dec(x_33);
x_43 = l_Lean_Elab_Term_StructInst_Struct_ref(x_16);
lean_dec(x_16);
x_44 = lean_ctor_get(x_41, 0);
lean_inc(x_44);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_46 = lean_ctor_get(x_44, 4);
x_47 = lean_ctor_get(x_8, 0);
lean_inc(x_47);
x_48 = l_Lean_TraceState_Inhabited___closed__1;
lean_ctor_set(x_44, 4, x_48);
lean_inc(x_2);
x_49 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main(x_2, x_42, x_47, x_44);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; size_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
lean_inc(x_8);
x_52 = l___private_Init_Lean_Elab_Term_3__fromMetaState(x_43, x_8, x_41, x_51, x_46);
lean_dec(x_43);
x_53 = 8192;
x_54 = l_Lean_Expr_FindImpl_initCache;
lean_inc(x_50);
x_55 = l_Lean_Expr_FindImpl_findM_x3f___main___at_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___spec__1(x_53, x_50, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
lean_dec(x_55);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; uint8_t x_58; 
lean_dec(x_30);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_57 = l_Lean_Elab_Term_assignExprMVar(x_5, x_50, x_8, x_52);
lean_dec(x_8);
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; uint8_t x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_57, 0);
lean_dec(x_59);
x_60 = 1;
x_61 = lean_box(x_60);
lean_ctor_set(x_57, 0, x_61);
return x_57;
}
else
{
lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; 
x_62 = lean_ctor_get(x_57, 1);
lean_inc(x_62);
lean_dec(x_57);
x_63 = 1;
x_64 = lean_box(x_63);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_62);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_56);
lean_dec(x_50);
x_66 = l_Lean_Elab_Term_setMCtx(x_30, x_8, x_52);
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
lean_dec(x_66);
x_68 = lean_unsigned_to_nat(1u);
x_69 = lean_nat_add(x_6, x_68);
lean_dec(x_6);
x_70 = lean_nat_add(x_7, x_68);
lean_dec(x_7);
x_6 = x_69;
x_7 = x_70;
x_9 = x_67;
goto _start;
}
}
else
{
uint8_t x_72; 
lean_dec(x_30);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_72 = !lean_is_exclusive(x_49);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_73 = lean_ctor_get(x_49, 0);
x_74 = lean_ctor_get(x_49, 1);
lean_inc(x_8);
x_75 = l___private_Init_Lean_Elab_Term_2__fromMetaException(x_8, x_43, x_73);
x_76 = l___private_Init_Lean_Elab_Term_3__fromMetaState(x_43, x_8, x_41, x_74, x_46);
lean_dec(x_43);
lean_ctor_set(x_49, 1, x_76);
lean_ctor_set(x_49, 0, x_75);
return x_49;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_77 = lean_ctor_get(x_49, 0);
x_78 = lean_ctor_get(x_49, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_49);
lean_inc(x_8);
x_79 = l___private_Init_Lean_Elab_Term_2__fromMetaException(x_8, x_43, x_77);
x_80 = l___private_Init_Lean_Elab_Term_3__fromMetaState(x_43, x_8, x_41, x_78, x_46);
lean_dec(x_43);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_82 = lean_ctor_get(x_44, 0);
x_83 = lean_ctor_get(x_44, 1);
x_84 = lean_ctor_get(x_44, 2);
x_85 = lean_ctor_get(x_44, 3);
x_86 = lean_ctor_get(x_44, 4);
x_87 = lean_ctor_get(x_44, 5);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_44);
x_88 = lean_ctor_get(x_8, 0);
lean_inc(x_88);
x_89 = l_Lean_TraceState_Inhabited___closed__1;
x_90 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_90, 0, x_82);
lean_ctor_set(x_90, 1, x_83);
lean_ctor_set(x_90, 2, x_84);
lean_ctor_set(x_90, 3, x_85);
lean_ctor_set(x_90, 4, x_89);
lean_ctor_set(x_90, 5, x_87);
lean_inc(x_2);
x_91 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce___main(x_2, x_42, x_88, x_90);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; size_t x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
lean_inc(x_8);
x_94 = l___private_Init_Lean_Elab_Term_3__fromMetaState(x_43, x_8, x_41, x_93, x_86);
lean_dec(x_43);
x_95 = 8192;
x_96 = l_Lean_Expr_FindImpl_initCache;
lean_inc(x_92);
x_97 = l_Lean_Expr_FindImpl_findM_x3f___main___at_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___spec__1(x_95, x_92, x_96);
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
lean_dec(x_97);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; uint8_t x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_30);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_99 = l_Lean_Elab_Term_assignExprMVar(x_5, x_92, x_8, x_94);
lean_dec(x_8);
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_101 = x_99;
} else {
 lean_dec_ref(x_99);
 x_101 = lean_box(0);
}
x_102 = 1;
x_103 = lean_box(x_102);
if (lean_is_scalar(x_101)) {
 x_104 = lean_alloc_ctor(0, 2, 0);
} else {
 x_104 = x_101;
}
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_100);
return x_104;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_dec(x_98);
lean_dec(x_92);
x_105 = l_Lean_Elab_Term_setMCtx(x_30, x_8, x_94);
x_106 = lean_ctor_get(x_105, 1);
lean_inc(x_106);
lean_dec(x_105);
x_107 = lean_unsigned_to_nat(1u);
x_108 = lean_nat_add(x_6, x_107);
lean_dec(x_6);
x_109 = lean_nat_add(x_7, x_107);
lean_dec(x_7);
x_6 = x_108;
x_7 = x_109;
x_9 = x_106;
goto _start;
}
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
lean_dec(x_30);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_111 = lean_ctor_get(x_91, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_91, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_113 = x_91;
} else {
 lean_dec_ref(x_91);
 x_113 = lean_box(0);
}
lean_inc(x_8);
x_114 = l___private_Init_Lean_Elab_Term_2__fromMetaException(x_8, x_43, x_111);
x_115 = l___private_Init_Lean_Elab_Term_3__fromMetaState(x_43, x_8, x_41, x_112, x_86);
lean_dec(x_43);
if (lean_is_scalar(x_113)) {
 x_116 = lean_alloc_ctor(1, 2, 0);
} else {
 x_116 = x_113;
}
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
}
else
{
uint8_t x_117; 
lean_dec(x_30);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_117 = !lean_is_exclusive(x_32);
if (x_117 == 0)
{
return x_32;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_32, 0);
x_119 = lean_ctor_get(x_32, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_32);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
return x_120;
}
}
}
else
{
lean_object* x_121; lean_object* x_122; 
lean_dec(x_28);
lean_dec(x_16);
x_121 = lean_unsigned_to_nat(1u);
x_122 = lean_nat_add(x_6, x_121);
lean_dec(x_6);
x_6 = x_122;
x_9 = x_23;
goto _start;
}
}
}
}
else
{
uint8_t x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_124 = 0;
x_125 = lean_box(x_124);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_9);
return x_126;
}
}
}
lean_object* l_Lean_Expr_FindImpl_findM_x3f___main___at_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = l_Lean_Expr_FindImpl_findM_x3f___main___at_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___spec__1(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main(x_1, x_2, x_3, x_4, x_5, x_8, x_8, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___main___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_64; 
x_64 = lean_ctor_get(x_1, 2);
lean_inc(x_64);
if (lean_obj_tag(x_64) == 1)
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_2);
lean_dec(x_1);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
lean_dec(x_64);
x_66 = l_Lean_Elab_Term_StructInst_DefaultFields_step___main(x_65, x_3, x_4, x_5, x_6);
return x_66;
}
else
{
lean_object* x_67; 
lean_dec(x_64);
x_67 = lean_box(0);
x_7 = x_67;
goto block_63;
}
block_63:
{
lean_object* x_8; 
lean_dec(x_7);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_9 = l_PUnit_Inhabited;
x_10 = l_monadInhabited___rarg(x_2, x_9);
x_11 = l_unreachable_x21___rarg(x_10);
x_12 = lean_apply_4(x_11, x_3, x_4, x_5, x_6);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_13 = lean_ctor_get(x_8, 0);
lean_inc(x_13);
lean_dec(x_8);
x_14 = l_Lean_Elab_Term_StructInst_isDefaultMissing_x3f(x_13);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_4);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_6);
return x_17;
}
else
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
if (lean_obj_tag(x_18) == 2)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
lean_inc(x_19);
x_20 = l_Lean_Elab_Term_isExprMVarAssigned(x_19, x_5, x_6);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_ctor_get(x_3, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_3, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_3, 2);
lean_inc(x_26);
lean_dec(x_3);
x_27 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(x_1);
lean_dec(x_1);
x_28 = lean_unsigned_to_nat(0u);
x_29 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main(x_24, x_25, x_26, x_27, x_19, x_28, x_28, x_5, x_23);
lean_dec(x_26);
lean_dec(x_24);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_unbox(x_30);
if (x_31 == 0)
{
uint8_t x_32; 
lean_dec(x_30);
x_32 = !lean_is_exclusive(x_29);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_29, 0);
lean_dec(x_33);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_4);
lean_ctor_set(x_29, 0, x_35);
return x_29;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
lean_dec(x_29);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_4);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_dec(x_4);
x_40 = !lean_is_exclusive(x_29);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_29, 0);
lean_dec(x_41);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_30);
lean_ctor_set(x_29, 0, x_43);
return x_29;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_29, 1);
lean_inc(x_44);
lean_dec(x_29);
x_45 = lean_box(0);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_30);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_44);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_4);
x_48 = !lean_is_exclusive(x_29);
if (x_48 == 0)
{
return x_29;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_29, 0);
x_50 = lean_ctor_get(x_29, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_29);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_20);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_20, 0);
lean_dec(x_53);
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_4);
lean_ctor_set(x_20, 0, x_55);
return x_20;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_56 = lean_ctor_get(x_20, 1);
lean_inc(x_56);
lean_dec(x_20);
x_57 = lean_box(0);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_4);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_56);
return x_59;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_60 = lean_box(0);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_4);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_6);
return x_62;
}
}
}
}
}
}
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___main___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___main___spec__1(x_1, x_2, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_box(0);
x_10 = lean_apply_6(x_8, lean_box(0), x_9, x_3, x_4, x_5, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___main___spec__1___lambda__1), 6, 2);
lean_closure_set(x_14, 0, x_11);
lean_closure_set(x_14, 1, x_1);
x_15 = lean_alloc_closure((void*)(l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___main___spec__1___lambda__2___boxed), 7, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_12);
x_16 = lean_apply_8(x_13, lean_box(0), lean_box(0), x_14, x_15, x_3, x_4, x_5, x_6);
return x_16;
}
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_step___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_MetavarContext_MkBinding_mkBinding___closed__1;
x_2 = l_StateT_Monad___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_step___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_DefaultFields_step___main___closed__1;
x_2 = l_ReaderT_Monad___rarg(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone(x_2, x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_13 = !lean_is_exclusive(x_2);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_array_push(x_14, x_1);
lean_ctor_set(x_2, 0, x_15);
x_16 = l_Lean_Elab_Term_StructInst_DefaultFields_step___main___closed__2;
x_17 = l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___main___spec__1(x_16, x_12, x_2, x_11, x_4, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_2, 0);
x_19 = lean_ctor_get(x_2, 1);
x_20 = lean_ctor_get(x_2, 2);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_2);
x_21 = lean_array_push(x_18, x_1);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_20);
x_23 = l_Lean_Elab_Term_StructInst_DefaultFields_step___main___closed__2;
x_24 = l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___main___spec__1(x_23, x_12, x_22, x_11, x_4, x_10);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_6);
if (x_25 == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_6, 0);
lean_dec(x_26);
x_27 = !lean_is_exclusive(x_7);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_7, 0);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_7, 0, x_29);
return x_6;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_7, 1);
lean_inc(x_30);
lean_dec(x_7);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
lean_ctor_set(x_6, 0, x_32);
return x_6;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_6, 1);
lean_inc(x_33);
lean_dec(x_6);
x_34 = lean_ctor_get(x_7, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_35 = x_7;
} else {
 lean_dec_ref(x_7);
 x_35 = lean_box(0);
}
x_36 = lean_box(0);
if (lean_is_scalar(x_35)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_35;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_33);
return x_38;
}
}
}
}
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___main___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___main___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Term_StructInst_DefaultFields_step___main(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is missing");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_Elab_Term_getMCtx___rarg(x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___main(x_10, x_3);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_5);
lean_ctor_set(x_8, 0, x_14);
return x_8;
}
else
{
lean_object* x_15; uint8_t x_16; 
lean_free_object(x_8);
lean_dec(x_5);
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_nat_dec_lt(x_1, x_2);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_15);
x_17 = !lean_is_exclusive(x_4);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_4, 2);
lean_dec(x_18);
lean_inc(x_2);
lean_ctor_set(x_4, 2, x_2);
x_19 = 0;
x_20 = lean_box(x_19);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_3);
x_21 = l_Lean_Elab_Term_StructInst_DefaultFields_step___main(x_3, x_4, x_20, x_6, x_11);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_unbox(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_dec(x_21);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_2, x_26);
lean_dec(x_2);
x_2 = x_27;
x_5 = x_23;
x_7 = x_25;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_2);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_dec(x_21);
x_30 = lean_unsigned_to_nat(0u);
x_2 = x_30;
x_5 = x_23;
x_7 = x_29;
goto _start;
}
}
else
{
uint8_t x_32; 
lean_dec(x_4);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_21);
if (x_32 == 0)
{
return x_21;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_21, 0);
x_34 = lean_ctor_get(x_21, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_21);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_4, 0);
x_37 = lean_ctor_get(x_4, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_4);
lean_inc(x_2);
x_38 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
lean_ctor_set(x_38, 2, x_2);
x_39 = 0;
x_40 = lean_box(x_39);
lean_inc(x_6);
lean_inc(x_38);
lean_inc(x_3);
x_41 = l_Lean_Elab_Term_StructInst_DefaultFields_step___main(x_3, x_38, x_40, x_6, x_11);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_unbox(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_41, 1);
lean_inc(x_45);
lean_dec(x_41);
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_add(x_2, x_46);
lean_dec(x_2);
x_2 = x_47;
x_4 = x_38;
x_5 = x_43;
x_7 = x_45;
goto _start;
}
else
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_2);
x_49 = lean_ctor_get(x_41, 1);
lean_inc(x_49);
lean_dec(x_41);
x_50 = lean_unsigned_to_nat(0u);
x_2 = x_50;
x_4 = x_38;
x_5 = x_43;
x_7 = x_49;
goto _start;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_38);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_52 = lean_ctor_get(x_41, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_41, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_54 = x_41;
} else {
 lean_dec_ref(x_41);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(1, 2, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_56 = lean_ctor_get(x_15, 0);
lean_inc(x_56);
x_57 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(x_15);
lean_dec(x_15);
x_58 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__3;
x_60 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__3;
x_62 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = l_Lean_Elab_Term_throwError___rarg(x_56, x_62, x_6, x_11);
lean_dec(x_56);
x_64 = !lean_is_exclusive(x_63);
if (x_64 == 0)
{
return x_63;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_63, 0);
x_66 = lean_ctor_get(x_63, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_63);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_8, 0);
x_69 = lean_ctor_get(x_8, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_8);
x_70 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___main(x_68, x_3);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_71 = lean_box(0);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_5);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_69);
return x_73;
}
else
{
lean_object* x_74; uint8_t x_75; 
lean_dec(x_5);
x_74 = lean_ctor_get(x_70, 0);
lean_inc(x_74);
lean_dec(x_70);
x_75 = lean_nat_dec_lt(x_1, x_2);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_74);
x_76 = lean_ctor_get(x_4, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_4, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 x_78 = x_4;
} else {
 lean_dec_ref(x_4);
 x_78 = lean_box(0);
}
lean_inc(x_2);
if (lean_is_scalar(x_78)) {
 x_79 = lean_alloc_ctor(0, 3, 0);
} else {
 x_79 = x_78;
}
lean_ctor_set(x_79, 0, x_76);
lean_ctor_set(x_79, 1, x_77);
lean_ctor_set(x_79, 2, x_2);
x_80 = 0;
x_81 = lean_box(x_80);
lean_inc(x_6);
lean_inc(x_79);
lean_inc(x_3);
x_82 = l_Lean_Elab_Term_StructInst_DefaultFields_step___main(x_3, x_79, x_81, x_6, x_69);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
lean_dec(x_83);
x_85 = lean_unbox(x_84);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_82, 1);
lean_inc(x_86);
lean_dec(x_82);
x_87 = lean_unsigned_to_nat(1u);
x_88 = lean_nat_add(x_2, x_87);
lean_dec(x_2);
x_2 = x_88;
x_4 = x_79;
x_5 = x_84;
x_7 = x_86;
goto _start;
}
else
{
lean_object* x_90; lean_object* x_91; 
lean_dec(x_2);
x_90 = lean_ctor_get(x_82, 1);
lean_inc(x_90);
lean_dec(x_82);
x_91 = lean_unsigned_to_nat(0u);
x_2 = x_91;
x_4 = x_79;
x_5 = x_84;
x_7 = x_90;
goto _start;
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_79);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_93 = lean_ctor_get(x_82, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_82, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_95 = x_82;
} else {
 lean_dec_ref(x_82);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_97 = lean_ctor_get(x_74, 0);
lean_inc(x_97);
x_98 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(x_74);
lean_dec(x_74);
x_99 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_99, 0, x_98);
x_100 = l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__3;
x_101 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
x_102 = l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__3;
x_103 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
x_104 = l_Lean_Elab_Term_throwError___rarg(x_97, x_103, x_6, x_69);
lean_dec(x_97);
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_107 = x_104;
} else {
 lean_dec_ref(x_104);
 x_107 = lean_box(0);
}
if (lean_is_scalar(x_107)) {
 x_108 = lean_alloc_ctor(1, 2, 0);
} else {
 x_108 = x_107;
}
lean_ctor_set(x_108, 0, x_105);
lean_ctor_set(x_108, 1, x_106);
return x_108;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagate(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___main(x_1);
x_5 = l_Array_empty___closed__1;
x_6 = l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___main(x_1, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 2, x_7);
x_9 = 0;
x_10 = lean_box(x_9);
x_11 = l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main(x_4, x_7, x_1, x_8, x_10, x_2, x_3);
lean_dec(x_4);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_11);
if (x_19 == 0)
{
return x_11;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_11, 0);
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_11);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("struct");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Elab_Util_9__regTraceClasses___closed__1;
x_2 = l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid {...} notation, '");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is not a structure");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__6;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__7;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_6 = l___private_Init_Lean_Elab_StructInst_5__getStructName(x_1, x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_67 = l_Lean_Elab_Term_getEnv___rarg(x_8);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
lean_inc(x_7);
x_70 = l_Lean_isStructureLike(x_68, x_7);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
lean_dec(x_3);
lean_dec(x_2);
x_71 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_71, 0, x_7);
x_72 = l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__5;
x_73 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
x_74 = l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__8;
x_75 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
x_76 = l_Lean_Elab_Term_throwError___rarg(x_1, x_75, x_4, x_69);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_76);
if (x_77 == 0)
{
return x_76;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_76, 0);
x_79 = lean_ctor_get(x_76, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_76);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
else
{
x_9 = x_69;
goto block_66;
}
block_66:
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
x_10 = l___private_Init_Lean_Elab_StructInst_7__mkStructView(x_1, x_7, x_3);
lean_inc(x_4);
x_11 = l___private_Init_Lean_Elab_StructInst_19__expandStruct___main(x_10, x_4, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_Term_getOptions(x_4, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__2;
x_18 = l_Lean_checkTraceOption(x_15, x_17);
lean_dec(x_15);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_1);
lean_inc(x_4);
x_19 = l___private_Init_Lean_Elab_StructInst_24__elabStruct___main(x_12, x_2, x_4, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = l_Lean_Elab_Term_StructInst_DefaultFields_propagate(x_23, x_4, x_21);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set(x_24, 0, x_22);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_22);
x_29 = !lean_is_exclusive(x_24);
if (x_29 == 0)
{
return x_24;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_24, 0);
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_24);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_4);
x_33 = !lean_is_exclusive(x_19);
if (x_33 == 0)
{
return x_19;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_19, 0);
x_35 = lean_ctor_get(x_19, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_19);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_inc(x_12);
x_37 = l_Lean_Elab_Term_StructInst_formatStruct___main(x_12);
x_38 = l_Lean_Options_empty;
x_39 = l_Lean_Format_pretty(x_37, x_38);
x_40 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
x_42 = l_Lean_Elab_Term_logTrace(x_17, x_1, x_41, x_4, x_16);
lean_dec(x_1);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
lean_inc(x_4);
x_44 = l___private_Init_Lean_Elab_StructInst_24__elabStruct___main(x_12, x_2, x_4, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_ctor_get(x_45, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
lean_dec(x_45);
x_49 = l_Lean_Elab_Term_StructInst_DefaultFields_propagate(x_48, x_4, x_46);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_49, 0);
lean_dec(x_51);
lean_ctor_set(x_49, 0, x_47);
return x_49;
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_49, 1);
lean_inc(x_52);
lean_dec(x_49);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_47);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
else
{
uint8_t x_54; 
lean_dec(x_47);
x_54 = !lean_is_exclusive(x_49);
if (x_54 == 0)
{
return x_49;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_49, 0);
x_56 = lean_ctor_get(x_49, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_49);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_4);
x_58 = !lean_is_exclusive(x_44);
if (x_58 == 0)
{
return x_44;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_44, 0);
x_60 = lean_ctor_get(x_44, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_44);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_11);
if (x_62 == 0)
{
return x_11;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_11, 0);
x_64 = lean_ctor_get(x_11, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_11);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_6);
if (x_81 == 0)
{
return x_6;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_6, 0);
x_83 = lean_ctor_get(x_6, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_6);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_elabStructInst___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid {...} notation, explicit source is required when using '[<index>] := <value>'");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_elabStructInst___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_elabStructInst___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_StructInst_elabStructInst___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_elabStructInst___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_1);
x_5 = l___private_Init_Lean_Elab_StructInst_1__expandNonAtomicExplicitSource(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
lean_inc(x_3);
x_8 = l___private_Init_Lean_Elab_StructInst_2__getStructSource(x_1, x_3, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_3);
x_11 = l___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f(x_1, x_3, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux(x_1, x_2, x_9, x_3, x_13);
return x_14;
}
else
{
if (lean_obj_tag(x_9) == 2)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_ctor_get(x_12, 0);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_dec(x_9);
x_18 = l___private_Init_Lean_Elab_StructInst_4__elabModifyOp(x_1, x_16, x_17, x_2, x_3, x_15);
lean_dec(x_2);
lean_dec(x_17);
lean_dec(x_16);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_2);
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_dec(x_11);
x_20 = l_Lean_Elab_Term_StructInst_elabStructInst___closed__3;
x_21 = l_Lean_Elab_Term_throwError___rarg(x_1, x_20, x_3, x_19);
lean_dec(x_1);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_11);
if (x_22 == 0)
{
return x_11;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_8);
if (x_26 == 0)
{
return x_8;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_8, 0);
x_28 = lean_ctor_get(x_8, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_8);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_5, 1);
lean_inc(x_30);
lean_dec(x_5);
x_31 = lean_ctor_get(x_6, 0);
lean_inc(x_31);
lean_dec(x_6);
x_32 = !lean_is_exclusive(x_3);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_3, 8);
lean_inc(x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_1);
lean_ctor_set(x_34, 1, x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set(x_3, 8, x_35);
x_36 = 1;
x_37 = l_Lean_Elab_Term_elabTerm(x_31, x_2, x_36, x_3, x_30);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; 
x_38 = lean_ctor_get(x_3, 0);
x_39 = lean_ctor_get(x_3, 1);
x_40 = lean_ctor_get(x_3, 2);
x_41 = lean_ctor_get(x_3, 3);
x_42 = lean_ctor_get(x_3, 4);
x_43 = lean_ctor_get(x_3, 5);
x_44 = lean_ctor_get(x_3, 6);
x_45 = lean_ctor_get(x_3, 7);
x_46 = lean_ctor_get(x_3, 8);
x_47 = lean_ctor_get(x_3, 9);
x_48 = lean_ctor_get_uint8(x_3, sizeof(void*)*10);
x_49 = lean_ctor_get_uint8(x_3, sizeof(void*)*10 + 1);
x_50 = lean_ctor_get_uint8(x_3, sizeof(void*)*10 + 2);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_3);
lean_inc(x_31);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_1);
lean_ctor_set(x_51, 1, x_31);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_46);
x_53 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_53, 0, x_38);
lean_ctor_set(x_53, 1, x_39);
lean_ctor_set(x_53, 2, x_40);
lean_ctor_set(x_53, 3, x_41);
lean_ctor_set(x_53, 4, x_42);
lean_ctor_set(x_53, 5, x_43);
lean_ctor_set(x_53, 6, x_44);
lean_ctor_set(x_53, 7, x_45);
lean_ctor_set(x_53, 8, x_52);
lean_ctor_set(x_53, 9, x_47);
lean_ctor_set_uint8(x_53, sizeof(void*)*10, x_48);
lean_ctor_set_uint8(x_53, sizeof(void*)*10 + 1, x_49);
lean_ctor_set_uint8(x_53, sizeof(void*)*10 + 2, x_50);
x_54 = 1;
x_55 = l_Lean_Elab_Term_elabTerm(x_31, x_2, x_54, x_53, x_30);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_5);
if (x_56 == 0)
{
return x_5;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_5, 0);
x_58 = lean_ctor_get(x_5, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_5);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("StructInst");
return x_1;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_declareBuiltinTermElab___closed__3;
x_2 = l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabStructInst");
return x_1;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__2;
x_2 = l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_elabStructInst), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_3 = l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__4;
x_4 = l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__5;
x_5 = l_Lean_Elab_Term_addBuiltinTermElab(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* initialize_Init_Lean_Util_FindExpr(lean_object*);
lean_object* initialize_Init_Lean_Elab_App(lean_object*);
lean_object* initialize_Init_Lean_Elab_Binders(lean_object*);
lean_object* initialize_Init_Lean_Elab_Quotation(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_Elab_StructInst(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Lean_Util_FindExpr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Elab_App(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Elab_Binders(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Elab_Quotation(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__1 = _init_l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__1();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__1);
l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__2 = _init_l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__2();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__2);
l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__3 = _init_l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__3();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__3);
l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__4 = _init_l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__4();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__4);
l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__5 = _init_l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__5();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__5);
l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__6 = _init_l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__6();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_ExpandNonAtomicExplicitSource_main___spec__1___closed__6);
l___private_Init_Lean_Elab_StructInst_1__expandNonAtomicExplicitSource___closed__1 = _init_l___private_Init_Lean_Elab_StructInst_1__expandNonAtomicExplicitSource___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_1__expandNonAtomicExplicitSource___closed__1);
l_Lean_Elab_Term_StructInst_Source_inhabited = _init_l_Lean_Elab_Term_StructInst_Source_inhabited();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Source_inhabited);
l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__1 = _init_l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__1);
l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__2 = _init_l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__2);
l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__3 = _init_l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__3);
l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__4 = _init_l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Source_hasFormat___closed__4);
l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__1 = _init_l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__1();
lean_mark_persistent(l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__1);
l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__2 = _init_l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__2();
lean_mark_persistent(l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__2);
l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__3 = _init_l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__3();
lean_mark_persistent(l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__3);
l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__4 = _init_l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__4();
lean_mark_persistent(l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__4);
l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__5 = _init_l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__5();
lean_mark_persistent(l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__5);
l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__6 = _init_l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__6();
lean_mark_persistent(l_Array_foldlStepMAux___main___at___private_Init_Lean_Elab_StructInst_3__isModifyOp_x3f___spec__1___closed__6);
l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__1 = _init_l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__1);
l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__2 = _init_l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__2);
l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__3 = _init_l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__3();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_4__elabModifyOp___closed__3);
l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__1 = _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__1);
l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__2 = _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__2);
l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__3 = _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__3();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__3);
l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__4 = _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__4();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__4);
l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__5 = _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__5();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__5);
l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__6 = _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__6();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__6);
l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__7 = _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__7();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__7);
l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__8 = _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__8();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__8);
l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__9 = _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__9();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__9);
l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__10 = _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__10();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__10);
l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__11 = _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__11();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__11);
l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12 = _init_l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_5__getStructName___closed__12);
l_Lean_Elab_Term_StructInst_FieldLHS_inhabited___closed__1 = _init_l_Lean_Elab_Term_StructInst_FieldLHS_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_FieldLHS_inhabited___closed__1);
l_Lean_Elab_Term_StructInst_FieldLHS_inhabited = _init_l_Lean_Elab_Term_StructInst_FieldLHS_inhabited();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_FieldLHS_inhabited);
l_Lean_Elab_Term_StructInst_Field_inhabited___closed__1 = _init_l_Lean_Elab_Term_StructInst_Field_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_inhabited___closed__1);
l_Lean_Elab_Term_StructInst_Field_inhabited___closed__2 = _init_l_Lean_Elab_Term_StructInst_Field_inhabited___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_inhabited___closed__2);
l_Lean_Elab_Term_StructInst_Struct_inhabited___closed__1 = _init_l_Lean_Elab_Term_StructInst_Struct_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Struct_inhabited___closed__1);
l_Lean_Elab_Term_StructInst_Struct_inhabited = _init_l_Lean_Elab_Term_StructInst_Struct_inhabited();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Struct_inhabited);
l_Lean_Elab_Term_StructInst_formatField___closed__1 = _init_l_Lean_Elab_Term_StructInst_formatField___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_formatField___closed__1);
l_Lean_Elab_Term_StructInst_formatField___closed__2 = _init_l_Lean_Elab_Term_StructInst_formatField___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_formatField___closed__2);
l_Lean_Elab_Term_StructInst_formatField___closed__3 = _init_l_Lean_Elab_Term_StructInst_formatField___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_formatField___closed__3);
l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__1___closed__1 = _init_l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__1___closed__1();
lean_mark_persistent(l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___main___spec__1___closed__1);
l_Lean_Elab_Term_StructInst_formatStruct___main___closed__1 = _init_l_Lean_Elab_Term_StructInst_formatStruct___main___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_formatStruct___main___closed__1);
l_Lean_Elab_Term_StructInst_formatStruct___main___closed__2 = _init_l_Lean_Elab_Term_StructInst_formatStruct___main___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_formatStruct___main___closed__2);
l_Lean_Elab_Term_StructInst_Struct_hasFormat___closed__1 = _init_l_Lean_Elab_Term_StructInst_Struct_hasFormat___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Struct_hasFormat___closed__1);
l_Lean_Elab_Term_StructInst_Struct_hasFormat = _init_l_Lean_Elab_Term_StructInst_Struct_hasFormat();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Struct_hasFormat);
l_Lean_Elab_Term_StructInst_Struct_hasToString___closed__1 = _init_l_Lean_Elab_Term_StructInst_Struct_hasToString___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Struct_hasToString___closed__1);
l_Lean_Elab_Term_StructInst_Struct_hasToString = _init_l_Lean_Elab_Term_StructInst_Struct_hasToString();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Struct_hasToString);
l_Lean_Elab_Term_StructInst_Field_hasFormat___closed__1 = _init_l_Lean_Elab_Term_StructInst_Field_hasFormat___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_hasFormat___closed__1);
l_Lean_Elab_Term_StructInst_Field_hasFormat = _init_l_Lean_Elab_Term_StructInst_Field_hasFormat();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_hasFormat);
l_Lean_Elab_Term_StructInst_Field_hasToString___closed__1 = _init_l_Lean_Elab_Term_StructInst_Field_hasToString___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_hasToString___closed__1);
l_Lean_Elab_Term_StructInst_Field_hasToString = _init_l_Lean_Elab_Term_StructInst_Field_hasToString();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_hasToString);
l___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___closed__1 = _init_l___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_8__expandCompositeFields___closed__1);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__1 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__1();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__1);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__2 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__2();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__2);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__3 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__3();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__3);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__4 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__4();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__4);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__5 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__5();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__5);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__6 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__6();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__6);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__7 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__7();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__7);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__8 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__8();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__8);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__9 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__9();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_9__expandNumLitFields___spec__1___closed__9);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__1 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__1();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__1);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__2 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__2();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__2);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__3 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__3();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__3);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__4 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__4();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__4);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__5 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__5();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__5);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__6 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__6();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__6);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__7 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__7();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__7);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__8 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__8();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__8);
l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__9 = _init_l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__9();
lean_mark_persistent(l_List_mapM___main___at___private_Init_Lean_Elab_StructInst_10__expandParentFields___spec__2___closed__9);
l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__1 = _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__1();
lean_mark_persistent(l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__1);
l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__2 = _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__2();
lean_mark_persistent(l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__2);
l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__3 = _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__3();
lean_mark_persistent(l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__3);
l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__4 = _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__4();
lean_mark_persistent(l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__4);
l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__5 = _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__5();
lean_mark_persistent(l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__5);
l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__6 = _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__6();
lean_mark_persistent(l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_12__mkFieldMap___spec__10___closed__6);
l___private_Init_Lean_Elab_StructInst_12__mkFieldMap___closed__1 = _init_l___private_Init_Lean_Elab_StructInst_12__mkFieldMap___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_12__mkFieldMap___closed__1);
l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__1 = _init_l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__1);
l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__2 = _init_l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__2);
l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__3 = _init_l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__3();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_14__getFieldIdx___closed__3);
l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__1 = _init_l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__1);
l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__2 = _init_l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__2);
l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__3 = _init_l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__3();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_17__groupFields___lambda__3___closed__3);
l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__1 = _init_l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__1);
l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__2 = _init_l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__2);
l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__3 = _init_l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__3();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_20__mkCtorHeaderAux___main___closed__3);
l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__1 = _init_l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__1);
l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__2 = _init_l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__2);
l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__1 = _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__1);
l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__2 = _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__2);
l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__3 = _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__3);
l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__4 = _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__4);
l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__5 = _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__5);
l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__6 = _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__6);
l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__1 = _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__1();
lean_mark_persistent(l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__1);
l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__2 = _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__2();
lean_mark_persistent(l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__2);
l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__3 = _init_l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__3();
lean_mark_persistent(l_List_foldlM___main___at___private_Init_Lean_Elab_StructInst_24__elabStruct___main___spec__1___closed__3);
l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___main___closed__1 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___main___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___main___closed__1);
l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___closed__1 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___closed__1);
l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___closed__2 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefaultAux___main___closed__2);
l_Lean_Elab_Term_StructInst_DefaultFields_step___main___closed__1 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_step___main___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_step___main___closed__1);
l_Lean_Elab_Term_StructInst_DefaultFields_step___main___closed__2 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_step___main___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_step___main___closed__2);
l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__1 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__1);
l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__2 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__2);
l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__3 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___main___closed__3);
l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__1 = _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__1);
l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__2 = _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__2);
l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__3 = _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__3();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__3);
l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__4 = _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__4();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__4);
l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__5 = _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__5();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__5);
l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__6 = _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__6();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__6);
l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__7 = _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__7();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__7);
l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__8 = _init_l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__8();
lean_mark_persistent(l___private_Init_Lean_Elab_StructInst_25__elabStructInstAux___closed__8);
l_Lean_Elab_Term_StructInst_elabStructInst___closed__1 = _init_l_Lean_Elab_Term_StructInst_elabStructInst___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_elabStructInst___closed__1);
l_Lean_Elab_Term_StructInst_elabStructInst___closed__2 = _init_l_Lean_Elab_Term_StructInst_elabStructInst___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_elabStructInst___closed__2);
l_Lean_Elab_Term_StructInst_elabStructInst___closed__3 = _init_l_Lean_Elab_Term_StructInst_elabStructInst___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_elabStructInst___closed__3);
l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__1 = _init_l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__1();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__1);
l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__2 = _init_l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__2();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__2);
l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__3 = _init_l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__3();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__3);
l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__4 = _init_l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__4();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__4);
l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__5 = _init_l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__5();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst___closed__5);
res = l___regBuiltinTermElab_Lean_Elab_Term_StructInst_elabStructInst(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif
