#ifndef _com_sun_crypto_provider_SslMacCore_h_
#define _com_sun_crypto_provider_SslMacCore_h_
//$ class com.sun.crypto.provider.SslMacCore
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class Key;
		class MessageDigest;
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

class SslMacCore : public ::java::lang::Object {
	$class(SslMacCore, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SslMacCore();
	void init$($String* digestAlgorithm, $bytes* pad1, $bytes* pad2);
	$bytes* doFinal();
	int32_t getDigestLength();
	void init(::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params);
	void reset();
	void update(int8_t input);
	void update($bytes* input, int32_t offset, int32_t len);
	void update(::java::nio::ByteBuffer* input);
	::java::security::MessageDigest* md = nullptr;
	$bytes* pad1 = nullptr;
	$bytes* pad2 = nullptr;
	bool first = false;
	$bytes* secret = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_SslMacCore_h_