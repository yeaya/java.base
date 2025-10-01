#include <jdk/internal/math/FloatingDecimal$ASCIIToBinaryBuffer.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/math/DoubleConsts.h>
#include <jdk/internal/math/FDBigInteger.h>
#include <jdk/internal/math/FloatConsts.h>
#include <jdk/internal/math/FloatingDecimal.h>
#include <jcpp.h>

#undef SMALL_10_POW
#undef SIGN_BIT_MASK
#undef EXP_BIT_MASK
#undef MAX_SMALL_TEN
#undef EXP_BIAS
#undef TINY_10_POW
#undef MAX_VALUE
#undef MIN_VALUE
#undef D2
#undef SINGLE_SMALL_10_POW
#undef POSITIVE_INFINITY
#undef B2
#undef D5
#undef NEGATIVE_INFINITY
#undef BIG_10_POW
#undef B5
#undef SIGNIF_BIT_MASK
#undef SINGLE_MAX_SMALL_TEN

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleConsts = ::jdk::internal::math::DoubleConsts;
using $FDBigInteger = ::jdk::internal::math::FDBigInteger;
using $FloatConsts = ::jdk::internal::math::FloatConsts;
using $FloatingDecimal = ::jdk::internal::math::FloatingDecimal;
using $FloatingDecimal$ASCIIToBinaryConverter = ::jdk::internal::math::FloatingDecimal$ASCIIToBinaryConverter;

