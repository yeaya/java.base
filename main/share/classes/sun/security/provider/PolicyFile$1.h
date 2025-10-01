#ifndef _sun_security_provider_PolicyFile$1_h_
#define _sun_security_provider_PolicyFile$1_h_
//$ class sun.security.provider.PolicyFile$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace provider {
			class PolicyFile;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class PolicyFile$1 : public ::java::security::PrivilegedAction {
	$class(PolicyFile$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PolicyFile$1();
	void init$(::sun::security::provider::PolicyFile* this$0);
	virtual $Object* run() override;
	::sun::security::provider::PolicyFile* this$0 = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyFile$1_h_