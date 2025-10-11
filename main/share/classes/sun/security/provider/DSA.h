#ifndef _sun_security_provider_DSA_h_
#define _sun_security_provider_DSA_h_
//$ class sun.security.provider.DSA
//$ extends java.security.SignatureSpi

#include <java/lang/Array.h>
#include <java/security/SignatureSpi.h>

#pragma push_macro("DSA")
#undef DSA
#pragma push_macro("BLINDING_CONSTANT")
#undef BLINDING_CONSTANT
#pragma push_macro("BLINDING_BITS")
#undef BLINDING_BITS

namespace java {
	namespace math {
		class BigInteger;
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
		class MessageDigest;
		class PrivateKey;
		class PublicKey;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace interfaces {
			class DSAParams;
		}
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class DSA : public ::java::security::SignatureSpi {
	$class(DSA, 0, ::java::security::SignatureSpi)
public:
	DSA();
	using ::java::security::SignatureSpi::engineInitVerify;
	using ::java::security::SignatureSpi::engineInitSign;
	using ::java::security::SignatureSpi::engineSign;
	void init$(::java::security::MessageDigest* md);
	void init$(::java::security::MessageDigest* md, bool p1363Format);
	static void checkKey(::java::security::interfaces::DSAParams* params, int32_t digestLen, $String* mdAlgo);
	virtual $Object* engineGetParameter($String* key) override;
	virtual ::java::security::AlgorithmParameters* engineGetParameters() override;
	virtual void engineInitSign(::java::security::PrivateKey* privateKey) override;
	virtual void engineInitVerify(::java::security::PublicKey* publicKey) override;
	virtual void engineSetParameter($String* key, Object$* param) override;
	virtual void engineSetParameter(::java::security::spec::AlgorithmParameterSpec* params) override;
	virtual $bytes* engineSign() override;
	virtual void engineUpdate(int8_t b) override;
	virtual void engineUpdate($bytes* data, int32_t off, int32_t len) override;
	virtual void engineUpdate(::java::nio::ByteBuffer* b) override;
	virtual bool engineVerify($bytes* signature) override;
	virtual bool engineVerify($bytes* signature, int32_t offset, int32_t length) override;
	virtual ::java::math::BigInteger* generateK(::java::math::BigInteger* q);
	::java::math::BigInteger* generateR(::java::math::BigInteger* p, ::java::math::BigInteger* q, ::java::math::BigInteger* g, ::java::math::BigInteger* k);
	::java::math::BigInteger* generateS(::java::math::BigInteger* x, ::java::math::BigInteger* q, ::java::math::BigInteger* r, ::java::math::BigInteger* k);
	::java::math::BigInteger* generateV(::java::math::BigInteger* y, ::java::math::BigInteger* p, ::java::math::BigInteger* q, ::java::math::BigInteger* g, ::java::math::BigInteger* w, ::java::math::BigInteger* r);
	::java::math::BigInteger* generateW(::java::math::BigInteger* p, ::java::math::BigInteger* q, ::java::math::BigInteger* g, ::java::math::BigInteger* s);
	virtual ::java::security::SecureRandom* getSigningRandom();
	virtual $String* toString() override;
	static const bool debug = false;
	static const int32_t BLINDING_BITS = 7;
	static ::java::math::BigInteger* BLINDING_CONSTANT;
	::java::security::interfaces::DSAParams* params = nullptr;
	::java::math::BigInteger* presetP = nullptr;
	::java::math::BigInteger* presetQ = nullptr;
	::java::math::BigInteger* presetG = nullptr;
	::java::math::BigInteger* presetY = nullptr;
	::java::math::BigInteger* presetX = nullptr;
	::java::security::SecureRandom* signingRandom = nullptr;
	::java::security::MessageDigest* md = nullptr;
	bool p1363Format = false;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("DSA")
#pragma pop_macro("BLINDING_CONSTANT")
#pragma pop_macro("BLINDING_BITS")

#endif // _sun_security_provider_DSA_h_