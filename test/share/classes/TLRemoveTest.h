#ifndef _TLRemoveTest_h_
#define _TLRemoveTest_h_
//$ class TLRemoveTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INITIAL_VALUE")
#undef INITIAL_VALUE
#pragma push_macro("REMOVE_SET_VALUE")
#undef REMOVE_SET_VALUE

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}

class $export TLRemoveTest : public ::java::lang::Object {
	$class(TLRemoveTest, 0, ::java::lang::Object)
public:
	TLRemoveTest();
	void init$();
	static void main($StringArray* args);
	static const int32_t INITIAL_VALUE = 101;
	static const int32_t REMOVE_SET_VALUE = 102;
	static ::java::lang::ThreadLocal* n;
};

#pragma pop_macro("INITIAL_VALUE")
#pragma pop_macro("REMOVE_SET_VALUE")

#endif // _TLRemoveTest_h_