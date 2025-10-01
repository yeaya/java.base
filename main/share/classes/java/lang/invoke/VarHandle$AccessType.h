#ifndef _java_lang_invoke_VarHandle$AccessType_h_
#define _java_lang_invoke_VarHandle$AccessType_h_
//$ class java.lang.invoke.VarHandle$AccessType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("SET")
#undef SET
#pragma push_macro("GET_AND_UPDATE")
#undef GET_AND_UPDATE
#pragma push_macro("GET")
#undef GET
#pragma push_macro("COMPARE_AND_EXCHANGE")
#undef COMPARE_AND_EXCHANGE
#pragma push_macro("COUNT")
#undef COUNT
#pragma push_macro("COMPARE_AND_SET")
#undef COMPARE_AND_SET

namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $export VarHandle$AccessType : public ::java::lang::Enum {
	$class(VarHandle$AccessType, 0, ::java::lang::Enum)
public:
	VarHandle$AccessType();
	static $Array<::java::lang::invoke::VarHandle$AccessType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $Class* returnType);
	virtual ::java::lang::invoke::MethodType* accessModeType($Class* receiver, $Class* value, $ClassArray* intermediate);
	static $ClassArray* allocateParameters(int32_t values, $Class* receiver, $ClassArray* intermediate);
	static int32_t fillParameters($ClassArray* ps, $Class* receiver, $ClassArray* intermediate);
	static ::java::lang::invoke::VarHandle$AccessType* valueOf($String* name);
	static $Array<::java::lang::invoke::VarHandle$AccessType>* values();
	static bool $assertionsDisabled;
	static ::java::lang::invoke::VarHandle$AccessType* GET;
	static ::java::lang::invoke::VarHandle$AccessType* SET;
	static ::java::lang::invoke::VarHandle$AccessType* COMPARE_AND_SET;
	static ::java::lang::invoke::VarHandle$AccessType* COMPARE_AND_EXCHANGE;
	static ::java::lang::invoke::VarHandle$AccessType* GET_AND_UPDATE;
	static $Array<::java::lang::invoke::VarHandle$AccessType>* $VALUES;
	static int32_t COUNT;
	$Class* returnType = nullptr;
	bool isMonomorphicInReturnType = false;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("SET")
#pragma pop_macro("GET_AND_UPDATE")
#pragma pop_macro("GET")
#pragma pop_macro("COMPARE_AND_EXCHANGE")
#pragma pop_macro("COUNT")
#pragma pop_macro("COMPARE_AND_SET")

#endif // _java_lang_invoke_VarHandle$AccessType_h_