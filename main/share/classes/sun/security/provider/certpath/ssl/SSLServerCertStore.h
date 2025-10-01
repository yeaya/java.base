#ifndef _sun_security_provider_certpath_ssl_SSLServerCertStore_h_
#define _sun_security_provider_certpath_ssl_SSLServerCertStore_h_
//$ class sun.security.provider.certpath.ssl.SSLServerCertStore
//$ extends java.security.cert.CertStoreSpi

#include <java/security/cert/CertStoreSpi.h>

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CRLSelector;
			class CertSelector;
			class CertStore;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class HostnameVerifier;
			class SSLSocketFactory;
		}
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ssl {
					class SSLServerCertStore$GetChainTrustManager;
				}
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ssl {

class SSLServerCertStore : public ::java::security::cert::CertStoreSpi {
	$class(SSLServerCertStore, 0, ::java::security::cert::CertStoreSpi)
public:
	SSLServerCertStore();
	void init$(::java::net::URI* uri);
	virtual ::java::util::Collection* engineGetCRLs(::java::security::cert::CRLSelector* selector) override;
	virtual ::java::util::Collection* engineGetCertificates(::java::security::cert::CertSelector* selector) override;
	static ::java::security::cert::CertStore* getInstance(::java::net::URI* uri);
	static ::java::util::List* getMatchingCerts(::java::util::List* certs, ::java::security::cert::CertSelector* selector);
	::java::net::URI* uri = nullptr;
	static ::sun::security::provider::certpath::ssl::SSLServerCertStore$GetChainTrustManager* trustManager;
	static ::javax::net::ssl::SSLSocketFactory* socketFactory;
	static ::javax::net::ssl::HostnameVerifier* hostnameVerifier;
};

				} // ssl
			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_ssl_SSLServerCertStore_h_