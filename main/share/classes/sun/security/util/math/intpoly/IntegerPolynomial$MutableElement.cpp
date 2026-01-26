#include <sun/security/util/math/intpoly/IntegerPolynomial$MutableElement.h>

#include <java/lang/Math.h>
#include <java/math/BigInteger.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/util/math/ImmutableIntegerModuloP.h>
#include <sun/security/util/math/IntegerFieldModuloP.h>
#include <sun/security/util/math/IntegerModuloP.h>
#include <sun/security/util/math/MutableIntegerModuloP.h>
#include <sun/security/util/math/SmallValue.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial$Element.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial$Limb.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial.h>
#include <jcpp.h>

using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ImmutableIntegerModuloP = ::sun::security::util::math::ImmutableIntegerModuloP;
using $IntegerFieldModuloP = ::sun::security::util::math::IntegerFieldModuloP;
using $IntegerModuloP = ::sun::security::util::math::IntegerModuloP;
using $MutableIntegerModuloP = ::sun::security::util::math::MutableIntegerModuloP;
using $SmallValue = ::sun::security::util::math::SmallValue;
using $IntegerPolynomial = ::sun::security::util::math::intpoly::IntegerPolynomial;
using $IntegerPolynomial$Element = ::sun::security::util::math::intpoly::IntegerPolynomial$Element;
using $IntegerPolynomial$ImmutableElement = ::sun::security::util::math::intpoly::IntegerPolynomial$ImmutableElement;
using $IntegerPolynomial$Limb = ::sun::security::util::math::intpoly::IntegerPolynomial$Limb;

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				namespace intpoly {

$FieldInfo _IntegerPolynomial$MutableElement_FieldInfo_[] = {
	{"this$0", "Lsun/security/util/math/intpoly/IntegerPolynomial;", nullptr, $FINAL | $SYNTHETIC, $field(IntegerPolynomial$MutableElement, this$0)},
	{}
};

$MethodInfo _IntegerPolynomial$MutableElement_MethodInfo_[] = {
	{"*add", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC},
	{"*addModPowerTwo", "(Lsun/security/util/math/IntegerModuloP;[B)V", nullptr, $PUBLIC},
	{"*addModPowerTwo", "(Lsun/security/util/math/IntegerModuloP;I)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"*additiveInverse", "()Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC},
	{"*asBigInteger", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"*asByteArray", "([B)V", nullptr, $PUBLIC},
	{"*asByteArray", "(I)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getField", "()Lsun/security/util/math/IntegerFieldModuloP;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/security/util/math/intpoly/IntegerPolynomial;[JI)V", nullptr, $PROTECTED, $method(IntegerPolynomial$MutableElement, init$, void, $IntegerPolynomial*, $longs*, int32_t)},
	{"conditionalSet", "(Lsun/security/util/math/IntegerModuloP;I)V", nullptr, $PUBLIC, $virtualMethod(IntegerPolynomial$MutableElement, conditionalSet, void, $IntegerModuloP*, int32_t)},
	{"conditionalSwapWith", "(Lsun/security/util/math/MutableIntegerModuloP;I)V", nullptr, $PUBLIC, $virtualMethod(IntegerPolynomial$MutableElement, conditionalSwapWith, void, $MutableIntegerModuloP*, int32_t)},
	{"fixed", "()Lsun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement;", nullptr, $PUBLIC, $virtualMethod(IntegerPolynomial$MutableElement, fixed, $ImmutableIntegerModuloP*)},
	{"*multiplicativeInverse", "()Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT},
	{"*multiply", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC},
	{"*mutable$", "()Lsun/security/util/math/MutableIntegerModuloP;", nullptr, $PUBLIC},
	{"*pow", "(Ljava/math/BigInteger;)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT},
	{"setAdditiveInverse", "()Lsun/security/util/math/intpoly/IntegerPolynomial$MutableElement;", nullptr, $PUBLIC, $virtualMethod(IntegerPolynomial$MutableElement, setAdditiveInverse, $MutableIntegerModuloP*)},
	{"setDifference", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/intpoly/IntegerPolynomial$MutableElement;", nullptr, $PUBLIC, $virtualMethod(IntegerPolynomial$MutableElement, setDifference, $MutableIntegerModuloP*, $IntegerModuloP*)},
	{"setProduct", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/intpoly/IntegerPolynomial$MutableElement;", nullptr, $PUBLIC, $virtualMethod(IntegerPolynomial$MutableElement, setProduct, $MutableIntegerModuloP*, $IntegerModuloP*)},
	{"setProduct", "(Lsun/security/util/math/SmallValue;)Lsun/security/util/math/intpoly/IntegerPolynomial$MutableElement;", nullptr, $PUBLIC, $virtualMethod(IntegerPolynomial$MutableElement, setProduct, $MutableIntegerModuloP*, $SmallValue*)},
	{"setReduced", "()Lsun/security/util/math/intpoly/IntegerPolynomial$MutableElement;", nullptr, $PUBLIC, $virtualMethod(IntegerPolynomial$MutableElement, setReduced, $MutableIntegerModuloP*)},
	{"setSquare", "()Lsun/security/util/math/intpoly/IntegerPolynomial$MutableElement;", nullptr, $PUBLIC, $virtualMethod(IntegerPolynomial$MutableElement, setSquare, $MutableIntegerModuloP*)},
	{"setSum", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/intpoly/IntegerPolynomial$MutableElement;", nullptr, $PUBLIC, $virtualMethod(IntegerPolynomial$MutableElement, setSum, $MutableIntegerModuloP*, $IntegerModuloP*)},
	{"setValue", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/intpoly/IntegerPolynomial$MutableElement;", nullptr, $PUBLIC, $virtualMethod(IntegerPolynomial$MutableElement, setValue, $MutableIntegerModuloP*, $IntegerModuloP*)},
	{"setValue", "([BIIB)Lsun/security/util/math/intpoly/IntegerPolynomial$MutableElement;", nullptr, $PUBLIC, $virtualMethod(IntegerPolynomial$MutableElement, setValue, $MutableIntegerModuloP*, $bytes*, int32_t, int32_t, int8_t)},
	{"setValue", "(Ljava/nio/ByteBuffer;IB)Lsun/security/util/math/intpoly/IntegerPolynomial$MutableElement;", nullptr, $PUBLIC, $virtualMethod(IntegerPolynomial$MutableElement, setValue, $MutableIntegerModuloP*, $ByteBuffer*, int32_t, int8_t)},
	{"*square", "()Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC},
	{"*subtract", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _IntegerPolynomial$MutableElement_InnerClassesInfo_[] = {
	{"sun.security.util.math.intpoly.IntegerPolynomial$MutableElement", "sun.security.util.math.intpoly.IntegerPolynomial", "MutableElement", $PROTECTED},
	{"sun.security.util.math.intpoly.IntegerPolynomial$Element", "sun.security.util.math.intpoly.IntegerPolynomial", "Element", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _IntegerPolynomial$MutableElement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.math.intpoly.IntegerPolynomial$MutableElement",
	"sun.security.util.math.intpoly.IntegerPolynomial$Element",
	"sun.security.util.math.MutableIntegerModuloP",
	_IntegerPolynomial$MutableElement_FieldInfo_,
	_IntegerPolynomial$MutableElement_MethodInfo_,
	nullptr,
	nullptr,
	_IntegerPolynomial$MutableElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.math.intpoly.IntegerPolynomial"
};

$Object* allocate$IntegerPolynomial$MutableElement($Class* clazz) {
	return $of($alloc(IntegerPolynomial$MutableElement));
}

$IntegerFieldModuloP* IntegerPolynomial$MutableElement::getField() {
	 return this->$IntegerPolynomial$Element::getField();
}

$BigInteger* IntegerPolynomial$MutableElement::asBigInteger() {
	 return this->$IntegerPolynomial$Element::asBigInteger();
}

$MutableIntegerModuloP* IntegerPolynomial$MutableElement::mutable$() {
	 return this->$IntegerPolynomial$Element::mutable$();
}

$ImmutableIntegerModuloP* IntegerPolynomial$MutableElement::add($IntegerModuloP* genB) {
	 return this->$IntegerPolynomial$Element::add(genB);
}

$ImmutableIntegerModuloP* IntegerPolynomial$MutableElement::additiveInverse() {
	 return this->$IntegerPolynomial$Element::additiveInverse();
}

$ImmutableIntegerModuloP* IntegerPolynomial$MutableElement::multiply($IntegerModuloP* genB) {
	 return this->$IntegerPolynomial$Element::multiply(genB);
}

$ImmutableIntegerModuloP* IntegerPolynomial$MutableElement::square() {
	 return this->$IntegerPolynomial$Element::square();
}

void IntegerPolynomial$MutableElement::addModPowerTwo($IntegerModuloP* arg, $bytes* result) {
	this->$IntegerPolynomial$Element::addModPowerTwo(arg, result);
}

void IntegerPolynomial$MutableElement::asByteArray($bytes* result) {
	this->$IntegerPolynomial$Element::asByteArray(result);
}

$bytes* IntegerPolynomial$MutableElement::addModPowerTwo($IntegerModuloP* b, int32_t len) {
	 return this->$IntegerPolynomial$Element::addModPowerTwo(b, len);
}

$bytes* IntegerPolynomial$MutableElement::asByteArray(int32_t len) {
	 return this->$IntegerPolynomial$Element::asByteArray(len);
}

$ImmutableIntegerModuloP* IntegerPolynomial$MutableElement::multiplicativeInverse() {
	 return this->$IntegerPolynomial$Element::multiplicativeInverse();
}

$ImmutableIntegerModuloP* IntegerPolynomial$MutableElement::subtract($IntegerModuloP* b) {
	 return this->$IntegerPolynomial$Element::subtract(b);
}

$ImmutableIntegerModuloP* IntegerPolynomial$MutableElement::pow($BigInteger* b) {
	 return this->$IntegerPolynomial$Element::pow(b);
}

int32_t IntegerPolynomial$MutableElement::hashCode() {
	 return this->$IntegerPolynomial$Element::hashCode();
}

bool IntegerPolynomial$MutableElement::equals(Object$* obj) {
	 return this->$IntegerPolynomial$Element::equals(obj);
}

$Object* IntegerPolynomial$MutableElement::clone() {
	 return this->$IntegerPolynomial$Element::clone();
}

$String* IntegerPolynomial$MutableElement::toString() {
	 return this->$IntegerPolynomial$Element::toString();
}

void IntegerPolynomial$MutableElement::finalize() {
	this->$IntegerPolynomial$Element::finalize();
}

void IntegerPolynomial$MutableElement::init$($IntegerPolynomial* this$0, $longs* limbs, int32_t numAdds) {
	$set(this, this$0, this$0);
	$IntegerPolynomial$Element::init$(this$0, limbs, numAdds);
}

$ImmutableIntegerModuloP* IntegerPolynomial$MutableElement::fixed() {
	return $new($IntegerPolynomial$ImmutableElement, this->this$0, $cast($longs, $($nc(this->limbs)->clone())), this->numAdds);
}

void IntegerPolynomial$MutableElement::conditionalSet($IntegerModuloP* b, int32_t set) {
	$var($IntegerPolynomial$Element, other, $cast($IntegerPolynomial$Element, b));
	$IntegerPolynomial::conditionalAssign(set, this->limbs, $nc(other)->limbs);
	this->numAdds = $nc(other)->numAdds;
}

void IntegerPolynomial$MutableElement::conditionalSwapWith($MutableIntegerModuloP* b, int32_t swap) {
	$var(IntegerPolynomial$MutableElement, other, $cast(IntegerPolynomial$MutableElement, b));
	$IntegerPolynomial::conditionalSwap(swap, this->limbs, $nc(other)->limbs);
	int32_t numAddsTemp = this->numAdds;
	this->numAdds = $nc(other)->numAdds;
	other->numAdds = numAddsTemp;
}

$MutableIntegerModuloP* IntegerPolynomial$MutableElement::setValue($IntegerModuloP* v) {
	$var($IntegerPolynomial$Element, other, $cast($IntegerPolynomial$Element, v));
	$System::arraycopy($nc(other)->limbs, 0, this->limbs, 0, $nc(other->limbs)->length);
	this->numAdds = $nc(other)->numAdds;
	return this;
}

$MutableIntegerModuloP* IntegerPolynomial$MutableElement::setValue($bytes* arr, int32_t offset, int32_t length, int8_t highByte) {
	this->this$0->encode(arr, offset, length, highByte, this->limbs);
	this->numAdds = 0;
	return this;
}

$MutableIntegerModuloP* IntegerPolynomial$MutableElement::setValue($ByteBuffer* buf, int32_t length, int8_t highByte) {
	this->this$0->encode(buf, length, highByte, this->limbs);
	this->numAdds = 0;
	return this;
}

$MutableIntegerModuloP* IntegerPolynomial$MutableElement::setProduct($IntegerModuloP* genB) {
	$var($IntegerPolynomial$Element, b, $cast($IntegerPolynomial$Element, genB));
	this->this$0->mult(this->limbs, $nc(b)->limbs, this->limbs);
	this->numAdds = 0;
	return this;
}

$MutableIntegerModuloP* IntegerPolynomial$MutableElement::setProduct($SmallValue* v) {
	int32_t value = $nc(($cast($IntegerPolynomial$Limb, v)))->value;
	this->this$0->multByInt(this->limbs, value);
	this->numAdds = 0;
	return this;
}

$MutableIntegerModuloP* IntegerPolynomial$MutableElement::setSum($IntegerModuloP* genB) {
	$var($IntegerPolynomial$Element, b, $cast($IntegerPolynomial$Element, genB));
	bool var$0 = isSummand();
	if (!(var$0 && $nc(b)->isSummand())) {
		$throwNew($ArithmeticException, "Not a valid summand"_s);
	}
	for (int32_t i = 0; i < $nc(this->limbs)->length; ++i) {
		$nc(this->limbs)->set(i, $nc(this->limbs)->get(i) + $nc($nc(b)->limbs)->get(i));
	}
	this->numAdds = $Math::max(this->numAdds, $nc(b)->numAdds) + 1;
	return this;
}

$MutableIntegerModuloP* IntegerPolynomial$MutableElement::setDifference($IntegerModuloP* genB) {
	$var($IntegerPolynomial$Element, b, $cast($IntegerPolynomial$Element, genB));
	bool var$0 = isSummand();
	if (!(var$0 && $nc(b)->isSummand())) {
		$throwNew($ArithmeticException, "Not a valid summand"_s);
	}
	for (int32_t i = 0; i < $nc(this->limbs)->length; ++i) {
		$nc(this->limbs)->set(i, $nc(this->limbs)->get(i) - $nc($nc(b)->limbs)->get(i));
	}
	this->numAdds = $Math::max(this->numAdds, $nc(b)->numAdds) + 1;
	return this;
}

$MutableIntegerModuloP* IntegerPolynomial$MutableElement::setSquare() {
	this->this$0->square(this->limbs, this->limbs);
	this->numAdds = 0;
	return this;
}

$MutableIntegerModuloP* IntegerPolynomial$MutableElement::setAdditiveInverse() {
	for (int32_t i = 0; i < $nc(this->limbs)->length; ++i) {
		$nc(this->limbs)->set(i, -$nc(this->limbs)->get(i));
	}
	return this;
}

$MutableIntegerModuloP* IntegerPolynomial$MutableElement::setReduced() {
	this->this$0->reduce(this->limbs);
	this->numAdds = 0;
	return this;
}

IntegerPolynomial$MutableElement::IntegerPolynomial$MutableElement() {
}

$Class* IntegerPolynomial$MutableElement::load$($String* name, bool initialize) {
	$loadClass(IntegerPolynomial$MutableElement, name, initialize, &_IntegerPolynomial$MutableElement_ClassInfo_, allocate$IntegerPolynomial$MutableElement);
	return class$;
}

$Class* IntegerPolynomial$MutableElement::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun