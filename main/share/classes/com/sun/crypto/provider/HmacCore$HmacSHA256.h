#ifndef _com_sun_crypto_provider_HmacCore$HmacSHA256_h_
#define _com_sun_crypto_provider_HmacCore$HmacSHA256_h_
//$ class com.sun.crypto.provider.HmacCore$HmacSHA256
//$ extends com.sun.crypto.provider.HmacCore

#include <com/sun/crypto/provider/HmacCore.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class HmacCore$HmacSHA256 : public ::com::sun::crypto::provider::HmacCore {
	$class(HmacCore$HmacSHA256, $NO_CLASS_INIT, ::com::sun::crypto::provider::HmacCore)
public:
	HmacCore$HmacSHA256();
	void init$();
	virtual $Object* clone() override;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_HmacCore$HmacSHA256_h_