#ifndef _com_sun_crypto_provider_ChaCha20Cipher$ChaChaEngine_h_
#define _com_sun_crypto_provider_ChaCha20Cipher$ChaChaEngine_h_
//$ interface com.sun.crypto.provider.ChaCha20Cipher$ChaChaEngine
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class ChaCha20Cipher$ChaChaEngine : public ::java::lang::Object {
	$interface(ChaCha20Cipher$ChaChaEngine, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t doFinal($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {return 0;}
	virtual int32_t doUpdate($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {return 0;}
	virtual int32_t getOutputSize(int32_t inLength, bool isFinal) {return 0;}
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_ChaCha20Cipher$ChaChaEngine_h_