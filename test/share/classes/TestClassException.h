#ifndef _TestClassException_h_
#define _TestClassException_h_
//$ class TestClassException
//$ extends java.lang.Object

#include <java/lang/Object.h>

class TestClassException : public ::java::lang::Object {
	$class(TestClassException, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestClassException();
	void init$();
	virtual $Object* foo();
};

#endif // _TestClassException_h_