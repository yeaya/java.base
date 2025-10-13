#ifndef _com_sun_crypto_provider_BlowfishConstants_h_
#define _com_sun_crypto_provider_BlowfishConstants_h_
//$ interface com.sun.crypto.provider.BlowfishConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BLOWFISH_BLOCK_SIZE")
#undef BLOWFISH_BLOCK_SIZE
#pragma push_macro("BLOWFISH_MAX_KEYSIZE")
#undef BLOWFISH_MAX_KEYSIZE

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class BlowfishConstants : public ::java::lang::Object {
	$interface(BlowfishConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t BLOWFISH_BLOCK_SIZE = 8;
	static const int32_t BLOWFISH_MAX_KEYSIZE = 56;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("BLOWFISH_BLOCK_SIZE")
#pragma pop_macro("BLOWFISH_MAX_KEYSIZE")

#endif // _com_sun_crypto_provider_BlowfishConstants_h_