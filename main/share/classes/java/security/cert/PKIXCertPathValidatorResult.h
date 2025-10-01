#ifndef _java_security_cert_PKIXCertPathValidatorResult_h_
#define _java_security_cert_PKIXCertPathValidatorResult_h_
//$ class java.security.cert.PKIXCertPathValidatorResult
//$ extends java.security.cert.CertPathValidatorResult

#include <java/security/cert/CertPathValidatorResult.h>

namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class PolicyNode;
			class TrustAnchor;
		}
	}
}

namespace java {
	namespace security {
		namespace cert {

class $export PKIXCertPathValidatorResult : public ::java::security::cert::CertPathValidatorResult {
	$class(PKIXCertPathValidatorResult, $NO_CLASS_INIT, ::java::security::cert::CertPathValidatorResult)
public:
	PKIXCertPathValidatorResult();
	void init$(::java::security::cert::TrustAnchor* trustAnchor, ::java::security::cert::PolicyNode* policyTree, ::java::security::PublicKey* subjectPublicKey);
	virtual $Object* clone() override;
	virtual ::java::security::cert::PolicyNode* getPolicyTree();
	virtual ::java::security::PublicKey* getPublicKey();
	virtual ::java::security::cert::TrustAnchor* getTrustAnchor();
	virtual $String* toString() override;
	::java::security::cert::TrustAnchor* trustAnchor = nullptr;
	::java::security::cert::PolicyNode* policyTree = nullptr;
	::java::security::PublicKey* subjectPublicKey = nullptr;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_PKIXCertPathValidatorResult_h_