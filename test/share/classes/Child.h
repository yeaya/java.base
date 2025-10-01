#ifndef _Child_h_
#define _Child_h_
//$ class Child
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Child : public ::java::lang::Object {
	$class(Child, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Child();
	void init$();
	static void main($StringArray* args);
};

#endif // _Child_h_