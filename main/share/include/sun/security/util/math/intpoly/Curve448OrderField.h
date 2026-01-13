#ifndef _sun_security_util_math_intpoly_Curve448OrderField_h_
#define _sun_security_util_math_intpoly_Curve448OrderField_h_
//$ class sun.security.util.math.intpoly.Curve448OrderField
//$ extends sun.security.util.math.intpoly.IntegerPolynomial

#include <java/lang/Array.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial.h>

#pragma push_macro("BITS_PER_LIMB")
#undef BITS_PER_LIMB
#pragma push_macro("CARRY_ADD")
#undef CARRY_ADD
#pragma push_macro("LIMB_MASK")
#undef LIMB_MASK
#pragma push_macro("MAX_ADDS")
#undef MAX_ADDS
#pragma push_macro("MODULUS")
#undef MODULUS
#pragma push_macro("NUM_LIMBS")
#undef NUM_LIMBS

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				namespace intpoly {

class $import Curve448OrderField : public ::sun::security::util::math::intpoly::IntegerPolynomial {
	$class(Curve448OrderField, 0, ::sun::security::util::math::intpoly::IntegerPolynomial)
public:
	Curve448OrderField();
	using ::sun::security::util::math::intpoly::IntegerPolynomial::getElement;
	void init$();
	void carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27, int64_t c28, int64_t c29, int64_t c30);
	void carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15);
	virtual void carryReduce0($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27, int64_t c28, int64_t c29, int64_t c30, int64_t c31);
	virtual void carryReduce0($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16);
	virtual void carryReduce1($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27, int64_t c28, int64_t c29, int64_t c30, int64_t c31);
	virtual void carryReduce2($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27, int64_t c28, int64_t c29, int64_t c30, int64_t c31);
	static ::java::math::BigInteger* evaluateModulus();
	virtual void finalCarryReduceLast($longs* limbs) override;
	virtual void mult($longs* a, $longs* b, $longs* r) override;
	virtual void reduce($longs* a) override;
	virtual void reduceIn($longs* limbs, int64_t v, int32_t i) override;
	virtual void square($longs* a, $longs* r) override;
	static const int32_t BITS_PER_LIMB = 28;
	static const int32_t NUM_LIMBS = 16;
	static const int32_t MAX_ADDS = 1;
	static ::java::math::BigInteger* MODULUS;
	static const int64_t CARRY_ADD = 134217728; // 1 << 27
	static const int32_t LIMB_MASK = 0x0FFFFFFF; // -1 >>> (64 - BITS_PER_LIMB)
};

				} // intpoly
			} // math
		} // util
	} // security
} // sun

#pragma pop_macro("BITS_PER_LIMB")
#pragma pop_macro("CARRY_ADD")
#pragma pop_macro("LIMB_MASK")
#pragma pop_macro("MAX_ADDS")
#pragma pop_macro("MODULUS")
#pragma pop_macro("NUM_LIMBS")

#endif // _sun_security_util_math_intpoly_Curve448OrderField_h_