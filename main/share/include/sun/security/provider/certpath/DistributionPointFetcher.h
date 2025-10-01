#ifndef _sun_security_provider_certpath_DistributionPointFetcher_h_
#define _sun_security_provider_certpath_DistributionPointFetcher_h_
//$ class sun.security.provider.certpath.DistributionPointFetcher
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALL_REASONS")
#undef ALL_REASONS

namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class TrustAnchor;
			class X509CRL;
			class X509CRLSelector;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Date;
		class List;
		class Set;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {
				class X500Principal;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class DistributionPoint;
			class GeneralNames;
			class RDN;
			class URIName;
			class X500Name;
			class X509CRLImpl;
			class X509CertImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import DistributionPointFetcher : public ::java::lang::Object {
	$class(DistributionPointFetcher, 0, ::java::lang::Object)
public:
	DistributionPointFetcher();
	void init$();
	static ::java::security::cert::X509CRL* getCRL(::sun::security::x509::URIName* name);
	static ::java::util::Collection* getCRLs(::java::security::cert::X509CRLSelector* selector, bool signFlag, ::java::security::PublicKey* prevKey, $String* provider, ::java::util::List* certStores, $booleans* reasonsMask, ::java::util::Set* trustAnchors, ::java::util::Date* validity, $String* variant);
	static ::java::util::Collection* getCRLs(::java::security::cert::X509CRLSelector* selector, bool signFlag, ::java::security::PublicKey* prevKey, $String* provider, ::java::util::List* certStores, $booleans* reasonsMask, ::java::util::Set* trustAnchors, ::java::util::Date* validity);
	static ::java::util::Collection* getCRLs(::java::security::cert::X509CRLSelector* selector, bool signFlag, ::java::security::PublicKey* prevKey, ::java::security::cert::X509Certificate* prevCert, $String* provider, ::java::util::List* certStores, $booleans* reasonsMask, ::java::util::Set* trustAnchors, ::java::util::Date* validity, $String* variant, ::java::security::cert::TrustAnchor* anchor);
	static ::java::util::Collection* getCRLs(::java::security::cert::X509CRLSelector* selector, ::sun::security::x509::X509CertImpl* certImpl, ::sun::security::x509::DistributionPoint* point, $booleans* reasonsMask, bool signFlag, ::java::security::PublicKey* prevKey, ::java::security::cert::X509Certificate* prevCert, $String* provider, ::java::util::List* certStores, ::java::util::Set* trustAnchors, ::java::util::Date* validity, $String* variant, ::java::security::cert::TrustAnchor* anchor);
	static ::java::util::Collection* getCRLs(::sun::security::x509::X500Name* name, ::javax::security::auth::x500::X500Principal* certIssuer, ::java::util::List* certStores);
	static ::sun::security::x509::GeneralNames* getFullNames(::sun::security::x509::X500Name* issuer, ::sun::security::x509::RDN* rdn);
	static bool issues(::sun::security::x509::X509CertImpl* cert, ::sun::security::x509::X509CRLImpl* crl, $String* provider);
	static bool verifyCRL(::sun::security::x509::X509CertImpl* certImpl, ::sun::security::x509::DistributionPoint* point, ::java::security::cert::X509CRL* crl, $booleans* reasonsMask, bool signFlag, ::java::security::PublicKey* prevKey, ::java::security::cert::X509Certificate* prevCert, $String* provider, ::java::util::Set* trustAnchors, ::java::util::List* certStores, ::java::util::Date* validity, $String* variant, ::java::security::cert::TrustAnchor* anchor);
	static ::sun::security::util::Debug* debug;
	static $booleans* ALL_REASONS;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("ALL_REASONS")

#endif // _sun_security_provider_certpath_DistributionPointFetcher_h_