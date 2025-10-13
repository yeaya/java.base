#ifndef _java_lang_invoke_LambdaForm$BasicType_h_
#define _java_lang_invoke_LambdaForm$BasicType_h_
//$ class java.lang.invoke.LambdaForm$BasicType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ALL_TYPES")
#undef ALL_TYPES
#pragma push_macro("ARG_TYPES")
#undef ARG_TYPES
#pragma push_macro("ARG_TYPE_LIMIT")
#undef ARG_TYPE_LIMIT
#pragma push_macro("D_TYPE")
#undef D_TYPE
#pragma push_macro("D_TYPE_NUM")
#undef D_TYPE_NUM
#pragma push_macro("F_TYPE")
#undef F_TYPE
#pragma push_macro("F_TYPE_NUM")
#undef F_TYPE_NUM
#pragma push_macro("I_TYPE")
#undef I_TYPE
#pragma push_macro("I_TYPE_NUM")
#undef I_TYPE_NUM
#pragma push_macro("J_TYPE")
#undef J_TYPE
#pragma push_macro("J_TYPE_NUM")
#undef J_TYPE_NUM
#pragma push_macro("L_TYPE")
#undef L_TYPE
#pragma push_macro("L_TYPE_NUM")
#undef L_TYPE_NUM
#pragma push_macro("TYPE_LIMIT")
#undef TYPE_LIMIT
#pragma push_macro("V_TYPE")
#undef V_TYPE
#pragma push_macro("V_TYPE_NUM")
#undef V_TYPE_NUM

namespace sun {
	namespace invoke {
		namespace util {
			class Wrapper;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class LambdaForm$BasicType : public ::java::lang::Enum {
	$class(LambdaForm$BasicType, 0, ::java::lang::Enum)
public:
	LambdaForm$BasicType();
	static $Array<::java::lang::invoke::LambdaForm$BasicType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, char16_t btChar, $Class* btClass, ::sun::invoke::util::Wrapper* wrapper);
	static ::java::lang::invoke::LambdaForm$BasicType* basicType(int8_t type);
	static ::java::lang::invoke::LambdaForm$BasicType* basicType(char16_t type);
	static ::java::lang::invoke::LambdaForm$BasicType* basicType(::sun::invoke::util::Wrapper* type);
	static ::java::lang::invoke::LambdaForm$BasicType* basicType($Class* type);
	virtual char16_t basicTypeChar();
	static char16_t basicTypeChar($Class* type);
	virtual $Class* basicTypeClass();
	static $ints* basicTypeOrds($Array<::java::lang::invoke::LambdaForm$BasicType>* types);
	virtual int32_t basicTypeSlots();
	virtual ::sun::invoke::util::Wrapper* basicTypeWrapper();
	static $bytes* basicTypesOrd($ClassArray* types);
	static bool checkBasicType();
	static bool isArgBasicTypeChar(char16_t c);
	static bool isBasicTypeChar(char16_t c);
	static ::java::lang::invoke::LambdaForm$BasicType* valueOf($String* name);
	static $Array<::java::lang::invoke::LambdaForm$BasicType>* values();
	static bool $assertionsDisabled;
	static ::java::lang::invoke::LambdaForm$BasicType* L_TYPE;
	static ::java::lang::invoke::LambdaForm$BasicType* I_TYPE;
	static ::java::lang::invoke::LambdaForm$BasicType* J_TYPE;
	static ::java::lang::invoke::LambdaForm$BasicType* F_TYPE;
	static ::java::lang::invoke::LambdaForm$BasicType* D_TYPE;
	static ::java::lang::invoke::LambdaForm$BasicType* V_TYPE;
	static $Array<::java::lang::invoke::LambdaForm$BasicType>* $VALUES;
	static $Array<::java::lang::invoke::LambdaForm$BasicType>* ALL_TYPES;
	static $Array<::java::lang::invoke::LambdaForm$BasicType>* ARG_TYPES;
	static int32_t ARG_TYPE_LIMIT;
	static int32_t TYPE_LIMIT;
	static int8_t L_TYPE_NUM;
	static int8_t I_TYPE_NUM;
	static int8_t J_TYPE_NUM;
	static int8_t F_TYPE_NUM;
	static int8_t D_TYPE_NUM;
	static int8_t V_TYPE_NUM;
	char16_t btChar = 0;
	$Class* btClass = nullptr;
	::sun::invoke::util::Wrapper* btWrapper = nullptr;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("ALL_TYPES")
#pragma pop_macro("ARG_TYPES")
#pragma pop_macro("ARG_TYPE_LIMIT")
#pragma pop_macro("D_TYPE")
#pragma pop_macro("D_TYPE_NUM")
#pragma pop_macro("F_TYPE")
#pragma pop_macro("F_TYPE_NUM")
#pragma pop_macro("I_TYPE")
#pragma pop_macro("I_TYPE_NUM")
#pragma pop_macro("J_TYPE")
#pragma pop_macro("J_TYPE_NUM")
#pragma pop_macro("L_TYPE")
#pragma pop_macro("L_TYPE_NUM")
#pragma pop_macro("TYPE_LIMIT")
#pragma pop_macro("V_TYPE")
#pragma pop_macro("V_TYPE_NUM")

#endif // _java_lang_invoke_LambdaForm$BasicType_h_