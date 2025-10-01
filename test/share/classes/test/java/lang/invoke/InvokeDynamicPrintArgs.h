#ifndef _test_java_lang_invoke_InvokeDynamicPrintArgs_h_
#define _test_java_lang_invoke_InvokeDynamicPrintArgs_h_
//$ class test.java.lang.invoke.InvokeDynamicPrintArgs
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EXPECT_OUTPUT")
#undef EXPECT_OUTPUT

namespace java {
	namespace io {
		class ByteArrayOutputStream;
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class CallSite;
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

class $export InvokeDynamicPrintArgs : public ::java::lang::Object {
	$class(InvokeDynamicPrintArgs, 0, ::java::lang::Object)
public:
	InvokeDynamicPrintArgs();
	void init$();
	static ::java::lang::invoke::MethodHandle* INDY_bar();
	static ::java::lang::invoke::MethodHandle* INDY_bar2();
	static ::java::lang::invoke::MethodHandle* INDY_baz();
	static ::java::lang::invoke::MethodHandle* INDY_foo();
	static ::java::lang::invoke::MethodHandle* INDY_nothing();
	static ::java::lang::invoke::MethodHandle* MH_bsm();
	static ::java::lang::invoke::MethodHandle* MH_bsm2();
	static ::java::lang::invoke::MethodHandle* MH_printArgs();
	static ::java::lang::invoke::MethodType* MT_bsm();
	static ::java::lang::invoke::MethodType* MT_bsm2();
	static void assertEquals(Object$* exp, Object$* act);
	static ::java::lang::invoke::CallSite* bsm(::java::lang::invoke::MethodHandles$Lookup* caller, $String* name, ::java::lang::invoke::MethodType* type);
	static ::java::lang::invoke::CallSite* bsm2(::java::lang::invoke::MethodHandles$Lookup* caller, $String* name, ::java::lang::invoke::MethodType* type, $ObjectArray* arg);
	static void checkConstantRefs();
	static void closeBuf();
	static void main($StringArray* av);
	static ::java::lang::invoke::MethodHandle* non_MH_bsm();
	static void openBuf();
	static void printArgs(Object$* bsmInfo, $ObjectArray* args);
	static void setSM();
	static void shouldNotCallThis();
	static ::java::io::PrintStream* oldOut;
	static ::java::io::ByteArrayOutputStream* buf;
	static $StringArray* EXPECT_OUTPUT;
	static bool doPrint;
};

			} // invoke
		} // lang
	} // java
} // test

#pragma pop_macro("EXPECT_OUTPUT")

#endif // _test_java_lang_invoke_InvokeDynamicPrintArgs_h_