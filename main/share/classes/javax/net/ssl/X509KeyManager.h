#ifndef _javax_net_ssl_X509KeyManager_h_
#define _javax_net_ssl_X509KeyManager_h_
//$ interface javax.net.ssl.X509KeyManager
//$ extends javax.net.ssl.KeyManager

#include <java/lang/Array.h>
#include <javax/net/ssl/KeyManager.h>

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

class $export X509KeyManager : public ::javax::net::ssl::KeyManager {
	$interface(X509KeyManager, $NO_CLASS_INIT, ::javax::net::ssl::KeyManager)
public:
	virtual $String* chooseClientAlias($StringArray* keyType, $Array<::java::security::Principal>* issuers, ::java::net::Socket* socket) {return nullptr;}
	virtual $String* chooseServerAlias($String* keyType, $Array<::java::security::Principal>* issuers, ::java::net::Socket* socket) {return nullptr;}
	virtual $Array<::java::security::cert::X509Certificate>* getCertificateChain($String* alias) {return nullptr;}
	virtual $StringArray* getClientAliases($String* keyType, $Array<::java::security::Principal>* issuers) {return nullptr;}
	virtual ::java::security::PrivateKey* getPrivateKey($String* alias) {return nullptr;}
	virtual $StringArray* getServerAliases($String* keyType, $Array<::java::security::Principal>* issuers) {return nullptr;}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_X509KeyManager_h_