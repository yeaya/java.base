#include <sun/security/util/math/intpoly/IntegerPolynomial.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/util/Arrays.h>
#include <sun/security/util/math/ImmutableIntegerModuloP.h>
#include <sun/security/util/math/SmallValue.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial$Limb.h>
#include <jcpp.h>

#undef LITTLE_ENDIAN
#undef TWO
#undef ZERO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $Arrays = ::java::util::Arrays;
using $ImmutableIntegerModuloP = ::sun::security::util::math::ImmutableIntegerModuloP;
using $IntegerFieldModuloP = ::sun::security::util::math::IntegerFieldModuloP;
using $SmallValue = ::sun::security::util::math::SmallValue;
using $IntegerPolynomial$ImmutableElement = ::sun::security::util::math::intpoly::IntegerPolynomial$ImmutableElement;
using $IntegerPolynomial$Limb = ::sun::security::util::math::intpoly::IntegerPolynomial$Limb;

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				namespace intpoly {

$FieldInfo _IntegerPolynomial_FieldInfo_[] = {
	{"TWO", "Ljava/math/BigInteger;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(IntegerPolynomial, TWO)},
	{"numLimbs", "I", nullptr, $PROTECTED | $FINAL, $field(IntegerPolynomial, numLimbs)},
	{"modulus", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(IntegerPolynomial, modulus)},
	{"bitsPerLimb", "I", nullptr, $PROTECTED | $FINAL, $field(IntegerPolynomial, bitsPerLimb)},
	{"posModLimbs", "[J", nullptr, $PRIVATE | $FINAL, $field(IntegerPolynomial, posModLimbs)},
	{"maxAdds", "I", nullptr, $PRIVATE | $FINAL, $field(IntegerPolynomial, maxAdds)},
	{}
};

$MethodInfo _IntegerPolynomial_MethodInfo_[] = {
	{"<init>", "(IIILjava/math/BigInteger;)V", nullptr, 0, $method(static_cast<void(IntegerPolynomial::*)(int32_t,int32_t,int32_t,$BigInteger*)>(&IntegerPolynomial::init$))},
	{"addLimbs", "([J[J[J)V", nullptr, $PROTECTED},
	{"addLimbsModPowerTwo", "([J[J[B)V", nullptr, $PROTECTED},
	{"carry", "([JII)V", nullptr, $PROTECTED},
	{"carry", "([J)V", nullptr, $PROTECTED},
	{"carryOut", "([JI)J", nullptr, $PROTECTED},
	{"carryValue", "(J)J", nullptr, $PROTECTED},
	{"conditionalAssign", "(I[J[J)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)(int32_t,$longs*,$longs*)>(&IntegerPolynomial::conditionalAssign))},
	{"conditionalSwap", "(I[J[J)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)(int32_t,$longs*,$longs*)>(&IntegerPolynomial::conditionalSwap))},
	{"decode", "([J[BII)V", nullptr, $PROTECTED},
	{"encode", "(Ljava/nio/ByteBuffer;IB[J)V", nullptr, $PROTECTED},
	{"encode", "([BIIB[J)V", nullptr, $PROTECTED},
	{"encodeSmall", "(Ljava/nio/ByteBuffer;IB[J)V", nullptr, $PROTECTED},
	{"evaluate", "([J)Ljava/math/BigInteger;", nullptr, $PROTECTED},
	{"finalCarryReduceLast", "([J)V", nullptr, $PROTECTED | $ABSTRACT},
	{"finalReduce", "([J)V", nullptr, $PROTECTED},
	{"get0", "()Lsun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement;", nullptr, $PUBLIC},
	{"get1", "()Lsun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement;", nullptr, $PUBLIC},
	{"getElement", "(Ljava/math/BigInteger;)Lsun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement;", nullptr, $PUBLIC},
	{"getElement", "([BIIB)Lsun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement;", nullptr, $PUBLIC},
	{"getMaxAdds", "()I", nullptr, $PUBLIC},
	{"getNumLimbs", "()I", nullptr, $PROTECTED},
	{"getSize", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getSmallValue", "(I)Lsun/security/util/math/SmallValue;", nullptr, $PUBLIC},
	{"limbsToByteArray", "([J[B)V", nullptr, $PROTECTED},
	{"mult", "([J[J[J)V", nullptr, $PROTECTED | $ABSTRACT},
	{"multByInt", "([JJ)V", nullptr, $PROTECTED},
	{"postEncodeCarry", "([J)V", nullptr, $PROTECTED},
	{"reduce", "([J)V", nullptr, $PROTECTED | $ABSTRACT},
	{"reduceHigh", "([J)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomial::*)($longs*)>(&IntegerPolynomial::reduceHigh))},
	{"reduceIn", "([JJI)V", nullptr, $PROTECTED | $ABSTRACT},
	{"setLimbsValue", "(Ljava/math/BigInteger;[J)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomial::*)($BigInteger*,$longs*)>(&IntegerPolynomial::setLimbsValue))},
	{"setLimbsValuePositive", "(Ljava/math/BigInteger;[J)V", nullptr, $PROTECTED},
	{"setPosModLimbs", "()[J", nullptr, $PRIVATE, $method(static_cast<$longs*(IntegerPolynomial::*)()>(&IntegerPolynomial::setPosModLimbs))},
	{"square", "([J[J)V", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$InnerClassInfo _IntegerPolynomial_InnerClassesInfo_[] = {
	{"sun.security.util.math.intpoly.IntegerPolynomial$Limb", "sun.security.util.math.intpoly.IntegerPolynomial", "Limb", $STATIC},
	{"sun.security.util.math.intpoly.IntegerPolynomial$ImmutableElement", "sun.security.util.math.intpoly.IntegerPolynomial", "ImmutableElement", 0},
	{"sun.security.util.math.intpoly.IntegerPolynomial$MutableElement", "sun.security.util.math.intpoly.IntegerPolynomial", "MutableElement", $PROTECTED},
	{"sun.security.util.math.intpoly.IntegerPolynomial$Element", "sun.security.util.math.intpoly.IntegerPolynomial", "Element", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _IntegerPolynomial_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.security.util.math.intpoly.IntegerPolynomial",
	"java.lang.Object",
	"sun.security.util.math.IntegerFieldModuloP",
	_IntegerPolynomial_FieldInfo_,
	_IntegerPolynomial_MethodInfo_,
	nullptr,
	nullptr,
	_IntegerPolynomial_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.util.math.intpoly.IntegerPolynomial$Limb,sun.security.util.math.intpoly.IntegerPolynomial$ImmutableElement,sun.security.util.math.intpoly.IntegerPolynomial$MutableElement,sun.security.util.math.intpoly.IntegerPolynomial$Element"
};

$Object* allocate$IntegerPolynomial($Class* clazz) {
	return $of($alloc(IntegerPolynomial));
}

$BigInteger* IntegerPolynomial::TWO = nullptr;

void IntegerPolynomial::multByInt($longs* a, int64_t b) {
	for (int32_t i = 0; i < $nc(a)->length; ++i) {
		(*a)[i] *= b;
	}
	reduce(a);
}

void IntegerPolynomial::init$(int32_t bitsPerLimb, int32_t numLimbs, int32_t maxAdds, $BigInteger* modulus) {
	this->numLimbs = numLimbs;
	$set(this, modulus, modulus);
	this->bitsPerLimb = bitsPerLimb;
	this->maxAdds = maxAdds;
	$set(this, posModLimbs, setPosModLimbs());
}

$longs* IntegerPolynomial::setPosModLimbs() {
	$var($longs, result, $new($longs, this->numLimbs));
	setLimbsValuePositive(this->modulus, result);
	return result;
}

int32_t IntegerPolynomial::getNumLimbs() {
	return this->numLimbs;
}

int32_t IntegerPolynomial::getMaxAdds() {
	return this->maxAdds;
}

$BigInteger* IntegerPolynomial::getSize() {
	return this->modulus;
}

$ImmutableIntegerModuloP* IntegerPolynomial::get0() {
	return $new($IntegerPolynomial$ImmutableElement, this, false);
}

$ImmutableIntegerModuloP* IntegerPolynomial::get1() {
	return $new($IntegerPolynomial$ImmutableElement, this, true);
}

$ImmutableIntegerModuloP* IntegerPolynomial::getElement($BigInteger* v) {
	return $new($IntegerPolynomial$ImmutableElement, this, v);
}

$SmallValue* IntegerPolynomial::getSmallValue(int32_t value) {
	$useLocalCurrentObjectStackCache();
	int32_t maxMag = $sl(1, this->bitsPerLimb - 1);
	if ($Math::abs(value) >= maxMag) {
		$throwNew($IllegalArgumentException, $$str({"max magnitude is "_s, $$str(maxMag)}));
	}
	return $new($IntegerPolynomial$Limb, value);
}

void IntegerPolynomial::reduceHigh($longs* limbs) {
	int32_t extraBits = 63 - 2 * this->bitsPerLimb;
	int32_t allowedAdds = $sl(1, extraBits);
	int32_t carryPeriod = $div(allowedAdds, this->numLimbs);
	int32_t reduceCount = 0;
	for (int32_t i = $nc(limbs)->length - 1; i >= this->numLimbs; --i) {
		reduceIn(limbs, limbs->get(i), i);
		limbs->set(i, 0);
		++reduceCount;
		if ($mod(reduceCount, carryPeriod) == 0) {
			carry(limbs, 0, i);
			reduceIn(limbs, limbs->get(i), i);
			limbs->set(i, 0);
		}
	}
}

void IntegerPolynomial::encode($ByteBuffer* buf, int32_t length, int8_t highByte, $longs* result) {
	int32_t numHighBits = 32 - $Integer::numberOfLeadingZeros(highByte);
	int32_t numBits = 8 * length + numHighBits;
	int32_t requiredLimbs = $div((numBits + this->bitsPerLimb - 1), this->bitsPerLimb);
	if (requiredLimbs > this->numLimbs) {
		$var($longs, temp, $new($longs, requiredLimbs));
		encodeSmall(buf, length, highByte, temp);
		reduceHigh(temp);
		$System::arraycopy(temp, 0, result, 0, $nc(result)->length);
		reduce(result);
	} else {
		encodeSmall(buf, length, highByte, result);
		postEncodeCarry(result);
	}
}

void IntegerPolynomial::encodeSmall($ByteBuffer* buf, int32_t length, int8_t highByte, $longs* result) {
	int32_t limbIndex = 0;
	int64_t curLimbValue = 0;
	int32_t bitPos = 0;
	for (int32_t i = 0; i < length; ++i) {
		int64_t curV = (int32_t)($nc(buf)->get() & (uint32_t)255);
		if (bitPos + 8 >= this->bitsPerLimb) {
			int32_t bitsThisLimb = this->bitsPerLimb - bitPos;
			curLimbValue += $sl((int64_t)(curV & (uint64_t)(int64_t)($sr(255, 8 - bitsThisLimb))), bitPos);
			$nc(result)->set(limbIndex++, curLimbValue);
			curLimbValue = $sr(curV, bitsThisLimb);
			bitPos = 8 - bitsThisLimb;
		} else {
			curLimbValue += $sl(curV, bitPos);
			bitPos += 8;
		}
	}
	if (highByte != 0) {
		int64_t curV = (int32_t)(highByte & (uint32_t)255);
		if (bitPos + 8 >= this->bitsPerLimb) {
			int32_t bitsThisLimb = this->bitsPerLimb - bitPos;
			curLimbValue += $sl((int64_t)(curV & (uint64_t)(int64_t)($sr(255, 8 - bitsThisLimb))), bitPos);
			$nc(result)->set(limbIndex++, curLimbValue);
			curLimbValue = $sr(curV, bitsThisLimb);
		} else {
			curLimbValue += $sl(curV, bitPos);
		}
	}
	if (limbIndex < $nc(result)->length) {
		result->set(limbIndex++, curLimbValue);
	}
	$Arrays::fill(result, limbIndex, $nc(result)->length, (int64_t)0);
}

void IntegerPolynomial::encode($bytes* v, int32_t offset, int32_t length, int8_t highByte, $longs* result) {
	$var($ByteBuffer, buf, $ByteBuffer::wrap(v, offset, length));
	$init($ByteOrder);
	$nc(buf)->order($ByteOrder::LITTLE_ENDIAN);
	encode(buf, length, highByte, result);
}

void IntegerPolynomial::postEncodeCarry($longs* v) {
	reduce(v);
}

$ImmutableIntegerModuloP* IntegerPolynomial::getElement($bytes* v, int32_t offset, int32_t length, int8_t highByte) {
	$var($longs, result, $new($longs, this->numLimbs));
	encode(v, offset, length, highByte, result);
	return $new($IntegerPolynomial$ImmutableElement, this, result, 0);
}

$BigInteger* IntegerPolynomial::evaluate($longs* limbs) {
	$useLocalCurrentObjectStackCache();
	$init($BigInteger);
	$var($BigInteger, result, $BigInteger::ZERO);
	for (int32_t i = $nc(limbs)->length - 1; i >= 0; --i) {
		$assign(result, $nc($($nc(result)->shiftLeft(this->bitsPerLimb)))->add($($BigInteger::valueOf(limbs->get(i)))));
	}
	return $nc(result)->mod(this->modulus);
}

int64_t IntegerPolynomial::carryValue(int64_t x) {
	return $sr(x + ($sl(1, this->bitsPerLimb - 1)), this->bitsPerLimb);
}

void IntegerPolynomial::carry($longs* limbs, int32_t start, int32_t end) {
	for (int32_t i = start; i < end; ++i) {
		int64_t carry = carryOut(limbs, i);
		(*$nc(limbs))[i + 1] += carry;
	}
}

void IntegerPolynomial::carry($longs* limbs) {
	carry(limbs, 0, $nc(limbs)->length - 1);
}

int64_t IntegerPolynomial::carryOut($longs* limbs, int32_t index) {
	int64_t carry = carryValue($nc(limbs)->get(index));
	(*$nc(limbs))[index] -= ($sl(carry, this->bitsPerLimb));
	return carry;
}

void IntegerPolynomial::setLimbsValue($BigInteger* v, $longs* limbs) {
	setLimbsValuePositive(v, limbs);
	carry(limbs);
}

void IntegerPolynomial::setLimbsValuePositive($BigInteger* v$renamed, $longs* limbs) {
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, v, v$renamed);
	$var($BigInteger, mod, $BigInteger::valueOf((int64_t)$sl(1, this->bitsPerLimb)));
	for (int32_t i = 0; i < $nc(limbs)->length; ++i) {
		limbs->set(i, $nc($($nc(v)->mod(mod)))->longValue());
		$assign(v, v->shiftRight(this->bitsPerLimb));
	}
}

void IntegerPolynomial::finalReduce($longs* limbs) {
	for (int32_t pass = 0; pass < 2; ++pass) {
		finalCarryReduceLast(limbs);
		int64_t carry = 0;
		for (int32_t i = 0; i < this->numLimbs - 1; ++i) {
			(*$nc(limbs))[i] += carry;
			carry = $sr(limbs->get(i), this->bitsPerLimb);
			(*limbs)[i] -= $sl(carry, this->bitsPerLimb);
		}
		(*$nc(limbs))[this->numLimbs - 1] += carry;
	}
	int32_t smallerNonNegative = 1;
	$var($longs, smaller, $new($longs, this->numLimbs));
	for (int32_t i = this->numLimbs - 1; i >= 0; --i) {
		smaller->set(i, $nc(limbs)->get(i) - $nc(this->posModLimbs)->get(i));
		smallerNonNegative *= (int32_t)(smaller->get(i) >> 63) + 1;
	}
	conditionalSwap(smallerNonNegative, limbs, smaller);
}

void IntegerPolynomial::decode($longs* v, $bytes* dst, int32_t offset, int32_t length) {
	int32_t nextLimbIndex = 0;
	int64_t curLimbValue = $nc(v)->get(nextLimbIndex++);
	int32_t bitPos = 0;
	for (int32_t i = 0; i < length; ++i) {
		int32_t dstIndex = i + offset;
		if (bitPos + 8 >= this->bitsPerLimb) {
			$nc(dst)->set(dstIndex, (int8_t)curLimbValue);
			curLimbValue = 0;
			if (nextLimbIndex < v->length) {
				curLimbValue = v->get(nextLimbIndex++);
			}
			int32_t bitsAdded = this->bitsPerLimb - bitPos;
			int32_t bitsLeft = 8 - bitsAdded;
			(*dst)[dstIndex] += $sl((int64_t)(curLimbValue & (uint64_t)(int64_t)($sr(255, bitsAdded))), bitsAdded);
			curLimbValue >>= bitsLeft;
			bitPos = bitsLeft;
		} else {
			$nc(dst)->set(dstIndex, (int8_t)curLimbValue);
			curLimbValue >>= 8;
			bitPos += 8;
		}
	}
}

void IntegerPolynomial::addLimbs($longs* a, $longs* b, $longs* dst) {
	for (int32_t i = 0; i < $nc(dst)->length; ++i) {
		dst->set(i, $nc(a)->get(i) + $nc(b)->get(i));
	}
}

void IntegerPolynomial::conditionalAssign(int32_t set, $longs* a, $longs* b) {
	$init(IntegerPolynomial);
	int32_t maskValue = 0 - set;
	for (int32_t i = 0; i < $nc(a)->length; ++i) {
		int64_t dummyLimbs = (int64_t)(maskValue & (uint64_t)(a->get(i) ^ $nc(b)->get(i)));
		a->set(i, dummyLimbs ^ a->get(i));
	}
}

void IntegerPolynomial::conditionalSwap(int32_t swap, $longs* a, $longs* b) {
	$init(IntegerPolynomial);
	int32_t maskValue = 0 - swap;
	for (int32_t i = 0; i < $nc(a)->length; ++i) {
		int64_t dummyLimbs = (int64_t)(maskValue & (uint64_t)(a->get(i) ^ $nc(b)->get(i)));
		a->set(i, dummyLimbs ^ a->get(i));
		b->set(i, dummyLimbs ^ b->get(i));
	}
}

void IntegerPolynomial::limbsToByteArray($longs* limbs, $bytes* result) {
	$var($longs, reducedLimbs, $cast($longs, $nc(limbs)->clone()));
	finalReduce(reducedLimbs);
	decode(reducedLimbs, result, 0, $nc(result)->length);
}

void IntegerPolynomial::addLimbsModPowerTwo($longs* limbs, $longs* other, $bytes* result) {
	$useLocalCurrentObjectStackCache();
	$var($longs, reducedOther, $cast($longs, $nc(other)->clone()));
	$var($longs, reducedLimbs, $cast($longs, $nc(limbs)->clone()));
	finalReduce(reducedOther);
	finalReduce(reducedLimbs);
	addLimbs(reducedLimbs, reducedOther, reducedLimbs);
	int64_t carry = 0;
	for (int32_t i = 0; i < this->numLimbs; ++i) {
		(*reducedLimbs)[i] += carry;
		carry = $sr(reducedLimbs->get(i), this->bitsPerLimb);
		(*reducedLimbs)[i] -= $sl(carry, this->bitsPerLimb);
	}
	decode(reducedLimbs, result, 0, $nc(result)->length);
}

void clinit$IntegerPolynomial($Class* class$) {
	$assignStatic(IntegerPolynomial::TWO, $BigInteger::valueOf((int64_t)2));
}

IntegerPolynomial::IntegerPolynomial() {
}

$Class* IntegerPolynomial::load$($String* name, bool initialize) {
	$loadClass(IntegerPolynomial, name, initialize, &_IntegerPolynomial_ClassInfo_, clinit$IntegerPolynomial, allocate$IntegerPolynomial);
	return class$;
}

$Class* IntegerPolynomial::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun