#ifndef _sun_security_provider_PolicyFile$7_h_
#define _sun_security_provider_PolicyFile$7_h_
//$ class sun.security.provider.PolicyFile$7
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

class PolicyFile$7 : public ::java::security::PrivilegedAction {
	$class(PolicyFile$7, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PolicyFile$7();
	void init$(::sun::security::provider::PolicyFile* this$0, ::java::security::CodeSource* val$cs);
	virtual $Object* run() override;
	::sun::security::provider::PolicyFile* this$0 = nullptr;
	::java::security::CodeSource* val$cs = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyFile$7_h_