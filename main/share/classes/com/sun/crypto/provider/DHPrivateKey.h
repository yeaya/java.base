#ifndef _com_sun_crypto_provider_DHPrivateKey_h_
#define _com_sun_crypto_provider_DHPrivateKey_h_
//$ class com.sun.crypto.provider.DHPrivateKey
//$ extends javax.crypto.interfaces.DHPrivateKey

#include <java/lang/Array.h>
#include <javax/crypto/interfaces/DHPrivateKey.h>

#pragma push_macro("PKCS8_VERSION")
#undef PKCS8_VERSION

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace javax {
	namespace crypto {
		namespace spec {
			class DHParameterSpec;
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class DHPrivateKey : public ::javax::crypto::interfaces::DHPrivateKey {
	$class(DHPrivateKey, 0, ::javax::crypto::interfaces::DHPrivateKey)
public:
	DHPrivateKey();
	void init$(::java::math::BigInteger* x, ::java::math::BigInteger* p, ::java::math::BigInteger* g);
	void init$(::java::math::BigInteger* x, ::java::math::BigInteger* p, ::java::math::BigInteger* g, int32_t l);
	void init$($bytes* encodedKey);
	void encode();
	virtual bool equals(Object$* obj) override;
	virtual $String* getAlgorithm() override;
	virtual $bytes* getEncoded() override;
	virtual $String* getFormat() override;
	virtual ::javax::crypto::spec::DHParameterSpec* getParams() override;
	virtual ::java::math::BigInteger* getX() override;
	virtual int32_t hashCode() override;
	void parseKeyBits();
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x68FDF9C8D4775C16;
	static ::java::math::BigInteger* PKCS8_VERSION;
	::java::math::BigInteger* x = nullptr;
	$bytes* key = nullptr;
	$bytes* encodedKey = nullptr;
	::java::math::BigInteger* p = nullptr;
	::java::math::BigInteger* g = nullptr;
	int32_t l = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("PKCS8_VERSION")

#endif // _com_sun_crypto_provider_DHPrivateKey_h_