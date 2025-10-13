#ifndef _sun_security_util_math_intpoly_IntegerPolynomial1305_h_
#define _sun_security_util_math_intpoly_IntegerPolynomial1305_h_
//$ class sun.security.util.math.intpoly.IntegerPolynomial1305
//$ extends sun.security.util.math.intpoly.IntegerPolynomial

#include <java/lang/Array.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial.h>

#pragma push_macro("AS_LONG_LE")
#undef AS_LONG_LE
#pragma push_macro("BITS_PER_LIMB")
#undef BITS_PER_LIMB
#pragma push_macro("MODULUS")
#undef MODULUS
#pragma push_macro("NUM_LIMBS")
#undef NUM_LIMBS
#pragma push_macro("POWER")
#undef POWER
#pragma push_macro("SUBTRAHEND")
#undef SUBTRAHEND

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				namespace intpoly {

class $export IntegerPolynomial1305 : public ::sun::security::util::math::intpoly::IntegerPolynomial {
	$class(IntegerPolynomial1305, 0, ::sun::security::util::math::intpoly::IntegerPolynomial)
public:
	IntegerPolynomial1305();
	using ::sun::security::util::math::intpoly::IntegerPolynomial::getElement;
	void init$();
	void carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8);
	virtual int64_t carryValue(int64_t x) override;
	virtual void encode(::java::nio::ByteBuffer* buf, int32_t length, int8_t highByte, $longs* result) override;
	virtual void encode(int64_t high, int64_t low, int8_t highByte, $longs* result);
	virtual void encode($bytes* v, int32_t offset, int32_t length, int8_t highByte, $longs* result) override;
	virtual void finalCarryReduceLast($longs* limbs) override;
	void modReduce($longs* limbs, int32_t start, int32_t end);
	virtual void modReduce($longs* limbs);
	virtual void mult($longs* a, $longs* b, $longs* r) override;
	virtual void postEncodeCarry($longs* v) override;
	virtual void reduce($longs* limbs) override;
	virtual void reduceIn($longs* limbs, int64_t x, int32_t index) override;
	virtual void square($longs* a, $longs* r) override;
	static const int32_t SUBTRAHEND = 5;
	static const int32_t NUM_LIMBS = 5;
	static const int32_t POWER = 130;
	static const int32_t BITS_PER_LIMB = 26;
	static ::java::math::BigInteger* MODULUS;
	static ::java::lang::invoke::VarHandle* AS_LONG_LE;
};

				} // intpoly
			} // math
		} // util
	} // security
} // sun

#pragma pop_macro("AS_LONG_LE")
#pragma pop_macro("BITS_PER_LIMB")
#pragma pop_macro("MODULUS")
#pragma pop_macro("NUM_LIMBS")
#pragma pop_macro("POWER")
#pragma pop_macro("SUBTRAHEND")

#endif // _sun_security_util_math_intpoly_IntegerPolynomial1305_h_