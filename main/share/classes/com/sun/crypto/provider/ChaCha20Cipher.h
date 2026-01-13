#ifndef _com_sun_crypto_provider_ChaCha20Cipher_h_
#define _com_sun_crypto_provider_ChaCha20Cipher_h_
//$ class com.sun.crypto.provider.ChaCha20Cipher
//$ extends javax.crypto.CipherSpi

#include <java/lang/Array.h>
#include <javax/crypto/CipherSpi.h>

#pragma push_macro("CIPHERBUF_BASE")
#undef CIPHERBUF_BASE
#pragma push_macro("KEYSTREAM_SIZE")
#undef KEYSTREAM_SIZE
#pragma push_macro("KS_SIZE_INTS")
#undef KS_SIZE_INTS
#pragma push_macro("MAX_UINT32")
#undef MAX_UINT32
#pragma push_macro("MODE_AEAD")
#undef MODE_AEAD
#pragma push_macro("MODE_NONE")
#undef MODE_NONE
#pragma push_macro("STATE_CONST_0")
#undef STATE_CONST_0
#pragma push_macro("STATE_CONST_1")
#undef STATE_CONST_1
#pragma push_macro("STATE_CONST_2")
#undef STATE_CONST_2
#pragma push_macro("STATE_CONST_3")
#undef STATE_CONST_3
#pragma push_macro("TAG_LENGTH")
#undef TAG_LENGTH

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class ChaCha20Cipher$ChaChaEngine;
				class Poly1305;
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

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class ChaCha20Cipher : public ::javax::crypto::CipherSpi {
	$class(ChaCha20Cipher, 0, ::javax::crypto::CipherSpi)
public:
	ChaCha20Cipher();
	using ::javax::crypto::CipherSpi::engineUpdate;
	using ::javax::crypto::CipherSpi::engineDoFinal;
	void init$();
	void authFinalizeData($bytes* data, int32_t dataOff, int32_t length, $bytes* out, int32_t outOff);
	void authPad16(int64_t dataLen);
	int32_t authUpdate($bytes* data, int32_t offset, int32_t length);
	void authWriteLengths(int64_t aLen, int64_t dLen, $bytes* buf);
	static void chaCha20Block($ints* initState, int64_t counter, $bytes* result);
	void chaCha20Transform($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff);
	void checkKeyAndNonce($bytes* newKeyBytes, $bytes* newNonce);
	static $bytes* createRandomNonce(::java::security::SecureRandom* random);
	virtual $bytes* engineDoFinal($bytes* in, int32_t inOfs, int32_t inLen) override;
	virtual int32_t engineDoFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) override;
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
	virtual ::java::security::Key* engineUnwrap($bytes* wrappedKey, $String* algorithm, int32_t type) override;
	virtual $bytes* engineUpdate($bytes* in, int32_t inOfs, int32_t inLen) override;
	virtual int32_t engineUpdate($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) override;
	virtual void engineUpdateAAD($bytes* src, int32_t offset, int32_t len) override;
	virtual void engineUpdateAAD(::java::nio::ByteBuffer* src) override;
	virtual $bytes* engineWrap(::java::security::Key* key) override;
	void generateKeystream();
	static $bytes* getEncodedKey(::java::security::Key* key);
	void init(int32_t opmode, ::java::security::Key* key, $bytes* newNonce);
	void initAuthenticator();
	void setInitialState();
	static void xor$($bytes* in1, int32_t off1, $bytes* in2, int32_t off2, $bytes* out, int32_t outOff, int32_t len);
	static const int32_t MODE_NONE = 0;
	static const int32_t MODE_AEAD = 1;
	static const int32_t STATE_CONST_0 = 0x61707865;
	static const int32_t STATE_CONST_1 = 0x3320646E;
	static const int32_t STATE_CONST_2 = 0x79622D32;
	static const int32_t STATE_CONST_3 = 0x6B206574;
	static const int32_t KEYSTREAM_SIZE = 64;
	static const int32_t KS_SIZE_INTS = 16; // KEYSTREAM_SIZE / Integer.BYTES
	static const int32_t CIPHERBUF_BASE = 1024;
	bool initialized = false;
	int32_t mode = 0;
	int32_t direction = 0;
	bool aadDone = false;
	$bytes* keyBytes = nullptr;
	$bytes* nonce = nullptr;
	static const int64_t MAX_UINT32 = (int64_t)0x00000000FFFFFFFF;
	int64_t finalCounterValue = 0;
	int64_t counter = 0;
	$ints* startState = nullptr;
	$bytes* keyStream = nullptr;
	int32_t keyStrOffset = 0;
	static const int32_t TAG_LENGTH = 16;
	int64_t aadLen = 0;
	int64_t dataLen = 0;
	static $bytes* padBuf;
	$bytes* lenBuf = nullptr;
	$String* authAlgName = nullptr;
	::com::sun::crypto::provider::Poly1305* authenticator = nullptr;
	::com::sun::crypto::provider::ChaCha20Cipher$ChaChaEngine* engine = nullptr;
	static ::java::lang::invoke::VarHandle* asIntLittleEndian;
	static ::java::lang::invoke::VarHandle* asLongLittleEndian;
	static ::java::lang::invoke::VarHandle* asLongView;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("CIPHERBUF_BASE")
#pragma pop_macro("KEYSTREAM_SIZE")
#pragma pop_macro("KS_SIZE_INTS")
#pragma pop_macro("MAX_UINT32")
#pragma pop_macro("MODE_AEAD")
#pragma pop_macro("MODE_NONE")
#pragma pop_macro("STATE_CONST_0")
#pragma pop_macro("STATE_CONST_1")
#pragma pop_macro("STATE_CONST_2")
#pragma pop_macro("STATE_CONST_3")
#pragma pop_macro("TAG_LENGTH")

#endif // _com_sun_crypto_provider_ChaCha20Cipher_h_