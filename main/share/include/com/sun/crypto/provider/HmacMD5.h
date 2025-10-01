#ifndef _com_sun_crypto_provider_HmacMD5_h_
#define _com_sun_crypto_provider_HmacMD5_h_
//$ class com.sun.crypto.provider.HmacMD5
//$ extends com.sun.crypto.provider.HmacCore

#include <com/sun/crypto/provider/HmacCore.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $import HmacMD5 : public ::com::sun::crypto::provider::HmacCore {
	$class(HmacMD5, $NO_CLASS_INIT, ::com::sun::crypto::provider::HmacCore)
public:
	HmacMD5();
	void init$();
	virtual $Object* clone() override;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_HmacMD5_h_