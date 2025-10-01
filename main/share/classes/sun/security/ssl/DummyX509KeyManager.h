#ifndef _sun_security_ssl_DummyX509KeyManager_h_
#define _sun_security_ssl_DummyX509KeyManager_h_
//$ class sun.security.ssl.DummyX509KeyManager
//$ extends javax.net.ssl.X509ExtendedKeyManager

#include <java/lang/Array.h>
#include <javax/net/ssl/X509ExtendedKeyManager.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace net {
		class Socket;
	}
}
namespace java {
	namespace security {
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
namespace javax {
	namespace net {
		namespace ssl {
			class SSLEngine;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class DummyX509KeyManager : public ::javax::net::ssl::X509ExtendedKeyManager {
	$class(DummyX509KeyManager, 0, ::javax::net::ssl::X509ExtendedKeyManager)
public:
	DummyX509KeyManager();
	void init$();
	virtual $String* chooseClientAlias($StringArray* keyTypes, $Array<::java::security::Principal>* issuers, ::java::net::Socket* socket) override;
	virtual $String* chooseEngineClientAlias($StringArray* keyTypes, $Array<::java::security::Principal>* issuers, ::javax::net::ssl::SSLEngine* engine) override;
	virtual $String* chooseEngineServerAlias($String* keyType, $Array<::java::security::Principal>* issuers, ::javax::net::ssl::SSLEngine* engine) override;
	virtual $String* chooseServerAlias($String* keyType, $Array<::java::security::Principal>* issuers, ::java::net::Socket* socket) override;
	virtual $Array<::java::security::cert::X509Certificate>* getCertificateChain($String* alias) override;
	virtual $StringArray* getClientAliases($String* keyType, $Array<::java::security::Principal>* issuers) override;
	virtual ::java::security::PrivateKey* getPrivateKey($String* alias) override;
	virtual $StringArray* getServerAliases($String* keyType, $Array<::java::security::Principal>* issuers) override;
	static ::javax::net::ssl::X509ExtendedKeyManager* INSTANCE;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_security_ssl_DummyX509KeyManager_h_