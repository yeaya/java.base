#ifndef _test_java_lang_invoke_LoopCombinatorLongSignatureTest_h_
#define _test_java_lang_invoke_LoopCombinatorLongSignatureTest_h_
//$ class test.java.lang.invoke.LoopCombinatorLongSignatureTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PRED_T")
#undef PRED_T
#pragma push_macro("INIT")
#undef INIT
#pragma push_macro("STEP")
#undef STEP
#pragma push_macro("ARG_LIMIT")
#undef ARG_LIMIT
#pragma push_macro("FINI")
#undef FINI
#pragma push_macro("PRED_F")
#undef PRED_F

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

class $export LoopCombinatorLongSignatureTest : public ::java::lang::Object {
	$class(LoopCombinatorLongSignatureTest, 0, ::java::lang::Object)
public:
	LoopCombinatorLongSignatureTest();
	void init$();
	static void main($StringArray* args);
	static void testLongSignature(int32_t loopArgs, bool excessive, bool run);
	static ::java::lang::invoke::MethodHandle* INIT;
	static ::java::lang::invoke::MethodHandle* STEP;
	static ::java::lang::invoke::MethodHandle* PRED_F;
	static ::java::lang::invoke::MethodHandle* PRED_T;
	static ::java::lang::invoke::MethodHandle* FINI;
	static const int32_t ARG_LIMIT = 254;
};

			} // invoke
		} // lang
	} // java
} // test

#pragma pop_macro("PRED_T")
#pragma pop_macro("INIT")
#pragma pop_macro("STEP")
#pragma pop_macro("ARG_LIMIT")
#pragma pop_macro("FINI")
#pragma pop_macro("PRED_F")

#endif // _test_java_lang_invoke_LoopCombinatorLongSignatureTest_h_