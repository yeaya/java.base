#ifndef _sun_security_provider_certpath_CollectionCertStore_h_
#define _sun_security_provider_certpath_CollectionCertStore_h_
//$ class sun.security.provider.certpath.CollectionCertStore
//$ extends java.security.cert.CertStoreSpi

#include <java/security/cert/CertStoreSpi.h>

namespace java {
	namespace security {
		namespace cert {
			class CRLSelector;
			class CertSelector;
			class CertStoreParameters;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import CollectionCertStore : public ::java::security::cert::CertStoreSpi {
	$class(CollectionCertStore, $NO_CLASS_INIT, ::java::security::cert::CertStoreSpi)
public:
	CollectionCertStore();
	void init$(::java::security::cert::CertStoreParameters* params);
	virtual ::java::util::Collection* engineGetCRLs(::java::security::cert::CRLSelector* selector) override;
	virtual ::java::util::Collection* engineGetCertificates(::java::security::cert::CertSelector* selector) override;
	::java::util::Collection* coll = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_CollectionCertStore_h_