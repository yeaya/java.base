#ifndef _sun_security_jca_ProviderList$2_h_
#define _sun_security_jca_ProviderList$2_h_
//$ class sun.security.jca.ProviderList$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace jca {

class ProviderList$2 : public ::java::security::PrivilegedAction {
	$class(ProviderList$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ProviderList$2();
	void init$();
	virtual $Object* run() override;
};

		} // jca
	} // security
} // sun

#endif // _sun_security_jca_ProviderList$2_h_