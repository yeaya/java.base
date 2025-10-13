#ifndef _java_lang_invoke_LambdaForm$Kind_h_
#define _java_lang_invoke_LambdaForm$Kind_h_
//$ class java.lang.invoke.LambdaForm$Kind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BOUND_REINVOKER")
#undef BOUND_REINVOKER
#pragma push_macro("COLLECT")
#undef COLLECT
#pragma push_macro("COLLECTOR")
#undef COLLECTOR
#pragma push_macro("CONVERT")
#undef CONVERT
#pragma push_macro("DELEGATE")
#undef DELEGATE
#pragma push_macro("DIRECT_INVOKE_INTERFACE")
#undef DIRECT_INVOKE_INTERFACE
#pragma push_macro("DIRECT_INVOKE_SPECIAL")
#undef DIRECT_INVOKE_SPECIAL
#pragma push_macro("DIRECT_INVOKE_SPECIAL_IFC")
#undef DIRECT_INVOKE_SPECIAL_IFC
#pragma push_macro("DIRECT_INVOKE_STATIC")
#undef DIRECT_INVOKE_STATIC
#pragma push_macro("DIRECT_INVOKE_STATIC_INIT")
#undef DIRECT_INVOKE_STATIC_INIT
#pragma push_macro("DIRECT_INVOKE_VIRTUAL")
#undef DIRECT_INVOKE_VIRTUAL
#pragma push_macro("DIRECT_NEW_INVOKE_SPECIAL")
#undef DIRECT_NEW_INVOKE_SPECIAL
#pragma push_macro("EXACT_INVOKER")
#undef EXACT_INVOKER
#pragma push_macro("EXACT_LINKER")
#undef EXACT_LINKER
#pragma push_macro("FIELD")
#undef FIELD
#pragma push_macro("GENERIC")
#undef GENERIC
#pragma push_macro("GENERIC_INVOKER")
#undef GENERIC_INVOKER
#pragma push_macro("GENERIC_LINKER")
#undef GENERIC_LINKER
#pragma push_macro("GET_BOOLEAN")
#undef GET_BOOLEAN
#pragma push_macro("GET_BOOLEAN_VOLATILE")
#undef GET_BOOLEAN_VOLATILE
#pragma push_macro("GET_BYTE")
#undef GET_BYTE
#pragma push_macro("GET_BYTE_VOLATILE")
#undef GET_BYTE_VOLATILE
#pragma push_macro("GET_CHAR")
#undef GET_CHAR
#pragma push_macro("GET_CHAR_VOLATILE")
#undef GET_CHAR_VOLATILE
#pragma push_macro("GET_DOUBLE")
#undef GET_DOUBLE
#pragma push_macro("GET_DOUBLE_VOLATILE")
#undef GET_DOUBLE_VOLATILE
#pragma push_macro("GET_FLOAT")
#undef GET_FLOAT
#pragma push_macro("GET_FLOAT_VOLATILE")
#undef GET_FLOAT_VOLATILE
#pragma push_macro("GET_INT")
#undef GET_INT
#pragma push_macro("GET_INT_VOLATILE")
#undef GET_INT_VOLATILE
#pragma push_macro("GET_LONG")
#undef GET_LONG
#pragma push_macro("GET_LONG_VOLATILE")
#undef GET_LONG_VOLATILE
#pragma push_macro("GET_REFERENCE")
#undef GET_REFERENCE
#pragma push_macro("GET_REFERENCE_VOLATILE")
#undef GET_REFERENCE_VOLATILE
#pragma push_macro("GET_SHORT")
#undef GET_SHORT
#pragma push_macro("GET_SHORT_VOLATILE")
#undef GET_SHORT_VOLATILE
#pragma push_macro("GUARD")
#undef GUARD
#pragma push_macro("GUARD_WITH_CATCH")
#undef GUARD_WITH_CATCH
#pragma push_macro("IDENTITY")
#undef IDENTITY
#pragma push_macro("LINK_TO_CALL_SITE")
#undef LINK_TO_CALL_SITE
#pragma push_macro("LINK_TO_TARGET_METHOD")
#undef LINK_TO_TARGET_METHOD
#pragma push_macro("LOOP")
#undef LOOP
#pragma push_macro("PUT_BOOLEAN")
#undef PUT_BOOLEAN
#pragma push_macro("PUT_BOOLEAN_VOLATILE")
#undef PUT_BOOLEAN_VOLATILE
#pragma push_macro("PUT_BYTE")
#undef PUT_BYTE
#pragma push_macro("PUT_BYTE_VOLATILE")
#undef PUT_BYTE_VOLATILE
#pragma push_macro("PUT_CHAR")
#undef PUT_CHAR
#pragma push_macro("PUT_CHAR_VOLATILE")
#undef PUT_CHAR_VOLATILE
#pragma push_macro("PUT_DOUBLE")
#undef PUT_DOUBLE
#pragma push_macro("PUT_DOUBLE_VOLATILE")
#undef PUT_DOUBLE_VOLATILE
#pragma push_macro("PUT_FLOAT")
#undef PUT_FLOAT
#pragma push_macro("PUT_FLOAT_VOLATILE")
#undef PUT_FLOAT_VOLATILE
#pragma push_macro("PUT_INT")
#undef PUT_INT
#pragma push_macro("PUT_INT_VOLATILE")
#undef PUT_INT_VOLATILE
#pragma push_macro("PUT_LONG")
#undef PUT_LONG
#pragma push_macro("PUT_LONG_VOLATILE")
#undef PUT_LONG_VOLATILE
#pragma push_macro("PUT_REFERENCE")
#undef PUT_REFERENCE
#pragma push_macro("PUT_REFERENCE_VOLATILE")
#undef PUT_REFERENCE_VOLATILE
#pragma push_macro("PUT_SHORT")
#undef PUT_SHORT
#pragma push_macro("PUT_SHORT_VOLATILE")
#undef PUT_SHORT_VOLATILE
#pragma push_macro("REINVOKER")
#undef REINVOKER
#pragma push_macro("SPREAD")
#undef SPREAD
#pragma push_macro("TABLE_SWITCH")
#undef TABLE_SWITCH
#pragma push_macro("TRY_FINALLY")
#undef TRY_FINALLY
#pragma push_macro("VARHANDLE_EXACT_INVOKER")
#undef VARHANDLE_EXACT_INVOKER
#pragma push_macro("VARHANDLE_INVOKER")
#undef VARHANDLE_INVOKER
#pragma push_macro("VARHANDLE_LINKER")
#undef VARHANDLE_LINKER
#pragma push_macro("ZERO")
#undef ZERO

