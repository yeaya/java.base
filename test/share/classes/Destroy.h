#ifndef _Destroy_h_
#define _Destroy_h_
//$ class Destroy
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Destroy : public ::java::lang::Object {
	$class(Destroy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Destroy();
	void init$();
	static void main($StringArray* args);
	static void testDestroyChild();
};

#endif // _Destroy_h_