namespace jdk {
	namespace internal {
		namespace math {

$FieldInfo _FloatingDecimal$ASCIIToBinaryBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FloatingDecimal$ASCIIToBinaryBuffer, $assertionsDisabled)},
	{"isNegative", "Z", nullptr, 0, $field(FloatingDecimal$ASCIIToBinaryBuffer, isNegative)},
	{"decExponent", "I", nullptr, 0, $field(FloatingDecimal$ASCIIToBinaryBuffer, decExponent)},
	{"digits", "[C", nullptr, 0, $field(FloatingDecimal$ASCIIToBinaryBuffer, digits)},
	{"nDigits", "I", nullptr, 0, $field(FloatingDecimal$ASCIIToBinaryBuffer, nDigits)},
	{"SMALL_10_POW", "[D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal$ASCIIToBinaryBuffer, SMALL_10_POW)},
	{"SINGLE_SMALL_10_POW", "[F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal$ASCIIToBinaryBuffer, SINGLE_SMALL_10_POW)},
	{"BIG_10_POW", "[D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal$ASCIIToBinaryBuffer, BIG_10_POW)},
	{"TINY_10_POW", "[D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal$ASCIIToBinaryBuffer, TINY_10_POW)},
	{"MAX_SMALL_TEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal$ASCIIToBinaryBuffer, MAX_SMALL_TEN)},
	{"SINGLE_MAX_SMALL_TEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal$ASCIIToBinaryBuffer, SINGLE_MAX_SMALL_TEN)},
	{}
};

$MethodInfo _FloatingDecimal$ASCIIToBinaryBuffer_MethodInfo_[] = {
	{"<init>", "(ZI[CI)V", nullptr, 0, $method(static_cast<void(FloatingDecimal$ASCIIToBinaryBuffer::*)(bool,int32_t,$chars*,int32_t)>(&FloatingDecimal$ASCIIToBinaryBuffer::init$))},
	{"doubleValue", "()D", nullptr, $PUBLIC},
	{"floatValue", "()F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FloatingDecimal$ASCIIToBinaryBuffer_InnerClassesInfo_[] = {
	{"jdk.internal.math.FloatingDecimal$ASCIIToBinaryBuffer", "jdk.internal.math.FloatingDecimal", "ASCIIToBinaryBuffer", $STATIC},
	{"jdk.internal.math.FloatingDecimal$ASCIIToBinaryConverter", "jdk.internal.math.FloatingDecimal", "ASCIIToBinaryConverter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FloatingDecimal$ASCIIToBinaryBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.math.FloatingDecimal$ASCIIToBinaryBuffer",
	"java.lang.Object",
	"jdk.internal.math.FloatingDecimal$ASCIIToBinaryConverter",
	_FloatingDecimal$ASCIIToBinaryBuffer_FieldInfo_,
	_FloatingDecimal$ASCIIToBinaryBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_FloatingDecimal$ASCIIToBinaryBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.math.FloatingDecimal"
};

$Object* allocate$FloatingDecimal$ASCIIToBinaryBuffer($Class* clazz) {
	return $of($alloc(FloatingDecimal$ASCIIToBinaryBuffer));
}

bool FloatingDecimal$ASCIIToBinaryBuffer::$assertionsDisabled = false;

$doubles* FloatingDecimal$ASCIIToBinaryBuffer::SMALL_10_POW = nullptr;
$floats* FloatingDecimal$ASCIIToBinaryBuffer::SINGLE_SMALL_10_POW = nullptr;
$doubles* FloatingDecimal$ASCIIToBinaryBuffer::BIG_10_POW = nullptr;
$doubles* FloatingDecimal$ASCIIToBinaryBuffer::TINY_10_POW = nullptr;
int32_t FloatingDecimal$ASCIIToBinaryBuffer::MAX_SMALL_TEN = 0;
int32_t FloatingDecimal$ASCIIToBinaryBuffer::SINGLE_MAX_SMALL_TEN = 0;

void FloatingDecimal$ASCIIToBinaryBuffer::init$(bool negSign, int32_t decExponent, $chars* digits, int32_t n) {
	this->isNegative = negSign;
	this->decExponent = decExponent;
	$set(this, digits, digits);
	this->nDigits = n;
}

double FloatingDecimal$ASCIIToBinaryBuffer::doubleValue() {
	int32_t kDigits = $Math::min(this->nDigits, 15 + 1);
	int32_t iValue = (int32_t)$nc(this->digits)->get(0) - (int32_t)u'0';
	int32_t iDigits = $Math::min(kDigits, 9);
	for (int32_t i = 1; i < iDigits; ++i) {
		iValue = iValue * 10 + (int32_t)$nc(this->digits)->get(i) - (int32_t)u'0';
	}
	int64_t lValue = (int64_t)iValue;
	for (int32_t i = iDigits; i < kDigits; ++i) {
		lValue = lValue * (int64_t)10 + (int64_t)((int32_t)$nc(this->digits)->get(i) - (int32_t)u'0');
	}
	double dValue = (double)lValue;
	int32_t exp = this->decExponent - kDigits;
	if (this->nDigits <= 15) {
		if (exp == 0 || dValue == 0.0) {
			return (this->isNegative) ? -dValue : dValue;
		} else if (exp >= 0) {
			if (exp <= FloatingDecimal$ASCIIToBinaryBuffer::MAX_SMALL_TEN) {
				double rValue = dValue * $nc(FloatingDecimal$ASCIIToBinaryBuffer::SMALL_10_POW)->get(exp);
				return (this->isNegative) ? -rValue : rValue;
			}
			int32_t slop = 15 - kDigits;
			if (exp <= FloatingDecimal$ASCIIToBinaryBuffer::MAX_SMALL_TEN + slop) {
				dValue *= $nc(FloatingDecimal$ASCIIToBinaryBuffer::SMALL_10_POW)->get(slop);
				double rValue = dValue * $nc(FloatingDecimal$ASCIIToBinaryBuffer::SMALL_10_POW)->get(exp - slop);
				return (this->isNegative) ? -rValue : rValue;
			}
		} else if (exp >= -FloatingDecimal$ASCIIToBinaryBuffer::MAX_SMALL_TEN) {
			double rValue = dValue / $nc(FloatingDecimal$ASCIIToBinaryBuffer::SMALL_10_POW)->get(-exp);
			return (this->isNegative) ? -rValue : rValue;
		}
	}
	if (exp > 0) {
		if (this->decExponent > 308 + 1) {
			$init($Double);
			return (this->isNegative) ? $Double::NEGATIVE_INFINITY : $Double::POSITIVE_INFINITY;
		}
		if (((int32_t)(exp & (uint32_t)15)) != 0) {
			dValue *= $nc(FloatingDecimal$ASCIIToBinaryBuffer::SMALL_10_POW)->get((int32_t)(exp & (uint32_t)15));
		}
		if ((exp >>= 4) != 0) {
			int32_t j = 0;
			for (j = 0; exp > 1; ++j, exp >>= 1) {
				if (((int32_t)(exp & (uint32_t)1)) != 0) {
					dValue *= $nc(FloatingDecimal$ASCIIToBinaryBuffer::BIG_10_POW)->get(j);
				}
			}
			double t = dValue * $nc(FloatingDecimal$ASCIIToBinaryBuffer::BIG_10_POW)->get(j);
			if ($Double::isInfinite(t)) {
				t = dValue / 2.0;
				t *= $nc(FloatingDecimal$ASCIIToBinaryBuffer::BIG_10_POW)->get(j);
				if ($Double::isInfinite(t)) {
					$init($Double);
					return (this->isNegative) ? $Double::NEGATIVE_INFINITY : $Double::POSITIVE_INFINITY;
				}
				t = $Double::MAX_VALUE;
			}
			dValue = t;
		}
	} else if (exp < 0) {
		exp = -exp;
		if (this->decExponent < -324 - 1) {
			return (this->isNegative) ? -0.0 : 0.0;
		}
		if (((int32_t)(exp & (uint32_t)15)) != 0) {
			dValue /= $nc(FloatingDecimal$ASCIIToBinaryBuffer::SMALL_10_POW)->get((int32_t)(exp & (uint32_t)15));
		}
		if ((exp >>= 4) != 0) {
			int32_t j = 0;
			for (j = 0; exp > 1; ++j, exp >>= 1) {
				if (((int32_t)(exp & (uint32_t)1)) != 0) {
					dValue *= $nc(FloatingDecimal$ASCIIToBinaryBuffer::TINY_10_POW)->get(j);
				}
			}
			double t = dValue * $nc(FloatingDecimal$ASCIIToBinaryBuffer::TINY_10_POW)->get(j);
			if (t == 0.0) {
				t = dValue * 2.0;
				t *= $nc(FloatingDecimal$ASCIIToBinaryBuffer::TINY_10_POW)->get(j);
				if (t == 0.0) {
					return (this->isNegative) ? -0.0 : 0.0;
				}
				$init($Double);
				t = $Double::MIN_VALUE;
			}
			dValue = t;
		}
	}
	if (this->nDigits > 1100) {
		this->nDigits = 1100 + 1;
		$nc(this->digits)->set(1100, u'1');
	}
	$var($FDBigInteger, bigD0, $new($FDBigInteger, lValue, this->digits, kDigits, this->nDigits));
	exp = this->decExponent - this->nDigits;
	int64_t ieeeBits = $Double::doubleToRawLongBits(dValue);
	int32_t B5 = $Math::max(0, -exp);
	int32_t D5 = $Math::max(0, exp);
	$assign(bigD0, bigD0->multByPow52(D5, 0));
	$nc(bigD0)->makeImmutable();
	$var($FDBigInteger, bigD, nullptr);
	int32_t prevD2 = 0;
	bool correctionLoop$break = false;
	while (true) {
		int32_t binexp = (int32_t)((int64_t)((uint64_t)ieeeBits >> 52));
		int64_t bigBbits = (int64_t)(ieeeBits & (uint64_t)$DoubleConsts::SIGNIF_BIT_MASK);
		if (binexp > 0) {
			bigBbits |= 0x0010000000000000;
		} else {
			if (!FloatingDecimal$ASCIIToBinaryBuffer::$assertionsDisabled && !(bigBbits != (int64_t)0)) {
				$throwNew($AssertionError, bigBbits);
			}
			int32_t leadingZeros = $Long::numberOfLeadingZeros(bigBbits);
			int32_t shift = leadingZeros - (63 - 52);
			bigBbits <<= shift;
			binexp = 1 - shift;
		}
		binexp -= $DoubleConsts::EXP_BIAS;
		int32_t lowOrderZeros = $Long::numberOfTrailingZeros(bigBbits);
		$usrAssign(bigBbits, lowOrderZeros);
		int32_t bigIntExp = binexp - 52 + lowOrderZeros;
		int32_t bigIntNBits = 52 + 1 - lowOrderZeros;
		int32_t B2 = B5;
		int32_t D2 = D5;
		int32_t Ulp2 = 0;
		if (bigIntExp >= 0) {
			B2 += bigIntExp;
		} else {
			D2 -= bigIntExp;
		}
		Ulp2 = B2;
		int32_t hulpbias = 0;
		if (binexp <= -$DoubleConsts::EXP_BIAS) {
			hulpbias = binexp + lowOrderZeros + $DoubleConsts::EXP_BIAS;
		} else {
			hulpbias = 1 + lowOrderZeros;
		}
		B2 += hulpbias;
		D2 += hulpbias;
		int32_t common2 = $Math::min(B2, $Math::min(D2, Ulp2));
		B2 -= common2;
		D2 -= common2;
		Ulp2 -= common2;
		$var($FDBigInteger, bigB, $FDBigInteger::valueOfMulPow52(bigBbits, B5, B2));
		if (bigD == nullptr || prevD2 != D2) {
			$assign(bigD, bigD0->leftShift(D2));
			prevD2 = D2;
		}
		$var($FDBigInteger, diff, nullptr);
		int32_t cmpResult = 0;
		bool overvalue = false;
		if ((cmpResult = $nc(bigB)->cmp(bigD)) > 0) {
			overvalue = true;
			$assign(diff, bigB->leftInplaceSub(bigD));
			if ((bigIntNBits == 1) && (bigIntExp > -$DoubleConsts::EXP_BIAS + 1)) {
				Ulp2 -= 1;
				if (Ulp2 < 0) {
					Ulp2 = 0;
					$assign(diff, $nc(diff)->leftShift(1));
				}
			}
		} else if (cmpResult < 0) {
			overvalue = false;
			$assign(diff, $nc(bigD)->rightInplaceSub(bigB));
		} else {
			correctionLoop$break = true;
			break;
		}
		cmpResult = $nc(diff)->cmpPow52(B5, Ulp2);
		if ((cmpResult) < 0) {
			correctionLoop$break = true;
			break;
		} else if (cmpResult == 0) {
			if (((int64_t)(ieeeBits & (uint64_t)(int64_t)1)) != 0) {
				ieeeBits += overvalue ? -1 : 1;
			}
			correctionLoop$break = true;
			break;
		} else {
			ieeeBits += overvalue ? -1 : 1;
			if (ieeeBits == 0 || ieeeBits == $DoubleConsts::EXP_BIT_MASK) {
				correctionLoop$break = true;
				break;
			}
			continue;
		}
	}
	if (this->isNegative) {
		ieeeBits |= $DoubleConsts::SIGN_BIT_MASK;
	}
	return $Double::longBitsToDouble(ieeeBits);
}

float FloatingDecimal$ASCIIToBinaryBuffer::floatValue() {
	int32_t kDigits = $Math::min(this->nDigits, 7 + 1);
	int32_t iValue = (int32_t)$nc(this->digits)->get(0) - (int32_t)u'0';
	for (int32_t i = 1; i < kDigits; ++i) {
		iValue = iValue * 10 + (int32_t)$nc(this->digits)->get(i) - (int32_t)u'0';
	}
	float fValue = (float)iValue;
	int32_t exp = this->decExponent - kDigits;
	if (this->nDigits <= 7) {
		if (exp == 0 || fValue == 0.0f) {
			return (this->isNegative) ? -fValue : fValue;
		} else if (exp >= 0) {
			if (exp <= FloatingDecimal$ASCIIToBinaryBuffer::SINGLE_MAX_SMALL_TEN) {
				fValue *= $nc(FloatingDecimal$ASCIIToBinaryBuffer::SINGLE_SMALL_10_POW)->get(exp);
				return (this->isNegative) ? -fValue : fValue;
			}
			int32_t slop = 7 - kDigits;
			if (exp <= FloatingDecimal$ASCIIToBinaryBuffer::SINGLE_MAX_SMALL_TEN + slop) {
				fValue *= $nc(FloatingDecimal$ASCIIToBinaryBuffer::SINGLE_SMALL_10_POW)->get(slop);
				fValue *= $nc(FloatingDecimal$ASCIIToBinaryBuffer::SINGLE_SMALL_10_POW)->get(exp - slop);
				return (this->isNegative) ? -fValue : fValue;
			}
		} else if (exp >= -FloatingDecimal$ASCIIToBinaryBuffer::SINGLE_MAX_SMALL_TEN) {
			fValue /= $nc(FloatingDecimal$ASCIIToBinaryBuffer::SINGLE_SMALL_10_POW)->get(-exp);
			return (this->isNegative) ? -fValue : fValue;
		}
	} else if ((this->decExponent >= this->nDigits) && (this->nDigits + this->decExponent <= 15)) {
		int64_t lValue = (int64_t)iValue;
		for (int32_t i = kDigits; i < this->nDigits; ++i) {
			lValue = lValue * (int64_t)10 + (int64_t)((int32_t)$nc(this->digits)->get(i) - (int32_t)u'0');
		}
		double dValue = (double)lValue;
		exp = this->decExponent - this->nDigits;
		dValue *= $nc(FloatingDecimal$ASCIIToBinaryBuffer::SMALL_10_POW)->get(exp);
		fValue = (float)dValue;
		return (this->isNegative) ? -fValue : fValue;
	}
	double dValue = fValue;
	if (exp > 0) {
		if (this->decExponent > 38 + 1) {
			$init($Float);
			return (this->isNegative) ? $Float::NEGATIVE_INFINITY : $Float::POSITIVE_INFINITY;
		}
		if (((int32_t)(exp & (uint32_t)15)) != 0) {
			dValue *= $nc(FloatingDecimal$ASCIIToBinaryBuffer::SMALL_10_POW)->get((int32_t)(exp & (uint32_t)15));
		}
		if ((exp >>= 4) != 0) {
			int32_t j = 0;
			for (j = 0; exp > 0; ++j, exp >>= 1) {
				if (((int32_t)(exp & (uint32_t)1)) != 0) {
					dValue *= $nc(FloatingDecimal$ASCIIToBinaryBuffer::BIG_10_POW)->get(j);
				}
			}
		}
	} else if (exp < 0) {
		exp = -exp;
		if (this->decExponent < -45 - 1) {
			return (this->isNegative) ? -0.0f : 0.0f;
		}
		if (((int32_t)(exp & (uint32_t)15)) != 0) {
			dValue /= $nc(FloatingDecimal$ASCIIToBinaryBuffer::SMALL_10_POW)->get((int32_t)(exp & (uint32_t)15));
		}
		if ((exp >>= 4) != 0) {
			int32_t j = 0;
			for (j = 0; exp > 0; ++j, exp >>= 1) {
				if (((int32_t)(exp & (uint32_t)1)) != 0) {
					dValue *= $nc(FloatingDecimal$ASCIIToBinaryBuffer::TINY_10_POW)->get(j);
				}
			}
		}
	}
	$init($Float);
	fValue = $Math::max($Float::MIN_VALUE, $Math::min($Float::MAX_VALUE, (float)dValue));
	if (this->nDigits > 200) {
		this->nDigits = 200 + 1;
		$nc(this->digits)->set(200, u'1');
	}
	$var($FDBigInteger, bigD0, $new($FDBigInteger, iValue, this->digits, kDigits, this->nDigits));
	exp = this->decExponent - this->nDigits;
	int32_t ieeeBits = $Float::floatToRawIntBits(fValue);
	int32_t B5 = $Math::max(0, -exp);
	int32_t D5 = $Math::max(0, exp);
	$assign(bigD0, bigD0->multByPow52(D5, 0));
	$nc(bigD0)->makeImmutable();
	$var($FDBigInteger, bigD, nullptr);
	int32_t prevD2 = 0;
	bool correctionLoop$break = false;
	while (true) {
		int32_t binexp = (int32_t)((uint32_t)ieeeBits >> 23);
		int32_t bigBbits = (int32_t)(ieeeBits & (uint32_t)$FloatConsts::SIGNIF_BIT_MASK);
		if (binexp > 0) {
			bigBbits |= 0x00800000;
		} else {
			if (!FloatingDecimal$ASCIIToBinaryBuffer::$assertionsDisabled && !(bigBbits != 0)) {
				$throwNew($AssertionError, bigBbits);
			}
			int32_t leadingZeros = $Integer::numberOfLeadingZeros(bigBbits);
			int32_t shift = leadingZeros - (31 - 23);
			bigBbits <<= shift;
			binexp = 1 - shift;
		}
		binexp -= $FloatConsts::EXP_BIAS;
		int32_t lowOrderZeros = $Integer::numberOfTrailingZeros(bigBbits);
		$usrAssign(bigBbits, lowOrderZeros);
		int32_t bigIntExp = binexp - 23 + lowOrderZeros;
		int32_t bigIntNBits = 23 + 1 - lowOrderZeros;
		int32_t B2 = B5;
		int32_t D2 = D5;
		int32_t Ulp2 = 0;
		if (bigIntExp >= 0) {
			B2 += bigIntExp;
		} else {
			D2 -= bigIntExp;
		}
		Ulp2 = B2;
		int32_t hulpbias = 0;
		if (binexp <= -$FloatConsts::EXP_BIAS) {
			hulpbias = binexp + lowOrderZeros + $FloatConsts::EXP_BIAS;
		} else {
			hulpbias = 1 + lowOrderZeros;
		}
		B2 += hulpbias;
		D2 += hulpbias;
		int32_t common2 = $Math::min(B2, $Math::min(D2, Ulp2));
		B2 -= common2;
		D2 -= common2;
		Ulp2 -= common2;
		$var($FDBigInteger, bigB, $FDBigInteger::valueOfMulPow52(bigBbits, B5, B2));
		if (bigD == nullptr || prevD2 != D2) {
			$assign(bigD, bigD0->leftShift(D2));
			prevD2 = D2;
		}
		$var($FDBigInteger, diff, nullptr);
		int32_t cmpResult = 0;
		bool overvalue = false;
		if ((cmpResult = $nc(bigB)->cmp(bigD)) > 0) {
			overvalue = true;
			$assign(diff, bigB->leftInplaceSub(bigD));
			if ((bigIntNBits == 1) && (bigIntExp > -$FloatConsts::EXP_BIAS + 1)) {
				Ulp2 -= 1;
				if (Ulp2 < 0) {
					Ulp2 = 0;
					$assign(diff, $nc(diff)->leftShift(1));
				}
			}
		} else if (cmpResult < 0) {
			overvalue = false;
			$assign(diff, $nc(bigD)->rightInplaceSub(bigB));
		} else {
			correctionLoop$break = true;
			break;
		}
		cmpResult = $nc(diff)->cmpPow52(B5, Ulp2);
		if ((cmpResult) < 0) {
			correctionLoop$break = true;
			break;
		} else if (cmpResult == 0) {
			if (((int32_t)(ieeeBits & (uint32_t)1)) != 0) {
				ieeeBits += overvalue ? -1 : 1;
			}
			correctionLoop$break = true;
			break;
		} else {
			ieeeBits += overvalue ? -1 : 1;
			if (ieeeBits == 0 || ieeeBits == $FloatConsts::EXP_BIT_MASK) {
				correctionLoop$break = true;
				break;
			}
			continue;
		}
	}
	if (this->isNegative) {
		ieeeBits |= $FloatConsts::SIGN_BIT_MASK;
	}
	return $Float::intBitsToFloat(ieeeBits);
}

void clinit$FloatingDecimal$ASCIIToBinaryBuffer($Class* class$) {
	$load($FloatingDecimal);
	FloatingDecimal$ASCIIToBinaryBuffer::$assertionsDisabled = !$FloatingDecimal::class$->desiredAssertionStatus();
	$assignStatic(FloatingDecimal$ASCIIToBinaryBuffer::SMALL_10_POW, $new($doubles, {
		1.0,
		10.0,
		100.0,
		1000.0,
		10000.0,
		100000.0,
		1000000.0,
		1.0E7,
		1.0E8,
		1.0E9,
		1.0E10,
		1.0E11,
		1.0E12,
		1.0E13,
		1.0E14,
		1.0E15,
		1.0E16,
		1.0E17,
		1.0E18,
		1.0E19,
		1.0E20,
		1.0E21,
		1.0E22
	}));
	$assignStatic(FloatingDecimal$ASCIIToBinaryBuffer::SINGLE_SMALL_10_POW, $new($floats, {
		1.0f,
		10.0f,
		100.0f,
		1000.0f,
		10000.0f,
		100000.0f,
		1000000.0f,
		1.0E7f,
		1.0E8f,
		1.0E9f,
		1.0E10f
	}));
	$assignStatic(FloatingDecimal$ASCIIToBinaryBuffer::BIG_10_POW, $new($doubles, {
		1.0E16,
		1.0E32,
		1.0E64,
		1.0E128,
		1.0E256
	}));
	$assignStatic(FloatingDecimal$ASCIIToBinaryBuffer::TINY_10_POW, $new($doubles, {
		1.0E-16,
		1.0E-32,
		1.0E-64,
		1.0E-128,
		1.0E-256
	}));
	FloatingDecimal$ASCIIToBinaryBuffer::MAX_SMALL_TEN = $nc(FloatingDecimal$ASCIIToBinaryBuffer::SMALL_10_POW)->length - 1;
	FloatingDecimal$ASCIIToBinaryBuffer::SINGLE_MAX_SMALL_TEN = $nc(FloatingDecimal$ASCIIToBinaryBuffer::SINGLE_SMALL_10_POW)->length - 1;
}

FloatingDecimal$ASCIIToBinaryBuffer::FloatingDecimal$ASCIIToBinaryBuffer() {
}

$Class* FloatingDecimal$ASCIIToBinaryBuffer::load$($String* name, bool initialize) {
	$loadClass(FloatingDecimal$ASCIIToBinaryBuffer, name, initialize, &_FloatingDecimal$ASCIIToBinaryBuffer_ClassInfo_, clinit$FloatingDecimal$ASCIIToBinaryBuffer, allocate$FloatingDecimal$ASCIIToBinaryBuffer);
	return class$;
}

$Class* FloatingDecimal$ASCIIToBinaryBuffer::class$ = nullptr;

		} // math
	} // internal
} // jdk