#include <sun/security/util/math/intpoly/IntegerPolynomialModBinP$Curve448OrderField.h>
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

void IntegerPolynomialModBinP$Curve448OrderField::init$() {
	$IntegerPolynomialModBinP::init$(28, 16, 446, $$new($BigInteger, "13818066809895115352007386748515426880336692474882178609894547503885"_s));
}

$ImmutableIntegerModuloP* IntegerPolynomialModBinP$Curve448OrderField::getElement($bytes* v, int32_t offset, int32_t length, int8_t highByte) {
	return $IntegerPolynomialModBinP::getElement(v, offset, length, highByte);
}

IntegerPolynomialModBinP$Curve448OrderField::IntegerPolynomialModBinP$Curve448OrderField() {
}

$Class* IntegerPolynomialModBinP$Curve448OrderField::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IntegerPolynomialModBinP$Curve448OrderField, init$, void)},
		{"getElement", "([BIIB)Lsun/security/util/math/ImmutableIntegerModuloP;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(IntegerPolynomialModBinP$Curve448OrderField, getElement, $ImmutableIntegerModuloP*, $bytes*, int32_t, int32_t, int8_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.math.intpoly.IntegerPolynomialModBinP$Curve448OrderField", "sun.security.util.math.intpoly.IntegerPolynomialModBinP", "Curve448OrderField", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.math.intpoly.IntegerPolynomialModBinP$Curve448OrderField",
		"sun.security.util.math.intpoly.IntegerPolynomialModBinP",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.math.intpoly.IntegerPolynomialModBinP"
	};
	$loadClass(IntegerPolynomialModBinP$Curve448OrderField, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntegerPolynomialModBinP$Curve448OrderField);
	});
	return class$;
}

$Class* IntegerPolynomialModBinP$Curve448OrderField::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun