#ifndef _RegAfterPreClose_h_
#define _RegAfterPreClose_h_
//$ class RegAfterPreClose
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEST_ITERATIONS")
#undef TEST_ITERATIONS

class $export RegAfterPreClose : public ::java::lang::Object {
	$class(RegAfterPreClose, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RegAfterPreClose();
	void init$();
	static void main($StringArray* args);
	static const int32_t TEST_ITERATIONS = 300;
	static $volatile(bool) done;
};

#pragma pop_macro("TEST_ITERATIONS")

#endif // _RegAfterPreClose_h_