#ifndef _ClassAttributesTest_h_
#define _ClassAttributesTest_h_
//$ class ClassAttributesTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ClassAttributesTest : public ::java::lang::Object {
	$class(ClassAttributesTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassAttributesTest();
	void init$();
	static void lambda$main$0();
	static void main($StringArray* argv);
	static int32_t test($Class* clazz, bool anonymous, bool local, bool member);
};

#endif // _ClassAttributesTest_h_