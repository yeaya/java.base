#ifndef _java_lang_invoke_VarHandle$AccessMode_h_
#define _java_lang_invoke_VarHandle$AccessMode_h_
//$ class java.lang.invoke.VarHandle$AccessMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("WEAK_COMPARE_AND_SET")
#undef WEAK_COMPARE_AND_SET
#pragma push_macro("GET_VOLATILE")
#undef GET_VOLATILE
#pragma push_macro("SET")
#undef SET
#pragma push_macro("GET_AND_BITWISE_OR_ACQUIRE")
#undef GET_AND_BITWISE_OR_ACQUIRE
#pragma push_macro("GET_AND_ADD")
#undef GET_AND_ADD
#pragma push_macro("GET_AND_SET")
#undef GET_AND_SET
#pragma push_macro("GET_ACQUIRE")
#undef GET_ACQUIRE
#pragma push_macro("GET_AND_ADD_RELEASE")
#undef GET_AND_ADD_RELEASE
#pragma push_macro("GET_AND_BITWISE_AND_ACQUIRE")
#undef GET_AND_BITWISE_AND_ACQUIRE
#pragma push_macro("GET_AND_BITWISE_XOR_ACQUIRE")
#undef GET_AND_BITWISE_XOR_ACQUIRE
#pragma push_macro("GET_AND_ADD_ACQUIRE")
#undef GET_AND_ADD_ACQUIRE
#pragma push_macro("GET_AND_BITWISE_OR_RELEASE")
#undef GET_AND_BITWISE_OR_RELEASE
#pragma push_macro("SET_OPAQUE")
#undef SET_OPAQUE
#pragma push_macro("WEAK_COMPARE_AND_SET_ACQUIRE")
#undef WEAK_COMPARE_AND_SET_ACQUIRE
#pragma push_macro("COMPARE_AND_SET")
#undef COMPARE_AND_SET
#pragma push_macro("COMPARE_AND_EXCHANGE_ACQUIRE")
#undef COMPARE_AND_EXCHANGE_ACQUIRE
#pragma push_macro("GET_AND_BITWISE_AND")
#undef GET_AND_BITWISE_AND
#pragma push_macro("SET_VOLATILE")
#undef SET_VOLATILE
#pragma push_macro("COMPARE_AND_EXCHANGE_RELEASE")
#undef COMPARE_AND_EXCHANGE_RELEASE
#pragma push_macro("GET_AND_BITWISE_XOR")
#undef GET_AND_BITWISE_XOR
#pragma push_macro("WEAK_COMPARE_AND_SET_PLAIN")
#undef WEAK_COMPARE_AND_SET_PLAIN
#pragma push_macro("SET_RELEASE")
#undef SET_RELEASE
#pragma push_macro("COMPARE_AND_EXCHANGE")
#undef COMPARE_AND_EXCHANGE
#pragma push_macro("GET_AND_BITWISE_OR")
#undef GET_AND_BITWISE_OR
#pragma push_macro("GET_AND_BITWISE_AND_RELEASE")
#undef GET_AND_BITWISE_AND_RELEASE
#pragma push_macro("WEAK_COMPARE_AND_SET_RELEASE")
#undef WEAK_COMPARE_AND_SET_RELEASE
#pragma push_macro("GET_AND_SET_RELEASE")
#undef GET_AND_SET_RELEASE
#pragma push_macro("GET")
#undef GET
#pragma push_macro("GET_AND_SET_ACQUIRE")
#undef GET_AND_SET_ACQUIRE
#pragma push_macro("GET_AND_BITWISE_XOR_RELEASE")
#undef GET_AND_BITWISE_XOR_RELEASE
#pragma push_macro("COUNT")
#undef COUNT
#pragma push_macro("GET_OPAQUE")
#undef GET_OPAQUE

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle$AccessType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $import VarHandle$AccessMode : public ::java::lang::Enum {
	$class(VarHandle$AccessMode, 0, ::java::lang::Enum)
public:
	VarHandle$AccessMode();
	static $Array<::java::lang::invoke::VarHandle$AccessMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* methodName, ::java::lang::invoke::VarHandle$AccessType* at);
	virtual $String* methodName();
	static ::java::lang::invoke::VarHandle$AccessMode* valueFromMethodName($String* methodName);
	static ::java::lang::invoke::VarHandle$AccessMode* valueOf($String* name);
	static $Array<::java::lang::invoke::VarHandle$AccessMode>* values();
	static bool $assertionsDisabled;
	static ::java::lang::invoke::VarHandle$AccessMode* GET;
	static ::java::lang::invoke::VarHandle$AccessMode* SET;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_VOLATILE;
	static ::java::lang::invoke::VarHandle$AccessMode* SET_VOLATILE;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_ACQUIRE;
	static ::java::lang::invoke::VarHandle$AccessMode* SET_RELEASE;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_OPAQUE;
	static ::java::lang::invoke::VarHandle$AccessMode* SET_OPAQUE;
	static ::java::lang::invoke::VarHandle$AccessMode* COMPARE_AND_SET;
	static ::java::lang::invoke::VarHandle$AccessMode* COMPARE_AND_EXCHANGE;
	static ::java::lang::invoke::VarHandle$AccessMode* COMPARE_AND_EXCHANGE_ACQUIRE;
	static ::java::lang::invoke::VarHandle$AccessMode* COMPARE_AND_EXCHANGE_RELEASE;
	static ::java::lang::invoke::VarHandle$AccessMode* WEAK_COMPARE_AND_SET_PLAIN;
	static ::java::lang::invoke::VarHandle$AccessMode* WEAK_COMPARE_AND_SET;
	static ::java::lang::invoke::VarHandle$AccessMode* WEAK_COMPARE_AND_SET_ACQUIRE;
	static ::java::lang::invoke::VarHandle$AccessMode* WEAK_COMPARE_AND_SET_RELEASE;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_AND_SET;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_AND_SET_ACQUIRE;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_AND_SET_RELEASE;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_AND_ADD;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_AND_ADD_ACQUIRE;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_AND_ADD_RELEASE;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_AND_BITWISE_OR;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_AND_BITWISE_OR_RELEASE;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_AND_BITWISE_OR_ACQUIRE;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_AND_BITWISE_AND;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_AND_BITWISE_AND_RELEASE;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_AND_BITWISE_AND_ACQUIRE;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_AND_BITWISE_XOR;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_AND_BITWISE_XOR_RELEASE;
	static ::java::lang::invoke::VarHandle$AccessMode* GET_AND_BITWISE_XOR_ACQUIRE;
	static $Array<::java::lang::invoke::VarHandle$AccessMode>* $VALUES;
	static int32_t COUNT;
	$String* methodName$ = nullptr;
	::java::lang::invoke::VarHandle$AccessType* at = nullptr;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("WEAK_COMPARE_AND_SET")
