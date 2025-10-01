#ifndef _WakeupEmpty_h_
#define _WakeupEmpty_h_
//$ class WakeupEmpty
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SLEEP_TIME")
#undef SLEEP_TIME

class $export WakeupEmpty : public ::java::lang::Object {
	$class(WakeupEmpty, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WakeupEmpty();
	void init$();
	static void main($StringArray* argv);
	static const int32_t SLEEP_TIME = 100;
};

#pragma pop_macro("SLEEP_TIME")

#endif // _WakeupEmpty_h_