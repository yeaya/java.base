#ifndef _sun_security_provider_certpath_SunCertPathBuilder_h_
#define _sun_security_provider_certpath_SunCertPathBuilder_h_
//$ class sun.security.provider.certpath.SunCertPathBuilder
//$ extends java.security.cert.CertPathBuilderSpi

#include <java/security/cert/CertPathBuilderSpi.h>

namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertPathBuilderResult;
			class CertPathChecker;
			class CertPathParameters;
			class CertSelector;
			class CertificateFactory;
			class PKIXCertPathBuilderResult;
			class PolicyNode;
			class TrustAnchor;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class LinkedList;
		class List;
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
		namespace provider {
			namespace certpath {
				class ForwardBuilder;
				class ForwardState;
				class PKIX$BuilderParams;
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
		namespace provider {
			namespace certpath {

class $export SunCertPathBuilder : public ::java::security::cert::CertPathBuilderSpi {
	$class(SunCertPathBuilder, 0, ::java::security::cert::CertPathBuilderSpi)
public:
	SunCertPathBuilder();
	void init$();
	static ::java::util::List* addVertices(::java::util::Collection* certs, ::java::util::List* adjList);
	static bool anchorIsTarget(::java::security::cert::TrustAnchor* anchor, ::java::security::cert::CertSelector* sel);
	::java::security::cert::PKIXCertPathBuilderResult* build();
	::java::security::cert::PKIXCertPathBuilderResult* buildCertPath(bool searchAllCertStores, ::java::util::List* adjList);
	void buildForward(::java::util::List* adjacencyList, ::java::util::LinkedList* certPathList, bool searchAllCertStores);
	void depthFirstSearchForward(::javax::security::auth::x500::X500Principal* dN, ::sun::security::provider::certpath::ForwardState* currentState, ::sun::security::provider::certpath::ForwardBuilder* builder, ::java::util::List* adjList, ::java::util::LinkedList* cpList);
	virtual ::java::security::cert::CertPathBuilderResult* engineBuild(::java::security::cert::CertPathParameters* params) override;
	virtual ::java::security::cert::CertPathChecker* engineGetRevocationChecker() override;
	static ::sun::security::util::Debug* debug;
	::sun::security::provider::certpath::PKIX$BuilderParams* buildParams = nullptr;
	::java::security::cert::CertificateFactory* cf = nullptr;
	bool pathCompleted = false;
	::java::security::cert::PolicyNode* policyTreeResult = nullptr;
	::java::security::cert::TrustAnchor* trustAnchor = nullptr;
	::java::security::PublicKey* finalPublicKey = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_SunCertPathBuilder_h_