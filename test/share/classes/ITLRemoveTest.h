#ifndef _ITLRemoveTest_h_
#define _ITLRemoveTest_h_
//$ class ITLRemoveTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INITIAL_VALUE")
#undef INITIAL_VALUE
#pragma push_macro("REMOVE_SET_VALUE")
#undef REMOVE_SET_VALUE

namespace java {
	namespace lang {
		class InheritableThreadLocal;
		class Throwable;
	}
}

class $export ITLRemoveTest : public ::java::lang::Object {
	$class(ITLRemoveTest, 0, ::java::lang::Object)
public:
	ITLRemoveTest();
	void init$();
	static void main($StringArray* args);
	static const int32_t INITIAL_VALUE = 0x80000000; // Integer.MIN_VALUE
	static const int32_t REMOVE_SET_VALUE = 0x7FFFFFFF; // Integer.MAX_VALUE
	static ::java::lang::InheritableThreadLocal* n;
	static int32_t threadCount;
	static $ints* x;
	static $Array<::java::lang::Throwable>* exceptions;
	static $ints* removeNode;
	static $ints* removeAndSet;
};

#pragma pop_macro("INITIAL_VALUE")
#pragma pop_macro("REMOVE_SET_VALUE")

#endif // _ITLRemoveTest_h_