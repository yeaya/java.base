#ifndef _com_sun_crypto_provider_HmacCore$HmacSHA3_256_h_
#define _com_sun_crypto_provider_HmacCore$HmacSHA3_256_h_
//$ class com.sun.crypto.provider.HmacCore$HmacSHA3_256
//$ extends com.sun.crypto.provider.HmacCore

#include <com/sun/crypto/provider/HmacCore.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class HmacCore$HmacSHA3_256 : public ::com::sun::crypto::provider::HmacCore {
	$class(HmacCore$HmacSHA3_256, $NO_CLASS_INIT, ::com::sun::crypto::provider::HmacCore)
public:
	HmacCore$HmacSHA3_256();
	void init$();
	virtual $Object* clone() override;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_HmacCore$HmacSHA3_256_h_