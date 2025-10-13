#include <java/math/MutableBigInteger.h>

#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/math/SignedMutableBigInteger.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef BURNIKEL_ZIEGLER_OFFSET
#undef BURNIKEL_ZIEGLER_THRESHOLD
#undef KNUTH_POW2_THRESH_LEN
#undef KNUTH_POW2_THRESH_ZEROS
#undef MIN_VALUE
#undef ONE
#undef ZERO

using $ArithmeticException = ::java::lang::ArithmeticException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $SignedMutableBigInteger = ::java::math::SignedMutableBigInteger;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace math {

$FieldInfo _MutableBigInteger_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MutableBigInteger, $assertionsDisabled)},
	{"value", "[I", nullptr, 0, $field(MutableBigInteger, value)},
	{"intLen", "I", nullptr, 0, $field(MutableBigInteger, intLen)},
	{"offset", "I", nullptr, 0, $field(MutableBigInteger, offset)},
	{"ONE", "Ljava/math/MutableBigInteger;", nullptr, $STATIC | $FINAL, $staticField(MutableBigInteger, ONE)},
	{"KNUTH_POW2_THRESH_LEN", "I", nullptr, $STATIC | $FINAL, $constField(MutableBigInteger, KNUTH_POW2_THRESH_LEN)},
	{"KNUTH_POW2_THRESH_ZEROS", "I", nullptr, $STATIC | $FINAL, $constField(MutableBigInteger, KNUTH_POW2_THRESH_ZEROS)},
	{}
};

