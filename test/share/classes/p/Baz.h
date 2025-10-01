#ifndef _p_Baz_h_
#define _p_Baz_h_
//$ class p.Baz
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace p {

class $export Baz : public ::java::lang::Object {
	$class(Baz, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Baz();
	void init$();
};

} // p

#endif // _p_Baz_h_