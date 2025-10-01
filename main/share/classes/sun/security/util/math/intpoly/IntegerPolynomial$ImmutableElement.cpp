#include <sun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <sun/security/util/math/ImmutableIntegerModuloP.h>
#include <sun/security/util/math/IntegerFieldModuloP.h>
#include <sun/security/util/math/IntegerModuloP.h>
#include <sun/security/util/math/MutableIntegerModuloP.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial$Element.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ImmutableIntegerModuloP = ::sun::security::util::math::ImmutableIntegerModuloP;
using $IntegerFieldModuloP = ::sun::security::util::math::IntegerFieldModuloP;
using $IntegerModuloP = ::sun::security::util::math::IntegerModuloP;
using $MutableIntegerModuloP = ::sun::security::util::math::MutableIntegerModuloP;
using $IntegerPolynomial = ::sun::security::util::math::intpoly::IntegerPolynomial;
using $IntegerPolynomial$Element = ::sun::security::util::math::intpoly::IntegerPolynomial$Element;

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				namespace intpoly {

$FieldInfo _IntegerPolynomial$ImmutableElement_FieldInfo_[] = {
	{"this$0", "Lsun/security/util/math/intpoly/IntegerPolynomial;", nullptr, $FINAL | $SYNTHETIC, $field(IntegerPolynomial$ImmutableElement, this$0)},
	{}
};

$MethodInfo _IntegerPolynomial$ImmutableElement_MethodInfo_[] = {
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
	{"<init>", "(Lsun/security/util/math/intpoly/IntegerPolynomial;Ljava/math/BigInteger;)V", nullptr, $PROTECTED, $method(static_cast<void(IntegerPolynomial$ImmutableElement::*)($IntegerPolynomial*,$BigInteger*)>(&IntegerPolynomial$ImmutableElement::init$))},
	{"<init>", "(Lsun/security/util/math/intpoly/IntegerPolynomial;Z)V", nullptr, $PROTECTED, $method(static_cast<void(IntegerPolynomial$ImmutableElement::*)($IntegerPolynomial*,bool)>(&IntegerPolynomial$ImmutableElement::init$))},
	{"<init>", "(Lsun/security/util/math/intpoly/IntegerPolynomial;[JI)V", nullptr, $PROTECTED, $method(static_cast<void(IntegerPolynomial$ImmutableElement::*)($IntegerPolynomial*,$longs*,int32_t)>(&IntegerPolynomial$ImmutableElement::init$))},
	{"fixed", "()Lsun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement;", nullptr, $PUBLIC},
	{"*mutable$", "()Lsun/security/util/math/MutableIntegerModuloP;", nullptr, $PUBLIC},
	{"*multiply", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC},
	{"*square", "()Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC},
	{"*multiplicativeInverse", "()Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT},
	{"*subtract", "(Lsun/security/util/math/IntegerModuloP;)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT},
	{"*pow", "(Ljava/math/BigInteger;)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _IntegerPolynomial$ImmutableElement_InnerClassesInfo_[] = {
	{"sun.security.util.math.intpoly.IntegerPolynomial$ImmutableElement", "sun.security.util.math.intpoly.IntegerPolynomial", "ImmutableElement", 0},
	{"sun.security.util.math.intpoly.IntegerPolynomial$Element", "sun.security.util.math.intpoly.IntegerPolynomial", "Element", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _IntegerPolynomial$ImmutableElement_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.math.intpoly.IntegerPolynomial$ImmutableElement",
	"sun.security.util.math.intpoly.IntegerPolynomial$Element",
	"sun.security.util.math.ImmutableIntegerModuloP",
	_IntegerPolynomial$ImmutableElement_FieldInfo_,
	_IntegerPolynomial$ImmutableElement_MethodInfo_,
	nullptr,
	nullptr,
	_IntegerPolynomial$ImmutableElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.math.intpoly.IntegerPolynomial"
};

$Object* allocate$IntegerPolynomial$ImmutableElement($Class* clazz) {
	return $of($alloc(IntegerPolynomial$ImmutableElement));
}

$IntegerFieldModuloP* IntegerPolynomial$ImmutableElement::getField() {
	 return this->$IntegerPolynomial$Element::getField();
}

$BigInteger* IntegerPolynomial$ImmutableElement::asBigInteger() {
	 return this->$IntegerPolynomial$Element::asBigInteger();
}

$MutableIntegerModuloP* IntegerPolynomial$ImmutableElement::mutable$() {
	 return this->$IntegerPolynomial$Element::mutable$();
}

$ImmutableIntegerModuloP* IntegerPolynomial$ImmutableElement::add($IntegerModuloP* genB) {
	 return this->$IntegerPolynomial$Element::add(genB);
}

$ImmutableIntegerModuloP* IntegerPolynomial$ImmutableElement::additiveInverse() {
	 return this->$IntegerPolynomial$Element::additiveInverse();
}

$ImmutableIntegerModuloP* IntegerPolynomial$ImmutableElement::multiply($IntegerModuloP* genB) {
	 return this->$IntegerPolynomial$Element::multiply(genB);
}

$ImmutableIntegerModuloP* IntegerPolynomial$ImmutableElement::square() {
	 return this->$IntegerPolynomial$Element::square();
}

void IntegerPolynomial$ImmutableElement::addModPowerTwo($IntegerModuloP* arg, $bytes* result) {
	this->$IntegerPolynomial$Element::addModPowerTwo(arg, result);
}

void IntegerPolynomial$ImmutableElement::asByteArray($bytes* result) {
	this->$IntegerPolynomial$Element::asByteArray(result);
}

$bytes* IntegerPolynomial$ImmutableElement::addModPowerTwo($IntegerModuloP* b, int32_t len) {
	 return this->$IntegerPolynomial$Element::addModPowerTwo(b, len);
}

$bytes* IntegerPolynomial$ImmutableElement::asByteArray(int32_t len) {
	 return this->$IntegerPolynomial$Element::asByteArray(len);
}

$ImmutableIntegerModuloP* IntegerPolynomial$ImmutableElement::multiplicativeInverse() {
	 return this->$IntegerPolynomial$Element::multiplicativeInverse();
}

$ImmutableIntegerModuloP* IntegerPolynomial$ImmutableElement::subtract($IntegerModuloP* b) {
	 return this->$IntegerPolynomial$Element::subtract(b);
}

$ImmutableIntegerModuloP* IntegerPolynomial$ImmutableElement::pow($BigInteger* b) {
	 return this->$IntegerPolynomial$Element::pow(b);
}

int32_t IntegerPolynomial$ImmutableElement::hashCode() {
	 return this->$IntegerPolynomial$Element::hashCode();
}

bool IntegerPolynomial$ImmutableElement::equals(Object$* obj) {
	 return this->$IntegerPolynomial$Element::equals(obj);
}

$Object* IntegerPolynomial$ImmutableElement::clone() {
	 return this->$IntegerPolynomial$Element::clone();
}

$String* IntegerPolynomial$ImmutableElement::toString() {
	 return this->$IntegerPolynomial$Element::toString();
}

void IntegerPolynomial$ImmutableElement::finalize() {
	this->$IntegerPolynomial$Element::finalize();
}

void IntegerPolynomial$ImmutableElement::init$($IntegerPolynomial* this$0, $BigInteger* v) {
	$set(this, this$0, this$0);
	$IntegerPolynomial$Element::init$(this$0, v);
}

void IntegerPolynomial$ImmutableElement::init$($IntegerPolynomial* this$0, bool v) {
	$set(this, this$0, this$0);
	$IntegerPolynomial$Element::init$(this$0, v);
}

void IntegerPolynomial$ImmutableElement::init$($IntegerPolynomial* this$0, $longs* limbs, int32_t numAdds) {
	$set(this, this$0, this$0);
	$IntegerPolynomial$Element::init$(this$0, limbs, numAdds);
}

$ImmutableIntegerModuloP* IntegerPolynomial$ImmutableElement::fixed() {
	return this;
}

IntegerPolynomial$ImmutableElement::IntegerPolynomial$ImmutableElement() {
}

$Class* IntegerPolynomial$ImmutableElement::load$($String* name, bool initialize) {
	$loadClass(IntegerPolynomial$ImmutableElement, name, initialize, &_IntegerPolynomial$ImmutableElement_ClassInfo_, allocate$IntegerPolynomial$ImmutableElement);
	return class$;
}

$Class* IntegerPolynomial$ImmutableElement::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun