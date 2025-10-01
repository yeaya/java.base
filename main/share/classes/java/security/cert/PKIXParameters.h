#ifndef _java_security_cert_PKIXParameters_h_
#define _java_security_cert_PKIXParameters_h_
//$ class java.security.cert.PKIXParameters
//$ extends java.security.cert.CertPathParameters

#include <java/security/cert/CertPathParameters.h>

namespace java {
	namespace security {
		class KeyStore;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertSelector;
			class CertStore;
			class PKIXCertPathChecker;
		}
	}
}
namespace java {
	namespace util {
		class Date;
		class List;
		class Set;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $export PKIXParameters : public ::java::security::cert::CertPathParameters {
	$class(PKIXParameters, $NO_CLASS_INIT, ::java::security::cert::CertPathParameters)
public:
	PKIXParameters();
	void init$(::java::util::Set* trustAnchors);
	void init$(::java::security::KeyStore* keystore);
	virtual void addCertPathChecker(::java::security::cert::PKIXCertPathChecker* checker);
	virtual void addCertStore(::java::security::cert::CertStore* store);
	virtual $Object* clone() override;
	virtual ::java::util::List* getCertPathCheckers();
	virtual ::java::util::List* getCertStores();
	virtual ::java::util::Date* getDate();
	virtual ::java::util::Set* getInitialPolicies();
	virtual bool getPolicyQualifiersRejected();
	virtual $String* getSigProvider();
	virtual ::java::security::cert::CertSelector* getTargetCertConstraints();
	virtual ::java::util::Set* getTrustAnchors();
	virtual bool isAnyPolicyInhibited();
	virtual bool isExplicitPolicyRequired();
	virtual bool isPolicyMappingInhibited();
	virtual bool isRevocationEnabled();
	virtual void setAnyPolicyInhibited(bool val);
	virtual void setCertPathCheckers(::java::util::List* checkers);
	virtual void setCertStores(::java::util::List* stores);
	virtual void setDate(::java::util::Date* date);
	virtual void setExplicitPolicyRequired(bool val);
	virtual void setInitialPolicies(::java::util::Set* initialPolicies);
	virtual void setPolicyMappingInhibited(bool val);
	virtual void setPolicyQualifiersRejected(bool qualifiersRejected);
	virtual void setRevocationEnabled(bool val);
	virtual void setSigProvider($String* sigProvider);
	virtual void setTargetCertConstraints(::java::security::cert::CertSelector* selector);
	virtual void setTrustAnchors(::java::util::Set* trustAnchors);
	virtual $String* toString() override;
	::java::util::Set* unmodTrustAnchors = nullptr;
	::java::util::Date* date = nullptr;
	::java::util::List* certPathCheckers = nullptr;
	$String* sigProvider = nullptr;
	bool revocationEnabled = false;
	::java::util::Set* unmodInitialPolicies = nullptr;
	bool explicitPolicyRequired = false;
	bool policyMappingInhibited = false;
	bool anyPolicyInhibited = false;
	bool policyQualifiersRejected = false;
	::java::util::List* certStores = nullptr;
	::java::security::cert::CertSelector* certSelector = nullptr;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_PKIXParameters_h_