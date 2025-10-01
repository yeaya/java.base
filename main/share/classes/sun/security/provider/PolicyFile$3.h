#ifndef _sun_security_provider_PolicyFile$3_h_
#define _sun_security_provider_PolicyFile$3_h_
//$ class sun.security.provider.PolicyFile$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {
		class URL;
	}
}
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

class PolicyFile$3 : public ::java::security::PrivilegedAction {
	$class(PolicyFile$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PolicyFile$3();
	void init$(::sun::security::provider::PolicyFile* this$0, ::java::net::URL* val$url, ::sun::security::provider::PolicyFile$PolicyInfo* val$newInfo);
	virtual $Object* run() override;
	::sun::security::provider::PolicyFile* this$0 = nullptr;
	::sun::security::provider::PolicyFile$PolicyInfo* val$newInfo = nullptr;
	::java::net::URL* val$url = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyFile$3_h_