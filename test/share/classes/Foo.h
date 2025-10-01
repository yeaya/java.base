#ifndef _Foo_h_
#define _Foo_h_
//$ class Foo
//$ extends java.lang.Object

#include <java/lang/Object.h>

class Foo : public ::java::lang::Object {
	$class(Foo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Foo();
	void init$();
	void privateMethod();
};

#endif // _Foo_h_