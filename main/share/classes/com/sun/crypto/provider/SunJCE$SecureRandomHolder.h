#ifndef _com_sun_crypto_provider_SunJCE$SecureRandomHolder_h_
#define _com_sun_crypto_provider_SunJCE$SecureRandomHolder_h_
//$ class com.sun.crypto.provider.SunJCE$SecureRandomHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("RANDOM")
#undef RANDOM

namespace java {
	namespace security {
		class SecureRandom;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class SunJCE$SecureRandomHolder : public ::java::lang::Object {
	$class(SunJCE$SecureRandomHolder, 0, ::java::lang::Object)
public:
	SunJCE$SecureRandomHolder();
	void init$();
	static ::java::security::SecureRandom* RANDOM;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("RANDOM")

#endif // _com_sun_crypto_provider_SunJCE$SecureRandomHolder_h_