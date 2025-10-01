#ifndef _sun_security_provider_NativePRNG$RandomIO$1_h_
#define _sun_security_provider_NativePRNG$RandomIO$1_h_
//$ class sun.security.provider.NativePRNG$RandomIO$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace provider {
			class NativePRNG$RandomIO;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class NativePRNG$RandomIO$1 : public ::java::security::PrivilegedAction {
	$class(NativePRNG$RandomIO$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	NativePRNG$RandomIO$1();
	void init$(::sun::security::provider::NativePRNG$RandomIO* this$0);
	virtual $Object* run() override;
	::sun::security::provider::NativePRNG$RandomIO* this$0 = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_NativePRNG$RandomIO$1_h_