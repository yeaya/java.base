#ifndef _java_security_cert_CertPathValidatorResult_h_
#define _java_security_cert_CertPathValidatorResult_h_
//$ interface java.security.cert.CertPathValidatorResult
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace security {
		namespace cert {

class $import CertPathValidatorResult : public ::java::lang::Cloneable {
	$interface(CertPathValidatorResult, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	virtual $Object* clone() override;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertPathValidatorResult_h_