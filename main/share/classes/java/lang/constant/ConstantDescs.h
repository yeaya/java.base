#ifndef _java_lang_constant_ConstantDescs_h_
#define _java_lang_constant_ConstantDescs_h_
//$ class java.lang.constant.ConstantDescs
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BSM_VARHANDLE_FIELD")
#undef BSM_VARHANDLE_FIELD
#pragma push_macro("CONDY_BOOTSTRAP_ARGS")
#undef CONDY_BOOTSTRAP_ARGS
#pragma push_macro("BSM_VARHANDLE_ARRAY")
#undef BSM_VARHANDLE_ARRAY
#pragma push_macro("NULL")
#undef NULL
#pragma push_macro("BSM_VARHANDLE_STATIC_FIELD")
#undef BSM_VARHANDLE_STATIC_FIELD
#pragma push_macro("INDY_BOOTSTRAP_ARGS")
#undef INDY_BOOTSTRAP_ARGS
#pragma push_macro("BSM_NULL_CONSTANT")
#undef BSM_NULL_CONSTANT
#pragma push_macro("TRUE")
#undef TRUE
#pragma push_macro("MHD_METHODHANDLE_ASTYPE")
#undef MHD_METHODHANDLE_ASTYPE
#pragma push_macro("BSM_PRIMITIVE_CLASS")
#undef BSM_PRIMITIVE_CLASS
#pragma push_macro("BSM_ENUM_CONSTANT")
#undef BSM_ENUM_CONSTANT
#pragma push_macro("BSM_EXPLICIT_CAST")
#undef BSM_EXPLICIT_CAST
#pragma push_macro("DEFAULT_NAME")
#undef DEFAULT_NAME
#pragma push_macro("BSM_INVOKE")
#undef BSM_INVOKE
#pragma push_macro("FALSE")
#undef FALSE
#pragma push_macro("BSM_GET_STATIC_FINAL")
#undef BSM_GET_STATIC_FINAL

namespace java {
	namespace lang {
		namespace constant {
			class ClassDesc;
			class ConstantDesc;
			class DirectMethodHandleDesc;
			class DynamicConstantDesc;
		}
	}
}

