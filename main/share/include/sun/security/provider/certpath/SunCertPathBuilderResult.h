#ifndef _sun_security_provider_certpath_SunCertPathBuilderResult_h_
#define _sun_security_provider_certpath_SunCertPathBuilderResult_h_
//$ class sun.security.provider.certpath.SunCertPathBuilderResult
//$ extends java.security.cert.PKIXCertPathBuilderResult

#include <java/security/cert/PKIXCertPathBuilderResult.h>

namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertPath;
			class PolicyNode;
			class TrustAnchor;
		}
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class AdjacencyList;
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

class $import SunCertPathBuilderResult : public ::java::security::cert::PKIXCertPathBuilderResult {
	$class(SunCertPathBuilderResult, 0, ::java::security::cert::PKIXCertPathBuilderResult)
public:
	SunCertPathBuilderResult();
	void init$(::java::security::cert::CertPath* certPath, ::java::security::cert::TrustAnchor* trustAnchor, ::java::security::cert::PolicyNode* policyTree, ::java::security::PublicKey* subjectPublicKey, ::sun::security::provider::certpath::AdjacencyList* adjList);
	virtual ::sun::security::provider::certpath::AdjacencyList* getAdjacencyList();
	static ::sun::security::util::Debug* debug;
	::sun::security::provider::certpath::AdjacencyList* adjList = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_SunCertPathBuilderResult_h_