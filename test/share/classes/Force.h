#ifndef _Force_h_
#define _Force_h_
//$ class Force
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Force : public ::java::lang::Object {
	$class(Force, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Force();
	void init$();
	static void forceReadableOnly();
	static void main($StringArray* args);
	static void writeAfterForce();
};

#endif // _Force_h_