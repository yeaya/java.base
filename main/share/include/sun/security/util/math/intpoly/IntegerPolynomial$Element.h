#ifndef _sun_security_util_math_intpoly_IntegerPolynomial$Element_h_
#define _sun_security_util_math_intpoly_IntegerPolynomial$Element_h_
//$ class sun.security.util.math.intpoly.IntegerPolynomial$Element
//$ extends sun.security.util.math.IntegerModuloP

#include <java/lang/Array.h>
#include <sun/security/util/math/IntegerModuloP.h>

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
				class IntegerFieldModuloP;
				class MutableIntegerModuloP;
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

class $import IntegerPolynomial$Element : public ::sun::security::util::math::IntegerModuloP {
	$class(IntegerPolynomial$Element, $NO_CLASS_INIT, ::sun::security::util::math::IntegerModuloP)
public:
	IntegerPolynomial$Element();
	using ::sun::security::util::math::IntegerModuloP::addModPowerTwo;
	using ::sun::security::util::math::IntegerModuloP::asByteArray;
	void init$(::sun::security::util::math::intpoly::IntegerPolynomial* this$0, ::java::math::BigInteger* v);
	void init$(::sun::security::util::math::intpoly::IntegerPolynomial* this$0, bool v);
	void init$(::sun::security::util::math::intpoly::IntegerPolynomial* this$0, $longs* limbs, int32_t numAdds);
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* add(::sun::security::util::math::IntegerModuloP* genB) override;
	virtual void addModPowerTwo(::sun::security::util::math::IntegerModuloP* arg, $bytes* result) override;
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* additiveInverse() override;
	virtual ::java::math::BigInteger* asBigInteger() override;
	virtual void asByteArray($bytes* result) override;
	virtual $longs* cloneLow($longs* limbs);
	virtual void copyLow($longs* limbs, $longs* out);
	virtual ::sun::security::util::math::IntegerFieldModuloP* getField() override;
	virtual bool isSummand();
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* multiply(::sun::security::util::math::IntegerModuloP* genB) override;
	virtual ::sun::security::util::math::MutableIntegerModuloP* mutable$() override;
	void setValue(::java::math::BigInteger* v);
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* square() override;
	::sun::security::util::math::intpoly::IntegerPolynomial* this$0 = nullptr;
	$longs* limbs = nullptr;
	int32_t numAdds = 0;
};

				} // intpoly
			} // math
		} // util
	} // security
} // sun

#endif // _sun_security_util_math_intpoly_IntegerPolynomial$Element_h_