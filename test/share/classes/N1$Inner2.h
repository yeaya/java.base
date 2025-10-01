#ifndef _N1$Inner2_h_
#define _N1$Inner2_h_
//$ class N1$Inner2
//$ extends java.lang.Object

#include <java/lang/Array.h>

class N1;

class N1$Inner2 : public ::java::lang::Object {
	$class(N1$Inner2, $NO_CLASS_INIT, ::java::lang::Object)
public:
	N1$Inner2();
	void init$(::N1* this$0);
	::N1* this$0 = nullptr;
	bool x = false;
	int8_t b = 0;
	int16_t s = 0;
	char16_t c = 0;
	int32_t i = 0;
	int64_t l = 0;
	float f = 0.0;
	double d = 0.0;
	$booleans* xa = nullptr;
	$bytes* ba = nullptr;
	$shorts* sa = nullptr;
	$chars* ca = nullptr;
	$ints* ia = nullptr;
	$longs* la = nullptr;
	$floats* fa = nullptr;
	$doubles* da = nullptr;
};

#endif // _N1$Inner2_h_