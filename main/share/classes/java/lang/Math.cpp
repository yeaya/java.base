#include <java/lang/Math.h>

#include <java/lang/ArithmeticException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math$RandomNumberGeneratorHolder.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/StrictMath.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/util/Random.h>
#include <jdk/internal/math/DoubleConsts.h>
#include <jdk/internal/math/FloatConsts.h>
#include <jcpp.h>

#undef SIGN_BIT_MASK
#undef EXP_BIT_MASK
#undef A
#undef B
#undef DEGREES_TO_RADIANS
#undef C
#undef E
#undef EXP_BIAS
#undef RADIANS_TO_DEGREES
#undef MAX_VALUE
#undef K
#undef MIN_VALUE
#undef SIGNIFICAND_WIDTH
#undef POSITIVE_INFINITY
#undef MAX_EXPONENT
#undef NEGATIVE_INFINITY
#undef SIGNIF_BIT_MASK
#undef PI
#undef MAX_SCALE
#undef MIN_EXPONENT

using $ArithmeticException = ::java::lang::ArithmeticException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math$RandomNumberGeneratorHolder = ::java::lang::Math$RandomNumberGeneratorHolder;
using $MethodInfo = ::java::lang::MethodInfo;
using $StrictMath = ::java::lang::StrictMath;
using $BigDecimal = ::java::math::BigDecimal;
using $Random = ::java::util::Random;
using $DoubleConsts = ::jdk::internal::math::DoubleConsts;
using $FloatConsts = ::jdk::internal::math::FloatConsts;

