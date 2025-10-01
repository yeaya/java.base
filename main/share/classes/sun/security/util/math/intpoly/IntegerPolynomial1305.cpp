#include <sun/security/util/math/intpoly/IntegerPolynomial1305.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial.h>
#include <jcpp.h>

#undef SUBTRAHEND
#undef NUM_LIMBS
#undef MODULUS
#undef AS_LONG_LE
#undef POWER
#undef LITTLE_ENDIAN
#undef BITS_PER_LIMB
#undef TWO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $BigInteger = ::java::math::BigInteger;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $IntegerPolynomial = ::sun::security::util::math::intpoly::IntegerPolynomial;

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				namespace intpoly {

$FieldInfo _IntegerPolynomial1305_FieldInfo_[] = {
	{"SUBTRAHEND", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(IntegerPolynomial1305, SUBTRAHEND)},
	{"NUM_LIMBS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(IntegerPolynomial1305, NUM_LIMBS)},
	{"POWER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomial1305, POWER)},
	{"BITS_PER_LIMB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomial1305, BITS_PER_LIMB)},
	{"MODULUS", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IntegerPolynomial1305, MODULUS)},
	{"AS_LONG_LE", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IntegerPolynomial1305, AS_LONG_LE)},
	{}
};

$MethodInfo _IntegerPolynomial1305_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntegerPolynomial1305::*)()>(&IntegerPolynomial1305::init$))},
	{"carryReduce", "([JJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomial1305::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&IntegerPolynomial1305::carryReduce))},
	{"carryValue", "(J)J", nullptr, $PROTECTED},
	{"encode", "(Ljava/nio/ByteBuffer;IB[J)V", nullptr, $PROTECTED},
	{"encode", "(JJB[J)V", nullptr, $PROTECTED},
	{"encode", "([BIIB[J)V", nullptr, $PROTECTED},
	{"finalCarryReduceLast", "([J)V", nullptr, $PROTECTED},
	{"modReduce", "([JII)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(IntegerPolynomial1305::*)($longs*,int32_t,int32_t)>(&IntegerPolynomial1305::modReduce))},
	{"modReduce", "([J)V", nullptr, $PROTECTED},
	{"mult", "([J[J[J)V", nullptr, $PROTECTED},
	{"postEncodeCarry", "([J)V", nullptr, $PROTECTED},
	{"reduce", "([J)V", nullptr, $PROTECTED},
	{"reduceIn", "([JJI)V", nullptr, $PROTECTED},
	{"square", "([J[J)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _IntegerPolynomial1305_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.math.intpoly.IntegerPolynomial1305",
	"sun.security.util.math.intpoly.IntegerPolynomial",
	nullptr,
	_IntegerPolynomial1305_FieldInfo_,
	_IntegerPolynomial1305_MethodInfo_
};

$Object* allocate$IntegerPolynomial1305($Class* clazz) {
	return $of($alloc(IntegerPolynomial1305));
}

$BigInteger* IntegerPolynomial1305::MODULUS = nullptr;
$VarHandle* IntegerPolynomial1305::AS_LONG_LE = nullptr;

void IntegerPolynomial1305::init$() {
	$IntegerPolynomial::init$(IntegerPolynomial1305::BITS_PER_LIMB, IntegerPolynomial1305::NUM_LIMBS, 1, IntegerPolynomial1305::MODULUS);
}

void IntegerPolynomial1305::mult($longs* a, $longs* b, $longs* r) {
	int64_t c0 = ($nc(a)->get(0) * $nc(b)->get(0));
	int64_t c1 = (a->get(0) * b->get(1)) + (a->get(1) * b->get(0));
	int64_t c2 = (a->get(0) * b->get(2)) + (a->get(1) * b->get(1)) + (a->get(2) * b->get(0));
	int64_t c3 = (a->get(0) * b->get(3)) + (a->get(1) * b->get(2)) + (a->get(2) * b->get(1)) + (a->get(3) * b->get(0));
	int64_t c4 = (a->get(0) * b->get(4)) + (a->get(1) * b->get(3)) + (a->get(2) * b->get(2)) + (a->get(3) * b->get(1)) + (a->get(4) * b->get(0));
	int64_t c5 = (a->get(1) * b->get(4)) + (a->get(2) * b->get(3)) + (a->get(3) * b->get(2)) + (a->get(4) * b->get(1));
	int64_t c6 = (a->get(2) * b->get(4)) + (a->get(3) * b->get(3)) + (a->get(4) * b->get(2));
	int64_t c7 = (a->get(3) * b->get(4)) + (a->get(4) * b->get(3));
	int64_t c8 = (a->get(4) * b->get(4));
	carryReduce(r, c0, c1, c2, c3, c4, c5, c6, c7, c8);
}

void IntegerPolynomial1305::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8) {
	$nc(r)->set(2, c2 + (c7 * IntegerPolynomial1305::SUBTRAHEND));
	c3 += (c8 * IntegerPolynomial1305::SUBTRAHEND);
	int64_t carry3 = carryValue(c3);
	r->set(3, c3 - ($sl(carry3, IntegerPolynomial1305::BITS_PER_LIMB)));
	c4 += carry3;
	int64_t carry4 = carryValue(c4);
	r->set(4, c4 - ($sl(carry4, IntegerPolynomial1305::BITS_PER_LIMB)));
	c5 += carry4;
	r->set(0, c0 + (c5 * IntegerPolynomial1305::SUBTRAHEND));
	r->set(1, c1 + (c6 * IntegerPolynomial1305::SUBTRAHEND));
	carry(r);
}

void IntegerPolynomial1305::square($longs* a, $longs* r) {
	int64_t c0 = ($nc(a)->get(0) * a->get(0));
	int64_t c1 = 2 * (a->get(0) * a->get(1));
	int64_t c2 = 2 * (a->get(0) * a->get(2)) + (a->get(1) * a->get(1));
	int64_t c3 = 2 * (a->get(0) * a->get(3) + a->get(1) * a->get(2));
	int64_t c4 = 2 * (a->get(0) * a->get(4) + a->get(1) * a->get(3)) + (a->get(2) * a->get(2));
	int64_t c5 = 2 * (a->get(1) * a->get(4) + a->get(2) * a->get(3));
	int64_t c6 = 2 * (a->get(2) * a->get(4)) + (a->get(3) * a->get(3));
	int64_t c7 = 2 * (a->get(3) * a->get(4));
	int64_t c8 = (a->get(4) * a->get(4));
	carryReduce(r, c0, c1, c2, c3, c4, c5, c6, c7, c8);
}

void IntegerPolynomial1305::encode($ByteBuffer* buf, int32_t length, int8_t highByte, $longs* result) {
	if (length == 16) {
		int64_t low = $nc(buf)->getLong();
		int64_t high = buf->getLong();
		encode(high, low, highByte, result);
	} else {
		$IntegerPolynomial::encode(buf, length, highByte, result);
	}
}

void IntegerPolynomial1305::encode(int64_t high, int64_t low, int8_t highByte, $longs* result) {
	$nc(result)->set(0, (int64_t)(low & (uint64_t)(int64_t)67108863));
	result->set(1, (int64_t)(((int64_t)((uint64_t)low >> 26)) & (uint64_t)(int64_t)67108863));
	result->set(2, ((int64_t)((uint64_t)low >> 52)) + (((int64_t)(high & (uint64_t)(int64_t)16383)) << 12));
	result->set(3, (int64_t)(((int64_t)((uint64_t)high >> 14)) & (uint64_t)(int64_t)67108863));
	result->set(4, ((int64_t)((uint64_t)high >> 40)) + ($sl((int32_t)highByte, 24)));
}

void IntegerPolynomial1305::encode($bytes* v, int32_t offset, int32_t length, int8_t highByte, $longs* result) {
	if (length == 16) {
		int64_t low = $longValue($nc(IntegerPolynomial1305::AS_LONG_LE)->get($$new($ObjectArray, {$of(v), $$of(offset)})));
		int64_t high = $longValue($nc(IntegerPolynomial1305::AS_LONG_LE)->get($$new($ObjectArray, {$of(v), $$of((offset + 8))})));
		encode(high, low, highByte, result);
	} else {
		$IntegerPolynomial::encode(v, offset, length, highByte, result);
	}
}

void IntegerPolynomial1305::reduceIn($longs* limbs, int64_t x, int32_t index) {
	int64_t reducedValue = (x * IntegerPolynomial1305::SUBTRAHEND);
	(*$nc(limbs))[index - IntegerPolynomial1305::NUM_LIMBS] += reducedValue;
}

void IntegerPolynomial1305::finalCarryReduceLast($longs* limbs) {
	int64_t carry = $sr($nc(limbs)->get(this->numLimbs - 1), this->bitsPerLimb);
	(*limbs)[this->numLimbs - 1] -= $sl(carry, this->bitsPerLimb);
	reduceIn(limbs, carry, this->numLimbs);
}

void IntegerPolynomial1305::modReduce($longs* limbs, int32_t start, int32_t end) {
	for (int32_t i = start; i < end; ++i) {
		reduceIn(limbs, $nc(limbs)->get(i), i);
		$nc(limbs)->set(i, 0);
	}
}

void IntegerPolynomial1305::modReduce($longs* limbs) {
	modReduce(limbs, IntegerPolynomial1305::NUM_LIMBS, IntegerPolynomial1305::NUM_LIMBS - 1);
}

int64_t IntegerPolynomial1305::carryValue(int64_t x) {
	return $sr(x, IntegerPolynomial1305::BITS_PER_LIMB);
}

void IntegerPolynomial1305::postEncodeCarry($longs* v) {
}

void IntegerPolynomial1305::reduce($longs* limbs) {
	int64_t carry3 = carryOut(limbs, 3);
	int64_t new4 = carry3 + $nc(limbs)->get(4);
	int64_t carry4 = carryValue(new4);
	limbs->set(4, new4 - ($sl(carry4, IntegerPolynomial1305::BITS_PER_LIMB)));
	reduceIn(limbs, carry4, 5);
	carry(limbs);
}

void clinit$IntegerPolynomial1305($Class* class$) {
	$init($IntegerPolynomial);
	$assignStatic(IntegerPolynomial1305::MODULUS, $nc($($nc($IntegerPolynomial::TWO)->pow(IntegerPolynomial1305::POWER)))->subtract($($BigInteger::valueOf((int64_t)IntegerPolynomial1305::SUBTRAHEND))));
	$load($longs);
	$init($ByteOrder);
	$assignStatic(IntegerPolynomial1305::AS_LONG_LE, $MethodHandles::byteArrayViewVarHandle($getClass($longs), $ByteOrder::LITTLE_ENDIAN));
}

IntegerPolynomial1305::IntegerPolynomial1305() {
}

$Class* IntegerPolynomial1305::load$($String* name, bool initialize) {
	$loadClass(IntegerPolynomial1305, name, initialize, &_IntegerPolynomial1305_ClassInfo_, clinit$IntegerPolynomial1305, allocate$IntegerPolynomial1305);
	return class$;
}

$Class* IntegerPolynomial1305::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun