#ifndef _StackStreamTest_h_
#define _StackStreamTest_h_
//$ class StackStreamTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StackWalker$StackFrame;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export StackStreamTest : public ::java::lang::Object {
	$class(StackStreamTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StackStreamTest();
	void init$();
	static void caller();
	static void equalsOrThrow($String* label, ::java::util::List* list, ::java::util::List* expected);
	static bool isTestClass(::java::lang::StackWalker$StackFrame* f);
	static void main($StringArray* argv);
	virtual void test();
};

#endif // _StackStreamTest_h_