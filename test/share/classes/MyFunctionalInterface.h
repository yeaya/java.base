#ifndef _MyFunctionalInterface_h_
#define _MyFunctionalInterface_h_
//$ interface MyFunctionalInterface
//$ extends java.lang.Object

#include <java/lang/Object.h>

class MyFunctionalInterface : public ::java::lang::Object {
	$interface(MyFunctionalInterface, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* invokeMethodReference() {return nullptr;}
};

#endif // _MyFunctionalInterface_h_