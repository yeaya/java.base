#ifndef _foo_Foo_h_
#define _foo_Foo_h_
//$ class foo.Foo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Package;
	}
}

namespace foo {

class $export Foo : public ::java::lang::Object {
	$class(Foo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Foo();
	void init$();
	static $Array<::java::lang::Package>* getPackages();
};

} // foo

#endif // _foo_Foo_h_