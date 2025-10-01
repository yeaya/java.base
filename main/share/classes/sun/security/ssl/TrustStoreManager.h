#ifndef _sun_security_ssl_TrustStoreManager_h_
#define _sun_security_ssl_TrustStoreManager_h_
//$ class sun.security.ssl.TrustStoreManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class KeyStore;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class TrustStoreManager$TrustAnchorManager;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class TrustStoreManager : public ::java::lang::Object {
	$class(TrustStoreManager, 0, ::java::lang::Object)
public:
	TrustStoreManager();
	void init$();
	static ::java::util::Set* getTrustedCerts();
	static ::java::security::KeyStore* getTrustedKeyStore();
	static ::sun::security::ssl::TrustStoreManager$TrustAnchorManager* tam;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_TrustStoreManager_h_