$MethodInfo _MutableBigInteger_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MutableBigInteger::*)()>(&MutableBigInteger::init$))},
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(MutableBigInteger::*)(int32_t)>(&MutableBigInteger::init$))},
	{"<init>", "([I)V", nullptr, 0, $method(static_cast<void(MutableBigInteger::*)($ints*)>(&MutableBigInteger::init$))},
	{"<init>", "(Ljava/math/BigInteger;)V", nullptr, 0, $method(static_cast<void(MutableBigInteger::*)($BigInteger*)>(&MutableBigInteger::init$))},
	{"<init>", "(Ljava/math/MutableBigInteger;)V", nullptr, 0, $method(static_cast<void(MutableBigInteger::*)(MutableBigInteger*)>(&MutableBigInteger::init$))},
	{"add", "(Ljava/math/MutableBigInteger;)V", nullptr, 0},
	{"addDisjoint", "(Ljava/math/MutableBigInteger;I)V", nullptr, 0},
	{"addLower", "(Ljava/math/MutableBigInteger;I)V", nullptr, 0},
	{"addShifted", "(Ljava/math/MutableBigInteger;I)V", nullptr, 0},
	{"binaryGCD", "(Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", nullptr, $PRIVATE, $method(static_cast<MutableBigInteger*(MutableBigInteger::*)(MutableBigInteger*)>(&MutableBigInteger::binaryGCD))},
	{"binaryGcd", "(II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&MutableBigInteger::binaryGcd))},
	{"bitLength", "()J", nullptr, 0},
	{"clear", "()V", nullptr, 0},
	{"compare", "(Ljava/math/MutableBigInteger;)I", nullptr, $FINAL, $method(static_cast<int32_t(MutableBigInteger::*)(MutableBigInteger*)>(&MutableBigInteger::compare))},
	{"compareHalf", "(Ljava/math/MutableBigInteger;)I", nullptr, $FINAL, $method(static_cast<int32_t(MutableBigInteger::*)(MutableBigInteger*)>(&MutableBigInteger::compareHalf))},
	{"compareShifted", "(Ljava/math/MutableBigInteger;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MutableBigInteger::*)(MutableBigInteger*,int32_t)>(&MutableBigInteger::compareShifted))},
	{"copyAndShift", "([III[III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t,$ints*,int32_t,int32_t)>(&MutableBigInteger::copyAndShift))},
	{"copyValue", "(Ljava/math/MutableBigInteger;)V", nullptr, 0},
	{"copyValue", "([I)V", nullptr, 0},
	{"difference", "(Ljava/math/MutableBigInteger;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MutableBigInteger::*)(MutableBigInteger*)>(&MutableBigInteger::difference))},
	{"divWord", "(JI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&MutableBigInteger::divWord))},
	{"divadd", "([I[II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MutableBigInteger::*)($ints*,$ints*,int32_t)>(&MutableBigInteger::divadd))},
	{"divaddLong", "(II[II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MutableBigInteger::*)(int32_t,int32_t,$ints*,int32_t)>(&MutableBigInteger::divaddLong))},
	{"divide", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", nullptr, 0},
	{"divide", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;Z)Ljava/math/MutableBigInteger;", nullptr, 0},
	{"divide", "(JLjava/math/MutableBigInteger;)J", nullptr, 0},
	{"divide2n1n", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", nullptr, $PRIVATE, $method(static_cast<MutableBigInteger*(MutableBigInteger::*)(MutableBigInteger*,MutableBigInteger*)>(&MutableBigInteger::divide2n1n))},
	{"divide3n2n", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", nullptr, $PRIVATE, $method(static_cast<MutableBigInteger*(MutableBigInteger::*)(MutableBigInteger*,MutableBigInteger*)>(&MutableBigInteger::divide3n2n))},
	{"divideAndRemainderBurnikelZiegler", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", nullptr, 0},
	{"divideKnuth", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", nullptr, 0},
	{"divideKnuth", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;Z)Ljava/math/MutableBigInteger;", nullptr, 0},
	{"divideLongMagnitude", "(JLjava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", nullptr, $PRIVATE, $method(static_cast<MutableBigInteger*(MutableBigInteger::*)(int64_t,MutableBigInteger*)>(&MutableBigInteger::divideLongMagnitude))},
	{"divideMagnitude", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;Z)Ljava/math/MutableBigInteger;", nullptr, $PRIVATE, $method(static_cast<MutableBigInteger*(MutableBigInteger::*)(MutableBigInteger*,MutableBigInteger*,bool)>(&MutableBigInteger::divideMagnitude))},
	{"divideOneWord", "(ILjava/math/MutableBigInteger;)I", nullptr, 0},
	{"ensureCapacity", "(I)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(MutableBigInteger::*)(int32_t)>(&MutableBigInteger::ensureCapacity))},
	{"euclidModInverse", "(I)Ljava/math/MutableBigInteger;", nullptr, 0},
	{"fixup", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;I)Ljava/math/MutableBigInteger;", nullptr, $STATIC, $method(static_cast<MutableBigInteger*(*)(MutableBigInteger*,MutableBigInteger*,int32_t)>(&MutableBigInteger::fixup))},
	{"getBlock", "(III)Ljava/math/MutableBigInteger;", nullptr, $PRIVATE, $method(static_cast<MutableBigInteger*(MutableBigInteger::*)(int32_t,int32_t,int32_t)>(&MutableBigInteger::getBlock))},
	{"getInt", "(I)I", nullptr, $PRIVATE | $FINAL, $method(static_cast<int32_t(MutableBigInteger::*)(int32_t)>(&MutableBigInteger::getInt))},
	{"getLong", "(I)J", nullptr, $PRIVATE | $FINAL, $method(static_cast<int64_t(MutableBigInteger::*)(int32_t)>(&MutableBigInteger::getLong))},
	{"getLower", "(I)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<$BigInteger*(MutableBigInteger::*)(int32_t)>(&MutableBigInteger::getLower))},
	{"getLowestSetBit", "()I", nullptr, $PRIVATE | $FINAL, $method(static_cast<int32_t(MutableBigInteger::*)()>(&MutableBigInteger::getLowestSetBit))},
	{"getMagnitudeArray", "()[I", nullptr, $PRIVATE, $method(static_cast<$ints*(MutableBigInteger::*)()>(&MutableBigInteger::getMagnitudeArray))},
	{"hybridGCD", "(Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", nullptr, 0},
	{"inverseMod32", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&MutableBigInteger::inverseMod32))},
	{"inverseMod64", "(J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&MutableBigInteger::inverseMod64))},
	{"isEven", "()Z", nullptr, 0},
	{"isNormal", "()Z", nullptr, 0},
	{"isOdd", "()Z", nullptr, 0},
	{"isOne", "()Z", nullptr, 0},
	{"isZero", "()Z", nullptr, 0},
	{"keepLower", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(MutableBigInteger::*)(int32_t)>(&MutableBigInteger::keepLower))},
	{"leftShift", "(I)V", nullptr, 0},
	{"modInverse", "(Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", nullptr, $PRIVATE, $method(static_cast<MutableBigInteger*(MutableBigInteger::*)(MutableBigInteger*)>(&MutableBigInteger::modInverse))},
	{"modInverseBP2", "(Ljava/math/MutableBigInteger;I)Ljava/math/MutableBigInteger;", nullptr, $STATIC, $method(static_cast<MutableBigInteger*(*)(MutableBigInteger*,int32_t)>(&MutableBigInteger::modInverseBP2))},
	{"modInverseMP2", "(I)Ljava/math/MutableBigInteger;", nullptr, 0},
	{"mul", "(ILjava/math/MutableBigInteger;)V", nullptr, 0},
	{"mulsub", "([I[IIII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MutableBigInteger::*)($ints*,$ints*,int32_t,int32_t,int32_t)>(&MutableBigInteger::mulsub))},
	{"mulsubBorrow", "([I[IIII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MutableBigInteger::*)($ints*,$ints*,int32_t,int32_t,int32_t)>(&MutableBigInteger::mulsubBorrow))},
	{"mulsubLong", "([IIIII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MutableBigInteger::*)($ints*,int32_t,int32_t,int32_t,int32_t)>(&MutableBigInteger::mulsubLong))},
	{"multiply", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)V", nullptr, 0},
	{"mutableModInverse", "(Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", nullptr, 0},
	{"normalize", "()V", nullptr, $FINAL, $method(static_cast<void(MutableBigInteger::*)()>(&MutableBigInteger::normalize))},
	{"ones", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(MutableBigInteger::*)(int32_t)>(&MutableBigInteger::ones))},
	{"primitiveLeftShift", "(I)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(MutableBigInteger::*)(int32_t)>(&MutableBigInteger::primitiveLeftShift))},
	{"primitiveRightShift", "(I)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(MutableBigInteger::*)(int32_t)>(&MutableBigInteger::primitiveRightShift))},
	{"reset", "()V", nullptr, 0},
	{"rightShift", "(I)V", nullptr, 0},
	{"safeLeftShift", "(I)V", nullptr, 0},
	{"safeRightShift", "(I)V", nullptr, 0},
	{"setInt", "(II)V", nullptr, 0},
	{"setValue", "([II)V", nullptr, 0},
	{"sqrt", "()Ljava/math/MutableBigInteger;", nullptr, 0},
	{"subtract", "(Ljava/math/MutableBigInteger;)I", nullptr, 0},
	{"toBigDecimal", "(II)Ljava/math/BigDecimal;", nullptr, 0},
	{"toBigInteger", "(I)Ljava/math/BigInteger;", nullptr, 0},
	{"toBigInteger", "()Ljava/math/BigInteger;", nullptr, 0},
	{"toCompactValue", "(I)J", nullptr, 0},
	{"toIntArray", "()[I", nullptr, 0},
	{"toLong", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(MutableBigInteger::*)()>(&MutableBigInteger::toLong))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unsignedLongCompare", "(JJ)Z", nullptr, $PRIVATE, $method(static_cast<bool(MutableBigInteger::*)(int64_t,int64_t)>(&MutableBigInteger::unsignedLongCompare))},
	{}
};

$ClassInfo _MutableBigInteger_ClassInfo_ = {
	$ACC_SUPER,
	"java.math.MutableBigInteger",
	"java.lang.Object",
	nullptr,
	_MutableBigInteger_FieldInfo_,
	_MutableBigInteger_MethodInfo_
};

$Object* allocate$MutableBigInteger($Class* clazz) {
	return $of($alloc(MutableBigInteger));
}

bool MutableBigInteger::$assertionsDisabled = false;

MutableBigInteger* MutableBigInteger::ONE = nullptr;

void MutableBigInteger::init$() {
	this->offset = 0;
	$set(this, value, $new($ints, 1));
	this->intLen = 0;
}

void MutableBigInteger::init$(int32_t val) {
	this->offset = 0;
	$set(this, value, $new($ints, 1));
	this->intLen = 1;
	$nc(this->value)->set(0, val);
}

void MutableBigInteger::init$($ints* val) {
	this->offset = 0;
	$set(this, value, val);
	this->intLen = $nc(val)->length;
}

void MutableBigInteger::init$($BigInteger* b) {
	this->offset = 0;
	this->intLen = $nc($nc(b)->mag)->length;
	$set(this, value, $Arrays::copyOf(b->mag, this->intLen));
}

void MutableBigInteger::init$(MutableBigInteger* val) {
	this->offset = 0;
	this->intLen = $nc(val)->intLen;
	$set(this, value, $Arrays::copyOfRange(val->value, val->offset, val->offset + this->intLen));
}

void MutableBigInteger::ones(int32_t n) {
	if (n > $nc(this->value)->length) {
		$set(this, value, $new($ints, n));
	}
	$Arrays::fill(this->value, -1);
	this->offset = 0;
	this->intLen = n;
}

$ints* MutableBigInteger::getMagnitudeArray() {
	if (this->offset > 0 || $nc(this->value)->length != this->intLen) {
		$var($ints, tmp, $Arrays::copyOfRange(this->value, this->offset, this->offset + this->intLen));
		$Arrays::fill(this->value, 0);
		this->offset = 0;
		this->intLen = tmp->length;
		$set(this, value, tmp);
	}
	return this->value;
}

int64_t MutableBigInteger::toLong() {
	if (!MutableBigInteger::$assertionsDisabled && !(this->intLen <= 2)) {
		$throwNew($AssertionError, $of("this MutableBigInteger exceeds the range of long"_s));
	}
	if (this->intLen == 0) {
		return 0;
	}
	int64_t d = (int64_t)($nc(this->value)->get(this->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	return (this->intLen == 2) ? (d << 32) | ((int64_t)($nc(this->value)->get(this->offset + 1) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) : d;
}

$BigInteger* MutableBigInteger::toBigInteger(int32_t sign) {
	if (this->intLen == 0 || sign == 0) {
		$init($BigInteger);
		return $BigInteger::ZERO;
	}
	return $new($BigInteger, $(getMagnitudeArray()), sign);
}

$BigInteger* MutableBigInteger::toBigInteger() {
	normalize();
	return toBigInteger(isZero() ? 0 : 1);
}

$BigDecimal* MutableBigInteger::toBigDecimal(int32_t sign, int32_t scale) {
	if (this->intLen == 0 || sign == 0) {
		return $BigDecimal::zeroValueOf(scale);
	}
	$var($ints, mag, getMagnitudeArray());
	int32_t len = $nc(mag)->length;
	int32_t d = mag->get(0);
	if (len > 2 || (d < 0 && len == 2)) {
		return $new($BigDecimal, $$new($BigInteger, mag, sign), (int64_t)0x8000000000000000, scale, 0);
	}
	int64_t v = (len == 2) ? (((int64_t)(mag->get(1) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) | (((int64_t)(d & (uint64_t)(int64_t)0x00000000FFFFFFFF)) << 32)) : (int64_t)(d & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	return $BigDecimal::valueOf(sign == -1 ? -v : v, scale);
}

int64_t MutableBigInteger::toCompactValue(int32_t sign) {
	if (this->intLen == 0 || sign == 0) {
		return 0;
	}
	$var($ints, mag, getMagnitudeArray());
	int32_t len = $nc(mag)->length;
	int32_t d = mag->get(0);
	if (len > 2 || (d < 0 && len == 2)) {
		return 0x8000000000000000;
	}
	int64_t v = (len == 2) ? (((int64_t)(mag->get(1) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) | (((int64_t)(d & (uint64_t)(int64_t)0x00000000FFFFFFFF)) << 32)) : (int64_t)(d & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	return sign == -1 ? -v : v;
}

void MutableBigInteger::clear() {
	this->offset = (this->intLen = 0);
	{
		int32_t index = 0;
		int32_t n = $nc(this->value)->length;
		for (; index < n; ++index) {
			$nc(this->value)->set(index, 0);
		}
	}
}

void MutableBigInteger::reset() {
	this->offset = (this->intLen = 0);
}

int32_t MutableBigInteger::compare(MutableBigInteger* b) {
	int32_t blen = $nc(b)->intLen;
	if (this->intLen < blen) {
		return -1;
	}
	if (this->intLen > blen) {
		return 1;
	}
	$var($ints, bval, b->value);
	{
		int32_t i = this->offset;
		int32_t j = b->offset;
		for (; i < this->intLen + this->offset; ++i, ++j) {
			int32_t b1 = $nc(this->value)->get(i) + (int32_t)0x80000000;
			int32_t b2 = $nc(bval)->get(j) + (int32_t)0x80000000;
			if (b1 < b2) {
				return -1;
			}
			if (b1 > b2) {
				return 1;
			}
		}
	}
	return 0;
}

int32_t MutableBigInteger::compareShifted(MutableBigInteger* b, int32_t ints) {
	int32_t blen = $nc(b)->intLen;
	int32_t alen = this->intLen - ints;
	if (alen < blen) {
		return -1;
	}
	if (alen > blen) {
		return 1;
	}
	$var($ints, bval, b->value);
	{
		int32_t i = this->offset;
		int32_t j = b->offset;
		for (; i < alen + this->offset; ++i, ++j) {
			int32_t b1 = $nc(this->value)->get(i) + (int32_t)0x80000000;
			int32_t b2 = $nc(bval)->get(j) + (int32_t)0x80000000;
			if (b1 < b2) {
				return -1;
			}
			if (b1 > b2) {
				return 1;
			}
		}
	}
	return 0;
}

int32_t MutableBigInteger::compareHalf(MutableBigInteger* b) {
	int32_t blen = $nc(b)->intLen;
	int32_t len = this->intLen;
	if (len <= 0) {
		return blen <= 0 ? 0 : -1;
	}
	if (len > blen) {
		return 1;
	}
	if (len < blen - 1) {
		return -1;
	}
	$var($ints, bval, b->value);
	int32_t bstart = 0;
	int32_t carry = 0;
	if (len != blen) {
		if ($nc(bval)->get(bstart) == 1) {
			++bstart;
			carry = (int32_t)0x80000000;
		} else {
			return -1;
		}
	}
	$var($ints, val, this->value);
	{
		int32_t i = this->offset;
		int32_t j = bstart;
		for (; i < len + this->offset;) {
			int32_t bv = $nc(bval)->get(j++);
			int64_t hb = (int64_t)((((int32_t)((uint32_t)bv >> 1)) + carry) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
			int64_t v = (int64_t)($nc(val)->get(i++) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
			if (v != hb) {
				return v < hb ? -1 : 1;
			}
			carry = ((int32_t)(bv & (uint32_t)1)) << 31;
		}
	}
	return carry == 0 ? 0 : -1;
}

int32_t MutableBigInteger::getLowestSetBit() {
	if (this->intLen == 0) {
		return -1;
	}
	int32_t j = 0;
	int32_t b = 0;
	for (j = this->intLen - 1; (j > 0) && ($nc(this->value)->get(j + this->offset) == 0); --j) {
	}
	b = $nc(this->value)->get(j + this->offset);
	if (b == 0) {
		return -1;
	}
	return ((this->intLen - 1 - j) << 5) + $Integer::numberOfTrailingZeros(b);
}

int32_t MutableBigInteger::getInt(int32_t index) {
	return $nc(this->value)->get(this->offset + index);
}

int64_t MutableBigInteger::getLong(int32_t index) {
	return (int64_t)($nc(this->value)->get(this->offset + index) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
}

void MutableBigInteger::normalize() {
	if (this->intLen == 0) {
		this->offset = 0;
		return;
	}
	int32_t index = this->offset;
	if ($nc(this->value)->get(index) != 0) {
		return;
	}
	int32_t indexBound = index + this->intLen;
	do {
		++index;
	} while (index < indexBound && $nc(this->value)->get(index) == 0);
	int32_t numZeros = index - this->offset;
	this->intLen -= numZeros;
	this->offset = (this->intLen == 0 ? 0 : this->offset + numZeros);
}

void MutableBigInteger::ensureCapacity(int32_t len) {
	if ($nc(this->value)->length < len) {
		$set(this, value, $new($ints, len));
		this->offset = 0;
		this->intLen = len;
	}
}

$ints* MutableBigInteger::toIntArray() {
	$var($ints, result, $new($ints, this->intLen));
	for (int32_t i = 0; i < this->intLen; ++i) {
		result->set(i, $nc(this->value)->get(this->offset + i));
	}
	return result;
}

void MutableBigInteger::setInt(int32_t index, int32_t val) {
	$nc(this->value)->set(this->offset + index, val);
}

void MutableBigInteger::setValue($ints* val, int32_t length) {
	$set(this, value, val);
	this->intLen = length;
	this->offset = 0;
}

void MutableBigInteger::copyValue(MutableBigInteger* src) {
	int32_t len = $nc(src)->intLen;
	if ($nc(this->value)->length < len) {
		$set(this, value, $new($ints, len));
	}
	$System::arraycopy(src->value, src->offset, this->value, 0, len);
	this->intLen = len;
	this->offset = 0;
}

void MutableBigInteger::copyValue($ints* val) {
	int32_t len = $nc(val)->length;
	if ($nc(this->value)->length < len) {
		$set(this, value, $new($ints, len));
	}
	$System::arraycopy(val, 0, this->value, 0, len);
	this->intLen = len;
	this->offset = 0;
}

bool MutableBigInteger::isOne() {
	return (this->intLen == 1) && ($nc(this->value)->get(this->offset) == 1);
}

bool MutableBigInteger::isZero() {
	return (this->intLen == 0);
}

bool MutableBigInteger::isEven() {
	return (this->intLen == 0) || (((int32_t)($nc(this->value)->get(this->offset + this->intLen - 1) & (uint32_t)1)) == 0);
}

bool MutableBigInteger::isOdd() {
	return isZero() ? false : (((int32_t)($nc(this->value)->get(this->offset + this->intLen - 1) & (uint32_t)1)) == 1);
}

bool MutableBigInteger::isNormal() {
	if (this->intLen + this->offset > $nc(this->value)->length) {
		return false;
	}
	if (this->intLen == 0) {
		return true;
	}
	return ($nc(this->value)->get(this->offset) != 0);
}

$String* MutableBigInteger::toString() {
	$var($BigInteger, b, toBigInteger(1));
	return $nc(b)->toString();
}

void MutableBigInteger::safeRightShift(int32_t n) {
	if (n / 32 >= this->intLen) {
		reset();
	} else {
		rightShift(n);
	}
}

void MutableBigInteger::rightShift(int32_t n) {
	if (this->intLen == 0) {
		return;
	}
	int32_t nInts = (int32_t)((uint32_t)n >> 5);
	int32_t nBits = (int32_t)(n & (uint32_t)31);
	this->intLen -= nInts;
	if (nBits == 0) {
		return;
	}
	int32_t bitsInHighWord = $BigInteger::bitLengthForInt($nc(this->value)->get(this->offset));
	if (nBits >= bitsInHighWord) {
		this->primitiveLeftShift(32 - nBits);
		--this->intLen;
	} else {
		primitiveRightShift(nBits);
	}
}

void MutableBigInteger::safeLeftShift(int32_t n) {
	if (n > 0) {
		leftShift(n);
	}
}

void MutableBigInteger::leftShift(int32_t n) {
	if (this->intLen == 0) {
		return;
	}
	int32_t nInts = (int32_t)((uint32_t)n >> 5);
	int32_t nBits = (int32_t)(n & (uint32_t)31);
	int32_t bitsInHighWord = $BigInteger::bitLengthForInt($nc(this->value)->get(this->offset));
	if (n <= (32 - bitsInHighWord)) {
		primitiveLeftShift(nBits);
		return;
	}
	int32_t newLen = this->intLen + nInts + 1;
	if (nBits <= (32 - bitsInHighWord)) {
		--newLen;
	}
	if ($nc(this->value)->length < newLen) {
		$var($ints, result, $new($ints, newLen));
		for (int32_t i = 0; i < this->intLen; ++i) {
			result->set(i, $nc(this->value)->get(this->offset + i));
		}
		setValue(result, newLen);
	} else if ($nc(this->value)->length - this->offset >= newLen) {
		for (int32_t i = 0; i < newLen - this->intLen; ++i) {
			$nc(this->value)->set(this->offset + this->intLen + i, 0);
		}
	} else {
		for (int32_t i = 0; i < this->intLen; ++i) {
			$nc(this->value)->set(i, $nc(this->value)->get(this->offset + i));
		}
		for (int32_t i = this->intLen; i < newLen; ++i) {
			$nc(this->value)->set(i, 0);
		}
		this->offset = 0;
	}
	this->intLen = newLen;
	if (nBits == 0) {
		return;
	}
	if (nBits <= (32 - bitsInHighWord)) {
		primitiveLeftShift(nBits);
	} else {
		primitiveRightShift(32 - nBits);
	}
}

int32_t MutableBigInteger::divadd($ints* a, $ints* result, int32_t offset) {
	int64_t carry = 0;
	for (int32_t j = $nc(a)->length - 1; j >= 0; --j) {
		int64_t sum = ((int64_t)(a->get(j) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + ((int64_t)($nc(result)->get(j + offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + carry;
		result->set(j + offset, (int32_t)sum);
		carry = (int64_t)((uint64_t)sum >> 32);
	}
	return (int32_t)carry;
}

int32_t MutableBigInteger::mulsub($ints* q, $ints* a, int32_t x, int32_t len, int32_t offset) {
	int64_t xLong = (int64_t)(x & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	int64_t carry = 0;
	offset += len;
	for (int32_t j = len - 1; j >= 0; --j) {
		int64_t product = ((int64_t)($nc(a)->get(j) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) * xLong + carry;
		int64_t difference = $nc(q)->get(offset) - product;
		q->set(offset--, (int32_t)difference);
		carry = ((int64_t)((uint64_t)product >> 32)) + ((((int64_t)(difference & (uint64_t)(int64_t)0x00000000FFFFFFFF)) > ((int64_t)((~(int32_t)product) & (uint64_t)(int64_t)0x00000000FFFFFFFF))) ? 1 : 0);
	}
	return (int32_t)carry;
}

int32_t MutableBigInteger::mulsubBorrow($ints* q, $ints* a, int32_t x, int32_t len, int32_t offset) {
	int64_t xLong = (int64_t)(x & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	int64_t carry = 0;
	offset += len;
	for (int32_t j = len - 1; j >= 0; --j) {
		int64_t product = ((int64_t)($nc(a)->get(j) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) * xLong + carry;
		int64_t difference = $nc(q)->get(offset--) - product;
		carry = ((int64_t)((uint64_t)product >> 32)) + ((((int64_t)(difference & (uint64_t)(int64_t)0x00000000FFFFFFFF)) > ((int64_t)((~(int32_t)product) & (uint64_t)(int64_t)0x00000000FFFFFFFF))) ? 1 : 0);
	}
	return (int32_t)carry;
}

void MutableBigInteger::primitiveRightShift(int32_t n) {
	$var($ints, val, this->value);
	int32_t n2 = 32 - n;
	{
		int32_t i = this->offset + this->intLen - 1;
		int32_t c = $nc(val)->get(i);
		for (; i > this->offset; --i) {
			int32_t b = c;
			c = val->get(i - 1);
			val->set(i, ($sl(c, n2)) | ($usr(b, n)));
		}
	}
	$usrAssign((*val)[this->offset], n);
}

void MutableBigInteger::primitiveLeftShift(int32_t n) {
	$var($ints, val, this->value);
	int32_t n2 = 32 - n;
	{
		int32_t i = this->offset;
		int32_t c = $nc(val)->get(i);
		int32_t m = i + this->intLen - 1;
		for (; i < m; ++i) {
			int32_t b = c;
			c = val->get(i + 1);
			val->set(i, ($sl(b, n)) | ($usr(c, n2)));
		}
	}
	(*val)[this->offset + this->intLen - 1] <<= n;
}

$BigInteger* MutableBigInteger::getLower(int32_t n) {
	if (isZero()) {
		$init($BigInteger);
		return $BigInteger::ZERO;
	} else if (this->intLen < n) {
		return toBigInteger(1);
	} else {
		int32_t len = n;
		while (len > 0 && $nc(this->value)->get(this->offset + this->intLen - len) == 0) {
			--len;
		}
		int32_t sign = len > 0 ? 1 : 0;
		return $new($BigInteger, $($Arrays::copyOfRange(this->value, this->offset + this->intLen - len, this->offset + this->intLen)), sign);
	}
}

void MutableBigInteger::keepLower(int32_t n) {
	if (this->intLen >= n) {
		this->offset += this->intLen - n;
		this->intLen = n;
	}
}

void MutableBigInteger::add(MutableBigInteger* addend) {
	int32_t x = this->intLen;
	int32_t y = $nc(addend)->intLen;
	int32_t resultLen = (this->intLen > addend->intLen ? this->intLen : addend->intLen);
	$var($ints, result, $nc(this->value)->length < resultLen ? $new($ints, resultLen) : this->value);
	int32_t rstart = $nc(result)->length - 1;
	int64_t sum = 0;
	int64_t carry = 0;
	while (x > 0 && y > 0) {
		--x;
		--y;
		sum = ((int64_t)($nc(this->value)->get(x + this->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + ((int64_t)($nc(addend->value)->get(y + addend->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + carry;
		result->set(rstart--, (int32_t)sum);
		carry = (int64_t)((uint64_t)sum >> 32);
	}
	while (x > 0) {
		--x;
		if (carry == 0 && result == this->value && rstart == (x + this->offset)) {
			return;
		}
		sum = ((int64_t)($nc(this->value)->get(x + this->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + carry;
		result->set(rstart--, (int32_t)sum);
		carry = (int64_t)((uint64_t)sum >> 32);
	}
	while (y > 0) {
		--y;
		sum = ((int64_t)($nc(addend->value)->get(y + addend->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + carry;
		result->set(rstart--, (int32_t)sum);
		carry = (int64_t)((uint64_t)sum >> 32);
	}
	if (carry > 0) {
		++resultLen;
		if (result->length < resultLen) {
			$var($ints, temp, $new($ints, resultLen));
			$System::arraycopy(result, 0, temp, 1, result->length);
			temp->set(0, 1);
			$assign(result, temp);
		} else {
			result->set(rstart--, 1);
		}
	}
	$set(this, value, result);
	this->intLen = resultLen;
	this->offset = result->length - resultLen;
}

void MutableBigInteger::addShifted(MutableBigInteger* addend, int32_t n) {
	if ($nc(addend)->isZero()) {
		return;
	}
	int32_t x = this->intLen;
	int32_t y = $nc(addend)->intLen + n;
	int32_t resultLen = (this->intLen > y ? this->intLen : y);
	$var($ints, result, $nc(this->value)->length < resultLen ? $new($ints, resultLen) : this->value);
	int32_t rstart = $nc(result)->length - 1;
	int64_t sum = 0;
	int64_t carry = 0;
	while (x > 0 && y > 0) {
		--x;
		--y;
		int32_t bval = y + addend->offset < $nc(addend->value)->length ? $nc(addend->value)->get(y + addend->offset) : 0;
		sum = ((int64_t)($nc(this->value)->get(x + this->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + ((int64_t)(bval & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + carry;
		result->set(rstart--, (int32_t)sum);
		carry = (int64_t)((uint64_t)sum >> 32);
	}
	while (x > 0) {
		--x;
		if (carry == 0 && result == this->value && rstart == (x + this->offset)) {
			return;
		}
		sum = ((int64_t)($nc(this->value)->get(x + this->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + carry;
		result->set(rstart--, (int32_t)sum);
		carry = (int64_t)((uint64_t)sum >> 32);
	}
	while (y > 0) {
		--y;
		int32_t bval = y + addend->offset < $nc(addend->value)->length ? $nc(addend->value)->get(y + addend->offset) : 0;
		sum = ((int64_t)(bval & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + carry;
		result->set(rstart--, (int32_t)sum);
		carry = (int64_t)((uint64_t)sum >> 32);
	}
	if (carry > 0) {
		++resultLen;
		if (result->length < resultLen) {
			$var($ints, temp, $new($ints, resultLen));
			$System::arraycopy(result, 0, temp, 1, result->length);
			temp->set(0, 1);
			$assign(result, temp);
		} else {
			result->set(rstart--, 1);
		}
	}
	$set(this, value, result);
	this->intLen = resultLen;
	this->offset = result->length - resultLen;
}

void MutableBigInteger::addDisjoint(MutableBigInteger* addend, int32_t n) {
	if ($nc(addend)->isZero()) {
		return;
	}
	int32_t x = this->intLen;
	int32_t y = $nc(addend)->intLen + n;
	int32_t resultLen = (this->intLen > y ? this->intLen : y);
	$var($ints, result, nullptr);
	if ($nc(this->value)->length < resultLen) {
		$assign(result, $new($ints, resultLen));
	} else {
		$assign(result, this->value);
		$Arrays::fill(this->value, this->offset + this->intLen, $nc(this->value)->length, 0);
	}
	int32_t rstart = $nc(result)->length - 1;
	$System::arraycopy(this->value, this->offset, result, rstart + 1 - x, x);
	y -= x;
	rstart -= x;
	int32_t len = $Math::min(y, $nc(addend->value)->length - addend->offset);
	$System::arraycopy(addend->value, addend->offset, result, rstart + 1 - y, len);
	for (int32_t i = rstart + 1 - y + len; i < rstart + 1; ++i) {
		result->set(i, 0);
	}
	$set(this, value, result);
	this->intLen = resultLen;
	this->offset = result->length - resultLen;
}

void MutableBigInteger::addLower(MutableBigInteger* addend, int32_t n) {
	$var(MutableBigInteger, a, $new(MutableBigInteger, addend));
	if (a->offset + a->intLen >= n) {
		a->offset = a->offset + a->intLen - n;
		a->intLen = n;
	}
	a->normalize();
	add(a);
}

int32_t MutableBigInteger::subtract(MutableBigInteger* b$renamed) {
	$var(MutableBigInteger, b, b$renamed);
	$var(MutableBigInteger, a, this);
	$var($ints, result, this->value);
	int32_t sign = a->compare(b);
	if (sign == 0) {
		reset();
		return 0;
	}
	if (sign < 0) {
		$var(MutableBigInteger, tmp, a);
		$assign(a, b);
		$assign(b, tmp);
	}
	int32_t resultLen = a->intLen;
	if ($nc(result)->length < resultLen) {
		$assign(result, $new($ints, resultLen));
	}
	int64_t diff = 0;
	int32_t x = a->intLen;
	int32_t y = $nc(b)->intLen;
	int32_t rstart = $nc(result)->length - 1;
	while (y > 0) {
		--x;
		--y;
		diff = ((int64_t)($nc(a->value)->get(x + a->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) - ((int64_t)($nc(b->value)->get(y + b->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) - ((int32_t)-(diff >> 32));
		result->set(rstart--, (int32_t)diff);
	}
	while (x > 0) {
		--x;
		diff = ((int64_t)($nc(a->value)->get(x + a->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) - ((int32_t)-(diff >> 32));
		result->set(rstart--, (int32_t)diff);
	}
	$set(this, value, result);
	this->intLen = resultLen;
	this->offset = $nc(this->value)->length - resultLen;
	normalize();
	return sign;
}

int32_t MutableBigInteger::difference(MutableBigInteger* b$renamed) {
	$var(MutableBigInteger, b, b$renamed);
	$var(MutableBigInteger, a, this);
	int32_t sign = a->compare(b);
	if (sign == 0) {
		return 0;
	}
	if (sign < 0) {
		$var(MutableBigInteger, tmp, a);
		$assign(a, b);
		$assign(b, tmp);
	}
	int64_t diff = 0;
	int32_t x = a->intLen;
	int32_t y = $nc(b)->intLen;
	while (y > 0) {
		--x;
		--y;
		diff = ((int64_t)($nc(a->value)->get(a->offset + x) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) - ((int64_t)($nc(b->value)->get(b->offset + y) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) - ((int32_t)-(diff >> 32));
		$nc(a->value)->set(a->offset + x, (int32_t)diff);
	}
	while (x > 0) {
		--x;
		diff = ((int64_t)($nc(a->value)->get(a->offset + x) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) - ((int32_t)-(diff >> 32));
		$nc(a->value)->set(a->offset + x, (int32_t)diff);
	}
	a->normalize();
	return sign;
}

void MutableBigInteger::multiply(MutableBigInteger* y, MutableBigInteger* z) {
	int32_t xLen = this->intLen;
	int32_t yLen = $nc(y)->intLen;
	int32_t newLen = xLen + yLen;
	if ($nc($nc(z)->value)->length < newLen) {
		$set(z, value, $new($ints, newLen));
	}
	$nc(z)->offset = 0;
	z->intLen = newLen;
	int64_t carry = 0;
	{
		int32_t j = yLen - 1;
		int32_t k = yLen + xLen - 1;
		for (; j >= 0; --j, --k) {
			int64_t product = ((int64_t)($nc(y->value)->get(j + y->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) * ((int64_t)($nc(this->value)->get(xLen - 1 + this->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + carry;
			$nc(z->value)->set(k, (int32_t)product);
			carry = (int64_t)((uint64_t)product >> 32);
		}
	}
	$nc(z->value)->set(xLen - 1, (int32_t)carry);
	for (int32_t i = xLen - 2; i >= 0; --i) {
		carry = 0;
		{
			int32_t j = yLen - 1;
			int32_t k = yLen + i;
			for (; j >= 0; --j, --k) {
				int64_t product = ((int64_t)($nc(y->value)->get(j + y->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) * ((int64_t)($nc(this->value)->get(i + this->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + ((int64_t)($nc(z->value)->get(k) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + carry;
				$nc(z->value)->set(k, (int32_t)product);
				carry = (int64_t)((uint64_t)product >> 32);
			}
		}
		$nc(z->value)->set(i, (int32_t)carry);
	}
	z->normalize();
}

void MutableBigInteger::mul(int32_t y, MutableBigInteger* z) {
	if (y == 1) {
		$nc(z)->copyValue(this);
		return;
	}
	if (y == 0) {
		$nc(z)->clear();
		return;
	}
	int64_t ylong = (int64_t)(y & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	$var($ints, zval, $nc($nc(z)->value)->length < this->intLen + 1 ? $new($ints, this->intLen + 1) : $nc(z)->value);
	int64_t carry = 0;
	for (int32_t i = this->intLen - 1; i >= 0; --i) {
		int64_t product = ylong * ((int64_t)($nc(this->value)->get(i + this->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + carry;
		$nc(zval)->set(i + 1, (int32_t)product);
		carry = (int64_t)((uint64_t)product >> 32);
	}
	if (carry == 0) {
		z->offset = 1;
		z->intLen = this->intLen;
	} else {
		z->offset = 0;
		z->intLen = this->intLen + 1;
		$nc(zval)->set(0, (int32_t)carry);
	}
	$set(z, value, zval);
}

int32_t MutableBigInteger::divideOneWord(int32_t divisor, MutableBigInteger* quotient) {
	int64_t divisorLong = (int64_t)(divisor & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	if (this->intLen == 1) {
		int64_t dividendValue = (int64_t)($nc(this->value)->get(this->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
		int32_t q = (int32_t)($div(dividendValue, divisorLong));
		int32_t r = (int32_t)(dividendValue - q * divisorLong);
		$nc($nc(quotient)->value)->set(0, q);
		quotient->intLen = (q == 0) ? 0 : 1;
		quotient->offset = 0;
		return r;
	}
	if ($nc($nc(quotient)->value)->length < this->intLen) {
		$set(quotient, value, $new($ints, this->intLen));
	}
	$nc(quotient)->offset = 0;
	quotient->intLen = this->intLen;
	int32_t shift = $Integer::numberOfLeadingZeros(divisor);
	int32_t rem = $nc(this->value)->get(this->offset);
	int64_t remLong = (int64_t)(rem & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	if (remLong < divisorLong) {
		$nc(quotient->value)->set(0, 0);
	} else {
		$nc(quotient->value)->set(0, (int32_t)($div(remLong, divisorLong)));
		rem = (int32_t)(remLong - ($nc(quotient->value)->get(0) * divisorLong));
		remLong = (int64_t)(rem & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	}
	int32_t xlen = this->intLen;
	while (--xlen > 0) {
		int64_t dividendEstimate = (remLong << 32) | ((int64_t)($nc(this->value)->get(this->offset + this->intLen - xlen) & (uint64_t)(int64_t)0x00000000FFFFFFFF));
		int32_t q = 0;
		if (dividendEstimate >= 0) {
			q = (int32_t)($div(dividendEstimate, divisorLong));
			rem = (int32_t)(dividendEstimate - q * divisorLong);
		} else {
			int64_t tmp = divWord(dividendEstimate, divisor);
			q = (int32_t)((int64_t)(tmp & (uint64_t)(int64_t)0x00000000FFFFFFFF));
			rem = (int32_t)((int64_t)((uint64_t)tmp >> 32));
		}
		$nc(quotient->value)->set(this->intLen - xlen, q);
		remLong = (int64_t)(rem & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	}
	quotient->normalize();
	if (shift > 0) {
		return $mod(rem, divisor);
	} else {
		return rem;
	}
}

MutableBigInteger* MutableBigInteger::divide(MutableBigInteger* b, MutableBigInteger* quotient) {
	return divide(b, quotient, true);
}

MutableBigInteger* MutableBigInteger::divide(MutableBigInteger* b, MutableBigInteger* quotient, bool needRemainder) {
	if ($nc(b)->intLen < $BigInteger::BURNIKEL_ZIEGLER_THRESHOLD || this->intLen - $nc(b)->intLen < $BigInteger::BURNIKEL_ZIEGLER_OFFSET) {
		return divideKnuth(b, quotient, needRemainder);
	} else {
		return divideAndRemainderBurnikelZiegler(b, quotient);
	}
}

MutableBigInteger* MutableBigInteger::divideKnuth(MutableBigInteger* b, MutableBigInteger* quotient) {
	return divideKnuth(b, quotient, true);
}

MutableBigInteger* MutableBigInteger::divideKnuth(MutableBigInteger* b$renamed, MutableBigInteger* quotient, bool needRemainder) {
	$var(MutableBigInteger, b, b$renamed);
	if ($nc(b)->intLen == 0) {
		$throwNew($ArithmeticException, "BigInteger divide by zero"_s);
	}
	if (this->intLen == 0) {
		$nc(quotient)->intLen = (quotient->offset = 0);
		return needRemainder ? $new(MutableBigInteger) : (MutableBigInteger*)nullptr;
	}
	int32_t cmp = compare(b);
	if (cmp < 0) {
		$nc(quotient)->intLen = (quotient->offset = 0);
		return needRemainder ? $new(MutableBigInteger, this) : (MutableBigInteger*)nullptr;
	}
	if (cmp == 0) {
		$nc($nc(quotient)->value)->set(0, quotient->intLen = 1);
		quotient->offset = 0;
		return needRemainder ? $new(MutableBigInteger) : (MutableBigInteger*)nullptr;
	}
	$nc(quotient)->clear();
	if ($nc(b)->intLen == 1) {
		int32_t r = divideOneWord($nc(b->value)->get(b->offset), quotient);
		if (needRemainder) {
			if (r == 0) {
				return $new(MutableBigInteger);
			}
			return $new(MutableBigInteger, r);
		} else {
			return nullptr;
		}
	}
	if (this->intLen >= MutableBigInteger::KNUTH_POW2_THRESH_LEN) {
		int32_t var$0 = getLowestSetBit();
		int32_t trailingZeroBits = $Math::min(var$0, $nc(b)->getLowestSetBit());
		if (trailingZeroBits >= MutableBigInteger::KNUTH_POW2_THRESH_ZEROS * 32) {
			$var(MutableBigInteger, a, $new(MutableBigInteger, this));
			$assign(b, $new(MutableBigInteger, b));
			a->rightShift(trailingZeroBits);
			b->rightShift(trailingZeroBits);
			$var(MutableBigInteger, r, a->divideKnuth(b, quotient));
			$nc(r)->leftShift(trailingZeroBits);
			return r;
		}
	}
	return divideMagnitude(b, quotient, needRemainder);
}

MutableBigInteger* MutableBigInteger::divideAndRemainderBurnikelZiegler(MutableBigInteger* b, MutableBigInteger* quotient) {
	int32_t r = this->intLen;
	int32_t s = $nc(b)->intLen;
	$nc(quotient)->offset = (quotient->intLen = 0);
	if (r < s) {
		return this;
	} else {
		int32_t m = $sl(1, 32 - $Integer::numberOfLeadingZeros($div(s, $BigInteger::BURNIKEL_ZIEGLER_THRESHOLD)));
		int32_t j = $div((s + m - 1), m);
		int32_t n = j * m;
		int64_t n32 = (int64_t)32 * n;
		int32_t sigma = (int32_t)$Math::max((int64_t)0, n32 - b->bitLength());
		$var(MutableBigInteger, bShifted, $new(MutableBigInteger, b));
		bShifted->safeLeftShift(sigma);
		$var(MutableBigInteger, aShifted, $new(MutableBigInteger, this));
		aShifted->safeLeftShift(sigma);
		int32_t t = (int32_t)($div((aShifted->bitLength() + n32), n32));
		if (t < 2) {
			t = 2;
		}
		$var(MutableBigInteger, a1, aShifted->getBlock(t - 1, t, n));
		$var(MutableBigInteger, z, aShifted->getBlock(t - 2, t, n));
		$nc(z)->addDisjoint(a1, n);
		$var(MutableBigInteger, qi, $new(MutableBigInteger));
		$var(MutableBigInteger, ri, nullptr);
		for (int32_t i = t - 2; i > 0; --i) {
			$assign(ri, z->divide2n1n(bShifted, qi));
			$assign(z, aShifted->getBlock(i - 1, t, n));
			$nc(z)->addDisjoint(ri, n);
			quotient->addShifted(qi, i * n);
		}
		$assign(ri, z->divide2n1n(bShifted, qi));
		quotient->add(qi);
		$nc(ri)->rightShift(sigma);
		return ri;
	}
}

MutableBigInteger* MutableBigInteger::divide2n1n(MutableBigInteger* b, MutableBigInteger* quotient) {
	int32_t n = $nc(b)->intLen;
	if (n % 2 != 0 || n < $BigInteger::BURNIKEL_ZIEGLER_THRESHOLD) {
		return divideKnuth(b, quotient);
	}
	$var(MutableBigInteger, aUpper, $new(MutableBigInteger, this));
	aUpper->safeRightShift(32 * (n / 2));
	keepLower(n / 2);
	$var(MutableBigInteger, q1, $new(MutableBigInteger));
	$var(MutableBigInteger, r1, aUpper->divide3n2n(b, q1));
	addDisjoint(r1, n / 2);
	$var(MutableBigInteger, r2, divide3n2n(b, quotient));
	$nc(quotient)->addDisjoint(q1, n / 2);
	return r2;
}

MutableBigInteger* MutableBigInteger::divide3n2n(MutableBigInteger* b, MutableBigInteger* quotient) {
	int32_t n = $nc(b)->intLen / 2;
	$var(MutableBigInteger, a12, $new(MutableBigInteger, this));
	a12->safeRightShift(32 * n);
	$var(MutableBigInteger, b1, $new(MutableBigInteger, b));
	b1->safeRightShift(n * 32);
	$var($BigInteger, b2, b->getLower(n));
	$var(MutableBigInteger, r, nullptr);
	$var(MutableBigInteger, d, nullptr);
	if (compareShifted(b, n) < 0) {
		$assign(r, a12->divide2n1n(b1, quotient));
		$assign(d, $new(MutableBigInteger, $($nc($($nc(quotient)->toBigInteger()))->multiply(b2))));
	} else {
		$nc(quotient)->ones(n);
		a12->add(b1);
		b1->leftShift(32 * n);
		a12->subtract(b1);
		$assign(r, a12);
		$assign(d, $new(MutableBigInteger, b2));
		d->leftShift(32 * n);
		d->subtract($$new(MutableBigInteger, b2));
	}
	$nc(r)->leftShift(32 * n);
	r->addLower(this, n);
	while (r->compare(d) < 0) {
		r->add(b);
		$nc(quotient)->subtract(MutableBigInteger::ONE);
	}
	r->subtract(d);
	return r;
}

MutableBigInteger* MutableBigInteger::getBlock(int32_t index, int32_t numBlocks, int32_t blockLength) {
	int32_t blockStart = index * blockLength;
	if (blockStart >= this->intLen) {
		return $new(MutableBigInteger);
	}
	int32_t blockEnd = 0;
	if (index == numBlocks - 1) {
		blockEnd = this->intLen;
	} else {
		blockEnd = (index + 1) * blockLength;
	}
	if (blockEnd > this->intLen) {
		return $new(MutableBigInteger);
	}
	$var($ints, newVal, $Arrays::copyOfRange(this->value, this->offset + this->intLen - blockEnd, this->offset + this->intLen - blockStart));
	return $new(MutableBigInteger, newVal);
}

int64_t MutableBigInteger::bitLength() {
	if (this->intLen == 0) {
		return 0;
	}
	return this->intLen * (int64_t)32 - $Integer::numberOfLeadingZeros($nc(this->value)->get(this->offset));
}

int64_t MutableBigInteger::divide(int64_t v, MutableBigInteger* quotient) {
	if (v == 0) {
		$throwNew($ArithmeticException, "BigInteger divide by zero"_s);
	}
	if (this->intLen == 0) {
		$nc(quotient)->intLen = (quotient->offset = 0);
		return 0;
	}
	if (v < 0) {
		v = -v;
	}
	int32_t d = (int32_t)((int64_t)((uint64_t)v >> 32));
	$nc(quotient)->clear();
	if (d == 0) {
		return (int64_t)(divideOneWord((int32_t)v, quotient) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	} else {
		return $nc($(divideLongMagnitude(v, quotient)))->toLong();
	}
}

void MutableBigInteger::copyAndShift($ints* src, int32_t srcFrom, int32_t srcLen, $ints* dst, int32_t dstFrom, int32_t shift) {
	$init(MutableBigInteger);
	int32_t n2 = 32 - shift;
	int32_t c = $nc(src)->get(srcFrom);
	for (int32_t i = 0; i < srcLen - 1; ++i) {
		int32_t b = c;
		c = src->get(++srcFrom);
		$nc(dst)->set(dstFrom + i, ($sl(b, shift)) | ($usr(c, n2)));
	}
	$nc(dst)->set(dstFrom + srcLen - 1, $sl(c, shift));
}

MutableBigInteger* MutableBigInteger::divideMagnitude(MutableBigInteger* div, MutableBigInteger* quotient, bool needRemainder) {
	int32_t shift = $Integer::numberOfLeadingZeros($nc($nc(div)->value)->get(div->offset));
	int32_t dlen = $nc(div)->intLen;
	$var($ints, divisor, nullptr);
	$var(MutableBigInteger, rem, nullptr);
	if (shift > 0) {
		$assign(divisor, $new($ints, dlen));
		copyAndShift(div->value, div->offset, dlen, divisor, 0, shift);
		if ($Integer::numberOfLeadingZeros($nc(this->value)->get(this->offset)) >= shift) {
			$var($ints, remarr, $new($ints, this->intLen + 1));
			$assign(rem, $new(MutableBigInteger, remarr));
			rem->intLen = this->intLen;
			rem->offset = 1;
			copyAndShift(this->value, this->offset, this->intLen, remarr, 1, shift);
		} else {
			$var($ints, remarr, $new($ints, this->intLen + 2));
			$assign(rem, $new(MutableBigInteger, remarr));
			rem->intLen = this->intLen + 1;
			rem->offset = 1;
			int32_t rFrom = this->offset;
			int32_t c = 0;
			int32_t n2 = 32 - shift;
			for (int32_t i = 1; i < this->intLen + 1; ++i, ++rFrom) {
				int32_t b = c;
				c = $nc(this->value)->get(rFrom);
				remarr->set(i, ($sl(b, shift)) | ($usr(c, n2)));
			}
			remarr->set(this->intLen + 1, $sl(c, shift));
		}
	} else {
		$assign(divisor, $Arrays::copyOfRange(div->value, div->offset, div->offset + div->intLen));
		$assign(rem, $new(MutableBigInteger, $$new($ints, this->intLen + 1)));
		$System::arraycopy(this->value, this->offset, rem->value, 1, this->intLen);
		rem->intLen = this->intLen;
		rem->offset = 1;
	}
	int32_t nlen = $nc(rem)->intLen;
	int32_t limit = nlen - dlen + 1;
	if ($nc($nc(quotient)->value)->length < limit) {
		$set(quotient, value, $new($ints, limit));
		quotient->offset = 0;
	}
	$nc(quotient)->intLen = limit;
	$var($ints, q, quotient->value);
	if (rem->intLen == nlen) {
		rem->offset = 0;
		$nc(rem->value)->set(0, 0);
		++rem->intLen;
	}
	int32_t dh = $nc(divisor)->get(0);
	int64_t dhLong = (int64_t)(dh & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	int32_t dl = divisor->get(1);
	for (int32_t j = 0; j < limit - 1; ++j) {
		int32_t qhat = 0;
		int32_t qrem = 0;
		bool skipCorrection = false;
		int32_t nh = $nc(rem->value)->get(j + rem->offset);
		int32_t nh2 = nh + (int32_t)0x80000000;
		int32_t nm = $nc(rem->value)->get(j + 1 + rem->offset);
		if (nh == dh) {
			qhat = ~0;
			qrem = nh + nm;
			skipCorrection = qrem + (int32_t)0x80000000 < nh2;
		} else {
			int64_t nChunk = (((int64_t)nh) << 32) | ((int64_t)(nm & (uint64_t)(int64_t)0x00000000FFFFFFFF));
			if (nChunk >= 0) {
				qhat = (int32_t)($div(nChunk, dhLong));
				qrem = (int32_t)(nChunk - (qhat * dhLong));
			} else {
				int64_t tmp = divWord(nChunk, dh);
				qhat = (int32_t)((int64_t)(tmp & (uint64_t)(int64_t)0x00000000FFFFFFFF));
				qrem = (int32_t)((int64_t)((uint64_t)tmp >> 32));
			}
		}
		if (qhat == 0) {
			continue;
		}
		if (!skipCorrection) {
			int64_t nl = (int64_t)($nc(rem->value)->get(j + 2 + rem->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
			int64_t rs = (((int64_t)(qrem & (uint64_t)(int64_t)0x00000000FFFFFFFF)) << 32) | nl;
			int64_t estProduct = ((int64_t)(dl & (uint64_t)(int64_t)0x00000000FFFFFFFF)) * ((int64_t)(qhat & (uint64_t)(int64_t)0x00000000FFFFFFFF));
			if (unsignedLongCompare(estProduct, rs)) {
				--qhat;
				qrem = (int32_t)(((int64_t)(qrem & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + dhLong);
				if (((int64_t)(qrem & (uint64_t)(int64_t)0x00000000FFFFFFFF)) >= dhLong) {
					estProduct -= ((int64_t)(dl & (uint64_t)(int64_t)0x00000000FFFFFFFF));
					rs = (((int64_t)(qrem & (uint64_t)(int64_t)0x00000000FFFFFFFF)) << 32) | nl;
					if (unsignedLongCompare(estProduct, rs)) {
						--qhat;
					}
				}
			}
		}
		$nc(rem->value)->set(j + rem->offset, 0);
		int32_t borrow = mulsub(rem->value, divisor, qhat, dlen, j + rem->offset);
		if (borrow + (int32_t)0x80000000 > nh2) {
			divadd(divisor, rem->value, j + 1 + rem->offset);
			--qhat;
		}
		$nc(q)->set(j, qhat);
	}
	int32_t qhat = 0;
	int32_t qrem = 0;
	bool skipCorrection = false;
	int32_t nh = $nc(rem->value)->get(limit - 1 + rem->offset);
	int32_t nh2 = nh + (int32_t)0x80000000;
	int32_t nm = $nc(rem->value)->get(limit + rem->offset);
	if (nh == dh) {
		qhat = ~0;
		qrem = nh + nm;
		skipCorrection = qrem + (int32_t)0x80000000 < nh2;
	} else {
		int64_t nChunk = (((int64_t)nh) << 32) | ((int64_t)(nm & (uint64_t)(int64_t)0x00000000FFFFFFFF));
		if (nChunk >= 0) {
			qhat = (int32_t)($div(nChunk, dhLong));
			qrem = (int32_t)(nChunk - (qhat * dhLong));
		} else {
			int64_t tmp = divWord(nChunk, dh);
			qhat = (int32_t)((int64_t)(tmp & (uint64_t)(int64_t)0x00000000FFFFFFFF));
			qrem = (int32_t)((int64_t)((uint64_t)tmp >> 32));
		}
	}
	if (qhat != 0) {
		if (!skipCorrection) {
			int64_t nl = (int64_t)($nc(rem->value)->get(limit + 1 + rem->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
			int64_t rs = (((int64_t)(qrem & (uint64_t)(int64_t)0x00000000FFFFFFFF)) << 32) | nl;
			int64_t estProduct = ((int64_t)(dl & (uint64_t)(int64_t)0x00000000FFFFFFFF)) * ((int64_t)(qhat & (uint64_t)(int64_t)0x00000000FFFFFFFF));
			if (unsignedLongCompare(estProduct, rs)) {
				--qhat;
				qrem = (int32_t)(((int64_t)(qrem & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + dhLong);
				if (((int64_t)(qrem & (uint64_t)(int64_t)0x00000000FFFFFFFF)) >= dhLong) {
					estProduct -= ((int64_t)(dl & (uint64_t)(int64_t)0x00000000FFFFFFFF));
					rs = (((int64_t)(qrem & (uint64_t)(int64_t)0x00000000FFFFFFFF)) << 32) | nl;
					if (unsignedLongCompare(estProduct, rs)) {
						--qhat;
					}
				}
			}
		}
		int32_t borrow = 0;
		$nc(rem->value)->set(limit - 1 + rem->offset, 0);
		if (needRemainder) {
			borrow = mulsub(rem->value, divisor, qhat, dlen, limit - 1 + rem->offset);
		} else {
			borrow = mulsubBorrow(rem->value, divisor, qhat, dlen, limit - 1 + rem->offset);
		}
		if (borrow + (int32_t)0x80000000 > nh2) {
			if (needRemainder) {
				divadd(divisor, rem->value, limit - 1 + 1 + rem->offset);
			}
			--qhat;
		}
		$nc(q)->set(limit - 1, qhat);
	}
	if (needRemainder) {
		if (shift > 0) {
			rem->rightShift(shift);
		}
		rem->normalize();
	}
	quotient->normalize();
	return needRemainder ? rem : (MutableBigInteger*)nullptr;
}

MutableBigInteger* MutableBigInteger::divideLongMagnitude(int64_t ldivisor, MutableBigInteger* quotient) {
	$var(MutableBigInteger, rem, $new(MutableBigInteger, $$new($ints, this->intLen + 1)));
	$System::arraycopy(this->value, this->offset, rem->value, 1, this->intLen);
	rem->intLen = this->intLen;
	rem->offset = 1;
	int32_t nlen = rem->intLen;
	int32_t limit = nlen - 2 + 1;
	if ($nc($nc(quotient)->value)->length < limit) {
		$set(quotient, value, $new($ints, limit));
		quotient->offset = 0;
	}
	$nc(quotient)->intLen = limit;
	$var($ints, q, quotient->value);
	int32_t shift = $Long::numberOfLeadingZeros(ldivisor);
	if (shift > 0) {
		ldivisor <<= shift;
		rem->leftShift(shift);
	}
	if (rem->intLen == nlen) {
		rem->offset = 0;
		$nc(rem->value)->set(0, 0);
		++rem->intLen;
	}
	int32_t dh = (int32_t)((int64_t)((uint64_t)ldivisor >> 32));
	int64_t dhLong = (int64_t)(dh & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	int32_t dl = (int32_t)((int64_t)(ldivisor & (uint64_t)(int64_t)0x00000000FFFFFFFF));
	for (int32_t j = 0; j < limit; ++j) {
		int32_t qhat = 0;
		int32_t qrem = 0;
		bool skipCorrection = false;
		int32_t nh = $nc(rem->value)->get(j + rem->offset);
		int32_t nh2 = nh + (int32_t)0x80000000;
		int32_t nm = $nc(rem->value)->get(j + 1 + rem->offset);
		if (nh == dh) {
			qhat = ~0;
			qrem = nh + nm;
			skipCorrection = qrem + (int32_t)0x80000000 < nh2;
		} else {
			int64_t nChunk = (((int64_t)nh) << 32) | ((int64_t)(nm & (uint64_t)(int64_t)0x00000000FFFFFFFF));
			if (nChunk >= 0) {
				qhat = (int32_t)($div(nChunk, dhLong));
				qrem = (int32_t)(nChunk - (qhat * dhLong));
			} else {
				int64_t tmp = divWord(nChunk, dh);
				qhat = (int32_t)((int64_t)(tmp & (uint64_t)(int64_t)0x00000000FFFFFFFF));
				qrem = (int32_t)((int64_t)((uint64_t)tmp >> 32));
			}
		}
		if (qhat == 0) {
			continue;
		}
		if (!skipCorrection) {
			int64_t nl = (int64_t)($nc(rem->value)->get(j + 2 + rem->offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
			int64_t rs = (((int64_t)(qrem & (uint64_t)(int64_t)0x00000000FFFFFFFF)) << 32) | nl;
			int64_t estProduct = ((int64_t)(dl & (uint64_t)(int64_t)0x00000000FFFFFFFF)) * ((int64_t)(qhat & (uint64_t)(int64_t)0x00000000FFFFFFFF));
			if (unsignedLongCompare(estProduct, rs)) {
				--qhat;
				qrem = (int32_t)(((int64_t)(qrem & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + dhLong);
				if (((int64_t)(qrem & (uint64_t)(int64_t)0x00000000FFFFFFFF)) >= dhLong) {
					estProduct -= ((int64_t)(dl & (uint64_t)(int64_t)0x00000000FFFFFFFF));
					rs = (((int64_t)(qrem & (uint64_t)(int64_t)0x00000000FFFFFFFF)) << 32) | nl;
					if (unsignedLongCompare(estProduct, rs)) {
						--qhat;
					}
				}
			}
		}
		$nc(rem->value)->set(j + rem->offset, 0);
		int32_t borrow = mulsubLong(rem->value, dh, dl, qhat, j + rem->offset);
		if (borrow + (int32_t)0x80000000 > nh2) {
			divaddLong(dh, dl, rem->value, j + 1 + rem->offset);
			--qhat;
		}
		$nc(q)->set(j, qhat);
	}
	if (shift > 0) {
		rem->rightShift(shift);
	}
	quotient->normalize();
	rem->normalize();
	return rem;
}

int32_t MutableBigInteger::divaddLong(int32_t dh, int32_t dl, $ints* result, int32_t offset) {
	int64_t carry = 0;
	int64_t sum = ((int64_t)(dl & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + ((int64_t)($nc(result)->get(1 + offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF));
	result->set(1 + offset, (int32_t)sum);
	sum = ((int64_t)(dh & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + ((int64_t)(result->get(offset) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) + carry;
	result->set(offset, (int32_t)sum);
	carry = (int64_t)((uint64_t)sum >> 32);
	return (int32_t)carry;
}

int32_t MutableBigInteger::mulsubLong($ints* q, int32_t dh, int32_t dl, int32_t x, int32_t offset) {
	int64_t xLong = (int64_t)(x & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	offset += 2;
	int64_t product = ((int64_t)(dl & (uint64_t)(int64_t)0x00000000FFFFFFFF)) * xLong;
	int64_t difference = $nc(q)->get(offset) - product;
	q->set(offset--, (int32_t)difference);
	int64_t carry = ((int64_t)((uint64_t)product >> 32)) + ((((int64_t)(difference & (uint64_t)(int64_t)0x00000000FFFFFFFF)) > ((int64_t)((~(int32_t)product) & (uint64_t)(int64_t)0x00000000FFFFFFFF))) ? 1 : 0);
	product = ((int64_t)(dh & (uint64_t)(int64_t)0x00000000FFFFFFFF)) * xLong + carry;
	difference = q->get(offset) - product;
	q->set(offset--, (int32_t)difference);
	carry = ((int64_t)((uint64_t)product >> 32)) + ((((int64_t)(difference & (uint64_t)(int64_t)0x00000000FFFFFFFF)) > ((int64_t)((~(int32_t)product) & (uint64_t)(int64_t)0x00000000FFFFFFFF))) ? 1 : 0);
	return (int32_t)carry;
}

bool MutableBigInteger::unsignedLongCompare(int64_t one, int64_t two) {
	return (one + $Long::MIN_VALUE) > (two + $Long::MIN_VALUE);
}

int64_t MutableBigInteger::divWord(int64_t n, int32_t d) {
	$init(MutableBigInteger);
	int64_t dLong = (int64_t)(d & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	int64_t r = 0;
	int64_t q = 0;
	if (dLong == 1) {
		q = (int32_t)n;
		r = 0;
		return (r << 32) | ((int64_t)(q & (uint64_t)(int64_t)0x00000000FFFFFFFF));
	}
	q = $div(((int64_t)((uint64_t)n >> 1)), ((int64_t)((uint64_t)dLong >> 1)));
	r = n - q * dLong;
	while (r < 0) {
		r += dLong;
		--q;
	}
	while (r >= dLong) {
		r -= dLong;
		++q;
	}
	return (r << 32) | ((int64_t)(q & (uint64_t)(int64_t)0x00000000FFFFFFFF));
}

MutableBigInteger* MutableBigInteger::sqrt() {
	if (this->isZero()) {
		return $new(MutableBigInteger, 0);
	} else if ($nc(this->value)->length == 1 && ((int64_t)($nc(this->value)->get(0) & (uint64_t)(int64_t)0x00000000FFFFFFFF)) < 4) {
		return MutableBigInteger::ONE;
	}
	if (this->bitLength() <= 63) {
		int64_t v = $$new($BigInteger, this->value, 1)->longValueExact();
		int64_t xk = $cast(int64_t, $Math::floor($Math::sqrt((double)v)));
		do {
			int64_t xk1 = (xk + $div(v, xk)) / 2;
			if (xk1 >= xk) {
				return $new(MutableBigInteger, $$new($ints, {
					(int32_t)((int64_t)((uint64_t)xk >> 32)),
					(int32_t)((int64_t)(xk & (uint64_t)(int64_t)0x00000000FFFFFFFF))
				}));
			}
			xk = xk1;
		} while (true);
	} else {
		int32_t bitLength = (int32_t)this->bitLength();
		if (bitLength != this->bitLength()) {
			$throwNew($ArithmeticException, "bitLength() integer overflow"_s);
		}
		int32_t shift = bitLength - 63;
		if (shift % 2 == 1) {
			++shift;
		}
		$var(MutableBigInteger, xk, $new(MutableBigInteger, this));
		xk->rightShift(shift);
		xk->normalize();
		double d = $$new($BigInteger, xk->value, 1)->doubleValue();
		$var($BigInteger, bi, $BigInteger::valueOf($cast(int64_t, $Math::ceil($Math::sqrt(d)))));
		$assign(xk, $new(MutableBigInteger, $nc(bi)->mag));
		xk->leftShift(shift / 2);
		$var(MutableBigInteger, xk1, $new(MutableBigInteger));
		do {
			this->divide(xk, xk1, false);
			xk1->add(xk);
			xk1->rightShift(1);
			if (xk1->compare(xk) >= 0) {
				return xk;
			}
			xk->copyValue(xk1);
			xk1->reset();
		} while (true);
	}
}

MutableBigInteger* MutableBigInteger::hybridGCD(MutableBigInteger* b$renamed) {
	$var(MutableBigInteger, b, b$renamed);
	$var(MutableBigInteger, a, this);
	$var(MutableBigInteger, q, $new(MutableBigInteger));
	while ($nc(b)->intLen != 0) {
		if ($Math::abs($nc(a)->intLen - b->intLen) < 2) {
			return $nc(a)->binaryGCD(b);
		}
		$var(MutableBigInteger, r, $nc(a)->divide(b, q));
		$assign(a, b);
		$assign(b, r);
	}
	return a;
}

MutableBigInteger* MutableBigInteger::binaryGCD(MutableBigInteger* v$renamed) {
	$var(MutableBigInteger, v, v$renamed);
	$var(MutableBigInteger, u, this);
	$var(MutableBigInteger, r, $new(MutableBigInteger));
	int32_t s1 = u->getLowestSetBit();
	int32_t s2 = $nc(v)->getLowestSetBit();
	int32_t k = (s1 < s2) ? s1 : s2;
	if (k != 0) {
		u->rightShift(k);
		v->rightShift(k);
	}
	bool uOdd = (k == s1);
	$var(MutableBigInteger, t, uOdd ? v : u);
	int32_t tsign = uOdd ? -1 : 1;
	int32_t lb = 0;
	while ((lb = $nc(t)->getLowestSetBit()) >= 0) {
		t->rightShift(lb);
		if (tsign > 0) {
			$assign(u, t);
		} else {
			$assign(v, t);
		}
		if ($nc(u)->intLen < 2 && v->intLen < 2) {
			int32_t x = $nc(u->value)->get(u->offset);
			int32_t y = $nc(v->value)->get(v->offset);
			x = binaryGcd(x, y);
			$nc(r->value)->set(0, x);
			r->intLen = 1;
			r->offset = 0;
			if (k > 0) {
				r->leftShift(k);
			}
			return r;
		}
		if ((tsign = $nc(u)->difference(v)) == 0) {
			break;
		}
		$assign(t, (tsign >= 0) ? u : v);
	}
	if (k > 0) {
		$nc(u)->leftShift(k);
	}
	return u;
}

int32_t MutableBigInteger::binaryGcd(int32_t a, int32_t b) {
	$init(MutableBigInteger);
	if (b == 0) {
		return a;
	}
	if (a == 0) {
		return b;
	}
	int32_t aZeros = $Integer::numberOfTrailingZeros(a);
	int32_t bZeros = $Integer::numberOfTrailingZeros(b);
	$usrAssign(a, aZeros);
	$usrAssign(b, bZeros);
	int32_t t = (aZeros < bZeros ? aZeros : bZeros);
	while (a != b) {
		if ((a + (int32_t)0x80000000) > (b + (int32_t)0x80000000)) {
			a -= b;
			$usrAssign(a, $Integer::numberOfTrailingZeros(a));
		} else {
			b -= a;
			$usrAssign(b, $Integer::numberOfTrailingZeros(b));
		}
	}
	return $sl(a, t);
}

MutableBigInteger* MutableBigInteger::mutableModInverse(MutableBigInteger* p) {
	if ($nc(p)->isOdd()) {
		return modInverse(p);
	}
	if (isEven()) {
		$throwNew($ArithmeticException, "BigInteger not invertible."_s);
	}
	int32_t powersOf2 = $nc(p)->getLowestSetBit();
	$var(MutableBigInteger, oddMod, $new(MutableBigInteger, p));
	oddMod->rightShift(powersOf2);
	if (oddMod->isOne()) {
		return modInverseMP2(powersOf2);
	}
	$var(MutableBigInteger, oddPart, modInverse(oddMod));
	$var(MutableBigInteger, evenPart, modInverseMP2(powersOf2));
	$var(MutableBigInteger, y1, modInverseBP2(oddMod, powersOf2));
	$var(MutableBigInteger, y2, oddMod->modInverseMP2(powersOf2));
	$var(MutableBigInteger, temp1, $new(MutableBigInteger));
	$var(MutableBigInteger, temp2, $new(MutableBigInteger));
	$var(MutableBigInteger, result, $new(MutableBigInteger));
	$nc(oddPart)->leftShift(powersOf2);
	oddPart->multiply(y1, result);
	$nc(evenPart)->multiply(oddMod, temp1);
	temp1->multiply(y2, temp2);
	result->add(temp2);
	return result->divide(p, temp1);
}

MutableBigInteger* MutableBigInteger::modInverseMP2(int32_t k) {
	if (isEven()) {
		$throwNew($ArithmeticException, "Non-invertible. (GCD != 1)"_s);
	}
	if (k > 64) {
		return euclidModInverse(k);
	}
	int32_t t = inverseMod32($nc(this->value)->get(this->offset + this->intLen - 1));
	if (k < 33) {
		t = (k == 32 ? t : (int32_t)(t & (uint32_t)(($sl(1, k)) - 1)));
		return $new(MutableBigInteger, t);
	}
	int64_t pLong = ((int64_t)($nc(this->value)->get(this->offset + this->intLen - 1) & (uint64_t)(int64_t)0x00000000FFFFFFFF));
	if (this->intLen > 1) {
		pLong |= ((int64_t)$nc(this->value)->get(this->offset + this->intLen - 2) << 32);
	}
	int64_t tLong = (int64_t)(t & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	tLong = tLong * (2 - pLong * tLong);
	tLong = (k == 64 ? tLong : (int64_t)(tLong & (uint64_t)(($sl((int64_t)1, k)) - 1)));
	$var(MutableBigInteger, result, $new(MutableBigInteger, $$new($ints, 2)));
	$nc(result->value)->set(0, (int32_t)((int64_t)((uint64_t)tLong >> 32)));
	$nc(result->value)->set(1, (int32_t)tLong);
	result->intLen = 2;
	result->normalize();
	return result;
}

int32_t MutableBigInteger::inverseMod32(int32_t val) {
	$init(MutableBigInteger);
	int32_t t = val;
	t *= 2 - val * t;
	t *= 2 - val * t;
	t *= 2 - val * t;
	t *= 2 - val * t;
	return t;
}

int64_t MutableBigInteger::inverseMod64(int64_t val) {
	$init(MutableBigInteger);
	int64_t t = val;
	t *= 2 - val * t;
	t *= 2 - val * t;
	t *= 2 - val * t;
	t *= 2 - val * t;
	t *= 2 - val * t;
	if (!MutableBigInteger::$assertionsDisabled && !(t * val == 1)) {
		$throwNew($AssertionError);
	}
	return t;
}

MutableBigInteger* MutableBigInteger::modInverseBP2(MutableBigInteger* mod, int32_t k) {
	$init(MutableBigInteger);
	$var(MutableBigInteger, var$0, $new(MutableBigInteger, 1));
	return fixup(var$0, $$new(MutableBigInteger, mod), k);
}

MutableBigInteger* MutableBigInteger::modInverse(MutableBigInteger* mod) {
	$var(MutableBigInteger, p, $new(MutableBigInteger, mod));
	$var(MutableBigInteger, f, $new(MutableBigInteger, this));
	$var(MutableBigInteger, g, $new(MutableBigInteger, p));
	$var($SignedMutableBigInteger, c, $new($SignedMutableBigInteger, 1));
	$var($SignedMutableBigInteger, d, $new($SignedMutableBigInteger));
	$var(MutableBigInteger, temp, nullptr);
	$var($SignedMutableBigInteger, sTemp, nullptr);
	int32_t k = 0;
	if (f->isEven()) {
		int32_t trailingZeros = f->getLowestSetBit();
		f->rightShift(trailingZeros);
		d->leftShift(trailingZeros);
		k = trailingZeros;
	}
	while (!f->isOne()) {
		if (f->isZero()) {
			$throwNew($ArithmeticException, "BigInteger not invertible."_s);
		}
		if (f->compare(g) < 0) {
			$assign(temp, f);
			$assign(f, g);
			$assign(g, temp);
			$assign(sTemp, d);
			$assign(d, c);
			$assign(c, sTemp);
		}
		if (((int32_t)(($nc(f->value)->get(f->offset + f->intLen - 1) ^ $nc($nc(g)->value)->get(g->offset + g->intLen - 1)) & (uint32_t)3)) == 0) {
			f->subtract(g);
			$nc(c)->signedSubtract(d);
		} else {
			f->add(g);
			$nc(c)->signedAdd(d);
		}
		int32_t trailingZeros = f->getLowestSetBit();
		f->rightShift(trailingZeros);
		d->leftShift(trailingZeros);
		k += trailingZeros;
	}
	if ($nc(c)->compare(p) >= 0) {
		$var(MutableBigInteger, remainder, c->divide(p, $$new(MutableBigInteger)));
		c->copyValue(remainder);
	}
	if ($nc(c)->sign < 0) {
		c->signedAdd(p);
	}
	return fixup(c, p, k);
}

MutableBigInteger* MutableBigInteger::fixup(MutableBigInteger* c$renamed, MutableBigInteger* p, int32_t k) {
	$init(MutableBigInteger);
	$var(MutableBigInteger, c, c$renamed);
	$var(MutableBigInteger, temp, $new(MutableBigInteger));
	int32_t r = -inverseMod32($nc($nc(p)->value)->get(p->offset + p->intLen - 1));
	{
		int32_t i = 0;
		int32_t numWords = k >> 5;
		for (; i < numWords; ++i) {
			int32_t v = r * $nc($nc(c)->value)->get(c->offset + c->intLen - 1);
			$nc(p)->mul(v, temp);
			c->add(temp);
			--c->intLen;
		}
	}
	int32_t numBits = (int32_t)(k & (uint32_t)31);
	if (numBits != 0) {
		int32_t v = r * $nc($nc(c)->value)->get(c->offset + c->intLen - 1);
		v &= (uint32_t)(($sl(1, numBits)) - 1);
		$nc(p)->mul(v, temp);
		c->add(temp);
		c->rightShift(numBits);
	}
	if ($nc(c)->compare(p) >= 0) {
		$assign(c, c->divide(p, $$new(MutableBigInteger)));
	}
	return c;
}

MutableBigInteger* MutableBigInteger::euclidModInverse(int32_t k) {
	$var(MutableBigInteger, b, $new(MutableBigInteger, 1));
	b->leftShift(k);
	$var(MutableBigInteger, mod, $new(MutableBigInteger, b));
	$var(MutableBigInteger, a, $new(MutableBigInteger, this));
	$var(MutableBigInteger, q, $new(MutableBigInteger));
	$var(MutableBigInteger, r, b->divide(a, q));
	$var(MutableBigInteger, swapper, b);
	$assign(b, r);
	$assign(r, swapper);
	$var(MutableBigInteger, t1, $new(MutableBigInteger, q));
	$var(MutableBigInteger, t0, $new(MutableBigInteger, 1));
	$var(MutableBigInteger, temp, $new(MutableBigInteger));
	while (!$nc(b)->isOne()) {
		$assign(r, a->divide(b, q));
		if ($nc(r)->intLen == 0) {
			$throwNew($ArithmeticException, "BigInteger not invertible."_s);
		}
		$assign(swapper, r);
		$assign(a, swapper);
		if (q->intLen == 1) {
			t1->mul($nc(q->value)->get(q->offset), temp);
		} else {
			q->multiply(t1, temp);
		}
		$assign(swapper, q);
		$assign(q, temp);
		$assign(temp, swapper);
		t0->add(q);
		if ($nc(a)->isOne()) {
			return t0;
		}
		$assign(r, b->divide(a, q));
		if ($nc(r)->intLen == 0) {
			$throwNew($ArithmeticException, "BigInteger not invertible."_s);
		}
		$assign(swapper, b);
		$assign(b, r);
		if (q->intLen == 1) {
			t0->mul($nc(q->value)->get(q->offset), temp);
		} else {
			q->multiply(t0, temp);
		}
		$assign(swapper, q);
		$assign(q, temp);
		$assign(temp, swapper);
		t1->add(q);
	}
	mod->subtract(t1);
	return mod;
}

void clinit$MutableBigInteger($Class* class$) {
	MutableBigInteger::$assertionsDisabled = !MutableBigInteger::class$->desiredAssertionStatus();
	$assignStatic(MutableBigInteger::ONE, $new(MutableBigInteger, 1));
}

MutableBigInteger::MutableBigInteger() {
}

$Class* MutableBigInteger::load$($String* name, bool initialize) {
	$loadClass(MutableBigInteger, name, initialize, &_MutableBigInteger_ClassInfo_, clinit$MutableBigInteger, allocate$MutableBigInteger);
	return class$;
}

$Class* MutableBigInteger::class$ = nullptr;

	} // math
} // java