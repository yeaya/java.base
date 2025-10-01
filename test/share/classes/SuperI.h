#ifndef _SuperI_h_
#define _SuperI_h_
//$ interface SuperI
//$ extends java.lang.Object

#include <java/lang/Object.h>

class SuperI : public ::java::lang::Object {
	$interface(SuperI, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void bar() {}
	virtual void foo() {}
};

#endif // _SuperI_h_