namespace java {
	namespace lang {

$CompoundAttribute _Math_MethodAnnotations_abs2[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_abs3[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_abs4[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_abs5[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_addExact9[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_addExact10[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_atan213[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_ceil15[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_copySign16[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_copySign17[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_cos18[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_decrementExact20[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_decrementExact21[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_exp22[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_floor24[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_fma31[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_fma32[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_incrementExact36[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_incrementExact37[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_log38[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_log1039[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_max41[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_max43[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_max44[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_min45[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_min47[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_min48[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_multiplyExact49[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_multiplyExact51[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_multiplyHigh53[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_negateExact54[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_negateExact55[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_pow62[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_rint66[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_signum71[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_signum72[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_sin73[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_sqrt75[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_subtractExact76[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_subtractExact77[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Math_MethodAnnotations_tan78[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _Math_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Math, $assertionsDisabled)},
	{"E", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Math, E)},
	{"PI", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Math, PI)},
	{"DEGREES_TO_RADIANS", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Math, DEGREES_TO_RADIANS)},
	{"RADIANS_TO_DEGREES", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Math, RADIANS_TO_DEGREES)},
	{"negativeZeroFloatBits", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Math, negativeZeroFloatBits)},
	{"negativeZeroDoubleBits", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Math, negativeZeroDoubleBits)},
	{"twoToTheDoubleScaleUp", "D", nullptr, $STATIC, $staticField(Math, twoToTheDoubleScaleUp)},
	{"twoToTheDoubleScaleDown", "D", nullptr, $STATIC, $staticField(Math, twoToTheDoubleScaleDown)},
	{}
};

$MethodInfo _Math_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Math::*)()>(&Math::init$))},
	{"IEEEremainder", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&Math::IEEEremainder))},
	{"abs", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Math::abs)), nullptr, nullptr, _Math_MethodAnnotations_abs2},
	{"abs", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&Math::abs)), nullptr, nullptr, _Math_MethodAnnotations_abs3},
	{"abs", "(F)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float)>(&Math::abs)), nullptr, nullptr, _Math_MethodAnnotations_abs4},
	{"abs", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::abs)), nullptr, nullptr, _Math_MethodAnnotations_abs5},
	{"absExact", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Math::absExact))},
	{"absExact", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&Math::absExact))},
	{"acos", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::acos))},
	{"addExact", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Math::addExact)), nullptr, nullptr, _Math_MethodAnnotations_addExact9},
	{"addExact", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&Math::addExact)), nullptr, nullptr, _Math_MethodAnnotations_addExact10},
	{"asin", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::asin))},
	{"atan", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::atan))},
	{"atan2", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&Math::atan2)), nullptr, nullptr, _Math_MethodAnnotations_atan213},
	{"cbrt", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::cbrt))},
	{"ceil", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::ceil)), nullptr, nullptr, _Math_MethodAnnotations_ceil15},
	{"copySign", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&Math::copySign)), nullptr, nullptr, _Math_MethodAnnotations_copySign16},
	{"copySign", "(FF)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float,float)>(&Math::copySign)), nullptr, nullptr, _Math_MethodAnnotations_copySign17},
	{"cos", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::cos)), nullptr, nullptr, _Math_MethodAnnotations_cos18},
	{"cosh", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::cosh))},
	{"decrementExact", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Math::decrementExact)), nullptr, nullptr, _Math_MethodAnnotations_decrementExact20},
	{"decrementExact", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&Math::decrementExact)), nullptr, nullptr, _Math_MethodAnnotations_decrementExact21},
	{"exp", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::exp)), nullptr, nullptr, _Math_MethodAnnotations_exp22},
	{"expm1", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::expm1))},
	{"floor", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::floor)), nullptr, nullptr, _Math_MethodAnnotations_floor24},
	{"floorDiv", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Math::floorDiv))},
	{"floorDiv", "(JI)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&Math::floorDiv))},
	{"floorDiv", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&Math::floorDiv))},
	{"floorMod", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Math::floorMod))},
	{"floorMod", "(JI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int64_t,int32_t)>(&Math::floorMod))},
	{"floorMod", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&Math::floorMod))},
	{"fma", "(DDD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double,double)>(&Math::fma)), nullptr, nullptr, _Math_MethodAnnotations_fma31},
	{"fma", "(FFF)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float,float,float)>(&Math::fma)), nullptr, nullptr, _Math_MethodAnnotations_fma32},
	{"getExponent", "(F)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(float)>(&Math::getExponent))},
	{"getExponent", "(D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(double)>(&Math::getExponent))},
	{"hypot", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&Math::hypot))},
	{"incrementExact", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Math::incrementExact)), nullptr, nullptr, _Math_MethodAnnotations_incrementExact36},
	{"incrementExact", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&Math::incrementExact)), nullptr, nullptr, _Math_MethodAnnotations_incrementExact37},
	{"log", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::log)), nullptr, nullptr, _Math_MethodAnnotations_log38},
	{"log10", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::log10)), nullptr, nullptr, _Math_MethodAnnotations_log1039},
	{"log1p", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::log1p))},
	{"max", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Math::max)), nullptr, nullptr, _Math_MethodAnnotations_max41},
	{"max", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&Math::max))},
	{"max", "(FF)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float,float)>(&Math::max)), nullptr, nullptr, _Math_MethodAnnotations_max43},
	{"max", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&Math::max)), nullptr, nullptr, _Math_MethodAnnotations_max44},
	{"min", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Math::min)), nullptr, nullptr, _Math_MethodAnnotations_min45},
	{"min", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&Math::min))},
	{"min", "(FF)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float,float)>(&Math::min)), nullptr, nullptr, _Math_MethodAnnotations_min47},
	{"min", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&Math::min)), nullptr, nullptr, _Math_MethodAnnotations_min48},
	{"multiplyExact", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Math::multiplyExact)), nullptr, nullptr, _Math_MethodAnnotations_multiplyExact49},
	{"multiplyExact", "(JI)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&Math::multiplyExact))},
	{"multiplyExact", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&Math::multiplyExact)), nullptr, nullptr, _Math_MethodAnnotations_multiplyExact51},
	{"multiplyFull", "(II)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int32_t,int32_t)>(&Math::multiplyFull))},
	{"multiplyHigh", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&Math::multiplyHigh)), nullptr, nullptr, _Math_MethodAnnotations_multiplyHigh53},
	{"negateExact", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Math::negateExact)), nullptr, nullptr, _Math_MethodAnnotations_negateExact54},
	{"negateExact", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&Math::negateExact)), nullptr, nullptr, _Math_MethodAnnotations_negateExact55},
	{"nextAfter", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&Math::nextAfter))},
	{"nextAfter", "(FD)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float,double)>(&Math::nextAfter))},
	{"nextDown", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::nextDown))},
	{"nextDown", "(F)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float)>(&Math::nextDown))},
	{"nextUp", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::nextUp))},
	{"nextUp", "(F)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float)>(&Math::nextUp))},
	{"pow", "(DD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double)>(&Math::pow)), nullptr, nullptr, _Math_MethodAnnotations_pow62},
	{"powerOfTwoD", "(I)D", nullptr, $STATIC, $method(static_cast<double(*)(int32_t)>(&Math::powerOfTwoD))},
	{"powerOfTwoF", "(I)F", nullptr, $STATIC, $method(static_cast<float(*)(int32_t)>(&Math::powerOfTwoF))},
	{"random", "()D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)()>(&Math::random))},
	{"rint", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::rint)), nullptr, nullptr, _Math_MethodAnnotations_rint66},
	{"round", "(F)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(float)>(&Math::round))},
	{"round", "(D)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(double)>(&Math::round))},
	{"scalb", "(DI)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,int32_t)>(&Math::scalb))},
	{"scalb", "(FI)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float,int32_t)>(&Math::scalb))},
	{"signum", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::signum)), nullptr, nullptr, _Math_MethodAnnotations_signum71},
	{"signum", "(F)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float)>(&Math::signum)), nullptr, nullptr, _Math_MethodAnnotations_signum72},
	{"sin", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::sin)), nullptr, nullptr, _Math_MethodAnnotations_sin73},
	{"sinh", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::sinh))},
	{"sqrt", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::sqrt)), nullptr, nullptr, _Math_MethodAnnotations_sqrt75},
	{"subtractExact", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Math::subtractExact)), nullptr, nullptr, _Math_MethodAnnotations_subtractExact76},
	{"subtractExact", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&Math::subtractExact)), nullptr, nullptr, _Math_MethodAnnotations_subtractExact77},
	{"tan", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::tan)), nullptr, nullptr, _Math_MethodAnnotations_tan78},
	{"tanh", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::tanh))},
	{"toDegrees", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::toDegrees))},
	{"toIntExact", "(J)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&Math::toIntExact))},
	{"toRadians", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::toRadians))},
	{"ulp", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Math::ulp))},
	{"ulp", "(F)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(float)>(&Math::ulp))},
	{}
};

