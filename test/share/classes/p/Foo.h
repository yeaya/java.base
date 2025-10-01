#ifndef _p_Foo_h_
#define _p_Foo_h_
//$ class p.Foo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace p {

class $export Foo : public ::java::lang::Object {
	$class(Foo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Foo();
	void init$();
};

} // p

#endif // _p_Foo_h_