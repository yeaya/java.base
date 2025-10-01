#ifndef _sun_security_provider_certpath_ForwardBuilder_h_
#define _sun_security_provider_certpath_ForwardBuilder_h_
//$ class sun.security.provider.certpath.ForwardBuilder
//$ extends sun.security.provider.certpath.Builder

#include <sun/security/provider/certpath/Builder.h>

namespace java {
	namespace security {
		namespace cert {
			class TrustAnchor;
			class X509CertSelector;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class LinkedList;
		class List;
		class Set;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class AdaptableX509CertSelector;
				class ForwardState;
				class PKIX$BuilderParams;
				class State;
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
			class AuthorityInfoAccessExtension;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class ForwardBuilder : public ::sun::security::provider::certpath::Builder {
	$class(ForwardBuilder, 0, ::sun::security::provider::certpath::Builder)
public:
	ForwardBuilder();
	void init$(::sun::security::provider::certpath::PKIX$BuilderParams* buildParams, bool searchAllCertStores);
	virtual void addCertToPath(::java::security::cert::X509Certificate* cert, ::java::util::LinkedList* certPathList) override;
	bool getCerts(::sun::security::x509::AuthorityInfoAccessExtension* aiaExt, ::java::util::Collection* certs);
	void getMatchingCACerts(::sun::security::provider::certpath::ForwardState* currentState, ::java::util::List* certStores, ::java::util::Collection* caCerts);
	virtual ::java::util::Collection* getMatchingCerts(::sun::security::provider::certpath::State* currentState, ::java::util::List* certStores) override;
	void getMatchingEECerts(::sun::security::provider::certpath::ForwardState* currentState, ::java::util::List* certStores, ::java::util::Collection* eeCerts);
	virtual bool isPathCompleted(::java::security::cert::X509Certificate* cert) override;
	virtual void removeFinalCertFromPath(::java::util::LinkedList* certPathList) override;
	virtual void verifyCert(::java::security::cert::X509Certificate* cert, ::sun::security::provider::certpath::State* currentState, ::java::util::List* certPathList) override;
	static ::sun::security::util::Debug* debug;
	::java::util::Set* trustedCerts = nullptr;
	::java::util::Set* trustedSubjectDNs = nullptr;
	::java::util::Set* trustAnchors = nullptr;
	::java::security::cert::X509CertSelector* eeSelector = nullptr;
	::sun::security::provider::certpath::AdaptableX509CertSelector* caSelector = nullptr;
	::java::security::cert::X509CertSelector* caTargetSelector = nullptr;
	::java::security::cert::TrustAnchor* trustAnchor = nullptr;
	bool searchAllCertStores = false;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_ForwardBuilder_h_