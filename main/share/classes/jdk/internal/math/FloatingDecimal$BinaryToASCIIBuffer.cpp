#include <jdk/internal/math/FloatingDecimal$BinaryToASCIIBuffer.h>

#include <java/lang/Appendable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Arrays.h>
#include <jdk/internal/math/DoubleConsts.h>
#include <jdk/internal/math/FDBigInteger.h>
#include <jdk/internal/math/FloatingDecimal.h>
#include <jcpp.h>

#undef EXP_BIAS
#undef EXP_BIT_MASK
#undef LONG_5_POW
#undef MAX_VALUE
#undef N_5_BITS
#undef SIGNIF_BIT_MASK
#undef SIGN_BIT_MASK
#undef SMALL_5_POW
#undef ZERO

using $Appendable = ::java::lang::Appendable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Arrays = ::java::util::Arrays;
using $DoubleConsts = ::jdk::internal::math::DoubleConsts;
using $FDBigInteger = ::jdk::internal::math::FDBigInteger;
using $FloatingDecimal = ::jdk::internal::math::FloatingDecimal;
using $FloatingDecimal$BinaryToASCIIConverter = ::jdk::internal::math::FloatingDecimal$BinaryToASCIIConverter;

namespace jdk {
	namespace internal {
		namespace math {

$FieldInfo _FloatingDecimal$BinaryToASCIIBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FloatingDecimal$BinaryToASCIIBuffer, $assertionsDisabled)},
	{"isNegative", "Z", nullptr, $PRIVATE, $field(FloatingDecimal$BinaryToASCIIBuffer, isNegative$)},
	{"decExponent", "I", nullptr, $PRIVATE, $field(FloatingDecimal$BinaryToASCIIBuffer, decExponent)},
	{"firstDigitIndex", "I", nullptr, $PRIVATE, $field(FloatingDecimal$BinaryToASCIIBuffer, firstDigitIndex)},
	{"nDigits", "I", nullptr, $PRIVATE, $field(FloatingDecimal$BinaryToASCIIBuffer, nDigits)},
	{"digits", "[C", nullptr, $PRIVATE | $FINAL, $field(FloatingDecimal$BinaryToASCIIBuffer, digits)},
	{"buffer", "[C", nullptr, $PRIVATE | $FINAL, $field(FloatingDecimal$BinaryToASCIIBuffer, buffer)},
	{"exactDecimalConversion", "Z", nullptr, $PRIVATE, $field(FloatingDecimal$BinaryToASCIIBuffer, exactDecimalConversion)},
	{"decimalDigitsRoundedUp", "Z", nullptr, $PRIVATE, $field(FloatingDecimal$BinaryToASCIIBuffer, decimalDigitsRoundedUp)},
	{"insignificantDigitsNumber", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal$BinaryToASCIIBuffer, insignificantDigitsNumber)},
	{"N_5_BITS", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatingDecimal$BinaryToASCIIBuffer, N_5_BITS)},
	{}
};

