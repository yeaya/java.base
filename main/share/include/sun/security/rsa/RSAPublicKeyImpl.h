#ifndef _sun_security_rsa_RSAPublicKeyImpl_h_
#define _sun_security_rsa_RSAPublicKeyImpl_h_
//$ class sun.security.rsa.RSAPublicKeyImpl
//$ extends sun.security.x509.X509Key
//$ implements java.security.interfaces.RSAPublicKey

#include <java/lang/Array.h>
#include <java/security/interfaces/RSAPublicKey.h>
#include <sun/security/x509/X509Key.h>

#pragma push_macro("THREE")
#undef THREE

namespace java {
	namespace math {
		class BigInteger;
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
		namespace rsa {
			class RSAUtil$KeyType;
		}
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class $import RSAPublicKeyImpl : public ::sun::security::x509::X509Key, public ::java::security::interfaces::RSAPublicKey {
	$class(RSAPublicKeyImpl, 0, ::sun::security::x509::X509Key, ::java::security::interfaces::RSAPublicKey)
public:
	RSAPublicKeyImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $bytes* getEncoded() override;
	virtual $String* getFormat() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::rsa::RSAUtil$KeyType* type, ::java::security::spec::AlgorithmParameterSpec* keyParams, ::java::math::BigInteger* n, ::java::math::BigInteger* e);
	void init$($bytes* encoded);
	static void checkExponentRange(::java::math::BigInteger* mod, ::java::math::BigInteger* exp);
	virtual $String* getAlgorithm() override;
	virtual ::java::math::BigInteger* getModulus() override;
	virtual ::java::security::spec::AlgorithmParameterSpec* getParams() override;
	virtual ::java::math::BigInteger* getPublicExponent() override;
	static ::java::security::interfaces::RSAPublicKey* newKey(::sun::security::rsa::RSAUtil$KeyType* type, $String* format, $bytes* encoded);
	static ::java::security::interfaces::RSAPublicKey* newKey(::sun::security::rsa::RSAUtil$KeyType* type, ::java::security::spec::AlgorithmParameterSpec* params, ::java::math::BigInteger* n, ::java::math::BigInteger* e);
	static $Array<::java::math::BigInteger>* parseASN1($bytes* raw);
	virtual void parseKeyBits() override;
	virtual $String* toString() override;
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x24B3FCDAF80BB379;
	static ::java::math::BigInteger* THREE;
	::java::math::BigInteger* n = nullptr;
	::java::math::BigInteger* e = nullptr;
	::sun::security::rsa::RSAUtil$KeyType* type = nullptr;
	::java::security::spec::AlgorithmParameterSpec* keyParams = nullptr;
};

		} // rsa
	} // security
} // sun

#pragma pop_macro("THREE")

#endif // _sun_security_rsa_RSAPublicKeyImpl_h_