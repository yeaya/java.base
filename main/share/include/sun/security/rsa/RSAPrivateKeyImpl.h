#ifndef _sun_security_rsa_RSAPrivateKeyImpl_h_
#define _sun_security_rsa_RSAPrivateKeyImpl_h_
//$ class sun.security.rsa.RSAPrivateKeyImpl
//$ extends sun.security.pkcs.PKCS8Key
//$ implements java.security.interfaces.RSAPrivateKey

#include <java/security/interfaces/RSAPrivateKey.h>
#include <sun/security/pkcs/PKCS8Key.h>

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

class $import RSAPrivateKeyImpl : public ::sun::security::pkcs::PKCS8Key, public ::java::security::interfaces::RSAPrivateKey {
	$class(RSAPrivateKeyImpl, $NO_CLASS_INIT, ::sun::security::pkcs::PKCS8Key, ::java::security::interfaces::RSAPrivateKey)
public:
	RSAPrivateKeyImpl();
	virtual $Object* clone() override;
	virtual void destroy() override;
	virtual bool equals(Object$* object) override;
	virtual void finalize() override;
	virtual $bytes* getEncoded() override;
	virtual $String* getFormat() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::rsa::RSAUtil$KeyType* type, ::java::security::spec::AlgorithmParameterSpec* keyParams, ::java::math::BigInteger* n, ::java::math::BigInteger* d);
	virtual $String* getAlgorithm() override;
	virtual ::java::math::BigInteger* getModulus() override;
	virtual ::java::security::spec::AlgorithmParameterSpec* getParams() override;
	virtual ::java::math::BigInteger* getPrivateExponent() override;
	virtual bool isDestroyed() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xFF8A61A3985EAB56;
	::java::math::BigInteger* n = nullptr;
	::java::math::BigInteger* d = nullptr;
	::sun::security::rsa::RSAUtil$KeyType* type = nullptr;
	::java::security::spec::AlgorithmParameterSpec* keyParams = nullptr;
};

		} // rsa
	} // security
} // sun

#endif // _sun_security_rsa_RSAPrivateKeyImpl_h_