#pragma pop_macro("GET_VOLATILE")
#pragma pop_macro("SET")
#pragma pop_macro("GET_AND_BITWISE_OR_ACQUIRE")
#pragma pop_macro("GET_AND_ADD")
#pragma pop_macro("GET_AND_SET")
#pragma pop_macro("GET_ACQUIRE")
#pragma pop_macro("GET_AND_ADD_RELEASE")
#pragma pop_macro("GET_AND_BITWISE_AND_ACQUIRE")
#pragma pop_macro("GET_AND_BITWISE_XOR_ACQUIRE")
#pragma pop_macro("GET_AND_ADD_ACQUIRE")
#pragma pop_macro("GET_AND_BITWISE_OR_RELEASE")
#pragma pop_macro("SET_OPAQUE")
#pragma pop_macro("WEAK_COMPARE_AND_SET_ACQUIRE")
#pragma pop_macro("COMPARE_AND_SET")
#pragma pop_macro("COMPARE_AND_EXCHANGE_ACQUIRE")
#pragma pop_macro("GET_AND_BITWISE_AND")
#pragma pop_macro("SET_VOLATILE")
#pragma pop_macro("COMPARE_AND_EXCHANGE_RELEASE")
#pragma pop_macro("GET_AND_BITWISE_XOR")
#pragma pop_macro("WEAK_COMPARE_AND_SET_PLAIN")
#pragma pop_macro("SET_RELEASE")
#pragma pop_macro("COMPARE_AND_EXCHANGE")
#pragma pop_macro("GET_AND_BITWISE_OR")
#pragma pop_macro("GET_AND_BITWISE_AND_RELEASE")
#pragma pop_macro("WEAK_COMPARE_AND_SET_RELEASE")
#pragma pop_macro("GET_AND_SET_RELEASE")
#pragma pop_macro("GET")
#pragma pop_macro("GET_AND_SET_ACQUIRE")
#pragma pop_macro("GET_AND_BITWISE_XOR_RELEASE")
#pragma pop_macro("COUNT")
#pragma pop_macro("GET_OPAQUE")

#endif // _java_lang_invoke_VarHandle$AccessMode_h_