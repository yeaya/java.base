#ifndef _sun_security_ssl_AbstractKeyManagerWrapper_h_
#define _sun_security_ssl_AbstractKeyManagerWrapper_h_
//$ class sun.security.ssl.AbstractKeyManagerWrapper
//$ extends javax.net.ssl.X509ExtendedKeyManager

#include <java/lang/Array.h>
#include <javax/net/ssl/X509ExtendedKeyManager.h>

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
			class X509KeyManager;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class AbstractKeyManagerWrapper : public ::javax::net::ssl::X509ExtendedKeyManager {
	$class(AbstractKeyManagerWrapper, $NO_CLASS_INIT, ::javax::net::ssl::X509ExtendedKeyManager)
public:
	AbstractKeyManagerWrapper();
	void init$(::javax::net::ssl::X509KeyManager* km);
	virtual $String* chooseClientAlias($StringArray* keyType, $Array<::java::security::Principal>* issuers, ::java::net::Socket* socket) override;
	virtual $String* chooseServerAlias($String* keyType, $Array<::java::security::Principal>* issuers, ::java::net::Socket* socket) override;
	virtual $Array<::java::security::cert::X509Certificate>* getCertificateChain($String* alias) override;
	virtual $StringArray* getClientAliases($String* keyType, $Array<::java::security::Principal>* issuers) override;
	virtual ::java::security::PrivateKey* getPrivateKey($String* alias) override;
	virtual $StringArray* getServerAliases($String* keyType, $Array<::java::security::Principal>* issuers) override;
	::javax::net::ssl::X509KeyManager* km = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_AbstractKeyManagerWrapper_h_