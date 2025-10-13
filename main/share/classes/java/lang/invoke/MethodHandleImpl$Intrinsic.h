#ifndef _java_lang_invoke_MethodHandleImpl$Intrinsic_h_
#define _java_lang_invoke_MethodHandleImpl$Intrinsic_h_
//$ class java.lang.invoke.MethodHandleImpl$Intrinsic
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ARRAY_LENGTH")
#undef ARRAY_LENGTH
#pragma push_macro("ARRAY_LOAD")
#undef ARRAY_LOAD
#pragma push_macro("ARRAY_STORE")
#undef ARRAY_STORE
#pragma push_macro("GUARD_WITH_CATCH")
#undef GUARD_WITH_CATCH
#pragma push_macro("IDENTITY")
#undef IDENTITY
#pragma push_macro("LOOP")
#undef LOOP
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("SELECT_ALTERNATIVE")
#undef SELECT_ALTERNATIVE
#pragma push_macro("TABLE_SWITCH")
#undef TABLE_SWITCH
#pragma push_macro("TRY_FINALLY")
#undef TRY_FINALLY
#pragma push_macro("ZERO")
#undef ZERO

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleImpl$Intrinsic : public ::java::lang::Enum {
	$class(MethodHandleImpl$Intrinsic, 0, ::java::lang::Enum)
public:
	MethodHandleImpl$Intrinsic();
	static $Array<::java::lang::invoke::MethodHandleImpl$Intrinsic>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::lang::invoke::MethodHandleImpl$Intrinsic* valueOf($String* name);
	static $Array<::java::lang::invoke::MethodHandleImpl$Intrinsic>* values();
	static ::java::lang::invoke::MethodHandleImpl$Intrinsic* SELECT_ALTERNATIVE;
	static ::java::lang::invoke::MethodHandleImpl$Intrinsic* GUARD_WITH_CATCH;
	static ::java::lang::invoke::MethodHandleImpl$Intrinsic* TRY_FINALLY;
	static ::java::lang::invoke::MethodHandleImpl$Intrinsic* TABLE_SWITCH;
	static ::java::lang::invoke::MethodHandleImpl$Intrinsic* LOOP;
	static ::java::lang::invoke::MethodHandleImpl$Intrinsic* ARRAY_LOAD;
	static ::java::lang::invoke::MethodHandleImpl$Intrinsic* ARRAY_STORE;
	static ::java::lang::invoke::MethodHandleImpl$Intrinsic* ARRAY_LENGTH;
	static ::java::lang::invoke::MethodHandleImpl$Intrinsic* IDENTITY;
	static ::java::lang::invoke::MethodHandleImpl$Intrinsic* ZERO;
	static ::java::lang::invoke::MethodHandleImpl$Intrinsic* NONE;
	static $Array<::java::lang::invoke::MethodHandleImpl$Intrinsic>* $VALUES;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("ARRAY_LENGTH")
#pragma pop_macro("ARRAY_LOAD")
#pragma pop_macro("ARRAY_STORE")
#pragma pop_macro("GUARD_WITH_CATCH")
#pragma pop_macro("IDENTITY")
#pragma pop_macro("LOOP")
#pragma pop_macro("NONE")
#pragma pop_macro("SELECT_ALTERNATIVE")
#pragma pop_macro("TABLE_SWITCH")
#pragma pop_macro("TRY_FINALLY")
#pragma pop_macro("ZERO")

#endif // _java_lang_invoke_MethodHandleImpl$Intrinsic_h_