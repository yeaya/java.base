#ifndef _com_sun_crypto_provider_CipherCore_h_
#define _com_sun_crypto_provider_CipherCore_h_
//$ class com.sun.crypto.provider.CipherCore
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CBC_MODE")
#undef CBC_MODE
#pragma push_macro("CFB_MODE")
#undef CFB_MODE
#pragma push_macro("CTR_MODE")
#undef CTR_MODE
#pragma push_macro("CTS_MODE")
#undef CTS_MODE
#pragma push_macro("ECB_MODE")
#undef ECB_MODE
#pragma push_macro("OFB_MODE")
#undef OFB_MODE
#pragma push_macro("PCBC_MODE")
#undef PCBC_MODE

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class FeedbackCipher;
				class Padding;
				class SymmetricCipher;
			}
		}
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

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class CipherCore : public ::java::lang::Object {
	$class(CipherCore, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CipherCore();
	void init$(::com::sun::crypto::provider::SymmetricCipher* impl, int32_t blkSize);
	int32_t checkOutputCapacity($bytes* output, int32_t outputOffset, int32_t estOutSize);
	$bytes* doFinal($bytes* input, int32_t inputOffset, int32_t inputLen);
	int32_t doFinal($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset);
	void endDoFinal();
	int32_t fillOutputBuffer($bytes* finalBuf, int32_t finalOffset, $bytes* output, int32_t outOfs, int32_t finalBufLen, $bytes* input);
	int32_t finalNoPadding($bytes* in, int32_t inOfs, $bytes* out, int32_t outOfs, int32_t len);
	$bytes* getIV();
	static $bytes* getKeyBytes(::java::security::Key* key);
	static int32_t getNumOfUnit($String* mode, int32_t offset, int32_t blockSize);
	int32_t getOutputSize(int32_t inputLen);
	int32_t getOutputSizeByOperation(int32_t inputLen, bool isDoFinal);
	::java::security::AlgorithmParameters* getParameters($String* algName);
	void init(int32_t opmode, ::java::security::Key* key, ::java::security::SecureRandom* random);
	void init(int32_t opmode, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	void init(int32_t opmode, ::java::security::Key* key, ::java::security::AlgorithmParameters* params, ::java::security::SecureRandom* random);
	$bytes* prepareInputBuffer($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset);
	void setMode($String* mode);
	void setPadding($String* paddingScheme);
	int32_t unpad(int32_t outLen, int32_t off, $bytes* outWithPadding);
	::java::security::Key* unwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType);
	$bytes* update($bytes* input, int32_t inputOffset, int32_t inputLen);
	int32_t update($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset);
	$bytes* wrap(::java::security::Key* key);
	$bytes* buffer = nullptr;
	int32_t blockSize = 0;
	int32_t unitBytes = 0;
	int32_t buffered = 0;
	int32_t minBytes = 0;
	int32_t diffBlocksize = 0;
	::com::sun::crypto::provider::Padding* padding = nullptr;
	::com::sun::crypto::provider::FeedbackCipher* cipher = nullptr;
	int32_t cipherMode = 0;
	bool decrypting = false;
	static const int32_t ECB_MODE = 0;
	static const int32_t CBC_MODE = 1;
	static const int32_t CFB_MODE = 2;
	static const int32_t OFB_MODE = 3;
	static const int32_t PCBC_MODE = 4;
	static const int32_t CTR_MODE = 5;
	static const int32_t CTS_MODE = 6;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("CBC_MODE")
#pragma pop_macro("CFB_MODE")
#pragma pop_macro("CTR_MODE")
#pragma pop_macro("CTS_MODE")
#pragma pop_macro("ECB_MODE")
#pragma pop_macro("OFB_MODE")
#pragma pop_macro("PCBC_MODE")

#endif // _com_sun_crypto_provider_CipherCore_h_