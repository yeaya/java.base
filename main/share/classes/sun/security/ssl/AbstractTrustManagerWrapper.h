#ifndef _sun_security_ssl_AbstractTrustManagerWrapper_h_
#define _sun_security_ssl_AbstractTrustManagerWrapper_h_
//$ class sun.security.ssl.AbstractTrustManagerWrapper
//$ extends javax.net.ssl.X509ExtendedTrustManager

#include <java/lang/Array.h>
#include <javax/net/ssl/X509ExtendedTrustManager.h>

namespace java {
	namespace net {
		class Socket;
	}
}
namespace java {
	namespace security {
		class AlgorithmConstraints;
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
			class X509TrustManager;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class AbstractTrustManagerWrapper : public ::javax::net::ssl::X509ExtendedTrustManager {
	$class(AbstractTrustManagerWrapper, $NO_CLASS_INIT, ::javax::net::ssl::X509ExtendedTrustManager)
public:
	AbstractTrustManagerWrapper();
	void init$(::javax::net::ssl::X509TrustManager* tm);
	void checkAdditionalTrust($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::java::net::Socket* socket, bool checkClientTrusted);
	void checkAdditionalTrust($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::javax::net::ssl::SSLEngine* engine, bool checkClientTrusted);
	void checkAlgorithmConstraints($Array<::java::security::cert::X509Certificate>* chain, ::java::security::AlgorithmConstraints* constraints, bool checkClientTrusted);
	virtual void checkClientTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType) override;
	virtual void checkClientTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::java::net::Socket* socket) override;
	virtual void checkClientTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::javax::net::ssl::SSLEngine* engine) override;
	virtual void checkServerTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType) override;
	virtual void checkServerTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::java::net::Socket* socket) override;
	virtual void checkServerTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::javax::net::ssl::SSLEngine* engine) override;
	virtual $Array<::java::security::cert::X509Certificate>* getAcceptedIssuers() override;
	::javax::net::ssl::X509TrustManager* tm = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_AbstractTrustManagerWrapper_h_