#ifndef _javax_security_cert_X509Certificate$1_h_
#define _javax_security_cert_X509Certificate$1_h_
//$ class javax.security.cert.X509Certificate$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace security {
		namespace cert {

class X509Certificate$1 : public ::java::security::PrivilegedAction {
	$class(X509Certificate$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	X509Certificate$1();
	void init$();
	virtual $Object* run() override;
};

		} // cert
	} // security
} // javax

#endif // _javax_security_cert_X509Certificate$1_h_