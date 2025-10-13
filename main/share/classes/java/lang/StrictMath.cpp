#include <java/lang/StrictMath.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/FdLibm$Cbrt.h>
#include <java/lang/FdLibm$Exp.h>
#include <java/lang/FdLibm$Hypot.h>
#include <java/lang/FdLibm$Pow.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/StrictMath$RandomNumberGeneratorHolder.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Random = ::java::util::Random;
using $DoubleConsts = ::jdk::internal::math::DoubleConsts;

namespace java {
	namespace lang {

$CompoundAttribute _StrictMath_MethodAnnotations_max42[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StrictMath_MethodAnnotations_max44[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StrictMath_MethodAnnotations_max45[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StrictMath_MethodAnnotations_min46[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StrictMath_MethodAnnotations_min48[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StrictMath_MethodAnnotations_min49[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StrictMath_MethodAnnotations_sqrt74[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _StrictMath_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StrictMath, $assertionsDisabled)},
	{"E", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StrictMath, E)},
	{"PI", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StrictMath, PI)},
	{"DEGREES_TO_RADIANS", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StrictMath, DEGREES_TO_RADIANS)},
	{"RADIANS_TO_DEGREES", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StrictMath, RADIANS_TO_DEGREES)},
	{}
};

$MethodInfo _StrictMath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(StrictMath::*)()>(&StrictMath::init$))},
	{"IEEEremainder", "(DD)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double,double)>(&StrictMath::IEEEremainder))},
	{"abs", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&StrictMath::abs))},
	{"abs", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&StrictMath::abs))},
	{"abs", "(F)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float)>(&StrictMath::abs))},
	{"abs", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&StrictMath::abs))},
	{"absExact", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&StrictMath::absExact))},
	{"absExact", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&StrictMath::absExact))},
	{"acos", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double)>(&StrictMath::acos))},
	{"addExact", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&StrictMath::addExact))},
	{"addExact", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&StrictMath::addExact))},
	{"asin", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double)>(&StrictMath::asin))},
	{"atan", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double)>(&StrictMath::atan))},
	{"atan2", "(DD)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double,double)>(&StrictMath::atan2))},
	{"cbrt", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&StrictMath::cbrt))},
	{"ceil", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&StrictMath::ceil))},
	{"copySign", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&StrictMath::copySign))},
	{"copySign", "(FF)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float,float)>(&StrictMath::copySign))},
	{"cos", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double)>(&StrictMath::cos))},
	{"cosh", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double)>(&StrictMath::cosh))},
	{"decrementExact", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&StrictMath::decrementExact))},
	{"decrementExact", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&StrictMath::decrementExact))},
	{"exp", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&StrictMath::exp))},
	{"expm1", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double)>(&StrictMath::expm1))},
	{"floor", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&StrictMath::floor))},
	{"floorDiv", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&StrictMath::floorDiv))},
	{"floorDiv", "(JI)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&StrictMath::floorDiv))},
	{"floorDiv", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&StrictMath::floorDiv))},
	{"floorMod", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&StrictMath::floorMod))},
	{"floorMod", "(JI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int64_t,int32_t)>(&StrictMath::floorMod))},
	{"floorMod", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&StrictMath::floorMod))},
	{"floorOrCeil", "(DDDD)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)(double,double,double,double)>(&StrictMath::floorOrCeil))},
	{"fma", "(DDD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double,double)>(&StrictMath::fma))},
	{"fma", "(FFF)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float,float,float)>(&StrictMath::fma))},
	{"getExponent", "(F)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(float)>(&StrictMath::getExponent))},
	{"getExponent", "(D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(double)>(&StrictMath::getExponent))},
	{"hypot", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&StrictMath::hypot))},
	{"incrementExact", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&StrictMath::incrementExact))},
	{"incrementExact", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&StrictMath::incrementExact))},
	{"log", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double)>(&StrictMath::log))},
	{"log10", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double)>(&StrictMath::log10))},
	{"log1p", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double)>(&StrictMath::log1p))},
	{"max", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&StrictMath::max)), nullptr, nullptr, _StrictMath_MethodAnnotations_max42},
	{"max", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&StrictMath::max))},
	{"max", "(FF)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float,float)>(&StrictMath::max)), nullptr, nullptr, _StrictMath_MethodAnnotations_max44},
	{"max", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&StrictMath::max)), nullptr, nullptr, _StrictMath_MethodAnnotations_max45},
	{"min", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&StrictMath::min)), nullptr, nullptr, _StrictMath_MethodAnnotations_min46},
	{"min", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&StrictMath::min))},
	{"min", "(FF)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float,float)>(&StrictMath::min)), nullptr, nullptr, _StrictMath_MethodAnnotations_min48},
	{"min", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&StrictMath::min)), nullptr, nullptr, _StrictMath_MethodAnnotations_min49},
	{"multiplyExact", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&StrictMath::multiplyExact))},
	{"multiplyExact", "(JI)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&StrictMath::multiplyExact))},
	{"multiplyExact", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&StrictMath::multiplyExact))},
	{"multiplyFull", "(II)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int32_t,int32_t)>(&StrictMath::multiplyFull))},
	{"multiplyHigh", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&StrictMath::multiplyHigh))},
	{"negateExact", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&StrictMath::negateExact))},
	{"negateExact", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&StrictMath::negateExact))},
	{"nextAfter", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&StrictMath::nextAfter))},
	{"nextAfter", "(FD)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float,double)>(&StrictMath::nextAfter))},
	{"nextDown", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&StrictMath::nextDown))},
	{"nextDown", "(F)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float)>(&StrictMath::nextDown))},
	{"nextUp", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&StrictMath::nextUp))},
	{"nextUp", "(F)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float)>(&StrictMath::nextUp))},
	{"pow", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&StrictMath::pow))},
	{"random", "()D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)()>(&StrictMath::random))},
	{"rint", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&StrictMath::rint))},
	{"round", "(F)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(float)>(&StrictMath::round))},
	{"round", "(D)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(double)>(&StrictMath::round))},
	{"scalb", "(DI)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,int32_t)>(&StrictMath::scalb))},
	{"scalb", "(FI)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float,int32_t)>(&StrictMath::scalb))},
	{"signum", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&StrictMath::signum))},
	{"signum", "(F)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float)>(&StrictMath::signum))},
	{"sin", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double)>(&StrictMath::sin))},
	{"sinh", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double)>(&StrictMath::sinh))},
	{"sqrt", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double)>(&StrictMath::sqrt)), nullptr, nullptr, _StrictMath_MethodAnnotations_sqrt74},
	{"subtractExact", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&StrictMath::subtractExact))},
	{"subtractExact", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&StrictMath::subtractExact))},
	{"tan", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double)>(&StrictMath::tan))},
	{"tanh", "(D)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(double)>(&StrictMath::tanh))},
	{"toDegrees", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&StrictMath::toDegrees))},
	{"toIntExact", "(J)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&StrictMath::toIntExact))},
	{"toRadians", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&StrictMath::toRadians))},
	{"ulp", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&StrictMath::ulp))},
	{"ulp", "(F)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float)>(&StrictMath::ulp))},
	{}
};

