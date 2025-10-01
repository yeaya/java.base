#ifndef _com_sun_crypto_provider_PBMAC1Core$HmacSHA256_h_
#define _com_sun_crypto_provider_PBMAC1Core$HmacSHA256_h_
//$ class com.sun.crypto.provider.PBMAC1Core$HmacSHA256
//$ extends com.sun.crypto.provider.PBMAC1Core

#include <com/sun/crypto/provider/PBMAC1Core.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class PBMAC1Core$HmacSHA256 : public ::com::sun::crypto::provider::PBMAC1Core {
	$class(PBMAC1Core$HmacSHA256, $NO_CLASS_INIT, ::com::sun::crypto::provider::PBMAC1Core)
public:
	PBMAC1Core$HmacSHA256();
	void init$();
	virtual $Object* clone() override;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_PBMAC1Core$HmacSHA256_h_