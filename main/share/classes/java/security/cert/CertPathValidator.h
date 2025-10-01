#ifndef _java_security_cert_CertPathValidator_h_
#define _java_security_cert_CertPathValidator_h_
//$ class java.security.cert.CertPathValidator
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CPV_TYPE")
#undef CPV_TYPE

namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertPath;
			class CertPathChecker;
			class CertPathParameters;
			class CertPathValidatorResult;
			class CertPathValidatorSpi;
		}
	}
}

namespace java {
	namespace security {
		namespace cert {

class $export CertPathValidator : public ::java::lang::Object {
	$class(CertPathValidator, 0, ::java::lang::Object)
public:
	CertPathValidator();
	void init$(::java::security::cert::CertPathValidatorSpi* validatorSpi, ::java::security::Provider* provider, $String* algorithm);
	$String* getAlgorithm();
	static $String* getDefaultType();
	static ::java::security::cert::CertPathValidator* getInstance($String* algorithm);
	static ::java::security::cert::CertPathValidator* getInstance($String* algorithm, $String* provider);
	static ::java::security::cert::CertPathValidator* getInstance($String* algorithm, ::java::security::Provider* provider);
	::java::security::Provider* getProvider();
	::java::security::cert::CertPathChecker* getRevocationChecker();
	::java::security::cert::CertPathValidatorResult* validate(::java::security::cert::CertPath* certPath, ::java::security::cert::CertPathParameters* params);
	static $String* CPV_TYPE;
	::java::security::cert::CertPathValidatorSpi* validatorSpi = nullptr;
	::java::security::Provider* provider = nullptr;
	$String* algorithm = nullptr;
};

		} // cert
	} // security
} // java

#pragma pop_macro("CPV_TYPE")

#endif // _java_security_cert_CertPathValidator_h_