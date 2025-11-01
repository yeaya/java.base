#ifndef _sun_security_util_math_intpoly_IntegerPolynomial$ImmutableElement_h_
#define _sun_security_util_math_intpoly_IntegerPolynomial$ImmutableElement_h_
//$ class sun.security.util.math.intpoly.IntegerPolynomial$ImmutableElement
//$ extends sun.security.util.math.intpoly.IntegerPolynomial$Element
//$ implements sun.security.util.math.ImmutableIntegerModuloP

#include <java/lang/Array.h>
#include <sun/security/util/math/ImmutableIntegerModuloP.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial$Element.h>

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

class $import IntegerPolynomial$ImmutableElement : public ::sun::security::util::math::intpoly::IntegerPolynomial$Element, public ::sun::security::util::math::ImmutableIntegerModuloP {
	$class(IntegerPolynomial$ImmutableElement, $NO_CLASS_INIT, ::sun::security::util::math::intpoly::IntegerPolynomial$Element, ::sun::security::util::math::ImmutableIntegerModuloP)
public:
	IntegerPolynomial$ImmutableElement();
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
	void init$(::sun::security::util::math::intpoly::IntegerPolynomial* this$0, ::java::math::BigInteger* v);
	void init$(::sun::security::util::math::intpoly::IntegerPolynomial* this$0, bool v);
	void init$(::sun::security::util::math::intpoly::IntegerPolynomial* this$0, $longs* limbs, int32_t numAdds);
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* fixed() override;
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* multiplicativeInverse() override;
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* multiply(::sun::security::util::math::IntegerModuloP* genB) override;
	virtual ::sun::security::util::math::MutableIntegerModuloP* mutable$() override;
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* pow(::java::math::BigInteger* b) override;
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

#endif // _sun_security_util_math_intpoly_IntegerPolynomial$ImmutableElement_h_