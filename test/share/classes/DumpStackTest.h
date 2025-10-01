#ifndef _DumpStackTest_h_
#define _DumpStackTest_h_
//$ class DumpStackTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class DumpStackTest$CallFrame;
namespace java {
	namespace lang {
		class StackTraceElement;
		class Void;
	}
}

class $export DumpStackTest : public ::java::lang::Object {
	$class(DumpStackTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DumpStackTest();
	void init$();
	static void assertEquals(::java::lang::StackTraceElement* actual, ::DumpStackTest$CallFrame* expected, int32_t idx);
	static void assertStackTrace($Array<::java::lang::StackTraceElement>* actual, $Array<DumpStackTest$CallFrame>* expected);
	static void consumeLambda();
	static void getStackTrace($Array<DumpStackTest$CallFrame>* callStack);
	static void lambda$assertStackTrace$1(::java::lang::StackTraceElement* e);
	static void lambda$assertStackTrace$2(::DumpStackTest$CallFrame* e);
	static void lambda$testLambda$0(::java::lang::Void* x);
	static void main($StringArray* args);
	static void methodHandle();
	static void methodInvoke();
	static void test();
	static void testLambda();
	static void testMethodHandle();
	static void testMethodInvoke();
	static void testThread();
};

#endif // _DumpStackTest_h_