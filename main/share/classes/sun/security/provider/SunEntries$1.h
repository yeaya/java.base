#ifndef _sun_security_provider_SunEntries$1_h_
#define _sun_security_provider_SunEntries$1_h_
//$ class sun.security.provider.SunEntries$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace provider {

class SunEntries$1 : public ::java::security::PrivilegedAction {
	$class(SunEntries$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SunEntries$1();
	void init$();
	virtual $Object* run() override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_SunEntries$1_h_