namespace java {
	namespace lang {
		namespace invoke {

class LambdaForm$Kind : public ::java::lang::Enum {
	$class(LambdaForm$Kind, 0, ::java::lang::Enum)
public:
	LambdaForm$Kind();
	static $Array<::java::lang::invoke::LambdaForm$Kind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* defaultLambdaName);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* defaultLambdaName, $String* methodName);
	static ::java::lang::invoke::LambdaForm$Kind* valueOf($String* name);
	static $Array<::java::lang::invoke::LambdaForm$Kind>* values();
	static ::java::lang::invoke::LambdaForm$Kind* GENERIC;
	static ::java::lang::invoke::LambdaForm$Kind* ZERO;
	static ::java::lang::invoke::LambdaForm$Kind* IDENTITY;
	static ::java::lang::invoke::LambdaForm$Kind* BOUND_REINVOKER;
	static ::java::lang::invoke::LambdaForm$Kind* REINVOKER;
	static ::java::lang::invoke::LambdaForm$Kind* DELEGATE;
	static ::java::lang::invoke::LambdaForm$Kind* EXACT_LINKER;
	static ::java::lang::invoke::LambdaForm$Kind* EXACT_INVOKER;
	static ::java::lang::invoke::LambdaForm$Kind* GENERIC_LINKER;
	static ::java::lang::invoke::LambdaForm$Kind* GENERIC_INVOKER;
	static ::java::lang::invoke::LambdaForm$Kind* LINK_TO_TARGET_METHOD;
	static ::java::lang::invoke::LambdaForm$Kind* LINK_TO_CALL_SITE;
	static ::java::lang::invoke::LambdaForm$Kind* DIRECT_INVOKE_VIRTUAL;
	static ::java::lang::invoke::LambdaForm$Kind* DIRECT_INVOKE_SPECIAL;
	static ::java::lang::invoke::LambdaForm$Kind* DIRECT_INVOKE_SPECIAL_IFC;
	static ::java::lang::invoke::LambdaForm$Kind* DIRECT_INVOKE_STATIC;
	static ::java::lang::invoke::LambdaForm$Kind* DIRECT_NEW_INVOKE_SPECIAL;
	static ::java::lang::invoke::LambdaForm$Kind* DIRECT_INVOKE_INTERFACE;
	static ::java::lang::invoke::LambdaForm$Kind* DIRECT_INVOKE_STATIC_INIT;
	static ::java::lang::invoke::LambdaForm$Kind* GET_REFERENCE;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_REFERENCE;
	static ::java::lang::invoke::LambdaForm$Kind* GET_REFERENCE_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_REFERENCE_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* GET_INT;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_INT;
	static ::java::lang::invoke::LambdaForm$Kind* GET_INT_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_INT_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* GET_BOOLEAN;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_BOOLEAN;
	static ::java::lang::invoke::LambdaForm$Kind* GET_BOOLEAN_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_BOOLEAN_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* GET_BYTE;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_BYTE;
	static ::java::lang::invoke::LambdaForm$Kind* GET_BYTE_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_BYTE_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* GET_CHAR;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_CHAR;
	static ::java::lang::invoke::LambdaForm$Kind* GET_CHAR_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_CHAR_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* GET_SHORT;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_SHORT;
	static ::java::lang::invoke::LambdaForm$Kind* GET_SHORT_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_SHORT_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* GET_LONG;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_LONG;
	static ::java::lang::invoke::LambdaForm$Kind* GET_LONG_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_LONG_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* GET_FLOAT;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_FLOAT;
	static ::java::lang::invoke::LambdaForm$Kind* GET_FLOAT_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_FLOAT_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* GET_DOUBLE;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_DOUBLE;
	static ::java::lang::invoke::LambdaForm$Kind* GET_DOUBLE_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* PUT_DOUBLE_VOLATILE;
	static ::java::lang::invoke::LambdaForm$Kind* TRY_FINALLY;
	static ::java::lang::invoke::LambdaForm$Kind* TABLE_SWITCH;
	static ::java::lang::invoke::LambdaForm$Kind* COLLECT;
	static ::java::lang::invoke::LambdaForm$Kind* COLLECTOR;
	static ::java::lang::invoke::LambdaForm$Kind* CONVERT;
	static ::java::lang::invoke::LambdaForm$Kind* SPREAD;
	static ::java::lang::invoke::LambdaForm$Kind* LOOP;
	static ::java::lang::invoke::LambdaForm$Kind* FIELD;
	static ::java::lang::invoke::LambdaForm$Kind* GUARD;
	static ::java::lang::invoke::LambdaForm$Kind* GUARD_WITH_CATCH;
	static ::java::lang::invoke::LambdaForm$Kind* VARHANDLE_EXACT_INVOKER;
	static ::java::lang::invoke::LambdaForm$Kind* VARHANDLE_INVOKER;
	static ::java::lang::invoke::LambdaForm$Kind* VARHANDLE_LINKER;
	static $Array<::java::lang::invoke::LambdaForm$Kind>* $VALUES;
	$String* defaultLambdaName = nullptr;
	$String* methodName = nullptr;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("BOUND_REINVOKER")
#pragma pop_macro("COLLECT")
#pragma pop_macro("COLLECTOR")
#pragma pop_macro("CONVERT")
#pragma pop_macro("DELEGATE")
#pragma pop_macro("DIRECT_INVOKE_INTERFACE")
#pragma pop_macro("DIRECT_INVOKE_SPECIAL")
#pragma pop_macro("DIRECT_INVOKE_SPECIAL_IFC")
#pragma pop_macro("DIRECT_INVOKE_STATIC")
#pragma pop_macro("DIRECT_INVOKE_STATIC_INIT")
#pragma pop_macro("DIRECT_INVOKE_VIRTUAL")
#pragma pop_macro("DIRECT_NEW_INVOKE_SPECIAL")
#pragma pop_macro("EXACT_INVOKER")
#pragma pop_macro("EXACT_LINKER")
#pragma pop_macro("FIELD")
#pragma pop_macro("GENERIC")
#pragma pop_macro("GENERIC_INVOKER")
#pragma pop_macro("GENERIC_LINKER")
#pragma pop_macro("GET_BOOLEAN")
#pragma pop_macro("GET_BOOLEAN_VOLATILE")
#pragma pop_macro("GET_BYTE")
#pragma pop_macro("GET_BYTE_VOLATILE")
#pragma pop_macro("GET_CHAR")
#pragma pop_macro("GET_CHAR_VOLATILE")
#pragma pop_macro("GET_DOUBLE")
#pragma pop_macro("GET_DOUBLE_VOLATILE")
#pragma pop_macro("GET_FLOAT")
#pragma pop_macro("GET_FLOAT_VOLATILE")
#pragma pop_macro("GET_INT")
#pragma pop_macro("GET_INT_VOLATILE")
#pragma pop_macro("GET_LONG")
#pragma pop_macro("GET_LONG_VOLATILE")
#pragma pop_macro("GET_REFERENCE")
#pragma pop_macro("GET_REFERENCE_VOLATILE")
#pragma pop_macro("GET_SHORT")
#pragma pop_macro("GET_SHORT_VOLATILE")
#pragma pop_macro("GUARD")
#pragma pop_macro("GUARD_WITH_CATCH")
#pragma pop_macro("IDENTITY")
#pragma pop_macro("LINK_TO_CALL_SITE")
#pragma pop_macro("LINK_TO_TARGET_METHOD")
#pragma pop_macro("LOOP")
#pragma pop_macro("PUT_BOOLEAN")
#pragma pop_macro("PUT_BOOLEAN_VOLATILE")
#pragma pop_macro("PUT_BYTE")
#pragma pop_macro("PUT_BYTE_VOLATILE")
#pragma pop_macro("PUT_CHAR")
#pragma pop_macro("PUT_CHAR_VOLATILE")
#pragma pop_macro("PUT_DOUBLE")
#pragma pop_macro("PUT_DOUBLE_VOLATILE")
#pragma pop_macro("PUT_FLOAT")
#pragma pop_macro("PUT_FLOAT_VOLATILE")
#pragma pop_macro("PUT_INT")
#pragma pop_macro("PUT_INT_VOLATILE")
#pragma pop_macro("PUT_LONG")
#pragma pop_macro("PUT_LONG_VOLATILE")
#pragma pop_macro("PUT_REFERENCE")
#pragma pop_macro("PUT_REFERENCE_VOLATILE")
#pragma pop_macro("PUT_SHORT")
#pragma pop_macro("PUT_SHORT_VOLATILE")
#pragma pop_macro("REINVOKER")
#pragma pop_macro("SPREAD")
#pragma pop_macro("TABLE_SWITCH")
#pragma pop_macro("TRY_FINALLY")
#pragma pop_macro("VARHANDLE_EXACT_INVOKER")
#pragma pop_macro("VARHANDLE_INVOKER")
#pragma pop_macro("VARHANDLE_LINKER")
#pragma pop_macro("ZERO")

#endif // _java_lang_invoke_LambdaForm$Kind_h_