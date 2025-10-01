#ifndef _sun_security_provider_certpath_PKIXExtendedParameters_h_
#define _sun_security_provider_certpath_PKIXExtendedParameters_h_
//$ class sun.security.provider.certpath.PKIXExtendedParameters
//$ extends java.security.cert.PKIXBuilderParameters

#include <java/security/cert/PKIXBuilderParameters.h>

namespace java {
	namespace security {
		class Timestamp;
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

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import PKIXExtendedParameters : public ::java::security::cert::PKIXBuilderParameters {
	$class(PKIXExtendedParameters, $NO_CLASS_INIT, ::java::security::cert::PKIXBuilderParameters)
public:
	PKIXExtendedParameters();
	void init$(::java::security::cert::PKIXBuilderParameters* params, ::java::security::Timestamp* timestamp, $String* variant);
	virtual void addCertPathChecker(::java::security::cert::PKIXCertPathChecker* c) override;
	virtual void addCertStore(::java::security::cert::CertStore* store) override;
	virtual ::java::util::List* getCertPathCheckers() override;
	virtual ::java::util::List* getCertStores() override;
	virtual ::java::util::Date* getDate() override;
	virtual ::java::util::Set* getInitialPolicies() override;
	virtual int32_t getMaxPathLength() override;
	virtual bool getPolicyQualifiersRejected() override;
	virtual $String* getSigProvider() override;
	virtual ::java::security::cert::CertSelector* getTargetCertConstraints() override;
	virtual ::java::security::Timestamp* getTimestamp();
	virtual ::java::util::Set* getTrustAnchors() override;
	virtual $String* getVariant();
	virtual bool isAnyPolicyInhibited() override;
	virtual bool isExplicitPolicyRequired() override;
	virtual bool isPolicyMappingInhibited() override;
	virtual bool isRevocationEnabled() override;
	virtual void setAnyPolicyInhibited(bool val) override;
	virtual void setCertPathCheckers(::java::util::List* checkers) override;
	virtual void setCertStores(::java::util::List* stores) override;
	virtual void setDate(::java::util::Date* d) override;
	virtual void setExplicitPolicyRequired(bool val) override;
	virtual void setInitialPolicies(::java::util::Set* initialPolicies) override;
	virtual void setMaxPathLength(int32_t maxPathLength) override;
	virtual void setPolicyMappingInhibited(bool val) override;
	virtual void setPolicyQualifiersRejected(bool qualifiersRejected) override;
	virtual void setRevocationEnabled(bool val) override;
	virtual void setSigProvider($String* sigProvider) override;
	virtual void setTargetCertConstraints(::java::security::cert::CertSelector* selector) override;
	virtual void setTimestamp(::java::security::Timestamp* t);
	virtual void setTrustAnchors(::java::util::Set* trustAnchors) override;
	virtual $String* toString() override;
	::java::security::cert::PKIXBuilderParameters* p = nullptr;
	::java::security::Timestamp* jarTimestamp = nullptr;
	$String* variant = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_PKIXExtendedParameters_h_