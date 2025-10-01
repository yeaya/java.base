#ifndef _Boxing_h_
#define _Boxing_h_
//$ class Boxing
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("REPS")
#undef REPS

class $export Boxing : public ::java::lang::Object {
	$class(Boxing, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Boxing();
	void init$();
	static $String* identityToString(Object$* obj);
	static void main($StringArray* args);
	void run();
	static const int32_t REPS = 0x000186A0;
	int8_t b = 0;
	char16_t c = 0;
	double d = 0.0;
	float f = 0.0;
	int32_t i = 0;
	int64_t j = 0;
	int16_t s = 0;
	bool z = false;
};

#pragma pop_macro("REPS")

#endif // _Boxing_h_