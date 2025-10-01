#ifndef _sun_security_provider_certpath_ssl_SSLServerCertStore$CS_h_
#define _sun_security_provider_certpath_ssl_SSLServerCertStore$CS_h_
//$ class sun.security.provider.certpath.ssl.SSLServerCertStore$CS
//$ extends java.security.cert.CertStore

#include <java/security/cert/CertStore.h>

namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertStoreParameters;
			class CertStoreSpi;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ssl {

class SSLServerCertStore$CS : public ::java::security::cert::CertStore {
	$class(SSLServerCertStore$CS, $NO_CLASS_INIT, ::java::security::cert::CertStore)
public:
	SSLServerCertStore$CS();
	void init$(::java::security::cert::CertStoreSpi* spi, ::java::security::Provider* p, $String* type, ::java::security::cert::CertStoreParameters* params);
};

				} // ssl
			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_ssl_SSLServerCertStore$CS_h_