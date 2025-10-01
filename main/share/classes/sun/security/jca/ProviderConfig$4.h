#ifndef _sun_security_jca_ProviderConfig$4_h_
#define _sun_security_jca_ProviderConfig$4_h_
//$ class sun.security.jca.ProviderConfig$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace jca {

class ProviderConfig$4 : public ::java::security::PrivilegedAction {
	$class(ProviderConfig$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ProviderConfig$4();
	void init$($String* val$value);
	virtual $Object* run() override;
	$String* val$value = nullptr;
};

		} // jca
	} // security
} // sun

#endif // _sun_security_jca_ProviderConfig$4_h_