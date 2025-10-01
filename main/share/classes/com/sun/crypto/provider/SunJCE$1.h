#ifndef _com_sun_crypto_provider_SunJCE$1_h_
#define _com_sun_crypto_provider_SunJCE$1_h_
//$ class com.sun.crypto.provider.SunJCE$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class SunJCE;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class SunJCE$1 : public ::java::security::PrivilegedAction {
	$class(SunJCE$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SunJCE$1();
	void init$(::com::sun::crypto::provider::SunJCE* this$0);
	virtual $Object* run() override;
	::com::sun::crypto::provider::SunJCE* this$0 = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_SunJCE$1_h_