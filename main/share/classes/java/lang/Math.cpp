#include <java/lang/Math.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math$RandomNumberGeneratorHolder.h>
#include <java/lang/StrictMath.h>
#include <java/math/BigDecimal.h>
#include <java/util/Random.h>
#include <jdk/internal/math/DoubleConsts.h>
#include <jdk/internal/math/FloatConsts.h>
#include <jcpp.h>

#undef A
#undef B
#undef C
#undef DEGREES_TO_RADIANS
#undef E
#undef EXP_BIAS
#undef EXP_BIT_MASK
#undef K
#undef MAX_EXPONENT
#undef MAX_SCALE
#undef MAX_VALUE
#undef MIN_EXPONENT
#undef MIN_VALUE
#undef NEGATIVE_INFINITY
#undef PI
#undef POSITIVE_INFINITY
#undef RADIANS_TO_DEGREES
#undef SIGNIFICAND_WIDTH
#undef SIGNIF_BIT_MASK
#undef SIGN_BIT_MASK

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
using $DoubleConsts = ::jdk::internal::math::DoubleConsts;
using $FloatConsts = ::jdk::internal::math::FloatConsts;

namespace java {
	namespace lang {

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
	return $StrictMath::sin(a);
}

double Math::cos(double a) {
	return $StrictMath::cos(a);
}

double Math::tan(double a) {
	return $StrictMath::tan(a);
}

double Math::asin(double a) {
	return $StrictMath::asin(a);
}

double Math::acos(double a) {
	return $StrictMath::acos(a);
}

double Math::atan(double a) {
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
	return $StrictMath::exp(a);
}

double Math::log(double a) {
	return $StrictMath::log(a);
}

double Math::log10(double a) {
	return $StrictMath::log10(a);
}

double Math::sqrt(double a) {
	return $StrictMath::sqrt(a);
}

double Math::cbrt(double a) {
	return $StrictMath::cbrt(a);
}

double Math::IEEEremainder(double f1, double f2) {
	return $StrictMath::IEEEremainder(f1, f2);
}

double Math::ceil(double a) {
	return $StrictMath::ceil(a);
}

double Math::floor(double a) {
	return $StrictMath::floor(a);
}

double Math::rint(double a) {
	return $StrictMath::rint(a);
}

double Math::atan2(double y, double x) {
	return $StrictMath::atan2(y, x);
}

double Math::pow(double a, double b) {
	return $StrictMath::pow(a, b);
}

int32_t Math::round(float a) {
	int32_t intBits = $Float::floatToRawIntBits(a);
	int32_t biasedExp = $sr(intBits & $FloatConsts::EXP_BIT_MASK, $FloatConsts::SIGNIFICAND_WIDTH - 1);
	int32_t shift = ($FloatConsts::SIGNIFICAND_WIDTH - 2 + $FloatConsts::EXP_BIAS) - biasedExp;
	if ((shift & -32) == 0) {
		int32_t r = ((intBits & $FloatConsts::SIGNIF_BIT_MASK) | ($FloatConsts::SIGNIF_BIT_MASK + 1));
		if (intBits < 0) {
			r = -r;
		}
		return (($sr(r, shift)) + 1) >> 1;
	} else {
		return $cast(int32_t, a);
	}
}

int64_t Math::round(double a) {
	int64_t longBits = $Double::doubleToRawLongBits(a);
	int64_t biasedExp = $sr(longBits & $DoubleConsts::EXP_BIT_MASK, $DoubleConsts::SIGNIFICAND_WIDTH - 1);
	int64_t shift = ($DoubleConsts::SIGNIFICAND_WIDTH - 2 + $DoubleConsts::EXP_BIAS) - biasedExp;
	if ((shift & -64) == 0) {
		int64_t r = ((longBits & $DoubleConsts::SIGNIF_BIT_MASK) | ($DoubleConsts::SIGNIF_BIT_MASK + 1));
		if (longBits < 0) {
			r = -r;
		}
		return (($sr(r, shift)) + 1) >> 1;
	} else {
		return $cast(int64_t, a);
	}
}

double Math::random() {
	$init($Math$RandomNumberGeneratorHolder);
	return $nc($Math$RandomNumberGeneratorHolder::randomNumberGenerator)->nextDouble();
}

int32_t Math::addExact(int32_t x, int32_t y) {
	int32_t r = x + y;
	if (((x ^ r) & (y ^ r)) < 0) {
		$throwNew($ArithmeticException, "integer overflow"_s);
	}
	return r;
}

int64_t Math::addExact(int64_t x, int64_t y) {
	int64_t r = x + y;
	if (((x ^ r) & (y ^ r)) < 0) {
		$throwNew($ArithmeticException, "long overflow"_s);
	}
	return r;
}

int32_t Math::subtractExact(int32_t x, int32_t y) {
	int32_t r = x - y;
	if (((x ^ y) & (x ^ r)) < 0) {
		$throwNew($ArithmeticException, "integer overflow"_s);
	}
	return r;
}

int64_t Math::subtractExact(int64_t x, int64_t y) {
	int64_t r = x - y;
	if (((x ^ y) & (x ^ r)) < 0) {
		$throwNew($ArithmeticException, "long overflow"_s);
	}
	return r;
}

int32_t Math::multiplyExact(int32_t x, int32_t y) {
	int64_t r = (int64_t)x * (int64_t)y;
	if ((int32_t)r != r) {
		$throwNew($ArithmeticException, "integer overflow"_s);
	}
	return (int32_t)r;
}

int64_t Math::multiplyExact(int64_t x, int32_t y) {
	return multiplyExact(x, (int64_t)y);
}

int64_t Math::multiplyExact(int64_t x, int64_t y) {
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
	if (a == $Integer::MAX_VALUE) {
		$throwNew($ArithmeticException, "integer overflow"_s);
	}
	return a + 1;
}

int64_t Math::incrementExact(int64_t a) {
	if (a == $Long::MAX_VALUE) {
		$throwNew($ArithmeticException, "long overflow"_s);
	}
	return a + (int64_t)1;
}

int32_t Math::decrementExact(int32_t a) {
	if (a == $Integer::MIN_VALUE) {
		$throwNew($ArithmeticException, "integer overflow"_s);
	}
	return a - 1;
}

int64_t Math::decrementExact(int64_t a) {
	if (a == $Long::MIN_VALUE) {
		$throwNew($ArithmeticException, "long overflow"_s);
	}
	return a - (int64_t)1;
}

int32_t Math::negateExact(int32_t a) {
	if (a == $Integer::MIN_VALUE) {
		$throwNew($ArithmeticException, "integer overflow"_s);
	}
	return -a;
}

int64_t Math::negateExact(int64_t a) {
	if (a == $Long::MIN_VALUE) {
		$throwNew($ArithmeticException, "long overflow"_s);
	}
	return -a;
}

int32_t Math::toIntExact(int64_t value) {
	if ((int32_t)value != value) {
		$throwNew($ArithmeticException, "integer overflow"_s);
	}
	return (int32_t)value;
}

int64_t Math::multiplyFull(int32_t x, int32_t y) {
	return (int64_t)x * (int64_t)y;
}

int64_t Math::multiplyHigh(int64_t x, int64_t y) {
	if (x < 0 || y < 0) {
		int64_t x1 = x >> 32;
		int64_t x2 = x & (int64_t)0xffffffff;
		int64_t y1 = y >> 32;
		int64_t y2 = y & (int64_t)0xffffffff;
		int64_t z2 = x2 * y2;
		int64_t t = x1 * y2 + ((int64_t)((uint64_t)z2 >> 32));
		int64_t z1 = t & (int64_t)0xffffffff;
		int64_t z0 = t >> 32;
		z1 += x2 * y1;
		return x1 * y1 + z0 + (z1 >> 32);
	} else {
		int64_t x1 = (int64_t)((uint64_t)x >> 32);
		int64_t y1 = (int64_t)((uint64_t)y >> 32);
		int64_t x2 = x & (int64_t)0xffffffff;
		int64_t y2 = y & (int64_t)0xffffffff;
		int64_t A = x1 * y1;
		int64_t B = x2 * y2;
		int64_t C = (x1 + x2) * (y1 + y2);
		int64_t K = C - A - B;
		return ((int64_t)((uint64_t)(((int64_t)((uint64_t)B >> 32)) + K) >> 32)) + A;
	}
}

int32_t Math::floorDiv(int32_t x, int32_t y) {
	int32_t r = $div(x, y);
	if ((x ^ y) < 0 && (r * y != x)) {
		--r;
	}
	return r;
}

int64_t Math::floorDiv(int64_t x, int32_t y) {
	return floorDiv(x, (int64_t)y);
}

int64_t Math::floorDiv(int64_t x, int64_t y) {
	int64_t r = $div(x, y);
	if ((x ^ y) < 0 && (r * y != x)) {
		--r;
	}
	return r;
}

int32_t Math::floorMod(int32_t x, int32_t y) {
	int32_t mod = $mod(x, y);
	if ((mod ^ y) < 0 && mod != 0) {
		mod += y;
	}
	return mod;
}

int32_t Math::floorMod(int64_t x, int32_t y) {
	return (int32_t)floorMod(x, (int64_t)y);
}

int64_t Math::floorMod(int64_t x, int64_t y) {
	int64_t mod = $mod(x, y);
	if ((x ^ y) < 0 && mod != 0) {
		mod += y;
	}
	return mod;
}

int32_t Math::abs(int32_t a) {
	return (a < 0) ? -a : a;
}

int32_t Math::absExact(int32_t a) {
	if (a == $Integer::MIN_VALUE) {
		$throwNew($ArithmeticException, "Overflow to represent absolute value of Integer.MIN_VALUE"_s);
	} else {
		return abs(a);
	}
}

int64_t Math::abs(int64_t a) {
	return (a < 0) ? -a : a;
}

int64_t Math::absExact(int64_t a) {
	if (a == $Long::MIN_VALUE) {
		$throwNew($ArithmeticException, "Overflow to represent absolute value of Long.MIN_VALUE"_s);
	} else {
		return abs(a);
	}
}

float Math::abs(float a) {
	return (a <= 0.0f) ? 0.0f - a : a;
}

double Math::abs(double a) {
	return (a <= 0.0) ? 0.0 - a : a;
}

int32_t Math::max(int32_t a, int32_t b) {
	return (a >= b) ? a : b;
}

int64_t Math::max(int64_t a, int64_t b) {
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
	return (a <= b) ? a : b;
}

int64_t Math::min(int64_t a, int64_t b) {
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
	$useLocalObjectStack();
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
				$init(Math);
				if (!Math::$assertionsDisabled && !$Double::isInfinite(c)) {
					$throwNew($AssertionError);
				}
				return c;
			} else {
				result = product + c;
				$init(Math);
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
					return product->doubleValue();
				}
			} else {
				return $(product->add($$new($BigDecimal, c)))->doubleValue();
			}
		}
	}
}

