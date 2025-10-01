#ifndef _com_sun_crypto_provider_PBMAC1Core$HmacSHA1_h_
#define _com_sun_crypto_provider_PBMAC1Core$HmacSHA1_h_
//$ class com.sun.crypto.provider.PBMAC1Core$HmacSHA1
//$ extends com.sun.crypto.provider.PBMAC1Core

#include <com/sun/crypto/provider/PBMAC1Core.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class PBMAC1Core$HmacSHA1 : public ::com::sun::crypto::provider::PBMAC1Core {
	$class(PBMAC1Core$HmacSHA1, $NO_CLASS_INIT, ::com::sun::crypto::provider::PBMAC1Core)
public:
	PBMAC1Core$HmacSHA1();
	void init$();
	virtual $Object* clone() override;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_PBMAC1Core$HmacSHA1_h_