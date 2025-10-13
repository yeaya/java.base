#ifndef _java_lang_invoke_MethodHandleImpl$ArrayAccess_h_
#define _java_lang_invoke_MethodHandleImpl$ArrayAccess_h_
//$ class java.lang.invoke.MethodHandleImpl$ArrayAccess
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("GET")
#undef GET
#pragma push_macro("LENGTH")
#undef LENGTH
#pragma push_macro("SET")
#undef SET

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandleImpl$Intrinsic;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleImpl$ArrayAccess : public ::java::lang::Enum {
	$class(MethodHandleImpl$ArrayAccess, 0, ::java::lang::Enum)
public:
	MethodHandleImpl$ArrayAccess();
	static $Array<::java::lang::invoke::MethodHandleImpl$ArrayAccess>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static int32_t cacheIndex(::java::lang::invoke::MethodHandleImpl$ArrayAccess* a);
	static ::java::lang::invoke::MethodHandleImpl$Intrinsic* intrinsic(::java::lang::invoke::MethodHandleImpl$ArrayAccess* a);
	static ::java::lang::invoke::MethodHandle* objectAccessor(::java::lang::invoke::MethodHandleImpl$ArrayAccess* a);
	static $String* opName(::java::lang::invoke::MethodHandleImpl$ArrayAccess* a);
	static ::java::lang::invoke::MethodHandleImpl$ArrayAccess* valueOf($String* name);
	static $Array<::java::lang::invoke::MethodHandleImpl$ArrayAccess>* values();
	static ::java::lang::invoke::MethodHandleImpl$ArrayAccess* GET;
	static ::java::lang::invoke::MethodHandleImpl$ArrayAccess* SET;
	static ::java::lang::invoke::MethodHandleImpl$ArrayAccess* LENGTH;
	static $Array<::java::lang::invoke::MethodHandleImpl$ArrayAccess>* $VALUES;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("GET")
#pragma pop_macro("LENGTH")
#pragma pop_macro("SET")

#endif // _java_lang_invoke_MethodHandleImpl$ArrayAccess_h_