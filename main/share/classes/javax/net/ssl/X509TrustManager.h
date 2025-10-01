#ifndef _javax_net_ssl_X509TrustManager_h_
#define _javax_net_ssl_X509TrustManager_h_
//$ interface javax.net.ssl.X509TrustManager
//$ extends javax.net.ssl.TrustManager

#include <java/lang/Array.h>
#include <javax/net/ssl/TrustManager.h>

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

class $export X509TrustManager : public ::javax::net::ssl::TrustManager {
	$interface(X509TrustManager, $NO_CLASS_INIT, ::javax::net::ssl::TrustManager)
public:
	virtual void checkClientTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType) {}
	virtual void checkServerTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType) {}
	virtual $Array<::java::security::cert::X509Certificate>* getAcceptedIssuers() {return nullptr;}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_X509TrustManager_h_