#define _METHOD_INDEX_IEEEremainder 1
#define _METHOD_INDEX_acos 8
#define _METHOD_INDEX_asin 11
#define _METHOD_INDEX_atan 12
#define _METHOD_INDEX_atan2 13
#define _METHOD_INDEX_cos 18
#define _METHOD_INDEX_cosh 19
#define _METHOD_INDEX_expm1 23
#define _METHOD_INDEX_log 39
#define _METHOD_INDEX_log10 40
#define _METHOD_INDEX_log1p 41
#define _METHOD_INDEX_sin 72
#define _METHOD_INDEX_sinh 73
#define _METHOD_INDEX_sqrt 74
#define _METHOD_INDEX_tan 77
#define _METHOD_INDEX_tanh 78

$InnerClassInfo _StrictMath_InnerClassesInfo_[] = {
	{"java.lang.StrictMath$RandomNumberGeneratorHolder", "java.lang.StrictMath", "RandomNumberGeneratorHolder", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _StrictMath_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.StrictMath",
	"java.lang.Object",
	nullptr,
	_StrictMath_FieldInfo_,
	_StrictMath_MethodInfo_,
	nullptr,
	nullptr,
	_StrictMath_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.StrictMath$RandomNumberGeneratorHolder"
};

$Object* allocate$StrictMath($Class* clazz) {
	return $of($alloc(StrictMath));
}

bool StrictMath::$assertionsDisabled = false;

double StrictMath::E = 0.0;

double StrictMath::PI = 0.0;

double StrictMath::DEGREES_TO_RADIANS = 0.0;

double StrictMath::RADIANS_TO_DEGREES = 0.0;

void StrictMath::init$() {
}

double StrictMath::sin(double a) {
	$init(StrictMath);
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, sin, double, double a);
	$ret = $invokeNativeStatic(StrictMath, sin, a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::cos(double a) {
	$init(StrictMath);
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, cos, double, double a);
	$ret = $invokeNativeStatic(StrictMath, cos, a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::tan(double a) {
	$init(StrictMath);
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, tan, double, double a);
	$ret = $invokeNativeStatic(StrictMath, tan, a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::asin(double a) {
	$init(StrictMath);
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, asin, double, double a);
	$ret = $invokeNativeStatic(StrictMath, asin, a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::acos(double a) {
	$init(StrictMath);
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, acos, double, double a);
	$ret = $invokeNativeStatic(StrictMath, acos, a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::atan(double a) {
	$init(StrictMath);
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, atan, double, double a);
	$ret = $invokeNativeStatic(StrictMath, atan, a);
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
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, log, double, double a);
	$ret = $invokeNativeStatic(StrictMath, log, a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::log10(double a) {
	$init(StrictMath);
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, log10, double, double a);
	$ret = $invokeNativeStatic(StrictMath, log10, a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::sqrt(double a) {
	$init(StrictMath);
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, sqrt, double, double a);
	$ret = $invokeNativeStatic(StrictMath, sqrt, a);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::cbrt(double a) {
	$init(StrictMath);
	return $FdLibm$Cbrt::compute(a);
}

double StrictMath::IEEEremainder(double f1, double f2) {
	$init(StrictMath);
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, IEEEremainder, double, double f1, double f2);
	$ret = $invokeNativeStatic(StrictMath, IEEEremainder, f1, f2);
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
	if (((int64_t)(mask & (uint64_t)doppel)) == (int64_t)0) {
		return a;
	} else {
		double result = $Double::longBitsToDouble((int64_t)(doppel & (uint64_t)(~mask)));
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
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, atan2, double, double y, double x);
	$ret = $invokeNativeStatic(StrictMath, atan2, y, x);
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
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, sinh, double, double x);
	$ret = $invokeNativeStatic(StrictMath, sinh, x);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::cosh(double x) {
	$init(StrictMath);
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, cosh, double, double x);
	$ret = $invokeNativeStatic(StrictMath, cosh, x);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::tanh(double x) {
	$init(StrictMath);
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, tanh, double, double x);
	$ret = $invokeNativeStatic(StrictMath, tanh, x);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::hypot(double x, double y) {
	$init(StrictMath);
	return $FdLibm$Hypot::compute(x, y);
}

double StrictMath::expm1(double x) {
	$init(StrictMath);
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, expm1, double, double x);
	$ret = $invokeNativeStatic(StrictMath, expm1, x);
	$finishNativeStatic();
	return $ret;
}

double StrictMath::log1p(double x) {
	$init(StrictMath);
	double $ret = 0.0;
	$prepareNativeStatic(StrictMath, log1p, double, double x);
	$ret = $invokeNativeStatic(StrictMath, log1p, x);
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

void clinit$StrictMath($Class* class$) {
	StrictMath::E = 2.718281828459045;
	StrictMath::PI = 3.141592653589793;
	StrictMath::DEGREES_TO_RADIANS = 0.017453292519943295;
	StrictMath::RADIANS_TO_DEGREES = 57.29577951308232;
	StrictMath::$assertionsDisabled = !StrictMath::class$->desiredAssertionStatus();
}

StrictMath::StrictMath() {
}

$Class* StrictMath::load$($String* name, bool initialize) {
	$loadClass(StrictMath, name, initialize, &_StrictMath_ClassInfo_, clinit$StrictMath, allocate$StrictMath);
	return class$;
}

$Class* StrictMath::class$ = nullptr;

	} // lang
} // java