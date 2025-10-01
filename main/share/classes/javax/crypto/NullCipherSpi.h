#ifndef _javax_crypto_NullCipherSpi_h_
#define _javax_crypto_NullCipherSpi_h_
//$ class javax.crypto.NullCipherSpi
//$ extends javax.crypto.CipherSpi

#include <java/lang/Array.h>
#include <javax/crypto/CipherSpi.h>

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

class NullCipherSpi : public ::javax::crypto::CipherSpi {
	$class(NullCipherSpi, $NO_CLASS_INIT, ::javax::crypto::CipherSpi)
public:
	NullCipherSpi();
	using ::javax::crypto::CipherSpi::engineUpdate;
	using ::javax::crypto::CipherSpi::engineDoFinal;
	void init$();
	virtual $bytes* engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen) override;
	virtual int32_t engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) override;
	virtual int32_t engineGetBlockSize() override;
	virtual $bytes* engineGetIV() override;
	virtual int32_t engineGetKeySize(::java::security::Key* key) override;
	virtual int32_t engineGetOutputSize(int32_t inputLen) override;
	virtual ::java::security::AlgorithmParameters* engineGetParameters() override;
	virtual void engineInit(int32_t mode, ::java::security::Key* key, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t mode, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void engineInit(int32_t mode, ::java::security::Key* key, ::java::security::AlgorithmParameters* params, ::java::security::SecureRandom* random) override;
	virtual void engineSetMode($String* mode) override;
	virtual void engineSetPadding($String* padding) override;
	virtual $bytes* engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen) override;
	virtual int32_t engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) override;
};

	} // crypto
} // javax

#endif // _javax_crypto_NullCipherSpi_h_