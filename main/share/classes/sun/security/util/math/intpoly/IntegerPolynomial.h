#ifndef _sun_security_util_math_intpoly_IntegerPolynomial_h_
#define _sun_security_util_math_intpoly_IntegerPolynomial_h_
//$ class sun.security.util.math.intpoly.IntegerPolynomial
//$ extends sun.security.util.math.IntegerFieldModuloP

#include <java/lang/Array.h>
#include <sun/security/util/math/IntegerFieldModuloP.h>

#pragma push_macro("TWO")
#undef TWO

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
				class ImmutableIntegerModuloP;
				class SmallValue;
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				namespace intpoly {

class $export IntegerPolynomial : public ::sun::security::util::math::IntegerFieldModuloP {
	$class(IntegerPolynomial, 0, ::sun::security::util::math::IntegerFieldModuloP)
public:
	IntegerPolynomial();
	using ::sun::security::util::math::IntegerFieldModuloP::getElement;
	void init$(int32_t bitsPerLimb, int32_t numLimbs, int32_t maxAdds, ::java::math::BigInteger* modulus);
	virtual void addLimbs($longs* a, $longs* b, $longs* dst);
	virtual void addLimbsModPowerTwo($longs* limbs, $longs* other, $bytes* result);
	virtual void carry($longs* limbs, int32_t start, int32_t end);
	virtual void carry($longs* limbs);
	virtual int64_t carryOut($longs* limbs, int32_t index);
	virtual int64_t carryValue(int64_t x);
	static void conditionalAssign(int32_t set, $longs* a, $longs* b);
	static void conditionalSwap(int32_t swap, $longs* a, $longs* b);
	virtual void decode($longs* v, $bytes* dst, int32_t offset, int32_t length);
	virtual void encode(::java::nio::ByteBuffer* buf, int32_t length, int8_t highByte, $longs* result);
	virtual void encode($bytes* v, int32_t offset, int32_t length, int8_t highByte, $longs* result);
	virtual void encodeSmall(::java::nio::ByteBuffer* buf, int32_t length, int8_t highByte, $longs* result);
	virtual ::java::math::BigInteger* evaluate($longs* limbs);
	virtual void finalCarryReduceLast($longs* limbs) {}
	virtual void finalReduce($longs* limbs);
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* get0() override;
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* get1() override;
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* getElement(::java::math::BigInteger* v) override;
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* getElement($bytes* v, int32_t offset, int32_t length, int8_t highByte) override;
	virtual int32_t getMaxAdds();
	virtual int32_t getNumLimbs();
	virtual ::java::math::BigInteger* getSize() override;
	virtual ::sun::security::util::math::SmallValue* getSmallValue(int32_t value) override;
	virtual void limbsToByteArray($longs* limbs, $bytes* result);
	virtual void mult($longs* a, $longs* b, $longs* r) {}
	virtual void multByInt($longs* a, int64_t b);
	virtual void postEncodeCarry($longs* v);
	virtual void reduce($longs* a) {}
	void reduceHigh($longs* limbs);
	virtual void reduceIn($longs* c, int64_t v, int32_t i) {}
	void setLimbsValue(::java::math::BigInteger* v, $longs* limbs);
	virtual void setLimbsValuePositive(::java::math::BigInteger* v, $longs* limbs);
	$longs* setPosModLimbs();
	virtual void square($longs* a, $longs* r) {}
	static ::java::math::BigInteger* TWO;
	int32_t numLimbs = 0;
	::java::math::BigInteger* modulus = nullptr;
	int32_t bitsPerLimb = 0;
	$longs* posModLimbs = nullptr;
	int32_t maxAdds = 0;
};

				} // intpoly
			} // math
		} // util
	} // security
} // sun

#pragma pop_macro("TWO")

#endif // _sun_security_util_math_intpoly_IntegerPolynomial_h_