namespace java {
	namespace lang {
		namespace constant {

class $export ConstantDescs : public ::java::lang::Object {
	$class(ConstantDescs, 0, ::java::lang::Object)
public:
	ConstantDescs();
	void init$();
	static ::java::lang::constant::DirectMethodHandleDesc* ofCallsiteBootstrap(::java::lang::constant::ClassDesc* owner, $String* name, ::java::lang::constant::ClassDesc* returnType, $Array<::java::lang::constant::ClassDesc>* paramTypes);
	static ::java::lang::constant::DirectMethodHandleDesc* ofConstantBootstrap(::java::lang::constant::ClassDesc* owner, $String* name, ::java::lang::constant::ClassDesc* returnType, $Array<::java::lang::constant::ClassDesc>* paramTypes);
	static $String* DEFAULT_NAME;
	static ::java::lang::constant::ClassDesc* CD_Object;
	static ::java::lang::constant::ClassDesc* CD_String;
	static ::java::lang::constant::ClassDesc* CD_Class;
	static ::java::lang::constant::ClassDesc* CD_Number;
	static ::java::lang::constant::ClassDesc* CD_Integer;
	static ::java::lang::constant::ClassDesc* CD_Long;
	static ::java::lang::constant::ClassDesc* CD_Float;
	static ::java::lang::constant::ClassDesc* CD_Double;
	static ::java::lang::constant::ClassDesc* CD_Short;
	static ::java::lang::constant::ClassDesc* CD_Byte;
	static ::java::lang::constant::ClassDesc* CD_Character;
	static ::java::lang::constant::ClassDesc* CD_Boolean;
	static ::java::lang::constant::ClassDesc* CD_Void;
	static ::java::lang::constant::ClassDesc* CD_Throwable;
	static ::java::lang::constant::ClassDesc* CD_Exception;
	static ::java::lang::constant::ClassDesc* CD_Enum;
	static ::java::lang::constant::ClassDesc* CD_VarHandle;
	static ::java::lang::constant::ClassDesc* CD_MethodHandles;
	static ::java::lang::constant::ClassDesc* CD_MethodHandles_Lookup;
	static ::java::lang::constant::ClassDesc* CD_MethodHandle;
	static ::java::lang::constant::ClassDesc* CD_MethodType;
	static ::java::lang::constant::ClassDesc* CD_CallSite;
	static ::java::lang::constant::ClassDesc* CD_Collection;
	static ::java::lang::constant::ClassDesc* CD_List;
	static ::java::lang::constant::ClassDesc* CD_Set;
	static ::java::lang::constant::ClassDesc* CD_Map;
	static ::java::lang::constant::ClassDesc* CD_ConstantDesc;
	static ::java::lang::constant::ClassDesc* CD_ClassDesc;
	static ::java::lang::constant::ClassDesc* CD_EnumDesc;
	static ::java::lang::constant::ClassDesc* CD_MethodTypeDesc;
	static ::java::lang::constant::ClassDesc* CD_MethodHandleDesc;
	static ::java::lang::constant::ClassDesc* CD_DirectMethodHandleDesc;
	static ::java::lang::constant::ClassDesc* CD_VarHandleDesc;
	static ::java::lang::constant::ClassDesc* CD_MethodHandleDesc_Kind;
	static ::java::lang::constant::ClassDesc* CD_DynamicConstantDesc;
	static ::java::lang::constant::ClassDesc* CD_DynamicCallSiteDesc;
	static ::java::lang::constant::ClassDesc* CD_ConstantBootstraps;
	static $Array<::java::lang::constant::ClassDesc>* INDY_BOOTSTRAP_ARGS;
	static $Array<::java::lang::constant::ClassDesc>* CONDY_BOOTSTRAP_ARGS;
	static ::java::lang::constant::DirectMethodHandleDesc* BSM_PRIMITIVE_CLASS;
	static ::java::lang::constant::DirectMethodHandleDesc* BSM_ENUM_CONSTANT;
	static ::java::lang::constant::DirectMethodHandleDesc* BSM_GET_STATIC_FINAL;
	static ::java::lang::constant::DirectMethodHandleDesc* BSM_NULL_CONSTANT;
	static ::java::lang::constant::DirectMethodHandleDesc* BSM_VARHANDLE_FIELD;
	static ::java::lang::constant::DirectMethodHandleDesc* BSM_VARHANDLE_STATIC_FIELD;
	static ::java::lang::constant::DirectMethodHandleDesc* BSM_VARHANDLE_ARRAY;
	static ::java::lang::constant::DirectMethodHandleDesc* BSM_INVOKE;
	static ::java::lang::constant::DirectMethodHandleDesc* BSM_EXPLICIT_CAST;
	static ::java::lang::constant::ClassDesc* CD_int;
	static ::java::lang::constant::ClassDesc* CD_long;
	static ::java::lang::constant::ClassDesc* CD_float;
	static ::java::lang::constant::ClassDesc* CD_double;
	static ::java::lang::constant::ClassDesc* CD_short;
	static ::java::lang::constant::ClassDesc* CD_byte;
	static ::java::lang::constant::ClassDesc* CD_char;
	static ::java::lang::constant::ClassDesc* CD_boolean;
	static ::java::lang::constant::ClassDesc* CD_void;
	static ::java::lang::constant::ConstantDesc* NULL;
	static ::java::lang::constant::DynamicConstantDesc* TRUE;
	static ::java::lang::constant::DynamicConstantDesc* FALSE;
	static ::java::lang::constant::DirectMethodHandleDesc* MHD_METHODHANDLE_ASTYPE;
};

		} // constant
	} // lang
} // java

#pragma pop_macro("BSM_VARHANDLE_FIELD")
#pragma pop_macro("CONDY_BOOTSTRAP_ARGS")
#pragma pop_macro("BSM_VARHANDLE_ARRAY")
#pragma pop_macro("NULL")
#pragma pop_macro("BSM_VARHANDLE_STATIC_FIELD")
#pragma pop_macro("INDY_BOOTSTRAP_ARGS")
#pragma pop_macro("BSM_NULL_CONSTANT")
#pragma pop_macro("TRUE")
#pragma pop_macro("MHD_METHODHANDLE_ASTYPE")
#pragma pop_macro("BSM_PRIMITIVE_CLASS")
#pragma pop_macro("BSM_ENUM_CONSTANT")
#pragma pop_macro("BSM_EXPLICIT_CAST")
#pragma pop_macro("DEFAULT_NAME")
#pragma pop_macro("BSM_INVOKE")
#pragma pop_macro("FALSE")
#pragma pop_macro("BSM_GET_STATIC_FINAL")

#endif // _java_lang_constant_ConstantDescs_h_