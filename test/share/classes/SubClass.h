#ifndef _SubClass_h_
#define _SubClass_h_
//$ class SubClass
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export SubClass : public ::java::lang::Object {
	$class(SubClass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SubClass();
	void init$();
	static void main($StringArray* args);
};

#endif // _SubClass_h_