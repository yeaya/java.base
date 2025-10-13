#ifndef _test_java_lang_invoke_CallStaticInitOrder_h_
#define _test_java_lang_invoke_CallStaticInitOrder_h_
//$ class test.java.lang.invoke.CallStaticInitOrder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LAST_LOSER")
#undef LAST_LOSER
#pragma push_macro("TICK")
#undef TICK

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class CallSite;
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
			class MutableCallSite;
		}
	}
}

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

class $export CallStaticInitOrder : public ::java::lang::Object {
	$class(CallStaticInitOrder, 0, ::java::lang::Object)
public:
	CallStaticInitOrder();
	void init$();
	static ::java::lang::invoke::MethodHandle* INDY_bang();
	static ::java::lang::invoke::MethodHandle* INDY_bar();
	static ::java::lang::invoke::MethodHandle* INDY_bat();
	static ::java::lang::invoke::MethodHandle* INDY_baz();
	static ::java::lang::invoke::MethodHandle* INDY_foo();
	static ::java::lang::invoke::MethodHandle* INDY_pong();
	static ::java::lang::invoke::MethodHandle* MH_baz();
	static ::java::lang::invoke::MethodHandle* MH_bsm();
	static ::java::lang::invoke::MethodHandle* MH_foo();
	static void assertEquals(int32_t expected, int32_t actual);
	static ::java::lang::invoke::CallSite* bsm(::java::lang::invoke::MethodHandles$Lookup* caller, $String* name, ::java::lang::invoke::MethodType* type);
	static void main($StringArray* av);
	static int32_t runBang();
	static int32_t runBar();
	static int32_t runBat();
	static int32_t runBaz();
	static int32_t runFoo();
	static int32_t runPong();
	static void shouldNotCallThis();
	static void testInit();
	static int32_t tick($String* event);
	static int32_t TICK;
	static int32_t Init1Tick;
	static int32_t Init2Tick;
	static int32_t Init3Tick;
	static int32_t Init4Tick;
	static int32_t Init5Tick;
	static int32_t Init6Tick;
	static ::java::lang::invoke::MutableCallSite* CONSTANT_CS_baz;
	static ::java::lang::invoke::MethodHandle* CONSTANT_MH_bar;
	static ::java::lang::invoke::MethodHandle* CONSTANT_MH_bat;
	static ::java::lang::invoke::MethodHandle* CONSTANT_MH_bangGetter;
	static ::java::lang::invoke::MethodHandle* CONSTANT_MH_pongSetter;
	static $Throwable* LAST_LOSER;
};

			} // invoke
		} // lang
	} // java
} // test

#pragma pop_macro("LAST_LOSER")
#pragma pop_macro("TICK")

#endif // _test_java_lang_invoke_CallStaticInitOrder_h_