$MethodInfo _FloatingDecimal$BinaryToASCIIBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FloatingDecimal$BinaryToASCIIBuffer::*)()>(&FloatingDecimal$BinaryToASCIIBuffer::init$))},
	{"<init>", "(Z[C)V", nullptr, 0, $method(static_cast<void(FloatingDecimal$BinaryToASCIIBuffer::*)(bool,$chars*)>(&FloatingDecimal$BinaryToASCIIBuffer::init$))},
	{"appendTo", "(Ljava/lang/Appendable;)V", nullptr, $PUBLIC},
	{"decimalDigitsExact", "()Z", nullptr, $PUBLIC},
	{"developLongDigits", "(IJI)V", nullptr, $PRIVATE, $method(static_cast<void(FloatingDecimal$BinaryToASCIIBuffer::*)(int32_t,int64_t,int32_t)>(&FloatingDecimal$BinaryToASCIIBuffer::developLongDigits))},
	{"digitsRoundedUp", "()Z", nullptr, $PUBLIC},
	{"dtoa", "(IJIZ)V", nullptr, $PRIVATE, $method(static_cast<void(FloatingDecimal$BinaryToASCIIBuffer::*)(int32_t,int64_t,int32_t,bool)>(&FloatingDecimal$BinaryToASCIIBuffer::dtoa))},
	{"estimateDecExp", "(JI)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int64_t,int32_t)>(&FloatingDecimal$BinaryToASCIIBuffer::estimateDecExp))},
	{"getChars", "([C)I", nullptr, $PRIVATE, $method(static_cast<int32_t(FloatingDecimal$BinaryToASCIIBuffer::*)($chars*)>(&FloatingDecimal$BinaryToASCIIBuffer::getChars))},
	{"getDecimalExponent", "()I", nullptr, $PUBLIC},
	{"getDigits", "([C)I", nullptr, $PUBLIC},
	{"insignificantDigits", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&FloatingDecimal$BinaryToASCIIBuffer::insignificantDigits))},
	{"insignificantDigitsForPow2", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&FloatingDecimal$BinaryToASCIIBuffer::insignificantDigitsForPow2))},
	{"isExceptional", "()Z", nullptr, $PUBLIC},
	{"isNegative", "()Z", nullptr, $PUBLIC},
	{"roundup", "()V", nullptr, $PRIVATE, $method(static_cast<void(FloatingDecimal$BinaryToASCIIBuffer::*)()>(&FloatingDecimal$BinaryToASCIIBuffer::roundup))},
	{"setSign", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(FloatingDecimal$BinaryToASCIIBuffer::*)(bool)>(&FloatingDecimal$BinaryToASCIIBuffer::setSign))},
	{"toJavaFormatString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FloatingDecimal$BinaryToASCIIBuffer_InnerClassesInfo_[] = {
	{"jdk.internal.math.FloatingDecimal$BinaryToASCIIBuffer", "jdk.internal.math.FloatingDecimal", "BinaryToASCIIBuffer", $STATIC},
	{"jdk.internal.math.FloatingDecimal$BinaryToASCIIConverter", "jdk.internal.math.FloatingDecimal", "BinaryToASCIIConverter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FloatingDecimal$BinaryToASCIIBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.math.FloatingDecimal$BinaryToASCIIBuffer",
	"java.lang.Object",
	"jdk.internal.math.FloatingDecimal$BinaryToASCIIConverter",
	_FloatingDecimal$BinaryToASCIIBuffer_FieldInfo_,
	_FloatingDecimal$BinaryToASCIIBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_FloatingDecimal$BinaryToASCIIBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.math.FloatingDecimal"
};

$Object* allocate$FloatingDecimal$BinaryToASCIIBuffer($Class* clazz) {
	return $of($alloc(FloatingDecimal$BinaryToASCIIBuffer));
}

bool FloatingDecimal$BinaryToASCIIBuffer::$assertionsDisabled = false;
$ints* FloatingDecimal$BinaryToASCIIBuffer::insignificantDigitsNumber = nullptr;
$ints* FloatingDecimal$BinaryToASCIIBuffer::N_5_BITS = nullptr;

void FloatingDecimal$BinaryToASCIIBuffer::init$() {
	$set(this, buffer, $new($chars, 26));
	this->exactDecimalConversion = false;
	this->decimalDigitsRoundedUp = false;
	$set(this, digits, $new($chars, 20));
}

void FloatingDecimal$BinaryToASCIIBuffer::init$(bool isNegative, $chars* digits) {
	$set(this, buffer, $new($chars, 26));
	this->exactDecimalConversion = false;
	this->decimalDigitsRoundedUp = false;
	this->isNegative$ = isNegative;
	this->decExponent = 0;
	$set(this, digits, digits);
	this->firstDigitIndex = 0;
	this->nDigits = $nc(digits)->length;
}

$String* FloatingDecimal$BinaryToASCIIBuffer::toJavaFormatString() {
	int32_t len = getChars(this->buffer);
	return $new($String, this->buffer, 0, len);
}

void FloatingDecimal$BinaryToASCIIBuffer::appendTo($Appendable* buf) {
	int32_t len = getChars(this->buffer);
	if ($instanceOf($StringBuilder, buf)) {
		$nc(($cast($StringBuilder, buf)))->append(this->buffer, 0, len);
	} else if ($instanceOf($StringBuffer, buf)) {
		$nc(($cast($StringBuffer, buf)))->append(this->buffer, 0, len);
	} else if (!FloatingDecimal$BinaryToASCIIBuffer::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
}

int32_t FloatingDecimal$BinaryToASCIIBuffer::getDecimalExponent() {
	return this->decExponent;
}

int32_t FloatingDecimal$BinaryToASCIIBuffer::getDigits($chars* digits) {
	$System::arraycopy(this->digits, this->firstDigitIndex, digits, 0, this->nDigits);
	return this->nDigits;
}

bool FloatingDecimal$BinaryToASCIIBuffer::isNegative() {
	return this->isNegative$;
}

bool FloatingDecimal$BinaryToASCIIBuffer::isExceptional() {
	return false;
}

bool FloatingDecimal$BinaryToASCIIBuffer::digitsRoundedUp() {
	return this->decimalDigitsRoundedUp;
}

bool FloatingDecimal$BinaryToASCIIBuffer::decimalDigitsExact() {
	return this->exactDecimalConversion;
}

void FloatingDecimal$BinaryToASCIIBuffer::setSign(bool isNegative) {
	this->isNegative$ = isNegative;
}

void FloatingDecimal$BinaryToASCIIBuffer::developLongDigits(int32_t decExponent, int64_t lvalue, int32_t insignificantDigits) {
	if (insignificantDigits != 0) {
		$init($FDBigInteger);
		int64_t pow10 = $sl($nc($FDBigInteger::LONG_5_POW)->get(insignificantDigits), insignificantDigits);
		int64_t residue = $mod(lvalue, pow10);
		lvalue /= pow10;
		decExponent += insignificantDigits;
		if (residue >= (pow10 >> 1)) {
			++lvalue;
		}
	}
	int32_t digitno = $nc(this->digits)->length - 1;
	int32_t c = 0;
	if (lvalue <= $Integer::MAX_VALUE) {
		if (!FloatingDecimal$BinaryToASCIIBuffer::$assertionsDisabled && !(lvalue > (int64_t)0)) {
			$throwNew($AssertionError, lvalue);
		}
		int32_t ivalue = (int32_t)lvalue;
		c = ivalue % 10;
		ivalue /= 10;
		while (c == 0) {
			++decExponent;
			c = ivalue % 10;
			ivalue /= 10;
		}
		while (ivalue != 0) {
			$nc(this->digits)->set(digitno--, (char16_t)(c + u'0'));
			++decExponent;
			c = ivalue % 10;
			ivalue /= 10;
		}
		$nc(this->digits)->set(digitno, (char16_t)(c + u'0'));
	} else {
		c = (int32_t)($mod(lvalue, (int64_t)10));
		lvalue /= 10;
		while (c == 0) {
			++decExponent;
			c = (int32_t)($mod(lvalue, (int64_t)10));
			lvalue /= 10;
		}
		while (lvalue != (int64_t)0) {
			$nc(this->digits)->set(digitno--, (char16_t)(c + u'0'));
			++decExponent;
			c = (int32_t)($mod(lvalue, (int64_t)10));
			lvalue /= 10;
		}
		$nc(this->digits)->set(digitno, (char16_t)(c + u'0'));
	}
	this->decExponent = decExponent + 1;
	this->firstDigitIndex = digitno;
	this->nDigits = $nc(this->digits)->length - digitno;
}

void FloatingDecimal$BinaryToASCIIBuffer::dtoa(int32_t binExp, int64_t fractBits, int32_t nSignificantBits, bool isCompatibleFormat) {
	$useLocalCurrentObjectStackCache();
	if (!FloatingDecimal$BinaryToASCIIBuffer::$assertionsDisabled && !(fractBits > 0)) {
		$throwNew($AssertionError);
	}
	if (!FloatingDecimal$BinaryToASCIIBuffer::$assertionsDisabled && !(((int64_t)(fractBits & (uint64_t)(int64_t)0x0010000000000000)) != 0)) {
		$throwNew($AssertionError);
	}
	int32_t tailZeros = $Long::numberOfTrailingZeros(fractBits);
	int32_t nFractBits = 52 + 1 - tailZeros;
	this->decimalDigitsRoundedUp = false;
	this->exactDecimalConversion = false;
	int32_t nTinyBits = $Math::max(0, nFractBits - binExp - 1);
	if (binExp <= 62 && binExp >= -21) {
		$init($FDBigInteger);
		if ((nTinyBits < $nc($FDBigInteger::LONG_5_POW)->length) && ((nFractBits + $nc(FloatingDecimal$BinaryToASCIIBuffer::N_5_BITS)->get(nTinyBits)) < 64)) {
			if (nTinyBits == 0) {
				int32_t insignificant = 0;
				if (binExp > nSignificantBits) {
					insignificant = insignificantDigitsForPow2(binExp - nSignificantBits - 1);
				} else {
					insignificant = 0;
				}
				if (binExp >= 52) {
					fractBits <<= (binExp - 52);
				} else {
					$usrAssign(fractBits, 52 - binExp);
				}
				developLongDigits(0, fractBits, insignificant);
				return;
			}
		}
	}
	int32_t decExp = estimateDecExp(fractBits, binExp);
	int32_t B2 = 0;
	int32_t B5 = 0;
	int32_t S2 = 0;
	int32_t S5 = 0;
	int32_t M2 = 0;
	int32_t M5 = 0;
	B5 = $Math::max(0, -decExp);
	B2 = B5 + nTinyBits + binExp;
	S5 = $Math::max(0, decExp);
	S2 = S5 + nTinyBits;
	M5 = B5;
	M2 = B2 - nSignificantBits;
	$usrAssign(fractBits, tailZeros);
	B2 -= nFractBits - 1;
	int32_t common2factor = $Math::min(B2, S2);
	B2 -= common2factor;
	S2 -= common2factor;
	M2 -= common2factor;
	if (nFractBits == 1) {
		M2 -= 1;
	}
	if (M2 < 0) {
		B2 -= M2;
		S2 -= M2;
		M2 = 0;
	}
	int32_t ndigit = 0;
	bool low = false;
	bool high = false;
	int64_t lowDigitDifference = 0;
	int32_t q = 0;
	int32_t Bbits = nFractBits + B2 + ((B5 < $nc(FloatingDecimal$BinaryToASCIIBuffer::N_5_BITS)->length) ? $nc(FloatingDecimal$BinaryToASCIIBuffer::N_5_BITS)->get(B5) : (B5 * 3));
	int32_t tenSbits = S2 + 1 + (((S5 + 1) < $nc(FloatingDecimal$BinaryToASCIIBuffer::N_5_BITS)->length) ? $nc(FloatingDecimal$BinaryToASCIIBuffer::N_5_BITS)->get(S5 + 1) : ((S5 + 1) * 3));
	if (Bbits < 64 && tenSbits < 64) {
		if (Bbits < 32 && tenSbits < 32) {
			$init($FDBigInteger);
			int32_t b = $sl((int32_t)fractBits * $nc($FDBigInteger::SMALL_5_POW)->get(B5), B2);
			int32_t s = $sl($nc($FDBigInteger::SMALL_5_POW)->get(S5), S2);
			int32_t m = $sl($nc($FDBigInteger::SMALL_5_POW)->get(M5), M2);
			int32_t tens = s * 10;
			ndigit = 0;
			q = $div(b, s);
			b = 10 * ($mod(b, s));
			m *= 10;
			low = (b < m);
			high = (b + m > tens);
			if (!FloatingDecimal$BinaryToASCIIBuffer::$assertionsDisabled && !(q < 10)) {
				$throwNew($AssertionError, q);
			}
			if ((q == 0) && !high) {
				--decExp;
			} else {
				$nc(this->digits)->set(ndigit++, (char16_t)(u'0' + q));
			}
			if (!isCompatibleFormat || decExp < -3 || decExp >= 8) {
				high = (low = false);
			}
			while (!low && !high) {
				q = $div(b, s);
				b = 10 * ($mod(b, s));
				m *= 10;
				if (!FloatingDecimal$BinaryToASCIIBuffer::$assertionsDisabled && !(q < 10)) {
					$throwNew($AssertionError, q);
				}
				if (m > (int64_t)0) {
					low = (b < m);
					high = (b + m > tens);
				} else {
					low = true;
					high = true;
				}
				$nc(this->digits)->set(ndigit++, (char16_t)(u'0' + q));
			}
			lowDigitDifference = (b << 1) - tens;
			this->exactDecimalConversion = (b == 0);
		} else {
			$init($FDBigInteger);
			int64_t b = $sl(fractBits * $nc($FDBigInteger::LONG_5_POW)->get(B5), B2);
			int64_t s = $sl($nc($FDBigInteger::LONG_5_POW)->get(S5), S2);
			int64_t m = $sl($nc($FDBigInteger::LONG_5_POW)->get(M5), M2);
			int64_t tens = s * (int64_t)10;
			ndigit = 0;
			q = (int32_t)($div(b, s));
			b = (int64_t)10 * ($mod(b, s));
			m *= 10;
			low = (b < m);
			high = (b + m > tens);
			if (!FloatingDecimal$BinaryToASCIIBuffer::$assertionsDisabled && !(q < 10)) {
				$throwNew($AssertionError, q);
			}
			if ((q == 0) && !high) {
				--decExp;
			} else {
				$nc(this->digits)->set(ndigit++, (char16_t)(u'0' + q));
			}
			if (!isCompatibleFormat || decExp < -3 || decExp >= 8) {
				high = (low = false);
			}
			while (!low && !high) {
				q = (int32_t)($div(b, s));
				b = 10 * ($mod(b, s));
				m *= 10;
				if (!FloatingDecimal$BinaryToASCIIBuffer::$assertionsDisabled && !(q < 10)) {
					$throwNew($AssertionError, q);
				}
				if (m > (int64_t)0) {
					low = (b < m);
					high = (b + m > tens);
				} else {
					low = true;
					high = true;
				}
				$nc(this->digits)->set(ndigit++, (char16_t)(u'0' + q));
			}
			lowDigitDifference = (b << 1) - tens;
			this->exactDecimalConversion = (b == 0);
		}
	} else {
		$var($FDBigInteger, Sval, $FDBigInteger::valueOfPow52(S5, S2));
		int32_t shiftBias = $nc(Sval)->getNormalizationBias();
		$assign(Sval, Sval->leftShift(shiftBias));
		$var($FDBigInteger, Bval, $FDBigInteger::valueOfMulPow52(fractBits, B5, B2 + shiftBias));
		$var($FDBigInteger, Mval, $FDBigInteger::valueOfPow52(M5 + 1, M2 + shiftBias + 1));
		$var($FDBigInteger, tenSval, $FDBigInteger::valueOfPow52(S5 + 1, S2 + shiftBias + 1));
		ndigit = 0;
		q = $nc(Bval)->quoRemIteration(Sval);
		low = (Bval->cmp(Mval) < 0);
		high = $nc(tenSval)->addAndCmp(Bval, Mval) <= 0;
		if (!FloatingDecimal$BinaryToASCIIBuffer::$assertionsDisabled && !(q < 10)) {
			$throwNew($AssertionError, q);
		}
		if ((q == 0) && !high) {
			--decExp;
		} else {
			$nc(this->digits)->set(ndigit++, (char16_t)(u'0' + q));
		}
		if (!isCompatibleFormat || decExp < -3 || decExp >= 8) {
			high = (low = false);
		}
		while (!low && !high) {
			q = Bval->quoRemIteration(Sval);
			if (!FloatingDecimal$BinaryToASCIIBuffer::$assertionsDisabled && !(q < 10)) {
				$throwNew($AssertionError, q);
			}
			$assign(Mval, $nc(Mval)->multBy10());
			low = (Bval->cmp(Mval) < 0);
			high = tenSval->addAndCmp(Bval, Mval) <= 0;
			$nc(this->digits)->set(ndigit++, (char16_t)(u'0' + q));
		}
		if (high && low) {
			$assign(Bval, Bval->leftShift(1));
			lowDigitDifference = $nc(Bval)->cmp(tenSval);
		} else {
			lowDigitDifference = 0;
		}
		this->exactDecimalConversion = (Bval->cmp($FDBigInteger::ZERO) == 0);
	}
	this->decExponent = decExp + 1;
	this->firstDigitIndex = 0;
	this->nDigits = ndigit;
	if (high) {
		if (low) {
			if (lowDigitDifference == (int64_t)0) {
				if (((int32_t)($nc(this->digits)->get(this->firstDigitIndex + this->nDigits - 1) & (uint32_t)1)) != 0) {
					roundup();
				}
			} else if (lowDigitDifference > 0) {
				roundup();
			}
		} else {
			roundup();
		}
	}
}

void FloatingDecimal$BinaryToASCIIBuffer::roundup() {
	int32_t i = (this->firstDigitIndex + this->nDigits - 1);
	int32_t q = $nc(this->digits)->get(i);
	if (q == u'9') {
		while (q == u'9' && i > this->firstDigitIndex) {
			$nc(this->digits)->set(i, u'0');
			q = $nc(this->digits)->get(--i);
		}
		if (q == u'9') {
			this->decExponent += 1;
			$nc(this->digits)->set(this->firstDigitIndex, u'1');
			return;
		}
	}
	$nc(this->digits)->set(i, (char16_t)(q + 1));
	this->decimalDigitsRoundedUp = true;
}

int32_t FloatingDecimal$BinaryToASCIIBuffer::estimateDecExp(int64_t fractBits, int32_t binExp) {
	$init(FloatingDecimal$BinaryToASCIIBuffer);
	double d2 = $Double::longBitsToDouble((int64_t)0x3FF0000000000000 | ((int64_t)(fractBits & (uint64_t)$DoubleConsts::SIGNIF_BIT_MASK)));
	double d = (d2 - 1.5) * 0.289529654 + 0.176091259 + (double)binExp * 0.301029995663981;
	int64_t dBits = $Double::doubleToRawLongBits(d);
	int32_t exponent = (int32_t)(((int64_t)(dBits & (uint64_t)$DoubleConsts::EXP_BIT_MASK)) >> 52) - $DoubleConsts::EXP_BIAS;
	bool isNegative = ((int64_t)(dBits & (uint64_t)$DoubleConsts::SIGN_BIT_MASK)) != 0;
	if (exponent >= 0 && exponent < 52) {
		int64_t mask = $sr($DoubleConsts::SIGNIF_BIT_MASK, exponent);
		int32_t r = (int32_t)($sr(((int64_t)(dBits & (uint64_t)$DoubleConsts::SIGNIF_BIT_MASK)) | (int64_t)0x0010000000000000, 52 - exponent));
		return isNegative ? ((((int64_t)(mask & (uint64_t)dBits)) == (int64_t)0) ? -r : -r - 1) : r;
	} else if (exponent < 0) {
		return ((((int64_t)(dBits & (uint64_t)~$DoubleConsts::SIGN_BIT_MASK)) == 0) ? 0 : ((isNegative) ? -1 : 0));
	} else {
		return $cast(int32_t, d);
	}
}

int32_t FloatingDecimal$BinaryToASCIIBuffer::insignificantDigits(int32_t insignificant) {
	$init(FloatingDecimal$BinaryToASCIIBuffer);
	int32_t i = 0;
	for (i = 0; insignificant >= (int64_t)10; ++i) {
		insignificant /= 10;
	}
	return i;
}

int32_t FloatingDecimal$BinaryToASCIIBuffer::insignificantDigitsForPow2(int32_t p2) {
	$init(FloatingDecimal$BinaryToASCIIBuffer);
	if (p2 > 1 && p2 < $nc(FloatingDecimal$BinaryToASCIIBuffer::insignificantDigitsNumber)->length) {
		return $nc(FloatingDecimal$BinaryToASCIIBuffer::insignificantDigitsNumber)->get(p2);
	}
	return 0;
}

int32_t FloatingDecimal$BinaryToASCIIBuffer::getChars($chars* result) {
	if (!FloatingDecimal$BinaryToASCIIBuffer::$assertionsDisabled && !(this->nDigits <= 19)) {
		$throwNew($AssertionError, this->nDigits);
	}
	int32_t i = 0;
	if (this->isNegative$) {
		$nc(result)->set(0, u'-');
		i = 1;
	}
	if (this->decExponent > 0 && this->decExponent < 8) {
		int32_t charLength = $Math::min(this->nDigits, this->decExponent);
		$System::arraycopy(this->digits, this->firstDigitIndex, result, i, charLength);
		i += charLength;
		if (charLength < this->decExponent) {
			charLength = this->decExponent - charLength;
			$Arrays::fill(result, i, i + charLength, u'0');
			i += charLength;
			$nc(result)->set(i++, u'.');
			result->set(i++, u'0');
		} else {
			$nc(result)->set(i++, u'.');
			if (charLength < this->nDigits) {
				int32_t t = this->nDigits - charLength;
				$System::arraycopy(this->digits, this->firstDigitIndex + charLength, result, i, t);
				i += t;
			} else {
				result->set(i++, u'0');
			}
		}
	} else if (this->decExponent <= 0 && this->decExponent > -3) {
		$nc(result)->set(i++, u'0');
		result->set(i++, u'.');
		if (this->decExponent != 0) {
			$Arrays::fill(result, i, i - this->decExponent, u'0');
			i -= this->decExponent;
		}
		$System::arraycopy(this->digits, this->firstDigitIndex, result, i, this->nDigits);
		i += this->nDigits;
	} else {
		$nc(result)->set(i++, $nc(this->digits)->get(this->firstDigitIndex));
		result->set(i++, u'.');
		if (this->nDigits > 1) {
			$System::arraycopy(this->digits, this->firstDigitIndex + 1, result, i, this->nDigits - 1);
			i += this->nDigits - 1;
		} else {
			result->set(i++, u'0');
		}
		result->set(i++, u'E');
		int32_t e = 0;
		if (this->decExponent <= 0) {
			result->set(i++, u'-');
			e = -this->decExponent + 1;
		} else {
			e = this->decExponent - 1;
		}
		if (e <= 9) {
			result->set(i++, (char16_t)(e + u'0'));
		} else if (e <= 99) {
			result->set(i++, (char16_t)(e / 10 + u'0'));
			result->set(i++, (char16_t)(e % 10 + u'0'));
		} else {
			result->set(i++, (char16_t)(e / 100 + u'0'));
			$modAssign(e, 100);
			result->set(i++, (char16_t)(e / 10 + u'0'));
			result->set(i++, (char16_t)(e % 10 + u'0'));
		}
	}
	return i;
}

void clinit$FloatingDecimal$BinaryToASCIIBuffer($Class* class$) {
	$load($FloatingDecimal);
	FloatingDecimal$BinaryToASCIIBuffer::$assertionsDisabled = !$FloatingDecimal::class$->desiredAssertionStatus();
	$assignStatic(FloatingDecimal$BinaryToASCIIBuffer::insignificantDigitsNumber, $new($ints, {
		0,
		0,
		0,
		0,
		1,
		1,
		1,
		2,
		2,
		2,
		3,
		3,
		3,
		3,
		4,
		4,
		4,
		5,
		5,
		5,
		6,
		6,
		6,
		6,
		7,
		7,
		7,
		8,
		8,
		8,
		9,
		9,
		9,
		9,
		10,
		10,
		10,
		11,
		11,
		11,
		12,
		12,
		12,
		12,
		13,
		13,
		13,
		14,
		14,
		14,
		15,
		15,
		15,
		15,
		16,
		16,
		16,
		17,
		17,
		17,
		18,
		18,
		18,
		19
	}));
	$assignStatic(FloatingDecimal$BinaryToASCIIBuffer::N_5_BITS, $new($ints, {
		0,
		3,
		5,
		7,
		10,
		12,
		14,
		17,
		19,
		21,
		24,
		26,
		28,
		31,
		33,
		35,
		38,
		40,
		42,
		45,
		47,
		49,
		52,
		54,
		56,
		59,
		61
	}));
}

FloatingDecimal$BinaryToASCIIBuffer::FloatingDecimal$BinaryToASCIIBuffer() {
}

$Class* FloatingDecimal$BinaryToASCIIBuffer::load$($String* name, bool initialize) {
	$loadClass(FloatingDecimal$BinaryToASCIIBuffer, name, initialize, &_FloatingDecimal$BinaryToASCIIBuffer_ClassInfo_, clinit$FloatingDecimal$BinaryToASCIIBuffer, allocate$FloatingDecimal$BinaryToASCIIBuffer);
	return class$;
}

$Class* FloatingDecimal$BinaryToASCIIBuffer::class$ = nullptr;

		} // math
	} // internal
} // jdk