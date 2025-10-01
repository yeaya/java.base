#ifndef _sun_security_util_math_intpoly_IntegerPolynomial$Limb_h_
#define _sun_security_util_math_intpoly_IntegerPolynomial$Limb_h_
//$ class sun.security.util.math.intpoly.IntegerPolynomial$Limb
//$ extends sun.security.util.math.SmallValue

#include <sun/security/util/math/SmallValue.h>

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				namespace intpoly {

class $import IntegerPolynomial$Limb : public ::sun::security::util::math::SmallValue {
	$class(IntegerPolynomial$Limb, $NO_CLASS_INIT, ::sun::security::util::math::SmallValue)
public:
	IntegerPolynomial$Limb();
	void init$(int32_t value);
	int32_t value = 0;
};

				} // intpoly
			} // math
		} // util
	} // security
} // sun

#endif // _sun_security_util_math_intpoly_IntegerPolynomial$Limb_h_