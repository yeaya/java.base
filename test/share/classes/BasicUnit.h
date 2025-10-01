#ifndef _BasicUnit_h_
#define _BasicUnit_h_
//$ class BasicUnit
//$ extends java.lang.Object

#include <java/lang/Array.h>

class Int;

class $export BasicUnit : public ::java::lang::Object {
	$class(BasicUnit, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BasicUnit();
	void init$();
	static ::Int* factory($Class* c);
	static void main($StringArray* args);
};

#endif // _BasicUnit_h_