#ifndef _sun_security_provider_MD4$2_h_
#define _sun_security_provider_MD4$2_h_
//$ class sun.security.provider.MD4$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace provider {

class MD4$2 : public ::java::security::PrivilegedAction {
	$class(MD4$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	MD4$2();
	void init$();
	virtual $Object* run() override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_MD4$2_h_