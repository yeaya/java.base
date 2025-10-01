#ifndef _TestedInterface_h_
#define _TestedInterface_h_
//$ interface TestedInterface
//$ extends java.lang.Object

#include <java/lang/Object.h>

class TestedInterface : public ::java::lang::Object {
	$interface(TestedInterface, 0, ::java::lang::Object)
public:
	virtual void bar() {}
	virtual void foo() {}
	static $String* s;
};

#endif // _TestedInterface_h_