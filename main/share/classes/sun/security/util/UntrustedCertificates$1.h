#ifndef _sun_security_util_UntrustedCertificates$1_h_
#define _sun_security_util_UntrustedCertificates$1_h_
//$ class sun.security.util.UntrustedCertificates$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace util {

class UntrustedCertificates$1 : public ::java::security::PrivilegedAction {
	$class(UntrustedCertificates$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	UntrustedCertificates$1();
	void init$();
	virtual $Object* run() override;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_UntrustedCertificates$1_h_