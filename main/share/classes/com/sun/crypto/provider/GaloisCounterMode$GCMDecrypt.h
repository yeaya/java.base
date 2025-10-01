#ifndef _com_sun_crypto_provider_GaloisCounterMode$GCMDecrypt_h_
#define _com_sun_crypto_provider_GaloisCounterMode$GCMDecrypt_h_
//$ class com.sun.crypto.provider.GaloisCounterMode$GCMDecrypt
//$ extends com.sun.crypto.provider.GaloisCounterMode$GCMEngine

#include <com/sun/crypto/provider/GaloisCounterMode$GCMEngine.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class GCM;
				class GaloisCounterMode;
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

class GaloisCounterMode$GCMDecrypt : public ::com::sun::crypto::provider::GaloisCounterMode$GCMEngine {
	$class(GaloisCounterMode$GCMDecrypt, $NO_CLASS_INIT, ::com::sun::crypto::provider::GaloisCounterMode$GCMEngine)
public:
	GaloisCounterMode$GCMDecrypt();
	void init$(::com::sun::crypto::provider::GaloisCounterMode* this$0, ::com::sun::crypto::provider::SymmetricCipher* blockCipher);
	virtual int32_t decryptBlocks(::com::sun::crypto::provider::GCM* op, $bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs);
	virtual int32_t doFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) override;
	virtual int32_t doFinal(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual $bytes* doUpdate($bytes* in, int32_t inOff, int32_t inLen) override;
	virtual int32_t doUpdate($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) override;
	virtual int32_t doUpdate(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual void findTag($bytes* in, int32_t inOfs, int32_t inLen);
	virtual int32_t getOutputSize(int32_t inLen, bool isFinal) override;
	::com::sun::crypto::provider::GaloisCounterMode* this$0 = nullptr;
	$bytes* tag = nullptr;
	int32_t tagOfs = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_GaloisCounterMode$GCMDecrypt_h_