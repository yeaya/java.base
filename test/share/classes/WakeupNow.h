#ifndef _WakeupNow_h_
#define _WakeupNow_h_
//$ class WakeupNow
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export WakeupNow : public ::java::lang::Object {
	$class(WakeupNow, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WakeupNow();
	void init$();
	static void main($StringArray* args);
	static void test1();
	static void test2();
};

#endif // _WakeupNow_h_