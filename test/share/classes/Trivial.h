#ifndef _Trivial_h_
#define _Trivial_h_
//$ class Trivial
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Trivial : public ::java::lang::Object {
	$class(Trivial, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Trivial();
	void init$();
	static void main($StringArray* args);
};

#endif // _Trivial_h_