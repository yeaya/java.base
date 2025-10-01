#ifndef _sun_security_provider_SeedGenerator$ThreadedSeedGenerator$1_h_
#define _sun_security_provider_SeedGenerator$ThreadedSeedGenerator$1_h_
//$ class sun.security.provider.SeedGenerator$ThreadedSeedGenerator$1
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class ThreadGroup;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class SeedGenerator$ThreadedSeedGenerator;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class SeedGenerator$ThreadedSeedGenerator$1 : public ::java::security::PrivilegedAction {
	$class(SeedGenerator$ThreadedSeedGenerator$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SeedGenerator$ThreadedSeedGenerator$1();
	void init$(::sun::security::provider::SeedGenerator$ThreadedSeedGenerator* this$0, $Array<::java::lang::ThreadGroup>* val$finalsg);
	virtual $Object* run() override;
	::sun::security::provider::SeedGenerator$ThreadedSeedGenerator* this$0 = nullptr;
	$Array<::java::lang::ThreadGroup>* val$finalsg = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_SeedGenerator$ThreadedSeedGenerator$1_h_