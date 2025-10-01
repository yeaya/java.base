#ifndef _sun_security_util_math_IntegerModuloP_h_
#define _sun_security_util_math_IntegerModuloP_h_
//$ interface sun.security.util.math.IntegerModuloP
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class $import IntegerModuloP : public ::java::lang::Object {
	$interface(IntegerModuloP, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* add(::sun::security::util::math::IntegerModuloP* b) {return nullptr;}
	virtual $bytes* addModPowerTwo(::sun::security::util::math::IntegerModuloP* b, int32_t len);
	virtual void addModPowerTwo(::sun::security::util::math::IntegerModuloP* b, $bytes* result) {}
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* additiveInverse() {return nullptr;}
	virtual ::java::math::BigInteger* asBigInteger() {return nullptr;}
	virtual $bytes* asByteArray(int32_t len);
	virtual void asByteArray($bytes* result) {}
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* fixed() {return nullptr;}
	virtual ::sun::security::util::math::IntegerFieldModuloP* getField() {return nullptr;}
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* multiplicativeInverse();
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* multiply(::sun::security::util::math::IntegerModuloP* b) {return nullptr;}
	virtual ::sun::security::util::math::MutableIntegerModuloP* mutable$() {return nullptr;}
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* pow(::java::math::BigInteger* b);
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* square();
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* subtract(::sun::security::util::math::IntegerModuloP* b);
};

			} // math
		} // util
	} // security
} // sun

#endif // _sun_security_util_math_IntegerModuloP_h_