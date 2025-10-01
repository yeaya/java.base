#ifndef _javax_net_ssl_X509ExtendedKeyManager_h_
#define _javax_net_ssl_X509ExtendedKeyManager_h_
//$ class javax.net.ssl.X509ExtendedKeyManager
//$ extends javax.net.ssl.X509KeyManager

#include <java/lang/Array.h>
#include <javax/net/ssl/X509KeyManager.h>

namespace java {
	namespace security {
		class Principal;
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
	namespace net {
		namespace ssl {

class $import X509ExtendedKeyManager : public ::javax::net::ssl::X509KeyManager {
	$class(X509ExtendedKeyManager, $NO_CLASS_INIT, ::javax::net::ssl::X509KeyManager)
public:
	X509ExtendedKeyManager();
	void init$();
	virtual $String* chooseEngineClientAlias($StringArray* keyType, $Array<::java::security::Principal>* issuers, ::javax::net::ssl::SSLEngine* engine);
	virtual $String* chooseEngineServerAlias($String* keyType, $Array<::java::security::Principal>* issuers, ::javax::net::ssl::SSLEngine* engine);
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_X509ExtendedKeyManager_h_