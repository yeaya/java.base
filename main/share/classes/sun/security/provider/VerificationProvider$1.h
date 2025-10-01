#ifndef _sun_security_provider_VerificationProvider$1_h_
#define _sun_security_provider_VerificationProvider$1_h_
//$ class sun.security.provider.VerificationProvider$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		class Iterator;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class VerificationProvider;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class VerificationProvider$1 : public ::java::security::PrivilegedAction {
	$class(VerificationProvider$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	VerificationProvider$1();
	void init$(::sun::security::provider::VerificationProvider* this$0, ::java::util::Iterator* val$sunIter, ::java::util::Iterator* val$rsaIter);
	virtual $Object* run() override;
	::sun::security::provider::VerificationProvider* this$0 = nullptr;
	::java::util::Iterator* val$rsaIter = nullptr;
	::java::util::Iterator* val$sunIter = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_VerificationProvider$1_h_