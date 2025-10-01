#ifndef _com_sun_crypto_provider_ISO10126Padding_h_
#define _com_sun_crypto_provider_ISO10126Padding_h_
//$ class com.sun.crypto.provider.ISO10126Padding
//$ extends com.sun.crypto.provider.Padding

#include <com/sun/crypto/provider/Padding.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class ISO10126Padding : public ::com::sun::crypto::provider::Padding {
	$class(ISO10126Padding, $NO_CLASS_INIT, ::com::sun::crypto::provider::Padding)
public:
	ISO10126Padding();
	void init$(int32_t blockSize);
	virtual int32_t padLength(int32_t len) override;
	virtual void padWithLen($bytes* in, int32_t off, int32_t len) override;
	virtual int32_t unpad($bytes* in, int32_t off, int32_t len) override;
	int32_t blockSize = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_ISO10126Padding_h_