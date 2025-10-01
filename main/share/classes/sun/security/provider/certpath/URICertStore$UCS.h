#ifndef _sun_security_provider_certpath_URICertStore$UCS_h_
#define _sun_security_provider_certpath_URICertStore$UCS_h_
//$ class sun.security.provider.certpath.URICertStore$UCS
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

class URICertStore$UCS : public ::java::security::cert::CertStore {
	$class(URICertStore$UCS, $NO_CLASS_INIT, ::java::security::cert::CertStore)
public:
	URICertStore$UCS();
	void init$(::java::security::cert::CertStoreSpi* spi, ::java::security::Provider* p, $String* type, ::java::security::cert::CertStoreParameters* params);
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_URICertStore$UCS_h_