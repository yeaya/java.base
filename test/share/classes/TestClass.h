#ifndef _TestClass_h_
#define _TestClass_h_
//$ class TestClass
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export TestClass : public ::java::lang::Object {
	$class(TestClass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestClass();
	void init$();
	static $String* foo();
};

#endif // _TestClass_h_