float Math::fma(float a, float b, float c) {
	$useLocalObjectStack();
	bool var$1 = $Float::isFinite(a);
	bool var$0 = var$1 && $Float::isFinite(b);
	if (var$0 && $Float::isFinite(c)) {
		if (a == 0.0 || b == 0.0) {
			return a * b + c;
		} else {
			return ($($$new($BigDecimal, (double)a * (double)b)->add($$new($BigDecimal, (double)c))))->floatValue();
		}
	} else {
		return (float)fma((double)a, (double)b, (double)c);
	}
}

double Math::ulp(double d) {
	int32_t exp = getExponent(d);
	double var$0 = 0;
	switch (exp) {
	case $Double::MAX_EXPONENT + 1:
		var$0 = Math::abs(d);
		break;
	case $Double::MIN_EXPONENT - 1:
		var$0 = $Double::MIN_VALUE;
		break;
	default:
		{
			$init(Math);
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
	return var$0;
}

float Math::ulp(float f) {
	int32_t exp = getExponent(f);
	float var$0 = 0;
	switch (exp) {
	case $Float::MAX_EXPONENT + 1:
		var$0 = Math::abs(f);
		break;
	case $Float::MIN_EXPONENT - 1:
		var$0 = $Float::MIN_VALUE;
		break;
	default:
		{
			$init(Math);
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
	return var$0;
}

double Math::signum(double d) {
	return (d == 0.0 || $Double::isNaN(d)) ? d : copySign(1.0, d);
}

float Math::signum(float f) {
	return (f == 0.0f || $Float::isNaN(f)) ? f : copySign(1.0f, f);
}

double Math::sinh(double x) {
	return $StrictMath::sinh(x);
}

double Math::cosh(double x) {
	return $StrictMath::cosh(x);
}

double Math::tanh(double x) {
	return $StrictMath::tanh(x);
}

double Math::hypot(double x, double y) {
	return $StrictMath::hypot(x, y);
}

double Math::expm1(double x) {
	return $StrictMath::expm1(x);
}

double Math::log1p(double x) {
	return $StrictMath::log1p(x);
}

double Math::copySign(double magnitude, double sign) {
	int64_t var$0 = $Double::doubleToRawLongBits(sign) & ($DoubleConsts::SIGN_BIT_MASK);
	return $Double::longBitsToDouble(var$0 | ($Double::doubleToRawLongBits(magnitude) & ($DoubleConsts::EXP_BIT_MASK | $DoubleConsts::SIGNIF_BIT_MASK)));
}

float Math::copySign(float magnitude, float sign) {
	int32_t var$0 = $Float::floatToRawIntBits(sign) & ($FloatConsts::SIGN_BIT_MASK);
	return $Float::intBitsToFloat(var$0 | ($Float::floatToRawIntBits(magnitude) & ($FloatConsts::EXP_BIT_MASK | $FloatConsts::SIGNIF_BIT_MASK)));
}

int32_t Math::getExponent(float f) {
	return ($sr($Float::floatToRawIntBits(f) & $FloatConsts::EXP_BIT_MASK, $FloatConsts::SIGNIFICAND_WIDTH - 1)) - $FloatConsts::EXP_BIAS;
}

int32_t Math::getExponent(double d) {
	return (int32_t)(($sr($Double::doubleToRawLongBits(d) & $DoubleConsts::EXP_BIT_MASK, $DoubleConsts::SIGNIFICAND_WIDTH - 1)) - $DoubleConsts::EXP_BIAS);
}

double Math::nextAfter(double start, double direction) {
	if (start > direction) {
		if (start != 0.0) {
			int64_t transducer = $Double::doubleToRawLongBits(start);
			return $Double::longBitsToDouble(transducer + ((transducer > 0) ? -1 : 1));
		} else {
			return -$Double::MIN_VALUE;
		}
	} else if (start < direction) {
		int64_t transducer = $Double::doubleToRawLongBits(start + 0.0);
		return $Double::longBitsToDouble(transducer + ((transducer >= 0) ? 1 : -1));
	} else if (start == direction) {
		return direction;
	} else {
		return start + direction;
	}
}

float Math::nextAfter(float start, double direction) {
	if (start > direction) {
		if (start != 0.0f) {
			int32_t transducer = $Float::floatToRawIntBits(start);
			return $Float::intBitsToFloat(transducer + ((transducer > 0) ? -1 : 1));
		} else {
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
	if (d < $Double::POSITIVE_INFINITY) {
		int64_t transducer = $Double::doubleToRawLongBits(d + 0.0);
		return $Double::longBitsToDouble(transducer + ((transducer >= 0) ? 1 : -1));
	} else {
		return d;
	}
}

float Math::nextUp(float f) {
	if (f < $Float::POSITIVE_INFINITY) {
		int32_t transducer = $Float::floatToRawIntBits(f + 0.0f);
		return $Float::intBitsToFloat(transducer + ((transducer >= 0) ? 1 : -1));
	} else {
		return f;
	}
}

double Math::nextDown(double d) {
	if ($Double::isNaN(d) || d == $Double::NEGATIVE_INFINITY) {
		return d;
	} else if (d == 0.0) {
		return -$Double::MIN_VALUE;
	} else {
		return $Double::longBitsToDouble($Double::doubleToRawLongBits(d) + ((d > 0.0) ? -1 : +1));
	}
}

float Math::nextDown(float f) {
	if ($Float::isNaN(f) || f == $Float::NEGATIVE_INFINITY) {
		return f;
	} else if (f == 0.0f) {
		return -$Float::MIN_VALUE;
	} else {
		return $Float::intBitsToFloat($Float::floatToRawIntBits(f) + ((f > 0.0f) ? -1 : +1));
	}
}

double Math::scalb(double d, int32_t scaleFactor) {
	int32_t MAX_SCALE = $Double::MAX_EXPONENT + -$Double::MIN_EXPONENT + $DoubleConsts::SIGNIFICAND_WIDTH + 1;
	int32_t exp_adjust = 0;
	int32_t scale_increment = 0;
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
	exp_adjust = ((scaleFactor + t) & (512 - 1)) - t;
	d *= powerOfTwoD(exp_adjust);
	scaleFactor -= exp_adjust;
	while (scaleFactor != 0) {
		d *= exp_delta;
		scaleFactor -= scale_increment;
	}
	return d;
}

float Math::scalb(float f, int32_t scaleFactor) {
	int32_t MAX_SCALE = $Float::MAX_EXPONENT + -$Float::MIN_EXPONENT + $FloatConsts::SIGNIFICAND_WIDTH + 1;
	scaleFactor = Math::max(Math::min(scaleFactor, MAX_SCALE), -MAX_SCALE);
	return (float)((double)f * powerOfTwoD(scaleFactor));
}

double Math::powerOfTwoD(int32_t n) {
	$init(Math);
	if (!Math::$assertionsDisabled && !(n >= $Double::MIN_EXPONENT && n <= $Double::MAX_EXPONENT)) {
		$throwNew($AssertionError);
	}
	return $Double::longBitsToDouble(($sl((int64_t)n + (int64_t)$DoubleConsts::EXP_BIAS, $DoubleConsts::SIGNIFICAND_WIDTH - 1)) & $DoubleConsts::EXP_BIT_MASK);
}

float Math::powerOfTwoF(int32_t n) {
	$init(Math);
	if (!Math::$assertionsDisabled && !(n >= $Float::MIN_EXPONENT && n <= $Float::MAX_EXPONENT)) {
		$throwNew($AssertionError);
	}
	return $Float::intBitsToFloat(($sl(n + $FloatConsts::EXP_BIAS, $FloatConsts::SIGNIFICAND_WIDTH - 1)) & $FloatConsts::EXP_BIT_MASK);
}

void Math::clinit$($Class* clazz) {
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
	$FieldInfo fieldInfos$$[] = {
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
	$CompoundAttribute absmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute absmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute absmethodAnnotations$$$2[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute absmethodAnnotations$$$3[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute addExactmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute addExactmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute atan2methodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute ceilmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute copySignmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute copySignmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute cosmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute decrementExactmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute decrementExactmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute expmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute floormethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute fmamethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute fmamethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute incrementExactmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute incrementExactmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute logmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute log10methodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
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
	$CompoundAttribute multiplyExactmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute multiplyExactmethodAnnotations$$$2[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute multiplyHighmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute negateExactmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute negateExactmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute powmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute rintmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute signummethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute signummethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute sinmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute sqrtmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute subtractExactmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute subtractExactmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute tanmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Math, init$, void)},
		{"IEEEremainder", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, IEEEremainder, double, double, double)},
		{"abs", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, abs, int32_t, int32_t), nullptr, nullptr, absmethodAnnotations$$},
		{"abs", "(J)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, abs, int64_t, int64_t), nullptr, nullptr, absmethodAnnotations$$$1},
		{"abs", "(F)F", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, abs, float, float), nullptr, nullptr, absmethodAnnotations$$$2},
		{"abs", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, abs, double, double), nullptr, nullptr, absmethodAnnotations$$$3},
		{"absExact", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, absExact, int32_t, int32_t)},
		{"absExact", "(J)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, absExact, int64_t, int64_t)},
		{"acos", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, acos, double, double)},
		{"addExact", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, addExact, int32_t, int32_t, int32_t), nullptr, nullptr, addExactmethodAnnotations$$},
		{"addExact", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, addExact, int64_t, int64_t, int64_t), nullptr, nullptr, addExactmethodAnnotations$$$1},
		{"asin", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, asin, double, double)},
		{"atan", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, atan, double, double)},
		{"atan2", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, atan2, double, double, double), nullptr, nullptr, atan2methodAnnotations$$},
		{"cbrt", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, cbrt, double, double)},
		{"ceil", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, ceil, double, double), nullptr, nullptr, ceilmethodAnnotations$$},
		{"copySign", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, copySign, double, double, double), nullptr, nullptr, copySignmethodAnnotations$$},
		{"copySign", "(FF)F", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, copySign, float, float, float), nullptr, nullptr, copySignmethodAnnotations$$$1},
		{"cos", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, cos, double, double), nullptr, nullptr, cosmethodAnnotations$$},
		{"cosh", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, cosh, double, double)},
		{"decrementExact", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, decrementExact, int32_t, int32_t), nullptr, nullptr, decrementExactmethodAnnotations$$},
		{"decrementExact", "(J)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, decrementExact, int64_t, int64_t), nullptr, nullptr, decrementExactmethodAnnotations$$$1},
		{"exp", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, exp, double, double), nullptr, nullptr, expmethodAnnotations$$},
		{"expm1", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, expm1, double, double)},
		{"floor", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, floor, double, double), nullptr, nullptr, floormethodAnnotations$$},
		{"floorDiv", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, floorDiv, int32_t, int32_t, int32_t)},
		{"floorDiv", "(JI)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, floorDiv, int64_t, int64_t, int32_t)},
		{"floorDiv", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, floorDiv, int64_t, int64_t, int64_t)},
		{"floorMod", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, floorMod, int32_t, int32_t, int32_t)},
		{"floorMod", "(JI)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, floorMod, int32_t, int64_t, int32_t)},
		{"floorMod", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, floorMod, int64_t, int64_t, int64_t)},
		{"fma", "(DDD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, fma, double, double, double, double), nullptr, nullptr, fmamethodAnnotations$$},
		{"fma", "(FFF)F", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, fma, float, float, float, float), nullptr, nullptr, fmamethodAnnotations$$$1},
		{"getExponent", "(F)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, getExponent, int32_t, float)},
		{"getExponent", "(D)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, getExponent, int32_t, double)},
		{"hypot", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, hypot, double, double, double)},
		{"incrementExact", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, incrementExact, int32_t, int32_t), nullptr, nullptr, incrementExactmethodAnnotations$$},
		{"incrementExact", "(J)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, incrementExact, int64_t, int64_t), nullptr, nullptr, incrementExactmethodAnnotations$$$1},
		{"log", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, log, double, double), nullptr, nullptr, logmethodAnnotations$$},
		{"log10", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, log10, double, double), nullptr, nullptr, log10methodAnnotations$$},
		{"log1p", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, log1p, double, double)},
		{"max", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, max, int32_t, int32_t, int32_t), nullptr, nullptr, maxmethodAnnotations$$},
		{"max", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, max, int64_t, int64_t, int64_t)},
		{"max", "(FF)F", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, max, float, float, float), nullptr, nullptr, maxmethodAnnotations$$$2},
		{"max", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, max, double, double, double), nullptr, nullptr, maxmethodAnnotations$$$3},
		{"min", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, min, int32_t, int32_t, int32_t), nullptr, nullptr, minmethodAnnotations$$},
		{"min", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, min, int64_t, int64_t, int64_t)},
		{"min", "(FF)F", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, min, float, float, float), nullptr, nullptr, minmethodAnnotations$$$2},
		{"min", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, min, double, double, double), nullptr, nullptr, minmethodAnnotations$$$3},
		{"multiplyExact", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, multiplyExact, int32_t, int32_t, int32_t), nullptr, nullptr, multiplyExactmethodAnnotations$$},
		{"multiplyExact", "(JI)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, multiplyExact, int64_t, int64_t, int32_t)},
		{"multiplyExact", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, multiplyExact, int64_t, int64_t, int64_t), nullptr, nullptr, multiplyExactmethodAnnotations$$$2},
		{"multiplyFull", "(II)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, multiplyFull, int64_t, int32_t, int32_t)},
		{"multiplyHigh", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, multiplyHigh, int64_t, int64_t, int64_t), nullptr, nullptr, multiplyHighmethodAnnotations$$},
		{"negateExact", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, negateExact, int32_t, int32_t), nullptr, nullptr, negateExactmethodAnnotations$$},
		{"negateExact", "(J)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, negateExact, int64_t, int64_t), nullptr, nullptr, negateExactmethodAnnotations$$$1},
		{"nextAfter", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, nextAfter, double, double, double)},
		{"nextAfter", "(FD)F", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, nextAfter, float, float, double)},
		{"nextDown", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, nextDown, double, double)},
		{"nextDown", "(F)F", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, nextDown, float, float)},
		{"nextUp", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, nextUp, double, double)},
		{"nextUp", "(F)F", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, nextUp, float, float)},
		{"pow", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, pow, double, double, double), nullptr, nullptr, powmethodAnnotations$$},
		{"powerOfTwoD", "(I)D", nullptr, $STATIC, $staticMethod(Math, powerOfTwoD, double, int32_t)},
		{"powerOfTwoF", "(I)F", nullptr, $STATIC, $staticMethod(Math, powerOfTwoF, float, int32_t)},
		{"random", "()D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, random, double)},
		{"rint", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, rint, double, double), nullptr, nullptr, rintmethodAnnotations$$},
		{"round", "(F)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, round, int32_t, float)},
		{"round", "(D)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, round, int64_t, double)},
		{"scalb", "(DI)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, scalb, double, double, int32_t)},
		{"scalb", "(FI)F", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, scalb, float, float, int32_t)},
		{"signum", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, signum, double, double), nullptr, nullptr, signummethodAnnotations$$},
		{"signum", "(F)F", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, signum, float, float), nullptr, nullptr, signummethodAnnotations$$$1},
		{"sin", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, sin, double, double), nullptr, nullptr, sinmethodAnnotations$$},
		{"sinh", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, sinh, double, double)},
		{"sqrt", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, sqrt, double, double), nullptr, nullptr, sqrtmethodAnnotations$$},
		{"subtractExact", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, subtractExact, int32_t, int32_t, int32_t), nullptr, nullptr, subtractExactmethodAnnotations$$},
		{"subtractExact", "(JJ)J", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, subtractExact, int64_t, int64_t, int64_t), nullptr, nullptr, subtractExactmethodAnnotations$$$1},
		{"tan", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, tan, double, double), nullptr, nullptr, tanmethodAnnotations$$},
		{"tanh", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, tanh, double, double)},
		{"toDegrees", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, toDegrees, double, double)},
		{"toIntExact", "(J)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, toIntExact, int32_t, int64_t)},
		{"toRadians", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, toRadians, double, double)},
		{"ulp", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, ulp, double, double)},
		{"ulp", "(F)F", nullptr, $PUBLIC | $STATIC, $staticMethod(Math, ulp, float, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Math$RandomNumberGeneratorHolder", "java.lang.Math", "RandomNumberGeneratorHolder", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.Math",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.Math$RandomNumberGeneratorHolder"
	};
	$loadClass(Math, name, initialize, &classInfo$$, Math::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Math);
	});
	return class$;
}

$Class* Math::class$ = nullptr;

	} // lang
} // java