#ifndef _sun_security_provider_NativePRNG$1_h_
#define _sun_security_provider_NativePRNG$1_h_
//$ class sun.security.provider.NativePRNG$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace provider {
			class NativePRNG$Variant;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class NativePRNG$1 : public ::java::security::PrivilegedAction {
	$class(NativePRNG$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	NativePRNG$1();
	void init$(::sun::security::provider::NativePRNG$Variant* val$v);
	virtual $Object* run() override;
	::sun::security::provider::NativePRNG$Variant* val$v = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_NativePRNG$1_h_