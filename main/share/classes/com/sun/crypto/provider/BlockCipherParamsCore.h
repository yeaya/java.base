#ifndef _com_sun_crypto_provider_BlockCipherParamsCore_h_
#define _com_sun_crypto_provider_BlockCipherParamsCore_h_
//$ class com.sun.crypto.provider.BlockCipherParamsCore
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class BlockCipherParamsCore : public ::java::lang::Object {
	$class(BlockCipherParamsCore, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BlockCipherParamsCore();
	void init$(int32_t blksize, $ints* moreSizes);
	$bytes* getEncoded();
	$bytes* getEncoded($String* encodingMethod);
	::java::security::spec::AlgorithmParameterSpec* getParameterSpec($Class* paramSpec);
	void init(::java::security::spec::AlgorithmParameterSpec* paramSpec);
	void init($bytes* encoded);
	void init($bytes* encoded, $String* decodingMethod);
	virtual $String* toString() override;
	int32_t block_size = 0;
	$bytes* iv = nullptr;
	$ints* moreSizes = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_BlockCipherParamsCore_h_