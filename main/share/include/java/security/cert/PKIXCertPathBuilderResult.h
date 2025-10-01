#ifndef _java_security_cert_PKIXCertPathBuilderResult_h_
#define _java_security_cert_PKIXCertPathBuilderResult_h_
//$ class java.security.cert.PKIXCertPathBuilderResult
//$ extends java.security.cert.PKIXCertPathValidatorResult
//$ implements java.security.cert.CertPathBuilderResult

#include <java/security/cert/CertPathBuilderResult.h>
#include <java/security/cert/PKIXCertPathValidatorResult.h>

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

namespace java {
	namespace security {
		namespace cert {

class $import PKIXCertPathBuilderResult : public ::java::security::cert::PKIXCertPathValidatorResult, public ::java::security::cert::CertPathBuilderResult {
	$class(PKIXCertPathBuilderResult, $NO_CLASS_INIT, ::java::security::cert::PKIXCertPathValidatorResult, ::java::security::cert::CertPathBuilderResult)
public:
	PKIXCertPathBuilderResult();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::security::cert::CertPath* certPath, ::java::security::cert::TrustAnchor* trustAnchor, ::java::security::cert::PolicyNode* policyTree, ::java::security::PublicKey* subjectPublicKey);
	virtual ::java::security::cert::CertPath* getCertPath() override;
	virtual $String* toString() override;
	::java::security::cert::CertPath* certPath = nullptr;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_PKIXCertPathBuilderResult_h_