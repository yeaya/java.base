#ifndef _sun_security_util_math_intpoly_IntegerPolynomial$MutableElement_h_
#define _sun_security_util_math_intpoly_IntegerPolynomial$MutableElement_h_
//$ class sun.security.util.math.intpoly.IntegerPolynomial$MutableElement
//$ extends sun.security.util.math.intpoly.IntegerPolynomial$Element
//$ implements sun.security.util.math.MutableIntegerModuloP

#include <java/lang/Array.h>
#include <sun/security/util/math/MutableIntegerModuloP.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial$Element.h>

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
				class IntegerModuloP;
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
					class IntegerPolynomial;
				}
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				namespace intpoly {

class $export IntegerPolynomial$MutableElement : public ::sun::security::util::math::intpoly::IntegerPolynomial$Element, public ::sun::security::util::math::MutableIntegerModuloP {
	$class(IntegerPolynomial$MutableElement, $NO_CLASS_INIT, ::sun::security::util::math::intpoly::IntegerPolynomial$Element, ::sun::security::util::math::MutableIntegerModuloP)
public:
	IntegerPolynomial$MutableElement();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* add(::sun::security::util::math::IntegerModuloP* genB) override;
	virtual void addModPowerTwo(::sun::security::util::math::IntegerModuloP* arg, $bytes* result) override;
	virtual $bytes* addModPowerTwo(::sun::security::util::math::IntegerModuloP* b, int32_t len) override;
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* additiveInverse() override;
	virtual ::java::math::BigInteger* asBigInteger() override;
	virtual void asByteArray($bytes* result) override;
	virtual $bytes* asByteArray(int32_t len) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::sun::security::util::math::IntegerFieldModuloP* getField() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::util::math::intpoly::IntegerPolynomial* this$0, $longs* limbs, int32_t numAdds);
	virtual void conditionalSet(::sun::security::util::math::IntegerModuloP* b, int32_t set) override;
	virtual void conditionalSwapWith(::sun::security::util::math::MutableIntegerModuloP* b, int32_t swap) override;
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* fixed() override;
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* multiplicativeInverse() override;
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* multiply(::sun::security::util::math::IntegerModuloP* genB) override;
	virtual ::sun::security::util::math::MutableIntegerModuloP* mutable$() override;
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* pow(::java::math::BigInteger* b) override;
	virtual ::sun::security::util::math::MutableIntegerModuloP* setAdditiveInverse() override;
	virtual ::sun::security::util::math::MutableIntegerModuloP* setDifference(::sun::security::util::math::IntegerModuloP* genB) override;
	virtual ::sun::security::util::math::MutableIntegerModuloP* setProduct(::sun::security::util::math::IntegerModuloP* genB) override;
	virtual ::sun::security::util::math::MutableIntegerModuloP* setProduct(::sun::security::util::math::SmallValue* v) override;
	virtual ::sun::security::util::math::MutableIntegerModuloP* setReduced() override;
	virtual ::sun::security::util::math::MutableIntegerModuloP* setSquare() override;
	virtual ::sun::security::util::math::MutableIntegerModuloP* setSum(::sun::security::util::math::IntegerModuloP* genB) override;
	virtual ::sun::security::util::math::MutableIntegerModuloP* setValue(::sun::security::util::math::IntegerModuloP* v) override;
	virtual ::sun::security::util::math::MutableIntegerModuloP* setValue($bytes* arr, int32_t offset, int32_t length, int8_t highByte) override;
	virtual ::sun::security::util::math::MutableIntegerModuloP* setValue(::java::nio::ByteBuffer* buf, int32_t length, int8_t highByte) override;
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* square() override;
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* subtract(::sun::security::util::math::IntegerModuloP* b) override;
	virtual $String* toString() override;
	::sun::security::util::math::intpoly::IntegerPolynomial* this$0 = nullptr;
};

				} // intpoly
			} // math
		} // util
	} // security
} // sun

#endif // _sun_security_util_math_intpoly_IntegerPolynomial$MutableElement_h_