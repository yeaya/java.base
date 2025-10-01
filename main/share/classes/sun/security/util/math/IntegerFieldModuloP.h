#ifndef _sun_security_util_math_IntegerFieldModuloP_h_
#define _sun_security_util_math_IntegerFieldModuloP_h_
//$ interface sun.security.util.math.IntegerFieldModuloP
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
				class SmallValue;
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace util {
			namespace math {

class $export IntegerFieldModuloP : public ::java::lang::Object {
	$interface(IntegerFieldModuloP, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* get0() {return nullptr;}
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* get1() {return nullptr;}
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* getElement(::java::math::BigInteger* v) {return nullptr;}
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* getElement($bytes* v);
	virtual ::sun::security::util::math::ImmutableIntegerModuloP* getElement($bytes* v, int32_t offset, int32_t length, int8_t highByte) {return nullptr;}
	virtual ::java::math::BigInteger* getSize() {return nullptr;}
	virtual ::sun::security::util::math::SmallValue* getSmallValue(int32_t v) {return nullptr;}
};

			} // math
		} // util
	} // security
} // sun

#endif // _sun_security_util_math_IntegerFieldModuloP_h_