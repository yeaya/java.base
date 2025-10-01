#ifndef _sun_security_provider_PolicyFile$6_h_
#define _sun_security_provider_PolicyFile$6_h_
//$ class sun.security.provider.PolicyFile$6
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace security {
		class CodeSource;
	}
}
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

class PolicyFile$6 : public ::java::security::PrivilegedAction {
	$class(PolicyFile$6, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PolicyFile$6();
	void init$(::sun::security::provider::PolicyFile* this$0, ::java::security::CodeSource* val$cs);
	virtual $Object* run() override;
	::sun::security::provider::PolicyFile* this$0 = nullptr;
	::java::security::CodeSource* val$cs = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyFile$6_h_