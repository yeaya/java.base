#ifndef _StackOverflowTest_h_
#define _StackOverflowTest_h_
//$ class StackOverflowTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace channels {
			class Selector;
		}
	}
}

class $export StackOverflowTest : public ::java::lang::Object {
	$class(StackOverflowTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StackOverflowTest();
	void init$();
	static void main($StringArray* args);
	static void recursiveSelect(::java::nio::channels::Selector* sel);
};

#endif // _StackOverflowTest_h_