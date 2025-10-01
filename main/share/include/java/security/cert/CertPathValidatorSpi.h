#ifndef _java_security_cert_CertPathValidatorSpi_h_
#define _java_security_cert_CertPathValidatorSpi_h_
//$ class java.security.cert.CertPathValidatorSpi
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace cert {
			class CertPath;
			class CertPathChecker;
			class CertPathParameters;
			class CertPathValidatorResult;
		}
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import CertPathValidatorSpi : public ::java::lang::Object {
	$class(CertPathValidatorSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CertPathValidatorSpi();
	void init$();
	virtual ::java::security::cert::CertPathChecker* engineGetRevocationChecker();
	virtual ::java::security::cert::CertPathValidatorResult* engineValidate(::java::security::cert::CertPath* certPath, ::java::security::cert::CertPathParameters* params) {return nullptr;}
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertPathValidatorSpi_h_