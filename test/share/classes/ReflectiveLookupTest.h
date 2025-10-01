#ifndef _ReflectiveLookupTest_h_
#define _ReflectiveLookupTest_h_
//$ class ReflectiveLookupTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ReflectiveLookupTest : public ::java::lang::Object {
	$class(ReflectiveLookupTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReflectiveLookupTest();
	void init$();
	static void assertEquals(Object$* o1, Object$* o2);
	static $String* foo();
	static void main($StringArray* args);
};

#endif // _ReflectiveLookupTest_h_