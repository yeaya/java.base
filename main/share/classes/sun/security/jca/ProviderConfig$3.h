#ifndef _sun_security_jca_ProviderConfig$3_h_
#define _sun_security_jca_ProviderConfig$3_h_
//$ class sun.security.jca.ProviderConfig$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace jca {
			class ProviderConfig;
		}
	}
}

namespace sun {
	namespace security {
		namespace jca {

class ProviderConfig$3 : public ::java::security::PrivilegedAction {
	$class(ProviderConfig$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ProviderConfig$3();
	void init$(::sun::security::jca::ProviderConfig* this$0);
	virtual $Object* run() override;
	::sun::security::jca::ProviderConfig* this$0 = nullptr;
};

		} // jca
	} // security
} // sun

#endif // _sun_security_jca_ProviderConfig$3_h_