#ifndef _TestObjectStreamClass_h_
#define _TestObjectStreamClass_h_
//$ class TestObjectStreamClass
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestObjectStreamClass : public ::java::lang::Object {
	$class(TestObjectStreamClass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestObjectStreamClass();
	void init$();
	static void main($StringArray* args);
};

#endif // _TestObjectStreamClass_h_