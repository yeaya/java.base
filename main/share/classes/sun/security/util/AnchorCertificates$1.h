#ifndef _sun_security_util_AnchorCertificates$1_h_
#define _sun_security_util_AnchorCertificates$1_h_
//$ class sun.security.util.AnchorCertificates$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace util {

class AnchorCertificates$1 : public ::java::security::PrivilegedAction {
	$class(AnchorCertificates$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AnchorCertificates$1();
	void init$();
	virtual $Object* run() override;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_AnchorCertificates$1_h_