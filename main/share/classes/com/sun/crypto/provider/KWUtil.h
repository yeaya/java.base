#ifndef _com_sun_crypto_provider_KWUtil_h_
#define _com_sun_crypto_provider_KWUtil_h_
//$ class com.sun.crypto.provider.KWUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BLKSIZE")
#undef BLKSIZE
#pragma push_macro("MIN_INPUTLEN")
#undef MIN_INPUTLEN
#pragma push_macro("SEMI_BLKSIZE")
#undef SEMI_BLKSIZE
#pragma push_macro("W")
#undef W
#pragma push_macro("W_INV")
#undef W_INV

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class SymmetricCipher;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class KWUtil : public ::java::lang::Object {
	$class(KWUtil, 0, ::java::lang::Object)
public:
	KWUtil();
	void init$();
	static int32_t W($bytes* icvIn, $bytes* in, int32_t inLen, ::com::sun::crypto::provider::SymmetricCipher* cipher);
	static int32_t W_INV($bytes* in, int32_t inLen, $bytes* icvOut, ::com::sun::crypto::provider::SymmetricCipher* cipher);
	static bool $assertionsDisabled;
	static const int32_t BLKSIZE = 16;
	static const int32_t SEMI_BLKSIZE = 8; // BLKSIZE >> 1
	static const int32_t MIN_INPUTLEN = 24; // BLKSIZE + SEMI_BLKSIZE
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("BLKSIZE")
#pragma pop_macro("MIN_INPUTLEN")
#pragma pop_macro("SEMI_BLKSIZE")
#pragma pop_macro("W")
#pragma pop_macro("W_INV")

#endif // _com_sun_crypto_provider_KWUtil_h_