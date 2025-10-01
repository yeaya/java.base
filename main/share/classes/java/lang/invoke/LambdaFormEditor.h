#ifndef _java_lang_invoke_LambdaFormEditor_h_
#define _java_lang_invoke_LambdaFormEditor_h_
//$ class java.lang.invoke.LambdaFormEditor
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("COLLECT_ARGS")
#undef COLLECT_ARGS
#pragma push_macro("FILTER_ARG")
#undef FILTER_ARG
#pragma push_macro("LOCAL_TYPES")
#undef LOCAL_TYPES
#pragma push_macro("SPREAD_ARGS")
#undef SPREAD_ARGS
#pragma push_macro("FILTER_RETURN")
#undef FILTER_RETURN
#pragma push_macro("FILTER_SELECT_ARGS")
#undef FILTER_SELECT_ARGS
#pragma push_macro("BIND_ARG")
#undef BIND_ARG
#pragma push_macro("COLLECT_ARGS_TO_VOID")
#undef COLLECT_ARGS_TO_VOID
#pragma push_macro("PERMUTE_ARGS")
#undef PERMUTE_ARGS
#pragma push_macro("FOLD_SELECT_ARGS")
#undef FOLD_SELECT_ARGS
#pragma push_macro("FOLD_SELECT_ARGS_TO_VOID")
#undef FOLD_SELECT_ARGS_TO_VOID
#pragma push_macro("FOLD_ARGS_TO_VOID")
#undef FOLD_ARGS_TO_VOID
#pragma push_macro("MAX_CACHE_ARRAY_SIZE")
#undef MAX_CACHE_ARRAY_SIZE
#pragma push_macro("ADD_ARG")
#undef ADD_ARG
#pragma push_macro("DUP_ARG")
#undef DUP_ARG
#pragma push_macro("FOLD_ARGS")
#undef FOLD_ARGS
#pragma push_macro("COLLECT_ARGS_TO_ARRAY")
#undef COLLECT_ARGS_TO_ARRAY
#pragma push_macro("REPEAT_FILTER_ARGS")
#undef REPEAT_FILTER_ARGS
#pragma push_macro("FILTER_RETURN_TO_ZERO")
#undef FILTER_RETURN_TO_ZERO
#pragma push_macro("MIN_CACHE_ARRAY_SIZE")
#undef MIN_CACHE_ARRAY_SIZE

