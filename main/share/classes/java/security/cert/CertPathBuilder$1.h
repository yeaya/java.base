#ifndef _java_security_cert_CertPathBuilder$1_h_
#define _java_security_cert_CertPathBuilder$1_h_
//$ class java.security.cert.CertPathBuilder$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace security {
		namespace cert {

class CertPathBuilder$1 : public ::java::security::PrivilegedAction {
	$class(CertPathBuilder$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	CertPathBuilder$1();
	void init$();
	virtual $Object* run() override;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertPathBuilder$1_h_