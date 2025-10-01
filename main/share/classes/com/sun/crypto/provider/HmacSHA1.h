#ifndef _com_sun_crypto_provider_HmacSHA1_h_
#define _com_sun_crypto_provider_HmacSHA1_h_
//$ class com.sun.crypto.provider.HmacSHA1
//$ extends com.sun.crypto.provider.HmacCore

#include <com/sun/crypto/provider/HmacCore.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $export HmacSHA1 : public ::com::sun::crypto::provider::HmacCore {
	$class(HmacSHA1, $NO_CLASS_INIT, ::com::sun::crypto::provider::HmacCore)
public:
	HmacSHA1();
	void init$();
	virtual $Object* clone() override;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_HmacSHA1_h_