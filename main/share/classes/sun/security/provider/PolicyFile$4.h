#ifndef _sun_security_provider_PolicyFile$4_h_
#define _sun_security_provider_PolicyFile$4_h_
//$ class sun.security.provider.PolicyFile$4
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

class PolicyFile$4 : public ::java::security::PrivilegedAction {
	$class(PolicyFile$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PolicyFile$4();
	void init$(::sun::security::provider::PolicyFile* this$0, $String* val$propname, ::sun::security::provider::PolicyFile$PolicyInfo* val$newInfo, $String* val$urlname);
	virtual $Object* run() override;
	::sun::security::provider::PolicyFile* this$0 = nullptr;
	$String* val$urlname = nullptr;
	::sun::security::provider::PolicyFile$PolicyInfo* val$newInfo = nullptr;
	$String* val$propname = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyFile$4_h_