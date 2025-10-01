#ifndef _sun_security_util_MessageDigestSpi2_h_
#define _sun_security_util_MessageDigestSpi2_h_
//$ interface sun.security.util.MessageDigestSpi2
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace crypto {
		class SecretKey;
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export MessageDigestSpi2 : public ::java::lang::Object {
	$interface(MessageDigestSpi2, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void engineUpdate(::javax::crypto::SecretKey* key) {}
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_MessageDigestSpi2_h_