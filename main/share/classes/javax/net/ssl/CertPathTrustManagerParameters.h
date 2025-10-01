#ifndef _javax_net_ssl_CertPathTrustManagerParameters_h_
#define _javax_net_ssl_CertPathTrustManagerParameters_h_
//$ class javax.net.ssl.CertPathTrustManagerParameters
//$ extends javax.net.ssl.ManagerFactoryParameters

#include <javax/net/ssl/ManagerFactoryParameters.h>

namespace java {
	namespace security {
		namespace cert {
			class CertPathParameters;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $export CertPathTrustManagerParameters : public ::javax::net::ssl::ManagerFactoryParameters {
	$class(CertPathTrustManagerParameters, $NO_CLASS_INIT, ::javax::net::ssl::ManagerFactoryParameters)
public:
	CertPathTrustManagerParameters();
	void init$(::java::security::cert::CertPathParameters* parameters);
	virtual ::java::security::cert::CertPathParameters* getParameters();
	::java::security::cert::CertPathParameters* parameters = nullptr;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_CertPathTrustManagerParameters_h_