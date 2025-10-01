#ifndef _SuperIwithDefault_h_
#define _SuperIwithDefault_h_
//$ interface SuperIwithDefault
//$ extends java.lang.Object

#include <java/lang/Object.h>

class SuperIwithDefault : public ::java::lang::Object {
	$interface(SuperIwithDefault, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void bar();
	virtual void foo() {}
};

#endif // _SuperIwithDefault_h_