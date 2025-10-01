#include <sun/security/util/math/intpoly/IntegerPolynomial$Element.h>

#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <sun/security/util/math/ImmutableIntegerModuloP.h>
#include <sun/security/util/math/IntegerFieldModuloP.h>
#include <sun/security/util/math/IntegerModuloP.h>
#include <sun/security/util/math/MutableIntegerModuloP.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial$MutableElement.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial.h>
#include <jcpp.h>

using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ImmutableIntegerModuloP = ::sun::security::util::math::ImmutableIntegerModuloP;
using $IntegerFieldModuloP = ::sun::security::util::math::IntegerFieldModuloP;
using $IntegerModuloP = ::sun::security::util::math::IntegerModuloP;
using $MutableIntegerModuloP = ::sun::security::util::math::MutableIntegerModuloP;
using $IntegerPolynomial = ::sun::security::util::math::intpoly::IntegerPolynomial;
using $IntegerPolynomial$ImmutableElement = ::sun::security::util::math::intpoly::IntegerPolynomial$ImmutableElement;
using $IntegerPolynomial$MutableElement = ::sun::security::util::math::intpoly::IntegerPolynomial$MutableElement;

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				namespace intpoly {

$FieldInfo _IntegerPolynomial$Element_FieldInfo_[] = {
	{"this$0", "Lsun/security/util/math/intpoly/IntegerPolynomial;", nullptr, $FINAL | $SYNTHETIC, $field(IntegerPolynomial$Element, this$0)},
	{"limbs", "[J", nullptr, $PROTECTED, $field(IntegerPolynomial$Element, limbs)},
	{"numAdds", "I", nullptr, $PROTECTED, $field(IntegerPolynomial$Element, numAdds)},
	{}
};

$MethodInfo _IntegerPolynomial$Element_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/math/intpoly/IntegerPolynomial;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(IntegerPolynomial$Element::*)($IntegerPolynomial*,$BigInteger*)>(&IntegerPolynomial$Element::init$))},
	{"<init>", "(Lsun/security/util/math/intpoly/IntegerPolynomial;Z)V", nullptr, $PUBLIC, $method(static_cast<void(IntegerPolynomial$Element::*)($IntegerPolynomial*,bool)>(&IntegerPolynomial$Element::init$))},
	{"<init>", "(Lsun/security/util/math/intpoly/IntegerPolynomial;[JI)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomial$Element::*)($IntegerPolynomial*,$longs*,int32_t)>(&IntegerPolynomial$Element::init$))},
	{"add", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement;", nullptr, $PUBLIC},
	{"addModPowerTwo", "(Lsun/security/util/math/IntegerModuloP;[B)V", nullptr, $PUBLIC},
	{"additiveInverse", "()Lsun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement;", nullptr, $PUBLIC},
	{"asBigInteger", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"asByteArray", "([B)V", nullptr, $PUBLIC},
	{"cloneLow", "([J)[J", nullptr, $PROTECTED},
	{"copyLow", "([J[J)V", nullptr, $PROTECTED},
	{"getField", "()Lsun/security/util/math/IntegerFieldModuloP;", nullptr, $PUBLIC},
	{"isSummand", "()Z", nullptr, $PROTECTED},
	{"multiply", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement;", nullptr, $PUBLIC},
	{"mutable", "()Lsun/security/util/math/intpoly/IntegerPolynomial$MutableElement;", nullptr, $PUBLIC},
	{"setValue", "(Ljava/math/BigInteger;)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomial$Element::*)($BigInteger*)>(&IntegerPolynomial$Element::setValue))},
	{"square", "()Lsun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _IntegerPolynomial$Element_InnerClassesInfo_[] = {
	{"sun.security.util.math.intpoly.IntegerPolynomial$Element", "sun.security.util.math.intpoly.IntegerPolynomial", "Element", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _IntegerPolynomial$Element_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.util.math.intpoly.IntegerPolynomial$Element",
	"java.lang.Object",
	"sun.security.util.math.IntegerModuloP",
	_IntegerPolynomial$Element_FieldInfo_,
	_IntegerPolynomial$Element_MethodInfo_,
	nullptr,
	nullptr,
	_IntegerPolynomial$Element_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.math.intpoly.IntegerPolynomial"
};

$Object* allocate$IntegerPolynomial$Element($Class* clazz) {
	return $of($alloc(IntegerPolynomial$Element));
}

void IntegerPolynomial$Element::init$($IntegerPolynomial* this$0, $BigInteger* v) {
	$set(this, this$0, this$0);
	$set(this, limbs, $new($longs, this$0->numLimbs));
	setValue(v);
}

void IntegerPolynomial$Element::init$($IntegerPolynomial* this$0, bool v) {
	$set(this, this$0, this$0);
	$set(this, limbs, $new($longs, this$0->numLimbs));
	$nc(this->limbs)->set(0, v ? (int64_t)1 : (int64_t)0);
	this->numAdds = 0;
}

void IntegerPolynomial$Element::init$($IntegerPolynomial* this$0, $longs* limbs, int32_t numAdds) {
	$set(this, this$0, this$0);
	$set(this, limbs, limbs);
	this->numAdds = numAdds;
}

void IntegerPolynomial$Element::setValue($BigInteger* v) {
	this->this$0->setLimbsValue(v, this->limbs);
	this->numAdds = 0;
}

$IntegerFieldModuloP* IntegerPolynomial$Element::getField() {
	return this->this$0;
}

$BigInteger* IntegerPolynomial$Element::asBigInteger() {
	return this->this$0->evaluate(this->limbs);
}

$MutableIntegerModuloP* IntegerPolynomial$Element::mutable$() {
	return $new($IntegerPolynomial$MutableElement, this->this$0, $cast($longs, $($nc(this->limbs)->clone())), this->numAdds);
}

bool IntegerPolynomial$Element::isSummand() {
	return this->numAdds < this->this$0->maxAdds;
}

$ImmutableIntegerModuloP* IntegerPolynomial$Element::add($IntegerModuloP* genB) {
	$var(IntegerPolynomial$Element, b, $cast(IntegerPolynomial$Element, genB));
	bool var$0 = isSummand();
	if (!(var$0 && $nc(b)->isSummand())) {
		$throwNew($ArithmeticException, "Not a valid summand"_s);
	}
	$var($longs, newLimbs, $new($longs, $nc(this->limbs)->length));
	for (int32_t i = 0; i < $nc(this->limbs)->length; ++i) {
		newLimbs->set(i, $nc(this->limbs)->get(i) + $nc($nc(b)->limbs)->get(i));
	}
	int32_t newNumAdds = $Math::max(this->numAdds, $nc(b)->numAdds) + 1;
	return $new($IntegerPolynomial$ImmutableElement, this->this$0, newLimbs, newNumAdds);
}

$ImmutableIntegerModuloP* IntegerPolynomial$Element::additiveInverse() {
	$var($longs, newLimbs, $new($longs, $nc(this->limbs)->length));
	for (int32_t i = 0; i < $nc(this->limbs)->length; ++i) {
		newLimbs->set(i, -$nc(this->limbs)->get(i));
	}
	$var($IntegerPolynomial$ImmutableElement, result, $new($IntegerPolynomial$ImmutableElement, this->this$0, newLimbs, this->numAdds));
	return result;
}

$longs* IntegerPolynomial$Element::cloneLow($longs* limbs) {
	$var($longs, newLimbs, $new($longs, this->this$0->numLimbs));
	copyLow(limbs, newLimbs);
	return newLimbs;
}

void IntegerPolynomial$Element::copyLow($longs* limbs, $longs* out) {
	$System::arraycopy(limbs, 0, out, 0, $nc(out)->length);
}

$ImmutableIntegerModuloP* IntegerPolynomial$Element::multiply($IntegerModuloP* genB) {
	$var(IntegerPolynomial$Element, b, $cast(IntegerPolynomial$Element, genB));
	$var($longs, newLimbs, $new($longs, $nc(this->limbs)->length));
	this->this$0->mult(this->limbs, $nc(b)->limbs, newLimbs);
	return $new($IntegerPolynomial$ImmutableElement, this->this$0, newLimbs, 0);
}

$ImmutableIntegerModuloP* IntegerPolynomial$Element::square() {
	$var($longs, newLimbs, $new($longs, $nc(this->limbs)->length));
	this->this$0->square(this->limbs, newLimbs);
	return $new($IntegerPolynomial$ImmutableElement, this->this$0, newLimbs, 0);
}

void IntegerPolynomial$Element::addModPowerTwo($IntegerModuloP* arg, $bytes* result) {
	$var(IntegerPolynomial$Element, other, $cast(IntegerPolynomial$Element, arg));
	bool var$0 = isSummand();
	if (!(var$0 && $nc(other)->isSummand())) {
		$throwNew($ArithmeticException, "Not a valid summand"_s);
	}
	this->this$0->addLimbsModPowerTwo(this->limbs, $nc(other)->limbs, result);
}

void IntegerPolynomial$Element::asByteArray($bytes* result) {
	if (!isSummand()) {
		$throwNew($ArithmeticException, "Not a valid summand"_s);
	}
	this->this$0->limbsToByteArray(this->limbs, result);
}

IntegerPolynomial$Element::IntegerPolynomial$Element() {
}

$Class* IntegerPolynomial$Element::load$($String* name, bool initialize) {
	$loadClass(IntegerPolynomial$Element, name, initialize, &_IntegerPolynomial$Element_ClassInfo_, allocate$IntegerPolynomial$Element);
	return class$;
}

$Class* IntegerPolynomial$Element::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun