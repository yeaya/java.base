#ifndef _Base_h_
#define _Base_h_
//$ class Base
//$ extends java.lang.Object

#include <java/lang/Object.h>

class Base : public ::java::lang::Object {
	$class(Base, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Base();
	void init$();
	virtual void baz() {}
	virtual void quux();
};

#endif // _Base_h_