#ifndef _sun_security_provider_certpath_RevocationChecker$1_h_
#define _sun_security_provider_certpath_RevocationChecker$1_h_
//$ class sun.security.provider.certpath.RevocationChecker$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class RevocationChecker$1 : public ::java::security::PrivilegedAction {
	$class(RevocationChecker$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	RevocationChecker$1();
	void init$();
	virtual $Object* run() override;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_RevocationChecker$1_h_