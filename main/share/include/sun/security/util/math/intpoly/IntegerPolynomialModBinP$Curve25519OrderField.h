#ifndef _sun_security_util_math_intpoly_IntegerPolynomialModBinP$Curve25519OrderField_h_
#define _sun_security_util_math_intpoly_IntegerPolynomialModBinP$Curve25519OrderField_h_
//$ class sun.security.util.math.intpoly.IntegerPolynomialModBinP$Curve25519OrderField
//$ extends sun.security.util.math.intpoly.IntegerPolynomialModBinP

#include <java/lang/Array.h>
#include <sun/security/util/math/intpoly/IntegerPolynomialModBinP.h>

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				class ImmutableIntegerModuloP;
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				namespace intpoly {

class $import IntegerPolynomialModBinP$Curve25519OrderField : public ::sun::security::util::math::intpoly::IntegerPolynomialModBinP {
	$class(IntegerPolynomialModBinP$Curve25519OrderField, $NO_CLASS_INIT, ::sun::security::util::math::intpoly::IntegerPolynomialModBinP)
public:
	IntegerPolynomialModBinP$Curve25519OrderField();
	using ::sun::security::util::math::intpoly::IntegerPolynomialModBinP::getElement;
	void init$();
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* getElement($bytes* v, int32_t offset, int32_t length, int8_t highByte) override;
};

				} // intpoly
			} // math
		} // util
	} // security
} // sun

#endif // _sun_security_util_math_intpoly_IntegerPolynomialModBinP$Curve25519OrderField_h_