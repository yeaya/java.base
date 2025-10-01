#ifndef _sun_security_provider_certpath_PKIX$ValidatorParams_h_
#define _sun_security_provider_certpath_PKIX$ValidatorParams_h_
//$ class sun.security.provider.certpath.PKIX$ValidatorParams
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class Timestamp;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertPath;
			class CertSelector;
			class PKIXParameters;
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

class PKIX$ValidatorParams : public ::java::lang::Object {
	$class(PKIX$ValidatorParams, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PKIX$ValidatorParams();
	void init$(::java::security::cert::CertPath* cp, ::java::security::cert::PKIXParameters* params);
	void init$(::java::security::cert::PKIXParameters* params);
	virtual bool anyPolicyInhibited();
	virtual ::java::security::cert::CertPath* certPath();
	virtual ::java::util::List* certPathCheckers();
	virtual ::java::util::List* certStores();
	virtual ::java::util::List* certificates();
	virtual ::java::util::Date* date();
	virtual bool explicitPolicyRequired();
	virtual ::java::security::cert::PKIXParameters* getPKIXParameters();
	virtual ::java::util::Set* initialPolicies();
	virtual bool policyMappingInhibited();
	virtual bool policyQualifiersRejected();
	virtual bool revocationEnabled();
	virtual void setCertPath(::java::security::cert::CertPath* cp);
	virtual $String* sigProvider();
	virtual ::java::security::cert::CertSelector* targetCertConstraints();
	virtual ::java::util::Set* trustAnchors();
	virtual $String* variant();
	::java::security::cert::PKIXParameters* params = nullptr;
	::java::security::cert::CertPath* certPath$ = nullptr;
	::java::util::List* checkers = nullptr;
	::java::util::List* stores = nullptr;
	bool gotDate = false;
	::java::util::Date* date$ = nullptr;
	::java::util::Set* policies = nullptr;
	bool gotConstraints = false;
	::java::security::cert::CertSelector* constraints = nullptr;
	::java::util::Set* anchors = nullptr;
	::java::util::List* certs = nullptr;
	::java::security::Timestamp* timestamp = nullptr;
	$String* variant$ = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_PKIX$ValidatorParams_h_