$InnerClassInfo _Math_InnerClassesInfo_[] = {
	{"java.lang.Math$RandomNumberGeneratorHolder", "java.lang.Math", "RandomNumberGeneratorHolder", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Math_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.Math",
	"java.lang.Object",
	nullptr,
	_Math_FieldInfo_,
	_Math_MethodInfo_,
	nullptr,
	nullptr,
	_Math_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.Math$RandomNumberGeneratorHolder"
};

$Object* allocate$Math($Class* clazz) {
	return $of($alloc(Math));
}

bool Math::$assertionsDisabled = false;

double Math::E = 0.0;

double Math::PI = 0.0;

double Math::DEGREES_TO_RADIANS = 0.0;

double Math::RADIANS_TO_DEGREES = 0.0;
int64_t Math::negativeZeroFloatBits = 0;
int64_t Math::negativeZeroDoubleBits = 0;
double Math::twoToTheDoubleScaleUp = 0.0;
double Math::twoToTheDoubleScaleDown = 0.0;

void Math::init$() {
}

double Math::sin(double a) {
	$init(Math);
	return $StrictMath::sin(a);
}

double Math::cos(double a) {
	$init(Math);
	return $StrictMath::cos(a);
}

double Math::tan(double a) {
	$init(Math);
	return $StrictMath::tan(a);
}

double Math::asin(double a) {
	$init(Math);
	return $StrictMath::asin(a);
}

double Math::acos(double a) {
	$init(Math);
	return $StrictMath::acos(a);
}

double Math::atan(double a) {
	$init(Math);
	return $StrictMath::atan(a);
}

double Math::toRadians(double angdeg) {
	$init(Math);
	return angdeg * Math::DEGREES_TO_RADIANS;
}

double Math::toDegrees(double angrad) {
	$init(Math);
	return angrad * Math::RADIANS_TO_DEGREES;
}

double Math::exp(double a) {
	$init(Math);
	return $StrictMath::exp(a);
}

double Math::log(double a) {
	$init(Math);
	return $StrictMath::log(a);
}

double Math::log10(double a) {
	$init(Math);
	return $StrictMath::log10(a);
}

double Math::sqrt(double a) {
	$init(Math);
	return $StrictMath::sqrt(a);
}

double Math::cbrt(double a) {
	$init(Math);
	return $StrictMath::cbrt(a);
}

double Math::IEEEremainder(double f1, double f2) {
	$init(Math);
	return $StrictMath::IEEEremainder(f1, f2);
}

double Math::ceil(double a) {
	$init(Math);
	return $StrictMath::ceil(a);
}

double Math::floor(double a) {
	$init(Math);
	return $StrictMath::floor(a);
}

double Math::rint(double a) {
	$init(Math);
	return $StrictMath::rint(a);
}

double Math::atan2(double y, double x) {
	$init(Math);
	return $StrictMath::atan2(y, x);
}

double Math::pow(double a, double b) {
	$init(Math);
	return $StrictMath::pow(a, b);
}

int32_t Math::round(float a) {
	$init(Math);
	int32_t intBits = $Float::floatToRawIntBits(a);
	int32_t biasedExp = $sr((int32_t)(intBits & (uint32_t)$FloatConsts::EXP_BIT_MASK), $FloatConsts::SIGNIFICAND_WIDTH - 1);
	int32_t shift = ($FloatConsts::SIGNIFICAND_WIDTH - 2 + $FloatConsts::EXP_BIAS) - biasedExp;
	if (((int32_t)(shift & (uint32_t)-32)) == 0) {
		int32_t r = (((int32_t)(intBits & (uint32_t)$FloatConsts::SIGNIF_BIT_MASK)) | ($FloatConsts::SIGNIF_BIT_MASK + 1));
		if (intBits < 0) {
			r = -r;
		}
		return (($sr(r, shift)) + 1) >> 1;
	} else {
		return $cast(int32_t, a);
	}
}

int64_t Math::round(double a) {
	$init(Math);
	int64_t longBits = $Double::doubleToRawLongBits(a);
	int64_t biasedExp = $sr((int64_t)(longBits & (uint64_t)$DoubleConsts::EXP_BIT_MASK), $DoubleConsts::SIGNIFICAND_WIDTH - 1);
	int64_t shift = ($DoubleConsts::SIGNIFICAND_WIDTH - 2 + $DoubleConsts::EXP_BIAS) - biasedExp;
	if (((int64_t)(shift & (uint64_t)(int64_t)-64)) == 0) {
		int64_t r = (((int64_t)(longBits & (uint64_t)$DoubleConsts::SIGNIF_BIT_MASK)) | ($DoubleConsts::SIGNIF_BIT_MASK + 1));
		if (longBits < 0) {
			r = -r;
		}
		return (($sr(r, shift)) + 1) >> 1;
	} else {
		return $cast(int64_t, a);
	}
}

double Math::random() {
	$init(Math);
	$init($Math$RandomNumberGeneratorHolder);
	return $nc($Math$RandomNumberGeneratorHolder::randomNumberGenerator)->nextDouble();
}

int32_t Math::addExact(int32_t x, int32_t y) {
	$init(Math);
	int32_t r = x + y;
	if (((int32_t)((x ^ r) & (uint32_t)(y ^ r))) < 0) {
		$throwNew($ArithmeticException, "integer overflow"_s);
	}
	return r;
}

int64_t Math::addExact(int64_t x, int64_t y) {
	$init(Math);
	int64_t r = x + y;
	if (((int64_t)((x ^ r) & (uint64_t)(y ^ r))) < 0) {
		$throwNew($ArithmeticException, "long overflow"_s);
	}
	return r;
}

int32_t Math::subtractExact(int32_t x, int32_t y) {
	$init(Math);
	int32_t r = x - y;
	if (((int32_t)((x ^ y) & (uint32_t)(x ^ r))) < 0) {
		$throwNew($ArithmeticException, "integer overflow"_s);
	}
	return r;
}

int64_t Math::subtractExact(int64_t x, int64_t y) {
	$init(Math);
	int64_t r = x - y;
	if (((int64_t)((x ^ y) & (uint64_t)(x ^ r))) < 0) {
		$throwNew($ArithmeticException, "long overflow"_s);
	}
	return r;
}

int32_t Math::multiplyExact(int32_t x, int32_t y) {
	$init(Math);
	int64_t r = (int64_t)x * (int64_t)y;
	if ((int32_t)r != r) {
		$throwNew($ArithmeticException, "integer overflow"_s);
	}
	return (int32_t)r;
}

int64_t Math::multiplyExact(int64_t x, int32_t y) {
	$init(Math);
	return multiplyExact(x, (int64_t)y);
}

int64_t Math::multiplyExact(int64_t x, int64_t y) {
	$init(Math);
	int64_t r = x * y;
	int64_t ax = Math::abs(x);
	int64_t ay = Math::abs(y);
	if ((int64_t)((uint64_t)(ax | ay) >> 31) != 0) {
		if (((y != 0) && ($div(r, y) != x)) || (x == $Long::MIN_VALUE && y == -1)) {
			$throwNew($ArithmeticException, "long overflow"_s);
		}
	}
	return r;
}

int32_t Math::incrementExact(int32_t a) {
	$init(Math);
	if (a == $Integer::MAX_VALUE) {
		$throwNew($ArithmeticException, "integer overflow"_s);
	}
	return a + 1;
}

int64_t Math::incrementExact(int64_t a) {
	$init(Math);
	if (a == $Long::MAX_VALUE) {
		$throwNew($ArithmeticException, "long overflow"_s);
	}
	return a + (int64_t)1;
}

int32_t Math::decrementExact(int32_t a) {
	$init(Math);
	if (a == $Integer::MIN_VALUE) {
		$throwNew($ArithmeticException, "integer overflow"_s);
	}
	return a - 1;
}

int64_t Math::decrementExact(int64_t a) {
	$init(Math);
	if (a == $Long::MIN_VALUE) {
		$throwNew($ArithmeticException, "long overflow"_s);
	}
	return a - (int64_t)1;
}

int32_t Math::negateExact(int32_t a) {
	$init(Math);
	if (a == $Integer::MIN_VALUE) {
		$throwNew($ArithmeticException, "integer overflow"_s);
	}
	return -a;
}

int64_t Math::negateExact(int64_t a) {
	$init(Math);
	if (a == $Long::MIN_VALUE) {
		$throwNew($ArithmeticException, "long overflow"_s);
	}
	return -a;
}

int32_t Math::toIntExact(int64_t value) {
	$init(Math);
	if ((int32_t)value != value) {
		$throwNew($ArithmeticException, "integer overflow"_s);
	}
	return (int32_t)value;
}

int64_t Math::multiplyFull(int32_t x, int32_t y) {
	$init(Math);
	return (int64_t)x * (int64_t)y;
}

int64_t Math::multiplyHigh(int64_t x, int64_t y) {
	$init(Math);
	if (x < 0 || y < 0) {
		int64_t x1 = x >> 32;
		int64_t x2 = (int64_t)(x & (uint64_t)(int64_t)0x00000000FFFFFFFF);
		int64_t y1 = y >> 32;
		int64_t y2 = (int64_t)(y & (uint64_t)(int64_t)0x00000000FFFFFFFF);
		int64_t z2 = x2 * y2;
		int64_t t = x1 * y2 + ((int64_t)((uint64_t)z2 >> 32));
		int64_t z1 = (int64_t)(t & (uint64_t)(int64_t)0x00000000FFFFFFFF);
		int64_t z0 = t >> 32;
		z1 += x2 * y1;
		return x1 * y1 + z0 + (z1 >> 32);
	} else {
		int64_t x1 = (int64_t)((uint64_t)x >> 32);
		int64_t y1 = (int64_t)((uint64_t)y >> 32);
		int64_t x2 = (int64_t)(x & (uint64_t)(int64_t)0x00000000FFFFFFFF);
		int64_t y2 = (int64_t)(y & (uint64_t)(int64_t)0x00000000FFFFFFFF);
		int64_t A = x1 * y1;
		int64_t B = x2 * y2;
		int64_t C = (x1 + x2) * (y1 + y2);
		int64_t K = C - A - B;
		return ((int64_t)((uint64_t)(((int64_t)((uint64_t)B >> 32)) + K) >> 32)) + A;
	}
}

int32_t Math::floorDiv(int32_t x, int32_t y) {
	$init(Math);
	int32_t r = $div(x, y);
	if ((x ^ y) < 0 && (r * y != x)) {
		--r;
	}
	return r;
}

int64_t Math::floorDiv(int64_t x, int32_t y) {
	$init(Math);
	return floorDiv(x, (int64_t)y);
}

int64_t Math::floorDiv(int64_t x, int64_t y) {
	$init(Math);
	int64_t r = $div(x, y);
	if ((x ^ y) < 0 && (r * y != x)) {
		--r;
	}
	return r;
}

int32_t Math::floorMod(int32_t x, int32_t y) {
	$init(Math);
	int32_t mod = $mod(x, y);
	if ((mod ^ y) < 0 && mod != 0) {
		mod += y;
	}
	return mod;
}

int32_t Math::floorMod(int64_t x, int32_t y) {
	$init(Math);
	return (int32_t)floorMod(x, (int64_t)y);
}

int64_t Math::floorMod(int64_t x, int64_t y) {
	$init(Math);
	int64_t mod = $mod(x, y);
	if ((x ^ y) < 0 && mod != 0) {
		mod += y;
	}
	return mod;
}

int32_t Math::abs(int32_t a) {
	$init(Math);
	return (a < 0) ? -a : a;
}

int32_t Math::absExact(int32_t a) {
	$init(Math);
	if (a == $Integer::MIN_VALUE) {
		$throwNew($ArithmeticException, "Overflow to represent absolute value of Integer.MIN_VALUE"_s);
	} else {
		return abs(a);
	}
}

int64_t Math::abs(int64_t a) {
	$init(Math);
	return (a < 0) ? -a : a;
}

int64_t Math::absExact(int64_t a) {
	$init(Math);
	if (a == $Long::MIN_VALUE) {
		$throwNew($ArithmeticException, "Overflow to represent absolute value of Long.MIN_VALUE"_s);
	} else {
		return abs(a);
	}
}

float Math::abs(float a) {
	$init(Math);
	return (a <= 0.0f) ? 0.0f - a : a;
}

double Math::abs(double a) {
	$init(Math);
	return (a <= 0.0) ? 0.0 - a : a;
}

int32_t Math::max(int32_t a, int32_t b) {
	$init(Math);
	return (a >= b) ? a : b;
}

int64_t Math::max(int64_t a, int64_t b) {
	$init(Math);
	return (a >= b) ? a : b;
}

float Math::max(float a, float b) {
	if (a != a) {
		return a;
	}
	$init(Math);
	if ((a == 0.0F) && (b == 0.0F)) {
		if ($Float::floatToRawIntBits(a) == Math::negativeZeroFloatBits) {
			return b;
		} else {
			return a;
		}
	}
	return (a >= b) ? a : b;
}

double Math::max(double a, double b) {
	if (a != a) {
		return a;
	}
	$init(Math);
	if ((a == 0.0) && (b == 0.0)) {
		if ($Double::doubleToRawLongBits(a) == Math::negativeZeroDoubleBits) {
			return b;
		} else {
			return a;
		}
	}
	return (a >= b) ? a : b;
}

int32_t Math::min(int32_t a, int32_t b) {
	$init(Math);
	return (a <= b) ? a : b;
}

int64_t Math::min(int64_t a, int64_t b) {
	$init(Math);
	return (a <= b) ? a : b;
}

float Math::min(float a, float b) {
	if (a != a) {
		return a;
	}
	$init(Math);
	if ((a == 0.0F) && (b == 0.0F)) {
		if ($Float::floatToRawIntBits(b) == Math::negativeZeroFloatBits) {
			return b;
		} else {
			return a;
		}
	}
	return (a <= b) ? a : b;
}

double Math::min(double a, double b) {
	if (a != a) {
		return a;
	}
	$init(Math);
	if ((a == 0.0) && (b == 0.0)) {
		if ($Double::doubleToRawLongBits(b) == Math::negativeZeroDoubleBits) {
			return b;
		} else {
			return a;
		}
	}
	return (a <= b) ? a : b;
}

double Math::fma(double a, double b, double c) {
	$init(Math);
	bool var$1 = $Double::isNaN(a);
	bool var$0 = var$1 || $Double::isNaN(b);
	if (var$0 || $Double::isNaN(c)) {
		return $Double::NaN;
	} else {
		bool infiniteA = $Double::isInfinite(a);
		bool infiniteB = $Double::isInfinite(b);
		bool infiniteC = $Double::isInfinite(c);
		double result = 0.0;
		if (infiniteA || infiniteB || infiniteC) {
			if (infiniteA && b == 0.0 || infiniteB && a == 0.0) {
				return $Double::NaN;
			}
			double product = a * b;
			if ($Double::isInfinite(product) && !infiniteA && !infiniteB) {
				if (!Math::$assertionsDisabled && !$Double::isInfinite(c)) {
					$throwNew($AssertionError);
				}
				return c;
			} else {
				result = product + c;
				if (!Math::$assertionsDisabled && ! !$Double::isFinite(result)) {
					$throwNew($AssertionError);
				}
				return result;
			}
		} else {
			$var($BigDecimal, product, ($$new($BigDecimal, a))->multiply($$new($BigDecimal, b)));
			if (c == 0.0) {
				if (a == 0.0 || b == 0.0) {
					return a * b + c;
				} else {
					return $nc(product)->doubleValue();
				}
			} else {
				return $nc($($nc(product)->add($$new($BigDecimal, c))))->doubleValue();
			}
		}
	}
}

float Math::fma(float a, float b, float c) {
	$init(Math);
	bool var$1 = $Float::isFinite(a);
	bool var$0 = var$1 && $Float::isFinite(b);
	if (var$0 && $Float::isFinite(c)) {
		if (a == 0.0 || b == 0.0) {
			return a * b + c;
		} else {
			return $nc(($($$new($BigDecimal, (double)a * (double)b)->add($$new($BigDecimal, (double)c)))))->floatValue();
		}
	} else {
		return (float)fma((double)a, (double)b, (double)c);
	}
}

double Math::ulp(double d) {
	$init(Math);
	int32_t exp = getExponent(d);

	double var$0 = 0;
	switch (exp) {
	case $Double::MAX_EXPONENT + 1:
		{
			var$0 = Math::abs(d);
			break;
		}
	case $Double::MIN_EXPONENT - 1:
		{
			$init($Double);
			var$0 = $Double::MIN_VALUE;
			break;
		}
	default:
		{
			{
				if (!Math::$assertionsDisabled && !(exp <= $Double::MAX_EXPONENT && exp >= $Double::MIN_EXPONENT)) {
					$throwNew($AssertionError);
				}
				exp = exp - ($DoubleConsts::SIGNIFICAND_WIDTH - 1);
				if (exp >= $Double::MIN_EXPONENT) {
					var$0 = powerOfTwoD(exp);
					break;
				} else {
					var$0 = $Double::longBitsToDouble($sl((int64_t)1, exp - ($Double::MIN_EXPONENT - ($DoubleConsts::SIGNIFICAND_WIDTH - 1))));
					break;
				}
			}
		}
	}
	return var$0;
}

float Math::ulp(float f) {
	$init(Math);
	int32_t exp = getExponent(f);

	float var$0 = 0;
	switch (exp) {
	case $Float::MAX_EXPONENT + 1:
		{
			var$0 = Math::abs(f);
			break;
		}
	case $Float::MIN_EXPONENT - 1:
		{
			$init($Float);
			var$0 = $Float::MIN_VALUE;
			break;
		}
	default:
		{
			{
				if (!Math::$assertionsDisabled && !(exp <= $Float::MAX_EXPONENT && exp >= $Float::MIN_EXPONENT)) {
					$throwNew($AssertionError);
				}
				exp = exp - ($FloatConsts::SIGNIFICAND_WIDTH - 1);
				if (exp >= $Float::MIN_EXPONENT) {
					var$0 = powerOfTwoF(exp);
					break;
				} else {
					var$0 = $Float::intBitsToFloat($sl(1, exp - ($Float::MIN_EXPONENT - ($FloatConsts::SIGNIFICAND_WIDTH - 1))));
					break;
				}
			}
		}
	}
	return var$0;
}

double Math::signum(double d) {
	$init(Math);
	return (d == 0.0 || $Double::isNaN(d)) ? d : copySign(1.0, d);
}

float Math::signum(float f) {
	$init(Math);
	return (f == 0.0f || $Float::isNaN(f)) ? f : copySign(1.0f, f);
}

double Math::sinh(double x) {
	$init(Math);
	return $StrictMath::sinh(x);
}

double Math::cosh(double x) {
	$init(Math);
	return $StrictMath::cosh(x);
}

double Math::tanh(double x) {
	$init(Math);
	return $StrictMath::tanh(x);
}

double Math::hypot(double x, double y) {
	$init(Math);
	return $StrictMath::hypot(x, y);
}

double Math::expm1(double x) {
	$init(Math);
	return $StrictMath::expm1(x);
}

double Math::log1p(double x) {
	$init(Math);
	return $StrictMath::log1p(x);
}

double Math::copySign(double magnitude, double sign) {
	$init(Math);
	int64_t var$0 = ((int64_t)($Double::doubleToRawLongBits(sign) & (uint64_t)($DoubleConsts::SIGN_BIT_MASK)));
	return $Double::longBitsToDouble(var$0 | ((int64_t)($Double::doubleToRawLongBits(magnitude) & (uint64_t)($DoubleConsts::EXP_BIT_MASK | $DoubleConsts::SIGNIF_BIT_MASK))));
}

float Math::copySign(float magnitude, float sign) {
	$init(Math);
	int32_t var$0 = ((int32_t)($Float::floatToRawIntBits(sign) & (uint32_t)($FloatConsts::SIGN_BIT_MASK)));
	return $Float::intBitsToFloat(var$0 | ((int32_t)($Float::floatToRawIntBits(magnitude) & (uint32_t)($FloatConsts::EXP_BIT_MASK | $FloatConsts::SIGNIF_BIT_MASK))));
}

int32_t Math::getExponent(float f) {
	$init(Math);
	return ($sr((int32_t)($Float::floatToRawIntBits(f) & (uint32_t)$FloatConsts::EXP_BIT_MASK), $FloatConsts::SIGNIFICAND_WIDTH - 1)) - $FloatConsts::EXP_BIAS;
}

int32_t Math::getExponent(double d) {
	$init(Math);
	return (int32_t)(($sr((int64_t)($Double::doubleToRawLongBits(d) & (uint64_t)$DoubleConsts::EXP_BIT_MASK), $DoubleConsts::SIGNIFICAND_WIDTH - 1)) - $DoubleConsts::EXP_BIAS);
}

double Math::nextAfter(double start, double direction) {
	$init(Math);
	if (start > direction) {
		if (start != 0.0) {
			int64_t transducer = $Double::doubleToRawLongBits(start);
			return $Double::longBitsToDouble(transducer + ((transducer > (int64_t)0) ? (int64_t)-1 : (int64_t)1));
		} else {
			$init($Double);
			return -$Double::MIN_VALUE;
		}
	} else if (start < direction) {
		int64_t transducer = $Double::doubleToRawLongBits(start + 0.0);
		return $Double::longBitsToDouble(transducer + ((transducer >= (int64_t)0) ? (int64_t)1 : (int64_t)-1));
	} else if (start == direction) {
		return direction;
	} else {
		return start + direction;
	}
}

float Math::nextAfter(float start, double direction) {
	$init(Math);
	if (start > direction) {
		if (start != 0.0f) {
			int32_t transducer = $Float::floatToRawIntBits(start);
			return $Float::intBitsToFloat(transducer + ((transducer > 0) ? -1 : 1));
		} else {
			$init($Float);
			return -$Float::MIN_VALUE;
		}
	} else if (start < direction) {
		int32_t transducer = $Float::floatToRawIntBits(start + 0.0f);
		return $Float::intBitsToFloat(transducer + ((transducer >= 0) ? 1 : -1));
	} else if (start == direction) {
		return (float)direction;
	} else {
		return start + (float)direction;
	}
}

double Math::nextUp(double d) {
	$init(Math);
	$init($Double);
	if (d < $Double::POSITIVE_INFINITY) {
		int64_t transducer = $Double::doubleToRawLongBits(d + 0.0);
		return $Double::longBitsToDouble(transducer + ((transducer >= (int64_t)0) ? (int64_t)1 : (int64_t)-1));
	} else {
		return d;
	}
}

float Math::nextUp(float f) {
	$init(Math);
	$init($Float);
	if (f < $Float::POSITIVE_INFINITY) {
		int32_t transducer = $Float::floatToRawIntBits(f + 0.0f);
		return $Float::intBitsToFloat(transducer + ((transducer >= 0) ? 1 : -1));
	} else {
		return f;
	}
}

double Math::nextDown(double d) {
	$init(Math);
	$init($Double);
	if ($Double::isNaN(d) || d == $Double::NEGATIVE_INFINITY) {
		return d;
	} else if (d == 0.0) {
		$init($Double);
		return -$Double::MIN_VALUE;
	} else {
		return $Double::longBitsToDouble($Double::doubleToRawLongBits(d) + ((d > 0.0) ? (int64_t)-1 : +(int64_t)1));
	}
}

float Math::nextDown(float f) {
	$init(Math);
	$init($Float);
	if ($Float::isNaN(f) || f == $Float::NEGATIVE_INFINITY) {
		return f;
	} else if (f == 0.0f) {
		$init($Float);
		return -$Float::MIN_VALUE;
	} else {
		return $Float::intBitsToFloat($Float::floatToRawIntBits(f) + ((f > 0.0f) ? -1 : +1));
	}
}

double Math::scalb(double d, int32_t scaleFactor) {
	$init(Math);
	int32_t MAX_SCALE = $Double::MAX_EXPONENT + -$Double::MIN_EXPONENT + $DoubleConsts::SIGNIFICAND_WIDTH + 1;
	int32_t exp_adjust = 0;
	int32_t scale_increment = 0;
	$init($Double);
	double exp_delta = $Double::NaN;
	if (scaleFactor < 0) {
		scaleFactor = Math::max(scaleFactor, -MAX_SCALE);
		scale_increment = -512;
		exp_delta = Math::twoToTheDoubleScaleDown;
	} else {
		scaleFactor = Math::min(scaleFactor, MAX_SCALE);
		scale_increment = 512;
		exp_delta = Math::twoToTheDoubleScaleUp;
	}
	int32_t t = $usr($sr(scaleFactor, 9 - 1), 32 - 9);
	exp_adjust = ((int32_t)((scaleFactor + t) & (uint32_t)(512 - 1))) - t;
	d *= powerOfTwoD(exp_adjust);
	scaleFactor -= exp_adjust;
	while (scaleFactor != 0) {
		d *= exp_delta;
		scaleFactor -= scale_increment;
	}
	return d;
}

float Math::scalb(float f, int32_t scaleFactor) {
	$init(Math);
	int32_t MAX_SCALE = $Float::MAX_EXPONENT + -$Float::MIN_EXPONENT + $FloatConsts::SIGNIFICAND_WIDTH + 1;
	scaleFactor = Math::max(Math::min(scaleFactor, MAX_SCALE), -MAX_SCALE);
	return (float)((double)f * powerOfTwoD(scaleFactor));
}

double Math::powerOfTwoD(int32_t n) {
	$init(Math);
	if (!Math::$assertionsDisabled && !(n >= $Double::MIN_EXPONENT && n <= $Double::MAX_EXPONENT)) {
		$throwNew($AssertionError);
	}
	return $Double::longBitsToDouble((int64_t)(($sl((int64_t)n + (int64_t)$DoubleConsts::EXP_BIAS, $DoubleConsts::SIGNIFICAND_WIDTH - 1)) & (uint64_t)$DoubleConsts::EXP_BIT_MASK));
}

float Math::powerOfTwoF(int32_t n) {
	$init(Math);
	if (!Math::$assertionsDisabled && !(n >= $Float::MIN_EXPONENT && n <= $Float::MAX_EXPONENT)) {
		$throwNew($AssertionError);
	}
	return $Float::intBitsToFloat((int32_t)(($sl(n + $FloatConsts::EXP_BIAS, $FloatConsts::SIGNIFICAND_WIDTH - 1)) & (uint32_t)$FloatConsts::EXP_BIT_MASK));
}

void clinit$Math($Class* class$) {
	Math::E = 2.718281828459045;
	Math::PI = 3.141592653589793;
	Math::DEGREES_TO_RADIANS = 0.017453292519943295;
	Math::RADIANS_TO_DEGREES = 57.29577951308232;
	Math::$assertionsDisabled = !Math::class$->desiredAssertionStatus();
	Math::negativeZeroFloatBits = $Float::floatToRawIntBits(-0.0f);
	Math::negativeZeroDoubleBits = $Double::doubleToRawLongBits(-0.0);
	Math::twoToTheDoubleScaleUp = Math::powerOfTwoD(512);
	Math::twoToTheDoubleScaleDown = Math::powerOfTwoD(-512);
}

Math::Math() {
}

$Class* Math::load$($String* name, bool initialize) {
	$loadClass(Math, name, initialize, &_Math_ClassInfo_, clinit$Math, allocate$Math);
	return class$;
}

$Class* Math::class$ = nullptr;

	} // lang
} // java