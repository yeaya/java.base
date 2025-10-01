#ifndef _InheritHandle_h_
#define _InheritHandle_h_
//$ class InheritHandle
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SLEEPTIME_MS")
#undef SLEEPTIME_MS

class $export InheritHandle : public ::java::lang::Object {
	$class(InheritHandle, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InheritHandle();
	void init$();
	static void main($StringArray* args);
	static const int64_t SLEEPTIME_MS = (int64_t)1000;
};

#pragma pop_macro("SLEEPTIME_MS")

#endif // _InheritHandle_h_