#ifndef _com_sun_crypto_provider_GaloisCounterMode_h_
#define _com_sun_crypto_provider_GaloisCounterMode_h_
//$ class com.sun.crypto.provider.GaloisCounterMode
//$ extends javax.crypto.CipherSpi

#include <java/lang/Array.h>
#include <java/lang/Integer.h>
#include <javax/crypto/CipherSpi.h>

#pragma push_macro("MAX_BUF_SIZE")
#undef MAX_BUF_SIZE
#pragma push_macro("TRIGGERLEN")
#undef TRIGGERLEN
#pragma push_macro("DEFAULT_TAG_LEN")
#undef DEFAULT_TAG_LEN
#pragma push_macro("EMPTY_BUF")
#undef EMPTY_BUF
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("DEFAULT_IV_LEN")
#undef DEFAULT_IV_LEN

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class GaloisCounterMode$GCMEngine;
				class SymmetricCipher;
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}
namespace javax {
	namespace crypto {
		namespace spec {
			class GCMParameterSpec;
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class GaloisCounterMode : public ::javax::crypto::CipherSpi {
	$class(GaloisCounterMode, 0, ::javax::crypto::CipherSpi)
public:
	GaloisCounterMode();
	void init$(int32_t keySize, ::com::sun::crypto::provider::SymmetricCipher* embeddedCipher);
	void checkDataLength($ints* lengths);
	virtual void checkInit();
	virtual void checkReInit();
	static $bytes* createIv(::java::security::SecureRandom* rand);
	virtual $bytes* engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen) override;
	virtual int32_t engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) override;
	virtual int32_t engineDoFinal(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t engineGetBlockSize() override;
	virtual $bytes* engineGetIV() override;
	virtual int32_t engineGetKeySize(::java::security::Key* key) override;
	virtual int32_t engineGetOutputSize(int32_t inputLen) override;
	virtual ::java::security::AlgorithmParameters* engineGetParameters() override;
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::AlgorithmParameters* params, ::java::security::SecureRandom* random) override;
	virtual void engineSetMode($String* mode) override;
	virtual void engineSetPadding($String* padding) override;
	virtual ::java::security::Key* engineUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType) override;
	virtual $bytes* engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen) override;
	virtual int32_t engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) override;
	virtual int32_t engineUpdate(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual void engineUpdateAAD($bytes* src, int32_t offset, int32_t len) override;
	virtual void engineUpdateAAD(::java::nio::ByteBuffer* src) override;
	virtual $bytes* engineWrap(::java::security::Key* key) override;
	static $bytes* expandToOneBlock($bytes* in, int32_t inOfs, int32_t len, int32_t blockSize);
	static $bytes* getJ0($bytes* iv, $bytes* subkeyH, int32_t blockSize);
	static $bytes* getLengthBlock(int32_t ivLenInBytes);
	static $bytes* getLengthBlock(int32_t aLenInBytes, int32_t cLenInBytes);
	static void increment32($bytes* value);
	virtual void init(int32_t opmode, ::java::security::Key* key, ::javax::crypto::spec::GCMParameterSpec* spec);
	static int32_t DEFAULT_IV_LEN;
	static int32_t DEFAULT_TAG_LEN;
	static const int32_t MAX_BUF_SIZE = ::java::lang::Integer::MAX_VALUE;
	static const int32_t TRIGGERLEN = 0x00010000;
	static $bytes* EMPTY_BUF;
	bool initialized = false;
	::com::sun::crypto::provider::SymmetricCipher* blockCipher = nullptr;
	::com::sun::crypto::provider::GaloisCounterMode$GCMEngine* engine = nullptr;
	bool encryption = false;
	int32_t tagLenBytes = 0;
	int32_t keySize = 0;
	bool reInit = false;
	$bytes* lastKey = nullptr;
	$bytes* lastIv = nullptr;
	$bytes* iv = nullptr;
	::java::security::SecureRandom* random = nullptr;
	static ::java::lang::invoke::VarHandle* wrapToByteArray;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("MAX_BUF_SIZE")
#pragma pop_macro("TRIGGERLEN")
#pragma pop_macro("DEFAULT_TAG_LEN")
#pragma pop_macro("EMPTY_BUF")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("DEFAULT_IV_LEN")

#endif // _com_sun_crypto_provider_GaloisCounterMode_h_