#ifndef _StaticInitializerTest_h_
#define _StaticInitializerTest_h_
//$ class StaticInitializerTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export StaticInitializerTest : public ::java::lang::Object {
	$class(StaticInitializerTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StaticInitializerTest();
	void init$();
	static void main($StringArray* args);
};

#endif // _StaticInitializerTest_h_