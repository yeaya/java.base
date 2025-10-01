#ifndef _apple_security_AppleProvider$1_h_
#define _apple_security_AppleProvider$1_h_
//$ class apple.security.AppleProvider$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace apple {
	namespace security {
		class AppleProvider;
	}
}
namespace java {
	namespace security {
		class Provider;
	}
}

namespace apple {
	namespace security {

class AppleProvider$1 : public ::java::security::PrivilegedAction {
	$class(AppleProvider$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AppleProvider$1();
	void init$(::apple::security::AppleProvider* this$0, ::java::security::Provider* val$p);
	virtual $Object* run() override;
	::apple::security::AppleProvider* this$0 = nullptr;
	::java::security::Provider* val$p = nullptr;
};

	} // security
} // apple

#endif // _apple_security_AppleProvider$1_h_