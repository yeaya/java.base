#ifndef _Boxing$Test_h_
#define _Boxing$Test_h_
//$ interface Boxing$Test
//$ extends java.lang.Object

#include <java/lang/Object.h>

class Boxing$Test : public ::java::lang::Object {
	$interface(Boxing$Test, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void m(int8_t b, char16_t c, double d, float f, int32_t i, int64_t j, int16_t s, bool z) {}
};

#endif // _Boxing$Test_h_