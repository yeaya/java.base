#ifndef _com_sun_crypto_provider_ARCFOURCipher_h_
#define _com_sun_crypto_provider_ARCFOURCipher_h_
//$ class com.sun.crypto.provider.ARCFOURCipher
//$ extends javax.crypto.CipherSpi

#include <java/lang/Array.h>
#include <javax/crypto/CipherSpi.h>

#pragma push_macro("S")
#undef S

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

class $import ARCFOURCipher : public ::javax::crypto::CipherSpi {
	$class(ARCFOURCipher, $NO_CLASS_INIT, ::javax::crypto::CipherSpi)
public:
	ARCFOURCipher();
	using ::javax::crypto::CipherSpi::engineUpdate;
	using ::javax::crypto::CipherSpi::engineDoFinal;
	void init$();
	void crypt($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs);
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
	virtual $bytes* engineWrap(::java::security::Key* key) override;
	static $bytes* getEncodedKey(::java::security::Key* key);
	void init($bytes* key);
	void init(int32_t opmode, ::java::security::Key* key);
	$ints* S = nullptr;
	int32_t is = 0;
	int32_t js = 0;
	$bytes* lastKey = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("S")

#endif // _com_sun_crypto_provider_ARCFOURCipher_h_