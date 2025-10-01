#ifndef _sun_security_ssl_EphemeralKeyManager$EphemeralKeyPair_h_
#define _sun_security_ssl_EphemeralKeyManager$EphemeralKeyPair_h_
//$ class sun.security.ssl.EphemeralKeyManager$EphemeralKeyPair
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAX_USE")
#undef MAX_USE
#pragma push_macro("USE_INTERVAL")
#undef USE_INTERVAL

namespace java {
	namespace security {
		class KeyPair;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class EphemeralKeyManager$EphemeralKeyPair : public ::java::lang::Object {
	$class(EphemeralKeyManager$EphemeralKeyPair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EphemeralKeyManager$EphemeralKeyPair();
	void init$(::java::security::KeyPair* keyPair);
	::java::security::KeyPair* getKeyPair();
	bool isValid();
	static const int32_t MAX_USE = 200;
	static const int64_t USE_INTERVAL = 3600000; // 3600 * 1000
	::java::security::KeyPair* keyPair = nullptr;
	int32_t uses = 0;
	int64_t expirationTime = 0;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("MAX_USE")
#pragma pop_macro("USE_INTERVAL")

#endif // _sun_security_ssl_EphemeralKeyManager$EphemeralKeyPair_h_