#ifndef _java_security_cert_CertPathParameters_h_
#define _java_security_cert_CertPathParameters_h_
//$ interface java.security.cert.CertPathParameters
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace security {
		namespace cert {

class $import CertPathParameters : public ::java::lang::Cloneable {
	$interface(CertPathParameters, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	virtual $Object* clone() override;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertPathParameters_h_