namespace java {
	namespace lang {
		namespace invoke {
			class BoundMethodHandle;
			class BoundMethodHandle$SpeciesData;
			class LambdaForm;
			class LambdaForm$BasicType;
			class LambdaForm$Name;
			class LambdaFormBuffer;
			class LambdaFormEditor$TransformKey;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class LambdaFormEditor : public ::java::lang::Object {
	$class(LambdaFormEditor, 0, ::java::lang::Object)
public:
	LambdaFormEditor();
	void init$(::java::lang::invoke::LambdaForm* lambdaForm);
	virtual ::java::lang::invoke::LambdaForm* addArgumentForm(int32_t pos, ::java::lang::invoke::LambdaForm$BasicType* type);
	virtual ::java::lang::invoke::BoundMethodHandle* bindArgumentD(::java::lang::invoke::BoundMethodHandle* mh, int32_t pos, double value);
	virtual ::java::lang::invoke::BoundMethodHandle* bindArgumentF(::java::lang::invoke::BoundMethodHandle* mh, int32_t pos, float value);
	virtual ::java::lang::invoke::LambdaForm* bindArgumentForm(int32_t pos);
	virtual ::java::lang::invoke::BoundMethodHandle* bindArgumentI(::java::lang::invoke::BoundMethodHandle* mh, int32_t pos, int32_t value);
	virtual ::java::lang::invoke::BoundMethodHandle* bindArgumentJ(::java::lang::invoke::BoundMethodHandle* mh, int32_t pos, int64_t value);
	virtual ::java::lang::invoke::BoundMethodHandle* bindArgumentL(::java::lang::invoke::BoundMethodHandle* mh, int32_t pos, Object$* value);
	::java::lang::invoke::MethodType* bindArgumentType(::java::lang::invoke::BoundMethodHandle* mh, int32_t pos, ::java::lang::invoke::LambdaForm$BasicType* bt);
	::java::lang::invoke::LambdaFormBuffer* buffer();
	virtual ::java::lang::invoke::LambdaForm* collectArgumentsForm(int32_t pos, ::java::lang::invoke::MethodType* collectorType);
	virtual ::java::lang::invoke::LambdaForm* collectReturnValueForm(::java::lang::invoke::MethodType* combinerType);
	virtual ::java::lang::invoke::LambdaForm* dupArgumentForm(int32_t srcPos, int32_t dstPos);
	virtual ::java::lang::invoke::LambdaForm* filterArgumentForm(int32_t pos, ::java::lang::invoke::LambdaForm$BasicType* newType);
	virtual ::java::lang::invoke::LambdaForm* filterArgumentsForm(int32_t filterPos, ::java::lang::invoke::MethodType* combinerType, $ints* argPositions);
	virtual ::java::lang::invoke::LambdaForm* filterRepeatedArgumentForm(::java::lang::invoke::LambdaForm$BasicType* newType, $ints* argPositions);
	virtual ::java::lang::invoke::LambdaForm* filterReturnForm(::java::lang::invoke::LambdaForm$BasicType* newType, bool constantZero);
	virtual ::java::lang::invoke::LambdaForm* foldArgumentsForm(int32_t foldPos, bool dropResult, ::java::lang::invoke::MethodType* combinerType);
	virtual ::java::lang::invoke::LambdaForm* foldArgumentsForm(int32_t foldPos, bool dropResult, ::java::lang::invoke::MethodType* combinerType, $ints* argPositions);
	bool formParametersMatch(::java::lang::invoke::LambdaForm* form, ::java::lang::invoke::LambdaForm$BasicType* newType, $ints* argPositions);
	::java::lang::invoke::LambdaForm* getInCache(::java::lang::invoke::LambdaFormEditor$TransformKey* key);
	static ::java::lang::invoke::LambdaFormEditor* lambdaFormEditor(::java::lang::invoke::LambdaForm* lambdaForm);
	::java::lang::invoke::LambdaForm* makeArgumentCombinationForm(int32_t pos, ::java::lang::invoke::MethodType* combinerType, bool keepArguments, bool dropResult);
	::java::lang::invoke::LambdaForm* makeArgumentCombinationForm(int32_t pos, ::java::lang::invoke::MethodType* combinerType, $ints* argPositions, bool keepArguments, bool dropResult);
	::java::lang::invoke::LambdaForm* makeRepeatedFilterForm(::java::lang::invoke::MethodType* combinerType, $ints* positions);
	::java::lang::invoke::BoundMethodHandle$SpeciesData* newSpeciesData(::java::lang::invoke::LambdaForm$BasicType* type);
	virtual ::java::lang::invoke::LambdaForm* noteLoopLocalTypesForm(int32_t pos, $Array<::java::lang::invoke::LambdaForm$BasicType>* localTypes);
	::java::lang::invoke::BoundMethodHandle$SpeciesData* oldSpeciesData();
	virtual ::java::lang::invoke::LambdaForm* permuteArgumentsForm(int32_t skip, $ints* reorder);
	static bool permutedTypesMatch($ints* reorder, $Array<::java::lang::invoke::LambdaForm$BasicType>* types, $Array<::java::lang::invoke::LambdaForm$Name>* names, int32_t skip);
	::java::lang::invoke::LambdaForm* putInCache(::java::lang::invoke::LambdaFormEditor$TransformKey* key, ::java::lang::invoke::LambdaForm* form);
	virtual ::java::lang::invoke::LambdaForm* spreadArgumentsForm(int32_t pos, $Class* arrayType, int32_t arrayLength);
	static bool $assertionsDisabled;
	::java::lang::invoke::LambdaForm* lambdaForm = nullptr;
	static const int8_t BIND_ARG = 1;
	static const int8_t ADD_ARG = 2;
	static const int8_t DUP_ARG = 3;
	static const int8_t SPREAD_ARGS = 4;
	static const int8_t FILTER_ARG = 5;
	static const int8_t FILTER_RETURN = 6;
	static const int8_t FILTER_RETURN_TO_ZERO = 7;
	static const int8_t COLLECT_ARGS = 8;
	static const int8_t COLLECT_ARGS_TO_VOID = 9;
	static const int8_t COLLECT_ARGS_TO_ARRAY = 10;
	static const int8_t FOLD_ARGS = 11;
	static const int8_t FOLD_ARGS_TO_VOID = 12;
	static const int8_t PERMUTE_ARGS = 13;
	static const int8_t LOCAL_TYPES = 14;
	static const int8_t FOLD_SELECT_ARGS = 15;
	static const int8_t FOLD_SELECT_ARGS_TO_VOID = 16;
	static const int8_t FILTER_SELECT_ARGS = 17;
	static const int8_t REPEAT_FILTER_ARGS = 18;
	static const int32_t MIN_CACHE_ARRAY_SIZE = 4;
	static const int32_t MAX_CACHE_ARRAY_SIZE = 16;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("COLLECT_ARGS")
#pragma pop_macro("FILTER_ARG")
#pragma pop_macro("LOCAL_TYPES")
#pragma pop_macro("SPREAD_ARGS")
#pragma pop_macro("FILTER_RETURN")
#pragma pop_macro("FILTER_SELECT_ARGS")
#pragma pop_macro("BIND_ARG")
#pragma pop_macro("COLLECT_ARGS_TO_VOID")
#pragma pop_macro("PERMUTE_ARGS")
#pragma pop_macro("FOLD_SELECT_ARGS")
#pragma pop_macro("FOLD_SELECT_ARGS_TO_VOID")
#pragma pop_macro("FOLD_ARGS_TO_VOID")
#pragma pop_macro("MAX_CACHE_ARRAY_SIZE")
#pragma pop_macro("ADD_ARG")
#pragma pop_macro("DUP_ARG")
#pragma pop_macro("FOLD_ARGS")
#pragma pop_macro("COLLECT_ARGS_TO_ARRAY")
#pragma pop_macro("REPEAT_FILTER_ARGS")
#pragma pop_macro("FILTER_RETURN_TO_ZERO")
#pragma pop_macro("MIN_CACHE_ARRAY_SIZE")

#endif // _java_lang_invoke_LambdaFormEditor_h_