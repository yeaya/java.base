#ifndef _sun_security_util_math_MutableIntegerModuloP_h_
#define _sun_security_util_math_MutableIntegerModuloP_h_
//$ interface sun.security.util.math.MutableIntegerModuloP
//$ extends sun.security.util.math.IntegerModuloP

#include <java/lang/Array.h>
#include <sun/security/util/math/IntegerModuloP.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace util {
			namespace math {
				class SmallValue;
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace util {
			namespace math {

class $export MutableIntegerModuloP : public ::sun::security::util::math::IntegerModuloP {
	$interface(MutableIntegerModuloP, $NO_CLASS_INIT, ::sun::security::util::math::IntegerModuloP)
public:
	virtual void conditionalSet(::sun::security::util::math::IntegerModuloP* b, int32_t set) {}
	virtual void conditionalSwapWith(::sun::security::util::math::MutableIntegerModuloP* b, int32_t swap) {}
	virtual ::sun::security::util::math::MutableIntegerModuloP* setAdditiveInverse() {return nullptr;}
	virtual ::sun::security::util::math::MutableIntegerModuloP* setDifference(::sun::security::util::math::IntegerModuloP* b) {return nullptr;}
	virtual ::sun::security::util::math::MutableIntegerModuloP* setProduct(::sun::security::util::math::IntegerModuloP* b) {return nullptr;}
	virtual ::sun::security::util::math::MutableIntegerModuloP* setProduct(::sun::security::util::math::SmallValue* v) {return nullptr;}
	virtual ::sun::security::util::math::MutableIntegerModuloP* setReduced() {return nullptr;}
	virtual ::sun::security::util::math::MutableIntegerModuloP* setSquare() {return nullptr;}
	virtual ::sun::security::util::math::MutableIntegerModuloP* setSum(::sun::security::util::math::IntegerModuloP* b) {return nullptr;}
	virtual ::sun::security::util::math::MutableIntegerModuloP* setValue(::sun::security::util::math::IntegerModuloP* v) {return nullptr;}
	virtual ::sun::security::util::math::MutableIntegerModuloP* setValue($bytes* v, int32_t offset, int32_t length, int8_t highByte) {return nullptr;}
	virtual ::sun::security::util::math::MutableIntegerModuloP* setValue(::java::nio::ByteBuffer* buf, int32_t length, int8_t highByte) {return nullptr;}
};

			} // math
		} // util
	} // security
} // sun

#endif // _sun_security_util_math_MutableIntegerModuloP_h_