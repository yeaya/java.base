#ifndef _javax_crypto_CipherSpi_h_
#define _javax_crypto_CipherSpi_h_
//$ class javax.crypto.CipherSpi
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class $export CipherSpi : public ::java::lang::Object {
	$class(CipherSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CipherSpi();
	void init$();
	int32_t bufferCrypt(::java::nio::ByteBuffer* input, ::java::nio::ByteBuffer* output, bool isUpdate);
	virtual $bytes* engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen) {return nullptr;}
	virtual int32_t engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) {return 0;}
	virtual int32_t engineDoFinal(::java::nio::ByteBuffer* input, ::java::nio::ByteBuffer* output);
	virtual int32_t engineGetBlockSize() {return 0;}
	virtual $bytes* engineGetIV() {return nullptr;}
	virtual int32_t engineGetKeySize(::java::security::Key* key);
	virtual int32_t engineGetOutputSize(int32_t inputLen) {return 0;}
	virtual ::java::security::AlgorithmParameters* engineGetParameters() {return nullptr;}
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::SecureRandom* random) {}
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) {}
	virtual void engineInit(int32_t opmode, ::java::security::Key* key, ::java::security::AlgorithmParameters* params, ::java::security::SecureRandom* random) {}
	virtual void engineSetMode($String* mode) {}
	virtual void engineSetPadding($String* padding) {}
	virtual ::java::security::Key* engineUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType);
	virtual $bytes* engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen) {return nullptr;}
	virtual int32_t engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) {return 0;}
	virtual int32_t engineUpdate(::java::nio::ByteBuffer* input, ::java::nio::ByteBuffer* output);
	virtual void engineUpdateAAD($bytes* src, int32_t offset, int32_t len);
	virtual void engineUpdateAAD(::java::nio::ByteBuffer* src);
	virtual $bytes* engineWrap(::java::security::Key* key);
	static int32_t getTempArraySize(int32_t totalSize);
};

	} // crypto
} // javax

#endif // _javax_crypto_CipherSpi_h_