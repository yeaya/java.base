#ifndef _test_java_lang_invoke_MethodHandleConstants_h_
#define _test_java_lang_invoke_MethodHandleConstants_h_
//$ class test.java.lang.invoke.MethodHandleConstants
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
			class MethodHandle;
			class MethodType;
		}
	}
}

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

class $export MethodHandleConstants : public ::java::lang::Object {
	$class(MethodHandleConstants, 0, ::java::lang::Object)
public:
	MethodHandleConstants();
	void init$();
	static ::java::lang::invoke::MethodHandle* MH_Class_forName_S();
	static ::java::lang::invoke::MethodHandle* MH_Class_forName_SbCL();
	static ::java::lang::invoke::MethodHandle* MH_MethodHandle_invokeExact_SC2();
	static ::java::lang::invoke::MethodHandle* MH_MethodHandle_invoke_SC2();
	static ::java::lang::invoke::MethodHandle* MH_String_replace_C2();
	static ::java::lang::invoke::MethodType* MT_Class_forName_S();
	static ::java::lang::invoke::MethodType* MT_Class_forName_SbCL();
	static ::java::lang::invoke::MethodType* MT_MethodHandle_invokeExact_SC2();
	static ::java::lang::invoke::MethodType* MT_MethodHandle_invoke_SC2();
	static ::java::lang::invoke::MethodType* MT_String_replace_C2();
	static void assertEquals(Object$* exp, Object$* act);
	static void closeBuf();
	static void main($StringArray* av);
	static void openBuf();
	static void setSM();
	static void shouldNotCallThis();
	static void testCase(::java::lang::invoke::MethodHandle* mh, $Class* defc, $String* name, $Class* rtype, $ClassArray* ptypes);
	static ::java::io::PrintStream* oldOut;
	static ::java::io::ByteArrayOutputStream* buf;
	static $StringArray* EXPECT_OUTPUT;
};

			} // invoke
		} // lang
	} // java
} // test

#pragma pop_macro("EXPECT_OUTPUT")

#endif // _test_java_lang_invoke_MethodHandleConstants_h_