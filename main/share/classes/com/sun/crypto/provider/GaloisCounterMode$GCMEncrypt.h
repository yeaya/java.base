#ifndef _com_sun_crypto_provider_GaloisCounterMode$GCMEncrypt_h_
#define _com_sun_crypto_provider_GaloisCounterMode$GCMEncrypt_h_
//$ class com.sun.crypto.provider.GaloisCounterMode$GCMEncrypt
//$ extends com.sun.crypto.provider.GaloisCounterMode$GCMEngine

#include <com/sun/crypto/provider/GaloisCounterMode$GCMEngine.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class GaloisCounterMode;
				class GaloisCounterMode$GCTRGHASH;
				class SymmetricCipher;
			}
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class GaloisCounterMode$GCMEncrypt : public ::com::sun::crypto::provider::GaloisCounterMode$GCMEngine {
	$class(GaloisCounterMode$GCMEncrypt, $NO_CLASS_INIT, ::com::sun::crypto::provider::GaloisCounterMode$GCMEngine)
public:
	GaloisCounterMode$GCMEncrypt();
	void init$(::com::sun::crypto::provider::GaloisCounterMode* this$0, ::com::sun::crypto::provider::SymmetricCipher* blockCipher);
	virtual int32_t cryptBlocks(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual int32_t doFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) override;
	virtual int32_t doFinal(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual $bytes* doUpdate($bytes* in, int32_t inOff, int32_t inLen) override;
	virtual int32_t doUpdate($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) override;
	virtual int32_t doUpdate(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t getOutputSize(int32_t inLen, bool isFinal) override;
	::com::sun::crypto::provider::GaloisCounterMode* this$0 = nullptr;
	::com::sun::crypto::provider::GaloisCounterMode$GCTRGHASH* gctrghash = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_GaloisCounterMode$GCMEncrypt_h_