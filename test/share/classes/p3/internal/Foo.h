#ifndef _p3_internal_Foo_h_
#define _p3_internal_Foo_h_
//$ class p3.internal.Foo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace p3 {
	namespace internal {

class $export Foo : public ::java::lang::Object {
	$class(Foo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Foo();
	void init$();
};

	} // internal
} // p3

#endif // _p3_internal_Foo_h_