#ifndef _sun_security_provider_PolicyFile$8_h_
#define _sun_security_provider_PolicyFile$8_h_
//$ class sun.security.provider.PolicyFile$8
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
			class PolicyFile$PolicyEntry;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class PolicyFile$8 : public ::java::security::PrivilegedAction {
	$class(PolicyFile$8, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PolicyFile$8();
	void init$(::sun::security::provider::PolicyFile* this$0, ::sun::security::provider::PolicyFile$PolicyEntry* val$entry, ::java::security::CodeSource* val$cs);
	virtual $Object* run() override;
	::sun::security::provider::PolicyFile* this$0 = nullptr;
	::java::security::CodeSource* val$cs = nullptr;
	::sun::security::provider::PolicyFile$PolicyEntry* val$entry = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyFile$8_h_