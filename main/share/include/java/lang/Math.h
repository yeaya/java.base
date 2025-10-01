#ifndef _java_lang_Math_h_
#define _java_lang_Math_h_
//$ class java.lang.Math
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEGREES_TO_RADIANS")
#undef DEGREES_TO_RADIANS
#pragma push_macro("E")
#undef E
#pragma push_macro("PI")
#undef PI
#pragma push_macro("RADIANS_TO_DEGREES")
#undef RADIANS_TO_DEGREES

namespace java {
	namespace lang {

class $import Math : public ::java::lang::Object {
	$class(Math, $PRELOAD, ::java::lang::Object)
public:
	Math();
	void init$();
	static double IEEEremainder(double f1, double f2);
	static int32_t abs(int32_t a);
	static int64_t abs(int64_t a);
	static float abs(float a);
	static double abs(double a);
	static int32_t absExact(int32_t a);
	static int64_t absExact(int64_t a);
	static double acos(double a);
	static int32_t addExact(int32_t x, int32_t y);
	static int64_t addExact(int64_t x, int64_t y);
	static double asin(double a);
	static double atan(double a);
	static double atan2(double y, double x);
	static double cbrt(double a);
	static double ceil(double a);
	static double copySign(double magnitude, double sign);
	static float copySign(float magnitude, float sign);
	static double cos(double a);
	static double cosh(double x);
	static int32_t decrementExact(int32_t a);
	static int64_t decrementExact(int64_t a);
	static double exp(double a);
	static double expm1(double x);
	static double floor(double a);
	static int32_t floorDiv(int32_t x, int32_t y);
	static int64_t floorDiv(int64_t x, int32_t y);
	static int64_t floorDiv(int64_t x, int64_t y);
	static int32_t floorMod(int32_t x, int32_t y);
	static int32_t floorMod(int64_t x, int32_t y);
	static int64_t floorMod(int64_t x, int64_t y);
	static double fma(double a, double b, double c);
	static float fma(float a, float b, float c);
	static int32_t getExponent(float f);
	static int32_t getExponent(double d);
	static double hypot(double x, double y);
	static int32_t incrementExact(int32_t a);
	static int64_t incrementExact(int64_t a);
	static double log(double a);
	static double log10(double a);
	static double log1p(double x);
	static int32_t max(int32_t a, int32_t b);
	static int64_t max(int64_t a, int64_t b);
	static float max(float a, float b);
	static double max(double a, double b);
	static int32_t min(int32_t a, int32_t b);
	static int64_t min(int64_t a, int64_t b);
	static float min(float a, float b);
	static double min(double a, double b);
	static int32_t multiplyExact(int32_t x, int32_t y);
	static int64_t multiplyExact(int64_t x, int32_t y);
	static int64_t multiplyExact(int64_t x, int64_t y);
	static int64_t multiplyFull(int32_t x, int32_t y);
	static int64_t multiplyHigh(int64_t x, int64_t y);
	static int32_t negateExact(int32_t a);
	static int64_t negateExact(int64_t a);
	static double nextAfter(double start, double direction);
	static float nextAfter(float start, double direction);
	static double nextDown(double d);
	static float nextDown(float f);
	static double nextUp(double d);
	static float nextUp(float f);
	static double pow(double a, double b);
	static double powerOfTwoD(int32_t n);
	static float powerOfTwoF(int32_t n);
	static double random();
	static double rint(double a);
	static int32_t round(float a);
	static int64_t round(double a);
	static double scalb(double d, int32_t scaleFactor);
	static float scalb(float f, int32_t scaleFactor);
	static double signum(double d);
	static float signum(float f);
	static double sin(double a);
	static double sinh(double x);
	static double sqrt(double a);
	static int32_t subtractExact(int32_t x, int32_t y);
	static int64_t subtractExact(int64_t x, int64_t y);
	static double tan(double a);
	static double tanh(double x);
	static double toDegrees(double angrad);
	static int32_t toIntExact(int64_t value);
	static double toRadians(double angdeg);
	static double ulp(double d);
	static float ulp(float f);
	static bool $assertionsDisabled;
	static double E;
	static double PI;
	static double DEGREES_TO_RADIANS;
	static double RADIANS_TO_DEGREES;
	static int64_t negativeZeroFloatBits;
	static int64_t negativeZeroDoubleBits;
	static double twoToTheDoubleScaleUp;
	static double twoToTheDoubleScaleDown;
};

	} // lang
} // java

#pragma pop_macro("DEGREES_TO_RADIANS")
#pragma pop_macro("E")
#pragma pop_macro("PI")
#pragma pop_macro("RADIANS_TO_DEGREES")

#endif // _java_lang_Math_h_