#ifndef _com_sun_crypto_provider_ChaCha20Cipher$EngineAEADEnc_h_
#define _com_sun_crypto_provider_ChaCha20Cipher$EngineAEADEnc_h_
//$ class com.sun.crypto.provider.ChaCha20Cipher$EngineAEADEnc
//$ extends com.sun.crypto.provider.ChaCha20Cipher$ChaChaEngine

#include <com/sun/crypto/provider/ChaCha20Cipher$ChaChaEngine.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class ChaCha20Cipher;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class ChaCha20Cipher$EngineAEADEnc : public ::com::sun::crypto::provider::ChaCha20Cipher$ChaChaEngine {
	$class(ChaCha20Cipher$EngineAEADEnc, $NO_CLASS_INIT, ::com::sun::crypto::provider::ChaCha20Cipher$ChaChaEngine)
public:
	ChaCha20Cipher$EngineAEADEnc();
	void init$(::com::sun::crypto::provider::ChaCha20Cipher* this$0);
	virtual int32_t doFinal($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) override;
	virtual int32_t doUpdate($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) override;
	virtual int32_t getOutputSize(int32_t inLength, bool isFinal) override;
	::com::sun::crypto::provider::ChaCha20Cipher* this$0 = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_ChaCha20Cipher$EngineAEADEnc_h_