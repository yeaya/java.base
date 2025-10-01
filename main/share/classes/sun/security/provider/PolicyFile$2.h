#ifndef _sun_security_provider_PolicyFile$2_h_
#define _sun_security_provider_PolicyFile$2_h_
//$ class sun.security.provider.PolicyFile$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace provider {
			class PolicyFile;
			class PolicyFile$PolicyInfo;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class PolicyFile$2 : public ::java::security::PrivilegedAction {
	$class(PolicyFile$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PolicyFile$2();
	void init$(::sun::security::provider::PolicyFile* this$0, ::sun::security::provider::PolicyFile$PolicyInfo* val$newInfo);
	virtual $Object* run() override;
	::sun::security::provider::PolicyFile* this$0 = nullptr;
	::sun::security::provider::PolicyFile$PolicyInfo* val$newInfo = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyFile$2_h_