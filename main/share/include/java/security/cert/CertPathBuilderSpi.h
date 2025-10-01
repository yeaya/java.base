#ifndef _java_security_cert_CertPathBuilderSpi_h_
#define _java_security_cert_CertPathBuilderSpi_h_
//$ class java.security.cert.CertPathBuilderSpi
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace cert {
			class CertPathBuilderResult;
			class CertPathChecker;
			class CertPathParameters;
		}
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import CertPathBuilderSpi : public ::java::lang::Object {
	$class(CertPathBuilderSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CertPathBuilderSpi();
	void init$();
	virtual ::java::security::cert::CertPathBuilderResult* engineBuild(::java::security::cert::CertPathParameters* params) {return nullptr;}
	virtual ::java::security::cert::CertPathChecker* engineGetRevocationChecker();
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertPathBuilderSpi_h_