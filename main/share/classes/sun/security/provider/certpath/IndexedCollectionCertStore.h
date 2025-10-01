#ifndef _sun_security_provider_certpath_IndexedCollectionCertStore_h_
#define _sun_security_provider_certpath_IndexedCollectionCertStore_h_
//$ class sun.security.provider.certpath.IndexedCollectionCertStore
//$ extends java.security.cert.CertStoreSpi

#include <java/security/cert/CertStoreSpi.h>

namespace java {
	namespace security {
		namespace cert {
			class CRLSelector;
			class CertSelector;
			class CertStoreParameters;
			class X509CRL;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
		class Set;
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $export IndexedCollectionCertStore : public ::java::security::cert::CertStoreSpi {
	$class(IndexedCollectionCertStore, $NO_CLASS_INIT, ::java::security::cert::CertStoreSpi)
public:
	IndexedCollectionCertStore();
	void init$(::java::security::cert::CertStoreParameters* params);
	void buildIndex(::java::util::Collection* coll);
	virtual ::java::util::Collection* engineGetCRLs(::java::security::cert::CRLSelector* selector) override;
	virtual ::java::util::Collection* engineGetCertificates(::java::security::cert::CertSelector* selector) override;
	void indexCRL(::java::security::cert::X509CRL* crl);
	void indexCertificate(::java::security::cert::X509Certificate* cert);
	void matchX509CRLs(::java::security::cert::CRLSelector* selector, ::java::util::Collection* matches);
	void matchX509Certs(::java::security::cert::CertSelector* selector, ::java::util::Collection* matches);
	::java::util::Map* certSubjects = nullptr;
	::java::util::Map* crlIssuers = nullptr;
	::java::util::Set* otherCertificates = nullptr;
	::java::util::Set* otherCRLs = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_IndexedCollectionCertStore_h_