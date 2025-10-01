#ifndef _com_sun_crypto_provider_HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_h_
#define _com_sun_crypto_provider_HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_h_
//$ class com.sun.crypto.provider.HmacPKCS12PBECore$HmacPKCS12PBE_SHA512
//$ extends com.sun.crypto.provider.HmacPKCS12PBECore

#include <com/sun/crypto/provider/HmacPKCS12PBECore.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class HmacPKCS12PBECore$HmacPKCS12PBE_SHA512 : public ::com::sun::crypto::provider::HmacPKCS12PBECore {
	$class(HmacPKCS12PBECore$HmacPKCS12PBE_SHA512, $NO_CLASS_INIT, ::com::sun::crypto::provider::HmacPKCS12PBECore)
public:
	HmacPKCS12PBECore$HmacPKCS12PBE_SHA512();
	void init$();
	virtual $Object* clone() override;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_h_