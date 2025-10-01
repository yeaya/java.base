#ifndef _sun_security_provider_certpath_ssl_SSLServerCertStore$1_h_
#define _sun_security_provider_certpath_ssl_SSLServerCertStore$1_h_
//$ class sun.security.provider.certpath.ssl.SSLServerCertStore$1
//$ extends javax.net.ssl.HostnameVerifier

#include <javax/net/ssl/HostnameVerifier.h>

namespace javax {
	namespace net {
		namespace ssl {
			class SSLSession;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ssl {

class SSLServerCertStore$1 : public ::javax::net::ssl::HostnameVerifier {
	$class(SSLServerCertStore$1, $NO_CLASS_INIT, ::javax::net::ssl::HostnameVerifier)
public:
	SSLServerCertStore$1();
	void init$();
	virtual bool verify($String* hostname, ::javax::net::ssl::SSLSession* session) override;
};

				} // ssl
			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_ssl_SSLServerCertStore$1_h_