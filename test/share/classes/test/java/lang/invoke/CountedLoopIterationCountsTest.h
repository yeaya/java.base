#ifndef _test_java_lang_invoke_CountedLoopIterationCountsTest_h_
#define _test_java_lang_invoke_CountedLoopIterationCountsTest_h_
//$ class test.java.lang.invoke.CountedLoopIterationCountsTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class $export CountedLoopIterationCountsTest : public ::java::lang::Object {
	$class(CountedLoopIterationCountsTest, 0, ::java::lang::Object)
public:
	CountedLoopIterationCountsTest();
	void init$();
	static void main($StringArray* args);
	static void run(int32_t start, int32_t end, int32_t expectedIterations);
	static int32_t step(int32_t stepCount, int32_t counter);
	static bool failed;
	static ::java::lang::invoke::MethodHandle* MH_m1;
	static ::java::lang::invoke::MethodHandle* MH_step;
};

			} // invoke
		} // lang
	} // java
} // test

#endif // _test_java_lang_invoke_CountedLoopIterationCountsTest_h_