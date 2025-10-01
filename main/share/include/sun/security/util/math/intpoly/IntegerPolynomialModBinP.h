#ifndef _sun_security_util_math_intpoly_IntegerPolynomialModBinP_h_
#define _sun_security_util_math_intpoly_IntegerPolynomialModBinP_h_
//$ class sun.security.util.math.intpoly.IntegerPolynomialModBinP
//$ extends sun.security.util.math.intpoly.IntegerPolynomial

#include <java/lang/Array.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
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

class $import IntegerPolynomialModBinP : public ::sun::security::util::math::intpoly::IntegerPolynomial {
	$class(IntegerPolynomialModBinP, $NO_CLASS_INIT, ::sun::security::util::math::intpoly::IntegerPolynomial)
public:
	IntegerPolynomialModBinP();
	using ::sun::security::util::math::intpoly::IntegerPolynomial::getElement;
	void init$(int32_t bitsPerLimb, int32_t numLimbs, int32_t power, ::java::math::BigInteger* subtrahend);
	void carryReduce($longs* c, $longs* r);
	virtual void finalCarryReduceLast($longs* limbs) override;
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* getElement($bytes* v, int32_t offset, int32_t length, int8_t highByte) override;
	void modReduceInBits($longs* limbs, int32_t index, int32_t bits, int64_t x);
	virtual void mult($longs* a, $longs* b, $longs* r) override;
	void multOnly($longs* a, $longs* b, $longs* c);
	virtual void reduce($longs* a) override;
	virtual void reduceIn($longs* c, int64_t v, int32_t i) override;
	virtual void square($longs* a, $longs* r) override;
	$longs* reduceLimbs = nullptr;
	int32_t bitOffset = 0;
	int32_t limbMask = 0;
	int32_t rightBitOffset = 0;
	int32_t power = 0;
};

				} // intpoly
			} // math
		} // util
	} // security
} // sun

#endif // _sun_security_util_math_intpoly_IntegerPolynomialModBinP_h_