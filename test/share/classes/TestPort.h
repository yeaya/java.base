#ifndef _TestPort_h_
#define _TestPort_h_
//$ class TestPort
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestPort : public ::java::lang::Object {
	$class(TestPort, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestPort();
	void init$();
	static void main($StringArray* args);
};

#endif // _TestPort_h_