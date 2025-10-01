#ifndef _sun_security_validator_PKIXValidator_h_
#define _sun_security_validator_PKIXValidator_h_
//$ class sun.security.validator.PKIXValidator
//$ extends sun.security.validator.Validator

#include <java/lang/Array.h>
#include <sun/security/validator/Validator.h>

#pragma push_macro("ALLOW_NON_CA_ANCHOR")
#undef ALLOW_NON_CA_ANCHOR

namespace java {
	namespace security {
		class AlgorithmConstraints;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertPath;
			class CertificateFactory;
			class PKIXBuilderParameters;
			class TrustAnchor;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
		class Map;
		class Set;
	}
}

namespace sun {
	namespace security {
		namespace validator {

class $export PKIXValidator : public ::sun::security::validator::Validator {
	$class(PKIXValidator, 0, ::sun::security::validator::Validator)
public:
	PKIXValidator();
	void init$($String* variant, ::java::util::Collection* trustedCerts);
	void init$($String* variant, ::java::security::cert::PKIXBuilderParameters* params);
	static void addResponses(::java::security::cert::PKIXBuilderParameters* pkixParams, $Array<::java::security::cert::X509Certificate>* chain, ::java::util::List* responseList);
	static bool allowNonCaAnchor();
	$Array<::java::security::cert::X509Certificate>* doBuild($Array<::java::security::cert::X509Certificate>* chain, ::java::util::Collection* otherCerts, ::java::security::cert::PKIXBuilderParameters* params);
	$Array<::java::security::cert::X509Certificate>* doValidate($Array<::java::security::cert::X509Certificate>* chain, ::java::security::cert::PKIXBuilderParameters* params);
	virtual $Array<::java::security::cert::X509Certificate>* engineValidate($Array<::java::security::cert::X509Certificate>* chain, ::java::util::Collection* otherCerts, ::java::util::List* responseList, ::java::security::AlgorithmConstraints* constraints, Object$* parameter) override;
	int32_t getCertPathLength();
	::java::security::cert::PKIXBuilderParameters* getParameters();
	virtual ::java::util::Collection* getTrustedCertificates() override;
	bool isSignatureValid(::java::util::List* keys, ::java::security::cert::X509Certificate* sub);
	void setDate(::java::security::cert::PKIXBuilderParameters* params);
	void setDefaultParameters($String* variant);
	::java::util::Map* setTrustedSubjects();
	static $Array<::java::security::cert::X509Certificate>* toArray(::java::security::cert::CertPath* path, ::java::security::cert::TrustAnchor* anchor);
	static void verifyTrustAnchor(::java::security::cert::X509Certificate* trustedCert);
	static bool checkTLSRevocation;
	static bool ALLOW_NON_CA_ANCHOR;
	::java::util::Set* trustedCerts = nullptr;
	::java::security::cert::PKIXBuilderParameters* parameterTemplate = nullptr;
	int32_t certPathLength = 0;
	::java::util::Map* trustedSubjects = nullptr;
	::java::security::cert::CertificateFactory* factory = nullptr;
	bool plugin = false;
};

		} // validator
	} // security
} // sun

#pragma pop_macro("ALLOW_NON_CA_ANCHOR")

#endif // _sun_security_validator_PKIXValidator_h_