#ifndef _WaitTooLong_h_
#define _WaitTooLong_h_
//$ class WaitTooLong
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export WaitTooLong : public ::java::lang::Object {
	$class(WaitTooLong, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WaitTooLong();
	void init$();
	static void main($StringArray* args);
	static void test(int32_t nanos);
};

#endif // _WaitTooLong_h_