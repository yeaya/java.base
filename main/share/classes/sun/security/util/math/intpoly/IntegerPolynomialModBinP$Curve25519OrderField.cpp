#include <sun/security/util/math/intpoly/IntegerPolynomialModBinP$Curve25519OrderField.h>

#include <java/math/BigInteger.h>
#include <sun/security/util/math/ImmutableIntegerModuloP.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial$ImmutableElement.h>
#include <sun/security/util/math/intpoly/IntegerPolynomialModBinP.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ImmutableIntegerModuloP = ::sun::security::util::math::ImmutableIntegerModuloP;
using $IntegerPolynomialModBinP = ::sun::security::util::math::intpoly::IntegerPolynomialModBinP;

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				namespace intpoly {

$MethodInfo _IntegerPolynomialModBinP$Curve25519OrderField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IntegerPolynomialModBinP$Curve25519OrderField, init$, void)},
	{"getElement", "([BIIB)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(IntegerPolynomialModBinP$Curve25519OrderField, getElement, $ImmutableIntegerModuloP*, $bytes*, int32_t, int32_t, int8_t)},
	{}
};

$InnerClassInfo _IntegerPolynomialModBinP$Curve25519OrderField_InnerClassesInfo_[] = {
	{"sun.security.util.math.intpoly.IntegerPolynomialModBinP$Curve25519OrderField", "sun.security.util.math.intpoly.IntegerPolynomialModBinP", "Curve25519OrderField", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _IntegerPolynomialModBinP$Curve25519OrderField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.math.intpoly.IntegerPolynomialModBinP$Curve25519OrderField",
	"sun.security.util.math.intpoly.IntegerPolynomialModBinP",
	nullptr,
	nullptr,
	_IntegerPolynomialModBinP$Curve25519OrderField_MethodInfo_,
	nullptr,
	nullptr,
	_IntegerPolynomialModBinP$Curve25519OrderField_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.math.intpoly.IntegerPolynomialModBinP"
};

$Object* allocate$IntegerPolynomialModBinP$Curve25519OrderField($Class* clazz) {
	return $of($alloc(IntegerPolynomialModBinP$Curve25519OrderField));
}

void IntegerPolynomialModBinP$Curve25519OrderField::init$() {
	$IntegerPolynomialModBinP::init$(26, 10, 252, $$new($BigInteger, "-27742317777372353535851937790883648493"_s));
}

$ImmutableIntegerModuloP* IntegerPolynomialModBinP$Curve25519OrderField::getElement($bytes* v, int32_t offset, int32_t length, int8_t highByte) {
	return $IntegerPolynomialModBinP::getElement(v, offset, length, highByte);
}

IntegerPolynomialModBinP$Curve25519OrderField::IntegerPolynomialModBinP$Curve25519OrderField() {
}

$Class* IntegerPolynomialModBinP$Curve25519OrderField::load$($String* name, bool initialize) {
	$loadClass(IntegerPolynomialModBinP$Curve25519OrderField, name, initialize, &_IntegerPolynomialModBinP$Curve25519OrderField_ClassInfo_, allocate$IntegerPolynomialModBinP$Curve25519OrderField);
	return class$;
}

$Class* IntegerPolynomialModBinP$Curve25519OrderField::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun