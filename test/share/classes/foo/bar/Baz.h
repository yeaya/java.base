#ifndef _foo_bar_Baz_h_
#define _foo_bar_Baz_h_
//$ class foo.bar.Baz
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace foo {
	namespace bar {

class Baz : public ::java::lang::Object {
	$class(Baz, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Baz();
	void init$();
};

	} // bar
} // foo

#endif // _foo_bar_Baz_h_