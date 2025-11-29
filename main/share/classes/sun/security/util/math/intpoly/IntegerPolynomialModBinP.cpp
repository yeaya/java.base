#include <sun/security/util/math/intpoly/IntegerPolynomialModBinP.h>

#include <java/math/BigInteger.h>
#include <sun/security/util/math/ImmutableIntegerModuloP.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial.h>
#include <jcpp.h>

#undef ZERO

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ImmutableIntegerModuloP = ::sun::security::util::math::ImmutableIntegerModuloP;
using $IntegerPolynomial = ::sun::security::util::math::intpoly::IntegerPolynomial;
using $IntegerPolynomial$ImmutableElement = ::sun::security::util::math::intpoly::IntegerPolynomial$ImmutableElement;

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				namespace intpoly {

$FieldInfo _IntegerPolynomialModBinP_FieldInfo_[] = {
	{"reduceLimbs", "[J", nullptr, $PRIVATE | $FINAL, $field(IntegerPolynomialModBinP, reduceLimbs)},
	{"bitOffset", "I", nullptr, $PRIVATE | $FINAL, $field(IntegerPolynomialModBinP, bitOffset)},
	{"limbMask", "I", nullptr, $PRIVATE | $FINAL, $field(IntegerPolynomialModBinP, limbMask)},
	{"rightBitOffset", "I", nullptr, $PRIVATE | $FINAL, $field(IntegerPolynomialModBinP, rightBitOffset)},
	{"power", "I", nullptr, $PRIVATE | $FINAL, $field(IntegerPolynomialModBinP, power)},
	{}
};

$MethodInfo _IntegerPolynomialModBinP_MethodInfo_[] = {
	{"<init>", "(IIILjava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(IntegerPolynomialModBinP::*)(int32_t,int32_t,int32_t,$BigInteger*)>(&IntegerPolynomialModBinP::init$))},
	{"carryReduce", "([J[J)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomialModBinP::*)($longs*,$longs*)>(&IntegerPolynomialModBinP::carryReduce))},
	{"finalCarryReduceLast", "([J)V", nullptr, $PROTECTED},
	{"getElement", "([BIIB)Lsun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement;", nullptr, $PUBLIC},
	{"modReduceInBits", "([JIIJ)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomialModBinP::*)($longs*,int32_t,int32_t,int64_t)>(&IntegerPolynomialModBinP::modReduceInBits))},
	{"mult", "([J[J[J)V", nullptr, $PROTECTED},
	{"multOnly", "([J[J[J)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomialModBinP::*)($longs*,$longs*,$longs*)>(&IntegerPolynomialModBinP::multOnly))},
	{"reduce", "([J)V", nullptr, $PROTECTED},
	{"reduceIn", "([JJI)V", nullptr, $PROTECTED},
	{"square", "([J[J)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _IntegerPolynomialModBinP_InnerClassesInfo_[] = {
	{"sun.security.util.math.intpoly.IntegerPolynomialModBinP$Curve448OrderField", "sun.security.util.math.intpoly.IntegerPolynomialModBinP", "Curve448OrderField", $PUBLIC | $STATIC},
	{"sun.security.util.math.intpoly.IntegerPolynomialModBinP$Curve25519OrderField", "sun.security.util.math.intpoly.IntegerPolynomialModBinP", "Curve25519OrderField", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _IntegerPolynomialModBinP_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.math.intpoly.IntegerPolynomialModBinP",
	"sun.security.util.math.intpoly.IntegerPolynomial",
	nullptr,
	_IntegerPolynomialModBinP_FieldInfo_,
	_IntegerPolynomialModBinP_MethodInfo_,
	nullptr,
	nullptr,
	_IntegerPolynomialModBinP_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.util.math.intpoly.IntegerPolynomialModBinP$Curve448OrderField,sun.security.util.math.intpoly.IntegerPolynomialModBinP$Curve25519OrderField"
};

$Object* allocate$IntegerPolynomialModBinP($Class* clazz) {
	return $of($alloc(IntegerPolynomialModBinP));
}

void IntegerPolynomialModBinP::init$(int32_t bitsPerLimb, int32_t numLimbs, int32_t power, $BigInteger* subtrahend$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, subtrahend, subtrahend$renamed);
	$IntegerPolynomial::init$(bitsPerLimb, numLimbs, 1, $($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(power)))->subtract(subtrahend)));
	bool negate = false;
	if ($nc(subtrahend)->compareTo($BigInteger::ZERO) < 0) {
		negate = true;
		$assign(subtrahend, subtrahend->negate());
	}
	int32_t reduceLimbsLength = $div($nc(subtrahend)->bitLength(), bitsPerLimb) + 1;
	$set(this, reduceLimbs, $new($longs, reduceLimbsLength));
	$var($IntegerPolynomial$ImmutableElement, reduceElem, $cast($IntegerPolynomial$ImmutableElement, getElement(subtrahend)));
	if (negate) {
		$assign(reduceElem, $cast($IntegerPolynomial$ImmutableElement, $nc(reduceElem)->additiveInverse()));
	}
	$System::arraycopy($nc(reduceElem)->limbs, 0, this->reduceLimbs, 0, $nc(this->reduceLimbs)->length);
	$nc($System::out)->println("reduce limbs:"_s);
	for (int32_t i = 0; i < $nc(this->reduceLimbs)->length; ++i) {
		$nc($System::out)->println($$str({$$str(i), ":"_s, $$str($nc(this->reduceLimbs)->get(i))}));
	}
	this->power = power;
	this->bitOffset = numLimbs * bitsPerLimb - power;
	this->limbMask = $usr(-1, 64 - bitsPerLimb);
	this->rightBitOffset = bitsPerLimb - this->bitOffset;
}

void IntegerPolynomialModBinP::finalCarryReduceLast($longs* limbs) {
	int32_t extraBits = this->bitsPerLimb * this->numLimbs - this->power;
	int32_t highBits = this->bitsPerLimb - extraBits;
	int64_t c = $sr($nc(limbs)->get(this->numLimbs - 1), highBits);
	(*limbs)[this->numLimbs - 1] -= $sl(c, highBits);
	for (int32_t j = 0; j < $nc(this->reduceLimbs)->length; ++j) {
		int32_t reduceBits = this->power + extraBits - j * this->bitsPerLimb;
		modReduceInBits(limbs, this->numLimbs, reduceBits, c * $nc(this->reduceLimbs)->get(j));
	}
}

$ImmutableIntegerModuloP* IntegerPolynomialModBinP::getElement($bytes* v, int32_t offset, int32_t length, int8_t highByte) {
	$useLocalCurrentObjectStackCache();
	$var($longs, result, $new($longs, this->numLimbs));
	int32_t numHighBits = 32 - $Integer::numberOfLeadingZeros(highByte);
	int32_t numBits = 8 * length + numHighBits;
	int32_t requiredLimbs = $div((numBits + this->bitsPerLimb - 1), this->bitsPerLimb);
	if (requiredLimbs > this->numLimbs) {
		$var($longs, temp, $new($longs, requiredLimbs));
		encode(v, offset, length, highByte, temp);
		$System::arraycopy(temp, 0, result, 0, result->length);
	} else {
		encode(v, offset, length, highByte, result);
	}
	return $new($IntegerPolynomial$ImmutableElement, this, result, 0);
}

void IntegerPolynomialModBinP::multOnly($longs* a, $longs* b, $longs* c) {
	for (int32_t i = 0; i < this->numLimbs; ++i) {
		for (int32_t j = 0; j < this->numLimbs; ++j) {
			(*$nc(c))[i + j] += $nc(a)->get(i) * $nc(b)->get(j);
		}
	}
}

void IntegerPolynomialModBinP::mult($longs* a, $longs* b, $longs* r) {
	$var($longs, c, $new($longs, 2 * this->numLimbs));
	multOnly(a, b, c);
	carryReduce(c, r);
}

void IntegerPolynomialModBinP::modReduceInBits($longs* limbs, int32_t index, int32_t bits, int64_t x) {
	if ($mod(bits, this->bitsPerLimb) == 0) {
		int32_t pos = $div(bits, this->bitsPerLimb);
		(*$nc(limbs))[index - pos] += x;
	} else {
		int32_t secondPos = $div(bits, (this->bitsPerLimb));
		int32_t bitOffset = (secondPos + 1) * this->bitsPerLimb - bits;
		int32_t rightBitOffset = this->bitsPerLimb - bitOffset;
		(*$nc(limbs))[index - (secondPos + 1)] += (int64_t)(($sl(x, bitOffset)) & (uint64_t)(int64_t)this->limbMask);
		(*limbs)[index - secondPos] += $sr(x, rightBitOffset);
	}
}

void IntegerPolynomialModBinP::reduceIn($longs* c, int64_t v, int32_t i) {
	for (int32_t j = 0; j < $nc(this->reduceLimbs)->length; ++j) {
		modReduceInBits(c, i, this->power - this->bitsPerLimb * j, $nc(this->reduceLimbs)->get(j) * v);
	}
}

void IntegerPolynomialModBinP::carryReduce($longs* c, $longs* r) {
	carry(c);
	for (int32_t i = $nc(c)->length - 1; i >= this->numLimbs; --i) {
		reduceIn(c, c->get(i), i);
		c->set(i, 0);
	}
	carry(c, 0, this->numLimbs);
	reduceIn(c, c->get(this->numLimbs), this->numLimbs);
	c->set(this->numLimbs, 0);
	carry(c, 0, this->numLimbs - 1);
	$System::arraycopy(c, 0, r, 0, $nc(r)->length);
}

void IntegerPolynomialModBinP::reduce($longs* a) {
	$var($longs, c, $new($longs, $nc(a)->length + 2));
	$System::arraycopy(a, 0, c, 0, a->length);
	carryReduce(c, a);
}

void IntegerPolynomialModBinP::square($longs* a, $longs* r) {
	$var($longs, c, $new($longs, 2 * this->numLimbs));
	for (int32_t i = 0; i < this->numLimbs; ++i) {
		(*c)[2 * i] += $nc(a)->get(i) * a->get(i);
		for (int32_t j = i + 1; j < this->numLimbs; ++j) {
			(*c)[i + j] += 2 * a->get(i) * a->get(j);
		}
	}
	carryReduce(c, r);
}

IntegerPolynomialModBinP::IntegerPolynomialModBinP() {
}

$Class* IntegerPolynomialModBinP::load$($String* name, bool initialize) {
	$loadClass(IntegerPolynomialModBinP, name, initialize, &_IntegerPolynomialModBinP_ClassInfo_, allocate$IntegerPolynomialModBinP);
	return class$;
}

$Class* IntegerPolynomialModBinP::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun