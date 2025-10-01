#ifndef _com_sun_crypto_provider_AESConstants_h_
#define _com_sun_crypto_provider_AESConstants_h_
//$ interface com.sun.crypto.provider.AESConstants
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AES_BLOCK_SIZE")
#undef AES_BLOCK_SIZE
#pragma push_macro("AES_KEYSIZES")
#undef AES_KEYSIZES

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class AESConstants : public ::java::lang::Object {
	$interface(AESConstants, 0, ::java::lang::Object)
public:
	static const int32_t AES_BLOCK_SIZE = 16;
	static $ints* AES_KEYSIZES;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("AES_BLOCK_SIZE")
#pragma pop_macro("AES_KEYSIZES")

#endif // _com_sun_crypto_provider_AESConstants_h_