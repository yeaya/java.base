#ifndef _sun_security_rsa_RSAPrivateCrtKeyImpl_h_
#define _sun_security_rsa_RSAPrivateCrtKeyImpl_h_
//$ class sun.security.rsa.RSAPrivateCrtKeyImpl
//$ extends sun.security.pkcs.PKCS8Key
//$ implements java.security.interfaces.RSAPrivateCrtKey

#include <java/lang/Array.h>
#include <java/security/interfaces/RSAPrivateCrtKey.h>
#include <sun/security/pkcs/PKCS8Key.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace interfaces {
			class RSAPrivateKey;
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
		namespace rsa {
			class RSAUtil$KeyType;
		}
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class $export RSAPrivateCrtKeyImpl : public ::sun::security::pkcs::PKCS8Key, public ::java::security::interfaces::RSAPrivateCrtKey {
	$class(RSAPrivateCrtKeyImpl, $NO_CLASS_INIT, ::sun::security::pkcs::PKCS8Key, ::java::security::interfaces::RSAPrivateCrtKey)
public:
	RSAPrivateCrtKeyImpl();
	virtual $Object* clone() override;
	virtual void destroy() override;
	virtual bool equals(Object$* object) override;
	virtual void finalize() override;
	virtual $bytes* getEncoded() override;
	virtual $String* getFormat() override;
	virtual int32_t hashCode() override;
	void init$($bytes* encoded);
	void init$(::sun::security::rsa::RSAUtil$KeyType* type, ::java::security::spec::AlgorithmParameterSpec* keyParams, ::java::math::BigInteger* n, ::java::math::BigInteger* e, ::java::math::BigInteger* d, ::java::math::BigInteger* p, ::java::math::BigInteger* q, ::java::math::BigInteger* pe, ::java::math::BigInteger* qe, ::java::math::BigInteger* coeff);
	virtual $String* getAlgorithm() override;
	virtual ::java::math::BigInteger* getCrtCoefficient() override;
	virtual ::java::math::BigInteger* getModulus() override;
	virtual ::java::security::spec::AlgorithmParameterSpec* getParams() override;
	virtual ::java::math::BigInteger* getPrimeExponentP() override;
	virtual ::java::math::BigInteger* getPrimeExponentQ() override;
	virtual ::java::math::BigInteger* getPrimeP() override;
	virtual ::java::math::BigInteger* getPrimeQ() override;
	virtual ::java::math::BigInteger* getPrivateExponent() override;
	virtual ::java::math::BigInteger* getPublicExponent() override;
	virtual bool isDestroyed() override;
	static ::java::security::interfaces::RSAPrivateKey* newKey(::sun::security::rsa::RSAUtil$KeyType* type, $String* format, $bytes* encoded);
	static ::java::security::interfaces::RSAPrivateKey* newKey(::sun::security::rsa::RSAUtil$KeyType* type, ::java::security::spec::AlgorithmParameterSpec* params, ::java::math::BigInteger* n, ::java::math::BigInteger* e, ::java::math::BigInteger* d, ::java::math::BigInteger* p, ::java::math::BigInteger* q, ::java::math::BigInteger* pe, ::java::math::BigInteger* qe, ::java::math::BigInteger* coeff);
	static $Array<::java::math::BigInteger>* parseASN1($bytes* raw);
	void parseKeyBits();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xED98C993A742760A;
	::java::math::BigInteger* n = nullptr;
	::java::math::BigInteger* e = nullptr;
	::java::math::BigInteger* d = nullptr;
	::java::math::BigInteger* p = nullptr;
	::java::math::BigInteger* q = nullptr;
	::java::math::BigInteger* pe = nullptr;
	::java::math::BigInteger* qe = nullptr;
	::java::math::BigInteger* coeff = nullptr;
	::sun::security::rsa::RSAUtil$KeyType* type = nullptr;
	::java::security::spec::AlgorithmParameterSpec* keyParams = nullptr;
};

		} // rsa
	} // security
} // sun

#endif // _sun_security_rsa_RSAPrivateCrtKeyImpl_h_