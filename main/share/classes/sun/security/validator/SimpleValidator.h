#ifndef _sun_security_validator_SimpleValidator_h_
#define _sun_security_validator_SimpleValidator_h_
//$ class sun.security.validator.SimpleValidator
//$ extends sun.security.validator.Validator

#include <java/lang/Array.h>
#include <sun/security/validator/Validator.h>
#include <sun/security/x509/NetscapeCertTypeExtension.h>

#pragma push_macro("NSCT_CODE_SIGNING_CA")
#undef NSCT_CODE_SIGNING_CA
#pragma push_macro("NSCT_SSL_CA")
#undef NSCT_SSL_CA
#pragma push_macro("OBJID_NETSCAPE_CERT_TYPE")
#undef OBJID_NETSCAPE_CERT_TYPE
#pragma push_macro("OID_BASIC_CONSTRAINTS")
#undef OID_BASIC_CONSTRAINTS
#pragma push_macro("OID_EKU_ANY_USAGE")
#undef OID_EKU_ANY_USAGE
#pragma push_macro("OID_EXTENDED_KEY_USAGE")
#undef OID_EXTENDED_KEY_USAGE
#pragma push_macro("OID_KEY_USAGE")
#undef OID_KEY_USAGE
#pragma push_macro("OID_NETSCAPE_CERT_TYPE")
#undef OID_NETSCAPE_CERT_TYPE

namespace java {
	namespace security {
		class AlgorithmConstraints;
	}
}
namespace java {
	namespace security {
		namespace cert {
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
		namespace util {
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace validator {

class $export SimpleValidator : public ::sun::security::validator::Validator {
	$class(SimpleValidator, 0, ::sun::security::validator::Validator)
public:
	SimpleValidator();
	void init$($String* variant, ::java::util::Collection* trustedCerts);
	$Array<::java::security::cert::X509Certificate>* buildTrustedChain($Array<::java::security::cert::X509Certificate>* chain);
	int32_t checkBasicConstraints(::java::security::cert::X509Certificate* cert, ::java::util::Set* critSet, int32_t maxPathLen);
	int32_t checkExtensions(::java::security::cert::X509Certificate* cert, int32_t maxPathLen);
	void checkKeyUsage(::java::security::cert::X509Certificate* cert, ::java::util::Set* critSet);
	void checkNetscapeCertType(::java::security::cert::X509Certificate* cert, ::java::util::Set* critSet);
	virtual $Array<::java::security::cert::X509Certificate>* engineValidate($Array<::java::security::cert::X509Certificate>* chain, ::java::util::Collection* otherCerts, ::java::util::List* responseList, ::java::security::AlgorithmConstraints* constraints, Object$* parameter) override;
	static bool getNetscapeCertTypeBit(::java::security::cert::X509Certificate* cert, $String* type);
	::java::security::cert::X509Certificate* getTrustedCertificate(::java::security::cert::X509Certificate* cert);
	virtual ::java::util::Collection* getTrustedCertificates() override;
	static $String* OID_BASIC_CONSTRAINTS;
	static $String* OID_NETSCAPE_CERT_TYPE;
	static $String* OID_KEY_USAGE;
	static $String* OID_EXTENDED_KEY_USAGE;
	static $String* OID_EKU_ANY_USAGE;
	static ::sun::security::util::ObjectIdentifier* OBJID_NETSCAPE_CERT_TYPE;
	static $String* NSCT_SSL_CA;
	static $String* NSCT_CODE_SIGNING_CA;
	::java::util::Map* trustedX500Principals = nullptr;
	::java::util::Collection* trustedCerts = nullptr;
};

		} // validator
	} // security
} // sun

#pragma pop_macro("NSCT_CODE_SIGNING_CA")
#pragma pop_macro("NSCT_SSL_CA")
#pragma pop_macro("OBJID_NETSCAPE_CERT_TYPE")
#pragma pop_macro("OID_BASIC_CONSTRAINTS")
#pragma pop_macro("OID_EKU_ANY_USAGE")
#pragma pop_macro("OID_EXTENDED_KEY_USAGE")
#pragma pop_macro("OID_KEY_USAGE")
#pragma pop_macro("OID_NETSCAPE_CERT_TYPE")

#endif // _sun_security_validator_SimpleValidator_h_