#ifndef _javax_net_ssl_X509ExtendedTrustManager_h_
#define _javax_net_ssl_X509ExtendedTrustManager_h_
//$ class javax.net.ssl.X509ExtendedTrustManager
//$ extends javax.net.ssl.X509TrustManager

#include <java/lang/Array.h>
#include <javax/net/ssl/X509TrustManager.h>

namespace java {
	namespace net {
		class Socket;
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

namespace javax {
	namespace net {
		namespace ssl {

class $export X509ExtendedTrustManager : public ::javax::net::ssl::X509TrustManager {
	$class(X509ExtendedTrustManager, $NO_CLASS_INIT, ::javax::net::ssl::X509TrustManager)
public:
	X509ExtendedTrustManager();
	using ::javax::net::ssl::X509TrustManager::checkClientTrusted;
	using ::javax::net::ssl::X509TrustManager::checkServerTrusted;
	void init$();
	virtual void checkClientTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::java::net::Socket* socket) {}
	virtual void checkClientTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::javax::net::ssl::SSLEngine* engine) {}
	virtual void checkServerTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::java::net::Socket* socket) {}
	virtual void checkServerTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::javax::net::ssl::SSLEngine* engine) {}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_X509ExtendedTrustManager_h_