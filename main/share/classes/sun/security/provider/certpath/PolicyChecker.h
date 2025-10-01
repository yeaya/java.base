#ifndef _sun_security_provider_certpath_PolicyChecker_h_
#define _sun_security_provider_certpath_PolicyChecker_h_
//$ class sun.security.provider.certpath.PolicyChecker
//$ extends java.security.cert.PKIXCertPathChecker

#include <java/security/cert/PKIXCertPathChecker.h>

#pragma push_macro("ANY_POLICY")
#undef ANY_POLICY

namespace java {
	namespace security {
		namespace cert {
			class Certificate;
			class PolicyNode;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Set;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class PolicyNodeImpl;
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
			class CertificatePoliciesExtension;
			class X509CertImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class PolicyChecker : public ::java::security::cert::PKIXCertPathChecker {
	$class(PolicyChecker, 0, ::java::security::cert::PKIXCertPathChecker)
public:
	PolicyChecker();
	using ::java::security::cert::PKIXCertPathChecker::check;
	void init$(::java::util::Set* initialPolicies, int32_t certPathLen, bool expPolicyRequired, bool polMappingInhibited, bool anyPolicyInhibited, bool rejectPolicyQualifiers, ::sun::security::provider::certpath::PolicyNodeImpl* rootNode);
	virtual void check(::java::security::cert::Certificate* cert, ::java::util::Collection* unresCritExts) override;
	void checkPolicy(::java::security::cert::X509Certificate* currCert);
	virtual ::java::security::cert::PolicyNode* getPolicyTree();
	virtual ::java::util::Set* getSupportedExtensions() override;
	virtual void init(bool forward) override;
	virtual bool isForwardCheckingSupported() override;
	static int32_t mergeExplicitPolicy(int32_t explicitPolicy, ::sun::security::x509::X509CertImpl* currCert, bool finalCert);
	static int32_t mergeInhibitAnyPolicy(int32_t inhibitAnyPolicy, ::sun::security::x509::X509CertImpl* currCert);
	static int32_t mergePolicyMapping(int32_t policyMapping, ::sun::security::x509::X509CertImpl* currCert);
	static bool processParents(int32_t certIndex, bool policiesCritical, bool rejectPolicyQualifiers, ::sun::security::provider::certpath::PolicyNodeImpl* rootNode, $String* curPolicy, ::java::util::Set* pQuals, bool matchAny);
	static ::sun::security::provider::certpath::PolicyNodeImpl* processPolicies(int32_t certIndex, ::java::util::Set* initPolicies, int32_t explicitPolicy, int32_t policyMapping, int32_t inhibitAnyPolicy, bool rejectPolicyQualifiers, ::sun::security::provider::certpath::PolicyNodeImpl* origRootNode, ::sun::security::x509::X509CertImpl* currCert, bool finalCert);
	static ::sun::security::provider::certpath::PolicyNodeImpl* processPolicyMappings(::sun::security::x509::X509CertImpl* currCert, int32_t certIndex, int32_t policyMapping, ::sun::security::provider::certpath::PolicyNodeImpl* rootNode, bool policiesCritical, ::java::util::Set* anyQuals);
	static ::sun::security::provider::certpath::PolicyNodeImpl* removeInvalidNodes(::sun::security::provider::certpath::PolicyNodeImpl* rootNode, int32_t certIndex, ::java::util::Set* initPolicies, ::sun::security::x509::CertificatePoliciesExtension* currCertPolicies);
	static ::sun::security::provider::certpath::PolicyNodeImpl* rewriteLeafNodes(int32_t certIndex, ::java::util::Set* initPolicies, ::sun::security::provider::certpath::PolicyNodeImpl* rootNode);
	::java::util::Set* initPolicies = nullptr;
	int32_t certPathLen = 0;
	bool expPolicyRequired = false;
	bool polMappingInhibited = false;
	bool anyPolicyInhibited = false;
	bool rejectPolicyQualifiers = false;
	::sun::security::provider::certpath::PolicyNodeImpl* rootNode = nullptr;
	int32_t explicitPolicy = 0;
	int32_t policyMapping = 0;
	int32_t inhibitAnyPolicy = 0;
	int32_t certIndex = 0;
	::java::util::Set* supportedExts = nullptr;
	static ::sun::security::util::Debug* debug;
	static $String* ANY_POLICY;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("ANY_POLICY")

#endif // _sun_security_provider_certpath_PolicyChecker_h_