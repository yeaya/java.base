#include <java/lang/StrictMath.h>
#include <java/lang/AssertionError.h>
#include <java/lang/FdLibm$Cbrt.h>
#include <java/lang/FdLibm$Exp.h>
#include <java/lang/FdLibm$Hypot.h>
#include <java/lang/FdLibm$Pow.h>
#include <java/lang/Math.h>
#include <java/lang/StrictMath$RandomNumberGeneratorHolder.h>
#include <java/util/Random.h>
#include <jdk/internal/math/DoubleConsts.h>
#include <jcpp.h>

#undef DEGREES_TO_RADIANS
#undef E
#undef PI
#undef RADIANS_TO_DEGREES
#undef SIGNIF_BIT_MASK

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FdLibm$Cbrt = ::java::lang::FdLibm$Cbrt;
using $FdLibm$Exp = ::java::lang::FdLibm$Exp;
using $FdLibm$Hypot = ::java::lang::FdLibm$Hypot;
using $FdLibm$Pow = ::java::lang::FdLibm$Pow;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $StrictMath$RandomNumberGeneratorHolder = ::java::lang::StrictMath$RandomNumberGeneratorHolder;
using $DoubleConsts = ::jdk::internal::math::DoubleConsts;

namespace java {
	namespace lang {

bool StrictMath::$assertionsDisabled = false;
double StrictMath::E = 0.0;
double StrictMath::PI = 0.0;
double StrictMath::DEGREES_TO_RADIANS = 0.0;
double StrictMath::RADIANS_TO_DEGREES = 0.0;

void StrictMath::init$() {
}

double StrictMath::sin(double a) {
	$init(StrictMath);
	$prepareNativeStatic(sin, double, double a);
	double $ret = $invokeNativeStatic(a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::cos(double a) {
	$init(StrictMath);
	$prepareNativeStatic(cos, double, double a);
	double $ret = $invokeNativeStatic(a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::tan(double a) {
	$init(StrictMath);
	$prepareNativeStatic(tan, double, double a);
	double $ret = $invokeNativeStatic(a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::asin(double a) {
	$init(StrictMath);
	$prepareNativeStatic(asin, double, double a);
	double $ret = $invokeNativeStatic(a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::acos(double a) {
	$init(StrictMath);
	$prepareNativeStatic(acos, double, double a);
	double $ret = $invokeNativeStatic(a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::atan(double a) {
	$init(StrictMath);
	$prepareNativeStatic(atan, double, double a);
	double $ret = $invokeNativeStatic(a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::toRadians(double angdeg) {
	$init(StrictMath);
	return $Math::toRadians(angdeg);
}

double StrictMath::toDegrees(double angrad) {
	$init(StrictMath);
	return $Math::toDegrees(angrad);
}

double StrictMath::exp(double a) {
	$init(StrictMath);
	return $FdLibm$Exp::compute(a);
}

double StrictMath::log(double a) {
	$init(StrictMath);
	$prepareNativeStatic(log, double, double a);
	double $ret = $invokeNativeStatic(a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::log10(double a) {
	$init(StrictMath);
	$prepareNativeStatic(log10, double, double a);
	double $ret = $invokeNativeStatic(a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::sqrt(double a) {
	$init(StrictMath);
	$prepareNativeStatic(sqrt, double, double a);
	double $ret = $invokeNativeStatic(a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::cbrt(double a) {
	$init(StrictMath);
	return $FdLibm$Cbrt::compute(a);
}

double StrictMath::IEEEremainder(double f1, double f2) {
	$init(StrictMath);
	$prepareNativeStatic(IEEEremainder, double, double f1, double f2);
	double $ret = $invokeNativeStatic(f1, f2);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::ceil(double a) {
	$init(StrictMath);
	return floorOrCeil(a, -0.0, 1.0, 1.0);
}

double StrictMath::floor(double a) {
	$init(StrictMath);
	return floorOrCeil(a, -1.0, 0.0, -1.0);
}

double StrictMath::floorOrCeil(double a, double negativeBoundary, double positiveBoundary, double sign) {
	$init(StrictMath);
	int32_t exponent = $Math::getExponent(a);
	if (exponent < 0) {
		return ((a == 0.0) ? a : ((a < 0.0) ? negativeBoundary : positiveBoundary));
	} else if (exponent >= 52) {
		return a;
	}
	if (!StrictMath::$assertionsDisabled && !(exponent >= 0 && exponent <= 51)) {
		$throwNew($AssertionError);
	}
	int64_t doppel = $Double::doubleToRawLongBits(a);
	int64_t mask = $sr($DoubleConsts::SIGNIF_BIT_MASK, exponent);
	if ((mask & doppel) == 0) {
		return a;
	} else {
		double result = $Double::longBitsToDouble(doppel & (~mask));
		if (sign * a > 0.0) {
			result = result + sign;
		}
		return result;
	}
}

double StrictMath::rint(double a) {
	$init(StrictMath);
	double twoToThe52 = (double)((int64_t)1 << 52);
	double sign = $Math::copySign(1.0, a);
	a = $Math::abs(a);
	if (a < twoToThe52) {
		a = ((twoToThe52 + a) - twoToThe52);
	}
	return sign * a;
}

double StrictMath::atan2(double y, double x) {
	$init(StrictMath);
	$prepareNativeStatic(atan2, double, double y, double x);
	double $ret = $invokeNativeStatic(y, x);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::pow(double a, double b) {
	$init(StrictMath);
	return $FdLibm$Pow::compute(a, b);
}

int32_t StrictMath::round(float a) {
	$init(StrictMath);
	return $Math::round(a);
}

int64_t StrictMath::round(double a) {
	$init(StrictMath);
	return $Math::round(a);
}

double StrictMath::random() {
	$init(StrictMath);
	$init($StrictMath$RandomNumberGeneratorHolder);
	return $nc($StrictMath$RandomNumberGeneratorHolder::randomNumberGenerator)->nextDouble();
}

int32_t StrictMath::addExact(int32_t x, int32_t y) {
	$init(StrictMath);
	return $Math::addExact(x, y);
}

int64_t StrictMath::addExact(int64_t x, int64_t y) {
	$init(StrictMath);
	return $Math::addExact(x, y);
}

int32_t StrictMath::subtractExact(int32_t x, int32_t y) {
	$init(StrictMath);
	return $Math::subtractExact(x, y);
}

int64_t StrictMath::subtractExact(int64_t x, int64_t y) {
	$init(StrictMath);
	return $Math::subtractExact(x, y);
}

int32_t StrictMath::multiplyExact(int32_t x, int32_t y) {
	$init(StrictMath);
	return $Math::multiplyExact(x, y);
}

int64_t StrictMath::multiplyExact(int64_t x, int32_t y) {
	$init(StrictMath);
	return $Math::multiplyExact(x, y);
}

int64_t StrictMath::multiplyExact(int64_t x, int64_t y) {
	$init(StrictMath);
	return $Math::multiplyExact(x, y);
}

int32_t StrictMath::incrementExact(int32_t a) {
	$init(StrictMath);
	return $Math::incrementExact(a);
}

int64_t StrictMath::incrementExact(int64_t a) {
	$init(StrictMath);
	return $Math::incrementExact(a);
}

int32_t StrictMath::decrementExact(int32_t a) {
	$init(StrictMath);
	return $Math::decrementExact(a);
}

int64_t StrictMath::decrementExact(int64_t a) {
	$init(StrictMath);
	return $Math::decrementExact(a);
}

int32_t StrictMath::negateExact(int32_t a) {
	$init(StrictMath);
	return $Math::negateExact(a);
}

int64_t StrictMath::negateExact(int64_t a) {
	$init(StrictMath);
	return $Math::negateExact(a);
}

int32_t StrictMath::toIntExact(int64_t value) {
	$init(StrictMath);
	return $Math::toIntExact(value);
}

int64_t StrictMath::multiplyFull(int32_t x, int32_t y) {
	$init(StrictMath);
	return $Math::multiplyFull(x, y);
}

int64_t StrictMath::multiplyHigh(int64_t x, int64_t y) {
	$init(StrictMath);
	return $Math::multiplyHigh(x, y);
}

int32_t StrictMath::floorDiv(int32_t x, int32_t y) {
	$init(StrictMath);
	return $Math::floorDiv(x, y);
}

int64_t StrictMath::floorDiv(int64_t x, int32_t y) {
	$init(StrictMath);
	return $Math::floorDiv(x, y);
}

int64_t StrictMath::floorDiv(int64_t x, int64_t y) {
	$init(StrictMath);
	return $Math::floorDiv(x, y);
}

int32_t StrictMath::floorMod(int32_t x, int32_t y) {
	$init(StrictMath);
	return $Math::floorMod(x, y);
}

int32_t StrictMath::floorMod(int64_t x, int32_t y) {
	$init(StrictMath);
	return $Math::floorMod(x, y);
}

int64_t StrictMath::floorMod(int64_t x, int64_t y) {
	$init(StrictMath);
	return $Math::floorMod(x, y);
}

int32_t StrictMath::abs(int32_t a) {
	$init(StrictMath);
	return $Math::abs(a);
}

int32_t StrictMath::absExact(int32_t a) {
	$init(StrictMath);
	return $Math::absExact(a);
}

int64_t StrictMath::abs(int64_t a) {
	$init(StrictMath);
	return $Math::abs(a);
}

int64_t StrictMath::absExact(int64_t a) {
	$init(StrictMath);
	return $Math::absExact(a);
}

float StrictMath::abs(float a) {
	$init(StrictMath);
	return $Math::abs(a);
}

double StrictMath::abs(double a) {
	$init(StrictMath);
	return $Math::abs(a);
}

int32_t StrictMath::max(int32_t a, int32_t b) {
	$init(StrictMath);
	return $Math::max(a, b);
}

int64_t StrictMath::max(int64_t a, int64_t b) {
	$init(StrictMath);
	return $Math::max(a, b);
}

float StrictMath::max(float a, float b) {
	$init(StrictMath);
	return $Math::max(a, b);
}

double StrictMath::max(double a, double b) {
	$init(StrictMath);
	return $Math::max(a, b);
}

int32_t StrictMath::min(int32_t a, int32_t b) {
	$init(StrictMath);
	return $Math::min(a, b);
}

int64_t StrictMath::min(int64_t a, int64_t b) {
	$init(StrictMath);
	return $Math::min(a, b);
}

float StrictMath::min(float a, float b) {
	$init(StrictMath);
	return $Math::min(a, b);
}

double StrictMath::min(double a, double b) {
	$init(StrictMath);
	return $Math::min(a, b);
}

double StrictMath::fma(double a, double b, double c) {
	$init(StrictMath);
	return $Math::fma(a, b, c);
}

float StrictMath::fma(float a, float b, float c) {
	$init(StrictMath);
	return $Math::fma(a, b, c);
}

double StrictMath::ulp(double d) {
	$init(StrictMath);
	return $Math::ulp(d);
}

float StrictMath::ulp(float f) {
	$init(StrictMath);
	return $Math::ulp(f);
}

double StrictMath::signum(double d) {
	$init(StrictMath);
	return $Math::signum(d);
}

float StrictMath::signum(float f) {
	$init(StrictMath);
	return $Math::signum(f);
}

double StrictMath::sinh(double x) {
	$init(StrictMath);
	$prepareNativeStatic(sinh, double, double x);
	double $ret = $invokeNativeStatic(x);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::cosh(double x) {
	$init(StrictMath);
	$prepareNativeStatic(cosh, double, double x);
	double $ret = $invokeNativeStatic(x);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::tanh(double x) {
	$init(StrictMath);
	$prepareNativeStatic(tanh, double, double x);
	double $ret = $invokeNativeStatic(x);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::hypot(double x, double y) {
	$init(StrictMath);
	return $FdLibm$Hypot::compute(x, y);
}

double StrictMath::expm1(double x) {
	$init(StrictMath);
	$prepareNativeStatic(expm1, double, double x);
	double $ret = $invokeNativeStatic(x);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::log1p(double x) {
	$init(StrictMath);
	$prepareNativeStatic(log1p, double, double x);
	double $ret = $invokeNativeStatic(x);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::copySign(double magnitude, double sign) {
	$init(StrictMath);
	return $Math::copySign(magnitude, ($Double::isNaN(sign) ? 1.0 : sign));
}

float StrictMath::copySign(float magnitude, float sign) {
	$init(StrictMath);
	return $Math::copySign(magnitude, ($Float::isNaN(sign) ? 1.0f : sign));
}

int32_t StrictMath::getExponent(float f) {
	$init(StrictMath);
	return $Math::getExponent(f);
}

int32_t StrictMath::getExponent(double d) {
	$init(StrictMath);
	return $Math::getExponent(d);
}

double StrictMath::nextAfter(double start, double direction) {
	$init(StrictMath);
	return $Math::nextAfter(start, direction);
}

float StrictMath::nextAfter(float start, double direction) {
	$init(StrictMath);
	return $Math::nextAfter(start, direction);
}

double StrictMath::nextUp(double d) {
	$init(StrictMath);
	return $Math::nextUp(d);
}

float StrictMath::nextUp(float f) {
	$init(StrictMath);
	return $Math::nextUp(f);
}

double StrictMath::nextDown(double d) {
	$init(StrictMath);
	return $Math::nextDown(d);
}

float StrictMath::nextDown(float f) {
	$init(StrictMath);
	return $Math::nextDown(f);
}

double StrictMath::scalb(double d, int32_t scaleFactor) {
	$init(StrictMath);
	return $Math::scalb(d, scaleFactor);
}

float StrictMath::scalb(float f, int32_t scaleFactor) {
	$init(StrictMath);
	return $Math::scalb(f, scaleFactor);
}

void StrictMath::clinit$($Class* clazz) {
	StrictMath::E = 2.718281828459045;
	StrictMath::PI = 3.141592653589793;
	StrictMath::DEGREES_TO_RADIANS = 0.017453292519943295;
	StrictMath::RADIANS_TO_DEGREES = 57.29577951308232;
	StrictMath::$assertionsDisabled = !StrictMath::class$->desiredAssertionStatus();
}

StrictMath::StrictMath() {
}

$Class* StrictMath::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StrictMath, $assertionsDisabled)},
		{"E", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StrictMath, E)},
		{"PI", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StrictMath, PI)},
		{"DEGREES_TO_RADIANS", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StrictMath, DEGREES_TO_RADIANS)},
		{"RADIANS_TO_DEGREES", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StrictMath, RADIANS_TO_DEGREES)},
		{}
	};
	$CompoundAttribute maxmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute maxmethodAnnotations$$$2[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute maxmethodAnnotations$$$3[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute minmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute minmethodAnnotations$$$2[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute minmethodAnnotations$$$3[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute sqrtmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(StrictMath, init$, void)},
		{"IEEEremainder", "(DD)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, IEEEremainder, double, double, double)},
		{"abs", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, abs, int32_t, int32_t)},
		{"abs", "(J)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, abs, int64_t, int64_t)},
		{"abs", "(F)F", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, abs, float, float)},
		{"abs", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, abs, double, double)},
		{"absExact", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, absExact, int32_t, int32_t)},
		{"absExact", "(J)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, absExact, int64_t, int64_t)},
		{"acos", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, acos, double, double)},
		{"addExact", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, addExact, int32_t, int32_t, int32_t)},
		{"addExact", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, addExact, int64_t, int64_t, int64_t)},
		{"asin", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, asin, double, double)},
		{"atan", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, atan, double, double)},
		{"atan2", "(DD)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, atan2, double, double, double)},
		{"cbrt", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, cbrt, double, double)},
		{"ceil", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, ceil, double, double)},
		{"copySign", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, copySign, double, double, double)},
		{"copySign", "(FF)F", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, copySign, float, float, float)},
		{"cos", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, cos, double, double)},
		{"cosh", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, cosh, double, double)},
		{"decrementExact", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, decrementExact, int32_t, int32_t)},
		{"decrementExact", "(J)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, decrementExact, int64_t, int64_t)},
		{"exp", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, exp, double, double)},
		{"expm1", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, expm1, double, double)},
		{"floor", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, floor, double, double)},
		{"floorDiv", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, floorDiv, int32_t, int32_t, int32_t)},
		{"floorDiv", "(JI)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, floorDiv, int64_t, int64_t, int32_t)},
		{"floorDiv", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, floorDiv, int64_t, int64_t, int64_t)},
		{"floorMod", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, floorMod, int32_t, int32_t, int32_t)},
		{"floorMod", "(JI)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, floorMod, int32_t, int64_t, int32_t)},
		{"floorMod", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, floorMod, int64_t, int64_t, int64_t)},
		{"floorOrCeil", "(DDDD)D", nullptr, $PRIVATE | $STATIC, $staticMethod(StrictMath, floorOrCeil, double, double, double, double, double)},
		{"fma", "(DDD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, fma, double, double, double, double)},
		{"fma", "(FFF)F", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, fma, float, float, float, float)},
		{"getExponent", "(F)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, getExponent, int32_t, float)},
		{"getExponent", "(D)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, getExponent, int32_t, double)},
		{"hypot", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, hypot, double, double, double)},
		{"incrementExact", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, incrementExact, int32_t, int32_t)},
		{"incrementExact", "(J)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, incrementExact, int64_t, int64_t)},
		{"log", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, log, double, double)},
		{"log10", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, log10, double, double)},
		{"log1p", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, log1p, double, double)},
		{"max", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, max, int32_t, int32_t, int32_t), nullptr, nullptr, maxmethodAnnotations$$},
		{"max", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, max, int64_t, int64_t, int64_t)},
		{"max", "(FF)F", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, max, float, float, float), nullptr, nullptr, maxmethodAnnotations$$$2},
		{"max", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, max, double, double, double), nullptr, nullptr, maxmethodAnnotations$$$3},
		{"min", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, min, int32_t, int32_t, int32_t), nullptr, nullptr, minmethodAnnotations$$},
		{"min", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, min, int64_t, int64_t, int64_t)},
		{"min", "(FF)F", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, min, float, float, float), nullptr, nullptr, minmethodAnnotations$$$2},
		{"min", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, min, double, double, double), nullptr, nullptr, minmethodAnnotations$$$3},
		{"multiplyExact", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, multiplyExact, int32_t, int32_t, int32_t)},
		{"multiplyExact", "(JI)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, multiplyExact, int64_t, int64_t, int32_t)},
		{"multiplyExact", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, multiplyExact, int64_t, int64_t, int64_t)},
		{"multiplyFull", "(II)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, multiplyFull, int64_t, int32_t, int32_t)},
		{"multiplyHigh", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, multiplyHigh, int64_t, int64_t, int64_t)},
		{"negateExact", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, negateExact, int32_t, int32_t)},
		{"negateExact", "(J)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, negateExact, int64_t, int64_t)},
		{"nextAfter", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, nextAfter, double, double, double)},
		{"nextAfter", "(FD)F", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, nextAfter, float, float, double)},
		{"nextDown", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, nextDown, double, double)},
		{"nextDown", "(F)F", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, nextDown, float, float)},
		{"nextUp", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, nextUp, double, double)},
		{"nextUp", "(F)F", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, nextUp, float, float)},
		{"pow", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, pow, double, double, double)},
		{"random", "()D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, random, double)},
		{"rint", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, rint, double, double)},
		{"round", "(F)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, round, int32_t, float)},
		{"round", "(D)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, round, int64_t, double)},
		{"scalb", "(DI)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, scalb, double, double, int32_t)},
		{"scalb", "(FI)F", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, scalb, float, float, int32_t)},
		{"signum", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, signum, double, double)},
		{"signum", "(F)F", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, signum, float, float)},
		{"sin", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, sin, double, double)},
		{"sinh", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, sinh, double, double)},
		{"sqrt", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, sqrt, double, double), nullptr, nullptr, sqrtmethodAnnotations$$},
		{"subtractExact", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, subtractExact, int32_t, int32_t, int32_t)},
		{"subtractExact", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, subtractExact, int64_t, int64_t, int64_t)},
		{"tan", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, tan, double, double)},
		{"tanh", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(StrictMath, tanh, double, double)},
		{"toDegrees", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, toDegrees, double, double)},
		{"toIntExact", "(J)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, toIntExact, int32_t, int64_t)},
		{"toRadians", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, toRadians, double, double)},
		{"ulp", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, ulp, double, double)},
		{"ulp", "(F)F", nullptr, $PUBLIC | $STATIC, $staticMethod(StrictMath, ulp, float, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.StrictMath$RandomNumberGeneratorHolder", "java.lang.StrictMath", "RandomNumberGeneratorHolder", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.StrictMath",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.StrictMath$RandomNumberGeneratorHolder"
	};
	$loadClass(StrictMath, name, initialize, &classInfo$$, StrictMath::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StrictMath);
	});
	return class$;
}

$Class* StrictMath::class$ = nullptr;

	} // lang
} // java