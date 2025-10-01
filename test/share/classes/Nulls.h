#ifndef _Nulls_h_
#define _Nulls_h_
//$ class Nulls
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Nulls : public ::java::lang::Object {
	$class(Nulls, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Nulls();
	void init$();
	static void main($StringArray* args);
	static void npeExpected();
};

#endif // _Nulls_h_