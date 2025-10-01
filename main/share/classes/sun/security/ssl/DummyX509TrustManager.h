#ifndef _sun_security_ssl_DummyX509TrustManager_h_
#define _sun_security_ssl_DummyX509TrustManager_h_
//$ class sun.security.ssl.DummyX509TrustManager
//$ extends javax.net.ssl.X509ExtendedTrustManager

#include <java/lang/Array.h>
#include <javax/net/ssl/X509ExtendedTrustManager.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

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
			class X509TrustManager;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class DummyX509TrustManager : public ::javax::net::ssl::X509ExtendedTrustManager {
	$class(DummyX509TrustManager, 0, ::javax::net::ssl::X509ExtendedTrustManager)
public:
	DummyX509TrustManager();
	void init$();
	virtual void checkClientTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType) override;
	virtual void checkClientTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::java::net::Socket* socket) override;
	virtual void checkClientTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::javax::net::ssl::SSLEngine* engine) override;
	virtual void checkServerTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType) override;
	virtual void checkServerTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::java::net::Socket* socket) override;
	virtual void checkServerTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::javax::net::ssl::SSLEngine* engine) override;
	virtual $Array<::java::security::cert::X509Certificate>* getAcceptedIssuers() override;
	static ::javax::net::ssl::X509TrustManager* INSTANCE;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_security_ssl_DummyX509TrustManager_h_