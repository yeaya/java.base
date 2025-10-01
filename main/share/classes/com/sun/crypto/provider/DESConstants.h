#ifndef _com_sun_crypto_provider_DESConstants_h_
#define _com_sun_crypto_provider_DESConstants_h_
//$ interface com.sun.crypto.provider.DESConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DES_BLOCK_SIZE")
#undef DES_BLOCK_SIZE

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class DESConstants : public ::java::lang::Object {
	$interface(DESConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t DES_BLOCK_SIZE = 8;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("DES_BLOCK_SIZE")

#endif // _com_sun_crypto_provider_DESConstants_h_