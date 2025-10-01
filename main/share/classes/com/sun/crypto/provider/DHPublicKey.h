#ifndef _com_sun_crypto_provider_DHPublicKey_h_
#define _com_sun_crypto_provider_DHPublicKey_h_
//$ class com.sun.crypto.provider.DHPublicKey
//$ extends javax.crypto.interfaces.DHPublicKey

#include <java/lang/Array.h>
#include <javax/crypto/interfaces/DHPublicKey.h>

#pragma push_macro("DH_OID")
#undef DH_OID

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
namespace sun {
	namespace security {
		namespace util {
			class ObjectIdentifier;
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class DHPublicKey : public ::javax::crypto::interfaces::DHPublicKey {
	$class(DHPublicKey, 0, ::javax::crypto::interfaces::DHPublicKey)
public:
	DHPublicKey();
	void init$(::java::math::BigInteger* y, ::java::math::BigInteger* p, ::java::math::BigInteger* g);
	void init$(::java::math::BigInteger* y, ::java::math::BigInteger* p, ::java::math::BigInteger* g, int32_t l);
	void init$($bytes* encodedKey);
	virtual bool equals(Object$* obj) override;
	virtual $String* getAlgorithm() override;
	virtual $bytes* getEncoded() override;
	virtual $String* getFormat() override;
	virtual ::javax::crypto::spec::DHParameterSpec* getParams() override;
	virtual ::java::math::BigInteger* getY() override;
	virtual int32_t hashCode() override;
	void parseKeyBits();
	virtual $String* toString() override;
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x6A219571F5151FDF;
	::java::math::BigInteger* y = nullptr;
	$bytes* key = nullptr;
	$bytes* encodedKey = nullptr;
	::java::math::BigInteger* p = nullptr;
	::java::math::BigInteger* g = nullptr;
	int32_t l = 0;
	static ::sun::security::util::ObjectIdentifier* DH_OID;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("DH_OID")

#endif // _com_sun_crypto_provider_DHPublicKey_h_