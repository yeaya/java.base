#ifndef _foo_Foo2_h_
#define _foo_Foo2_h_
//$ class foo.Foo2
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace foo {

class $export Foo2 : public ::java::lang::Object {
	$class(Foo2, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Foo2();
	void init$();
};

} // foo

#endif // _foo_Foo2_h_