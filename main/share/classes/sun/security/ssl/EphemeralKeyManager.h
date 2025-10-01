#ifndef _sun_security_ssl_EphemeralKeyManager_h_
#define _sun_security_ssl_EphemeralKeyManager_h_
//$ class sun.security.ssl.EphemeralKeyManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INDEX_RSA512")
#undef INDEX_RSA512
#pragma push_macro("INDEX_RSA1024")
#undef INDEX_RSA1024

namespace java {
	namespace security {
		class KeyPair;
		class SecureRandom;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class EphemeralKeyManager$EphemeralKeyPair;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class EphemeralKeyManager : public ::java::lang::Object {
	$class(EphemeralKeyManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EphemeralKeyManager();
	void init$();
	::java::security::KeyPair* getRSAKeyPair(bool export$, ::java::security::SecureRandom* random);
	static const int32_t INDEX_RSA512 = 0;
	static const int32_t INDEX_RSA1024 = 1;
	$Array<::sun::security::ssl::EphemeralKeyManager$EphemeralKeyPair>* keys = nullptr;
	::java::util::concurrent::locks::ReentrantLock* cachedKeysLock = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("INDEX_RSA512")
#pragma pop_macro("INDEX_RSA1024")

#endif // _sun_security_ssl_EphemeralKeyManager_h_