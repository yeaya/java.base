#ifndef _sun_security_validator_Validator_h_
#define _sun_security_validator_Validator_h_
//$ class sun.security.validator.Validator
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHAIN0")
#undef CHAIN0
#pragma push_macro("TYPE_PKIX")
#undef TYPE_PKIX
#pragma push_macro("TYPE_SIMPLE")
#undef TYPE_SIMPLE
#pragma push_macro("VAR_CODE_SIGNING")
#undef VAR_CODE_SIGNING
#pragma push_macro("VAR_GENERIC")
#undef VAR_GENERIC
#pragma push_macro("VAR_JCE_SIGNING")
#undef VAR_JCE_SIGNING
#pragma push_macro("VAR_PLUGIN_CODE_SIGNING")
#undef VAR_PLUGIN_CODE_SIGNING
#pragma push_macro("VAR_TLS_CLIENT")
#undef VAR_TLS_CLIENT
#pragma push_macro("VAR_TLS_SERVER")
#undef VAR_TLS_SERVER
#pragma push_macro("VAR_TSA_SERVER")
#undef VAR_TSA_SERVER

namespace java {
	namespace security {
		class AlgorithmConstraints;
		class KeyStore;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class PKIXBuilderParameters;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Date;
		class List;
	}
}
namespace sun {
	namespace security {
		namespace validator {
			class EndEntityChecker;
		}
	}
}

namespace sun {
	namespace security {
		namespace validator {

class $export Validator : public ::java::lang::Object {
	$class(Validator, 0, ::java::lang::Object)
public:
	Validator();
	void init$($String* type, $String* variant);
	virtual $Array<::java::security::cert::X509Certificate>* engineValidate($Array<::java::security::cert::X509Certificate>* chain, ::java::util::Collection* otherCerts, ::java::util::List* responseList, ::java::security::AlgorithmConstraints* constraints, Object$* parameter) {return nullptr;}
	static ::sun::security::validator::Validator* getInstance($String* type, $String* variant, ::java::security::KeyStore* ks);
	static ::sun::security::validator::Validator* getInstance($String* type, $String* variant, ::java::util::Collection* trustedCerts);
	static ::sun::security::validator::Validator* getInstance($String* type, $String* variant, ::java::security::cert::PKIXBuilderParameters* params);
	virtual ::java::util::Collection* getTrustedCertificates() {return nullptr;}
	virtual void setValidationDate(::java::util::Date* validationDate);
	$Array<::java::security::cert::X509Certificate>* validate($Array<::java::security::cert::X509Certificate>* chain);
	$Array<::java::security::cert::X509Certificate>* validate($Array<::java::security::cert::X509Certificate>* chain, ::java::util::Collection* otherCerts);
	$Array<::java::security::cert::X509Certificate>* validate($Array<::java::security::cert::X509Certificate>* chain, ::java::util::Collection* otherCerts, Object$* parameter);
	$Array<::java::security::cert::X509Certificate>* validate($Array<::java::security::cert::X509Certificate>* chain, ::java::util::Collection* otherCerts, ::java::util::List* responseList, ::java::security::AlgorithmConstraints* constraints, Object$* parameter);
	static $Array<::java::security::cert::X509Certificate>* CHAIN0;
	static $String* TYPE_SIMPLE;
	static $String* TYPE_PKIX;
	static $String* VAR_GENERIC;
	static $String* VAR_CODE_SIGNING;
	static $String* VAR_JCE_SIGNING;
	static $String* VAR_TLS_CLIENT;
	static $String* VAR_TLS_SERVER;
	static $String* VAR_TSA_SERVER;
	static $String* VAR_PLUGIN_CODE_SIGNING;
	$String* type = nullptr;
	::sun::security::validator::EndEntityChecker* endEntityChecker = nullptr;
	$String* variant = nullptr;
	$volatile(::java::util::Date*) validationDate = nullptr;
};

		} // validator
	} // security
} // sun

#pragma pop_macro("CHAIN0")
#pragma pop_macro("TYPE_PKIX")
#pragma pop_macro("TYPE_SIMPLE")
#pragma pop_macro("VAR_CODE_SIGNING")
#pragma pop_macro("VAR_GENERIC")
#pragma pop_macro("VAR_JCE_SIGNING")
#pragma pop_macro("VAR_PLUGIN_CODE_SIGNING")
#pragma pop_macro("VAR_TLS_CLIENT")
#pragma pop_macro("VAR_TLS_SERVER")
#pragma pop_macro("VAR_TSA_SERVER")

#endif // _sun_security_validator_Validator_h_