#ifndef _NonBlocking_h_
#define _NonBlocking_h_
//$ class NonBlocking
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NonBlocking : public ::java::lang::Object {
	$class(NonBlocking, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NonBlocking();
	void init$();
	static void main($StringArray* args);
	static void test1();
};

#endif // _NonBlocking_h_