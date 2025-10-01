#ifndef _sun_security_provider_certpath_ssl_SSLServerCertStore$GetChainTrustManager_h_
#define _sun_security_provider_certpath_ssl_SSLServerCertStore$GetChainTrustManager_h_
//$ class sun.security.provider.certpath.ssl.SSLServerCertStore$GetChainTrustManager
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
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class List;
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
		namespace provider {
			namespace certpath {
				namespace ssl {

class SSLServerCertStore$GetChainTrustManager : public ::javax::net::ssl::X509ExtendedTrustManager {
	$class(SSLServerCertStore$GetChainTrustManager, $NO_CLASS_INIT, ::javax::net::ssl::X509ExtendedTrustManager)
public:
	SSLServerCertStore$GetChainTrustManager();
	void init$();
	virtual void checkClientTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType) override;
	virtual void checkClientTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::java::net::Socket* socket) override;
	virtual void checkClientTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::javax::net::ssl::SSLEngine* engine) override;
	virtual void checkServerTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType) override;
	virtual void checkServerTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::java::net::Socket* socket) override;
	virtual void checkServerTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::javax::net::ssl::SSLEngine* engine) override;
	virtual void cleanup();
	virtual $Array<::java::security::cert::X509Certificate>* getAcceptedIssuers() override;
	::java::util::List* serverChain = nullptr;
	bool exchangedServerCerts = false;
};

				} // ssl
			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_ssl_SSLServerCertStore$GetChainTrustManager_h_