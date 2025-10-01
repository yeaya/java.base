#ifndef _NullStackTrace_h_
#define _NullStackTrace_h_
//$ class NullStackTrace
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TIMES")
#undef TIMES

class $export NullStackTrace : public ::java::lang::Object {
	$class(NullStackTrace, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NullStackTrace();
	void init$();
	static void main($StringArray* args);
	static const int32_t TIMES = 1000;
};

#pragma pop_macro("TIMES")

#endif // _NullStackTrace_h_