#ifndef _sun_security_ssl_SunX509KeyManagerImpl_h_
#define _sun_security_ssl_SunX509KeyManagerImpl_h_
//$ class sun.security.ssl.SunX509KeyManagerImpl
//$ extends javax.net.ssl.X509ExtendedKeyManager

#include <java/lang/Array.h>
#include <javax/net/ssl/X509ExtendedKeyManager.h>

#pragma push_macro("STRING0")
#undef STRING0

namespace java {
	namespace net {
		class Socket;
	}
}
namespace java {
	namespace security {
		class KeyStore;
		class Principal;
		class PrivateKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLEngine;
		}
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {
				class X500Principal;
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SunX509KeyManagerImpl : public ::javax::net::ssl::X509ExtendedKeyManager {
	$class(SunX509KeyManagerImpl, 0, ::javax::net::ssl::X509ExtendedKeyManager)
public:
	SunX509KeyManagerImpl();
	void init$(::java::security::KeyStore* ks, $chars* password);
	virtual $String* chooseClientAlias($StringArray* keyTypes, $Array<::java::security::Principal>* issuers, ::java::net::Socket* socket) override;
	virtual $String* chooseEngineClientAlias($StringArray* keyType, $Array<::java::security::Principal>* issuers, ::javax::net::ssl::SSLEngine* engine) override;
	virtual $String* chooseEngineServerAlias($String* keyType, $Array<::java::security::Principal>* issuers, ::javax::net::ssl::SSLEngine* engine) override;
	virtual $String* chooseServerAlias($String* keyType, $Array<::java::security::Principal>* issuers, ::java::net::Socket* socket) override;
	static $Array<::javax::security::auth::x500::X500Principal>* convertPrincipals($Array<::java::security::Principal>* principals);
	$StringArray* getAliases($String* keyType, $Array<::java::security::Principal>* issuers);
	virtual $Array<::java::security::cert::X509Certificate>* getCertificateChain($String* alias) override;
	virtual $StringArray* getClientAliases($String* keyType, $Array<::java::security::Principal>* issuers) override;
	virtual ::java::security::PrivateKey* getPrivateKey($String* alias) override;
	virtual $StringArray* getServerAliases($String* keyType, $Array<::java::security::Principal>* issuers) override;
	static $StringArray* STRING0;
	::java::util::Map* credentialsMap = nullptr;
	::java::util::Map* serverAliasCache = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("STRING0")

#endif // _sun_security_ssl_SunX509KeyManagerImpl_h_