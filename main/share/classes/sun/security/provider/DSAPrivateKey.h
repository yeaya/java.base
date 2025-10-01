#ifndef _sun_security_provider_DSAPrivateKey_h_
#define _sun_security_provider_DSAPrivateKey_h_
//$ class sun.security.provider.DSAPrivateKey
//$ extends sun.security.pkcs.PKCS8Key
//$ implements java.security.interfaces.DSAPrivateKey

#include <java/lang/Array.h>
#include <java/security/interfaces/DSAPrivateKey.h>
#include <sun/security/pkcs/PKCS8Key.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace interfaces {
			class DSAParams;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $export DSAPrivateKey : public ::sun::security::pkcs::PKCS8Key, public ::java::security::interfaces::DSAPrivateKey {
	$class(DSAPrivateKey, $NO_CLASS_INIT, ::sun::security::pkcs::PKCS8Key, ::java::security::interfaces::DSAPrivateKey)
public:
	DSAPrivateKey();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void destroy() override;
	virtual bool equals(Object$* object) override;
	virtual void finalize() override;
	virtual $String* getAlgorithm() override;
	virtual $bytes* getEncoded() override;
	virtual $String* getFormat() override;
	virtual int32_t hashCode() override;
	void init$(::java::math::BigInteger* x, ::java::math::BigInteger* p, ::java::math::BigInteger* q, ::java::math::BigInteger* g);
	void init$($bytes* encoded);
	virtual ::java::security::interfaces::DSAParams* getParams() override;
	virtual ::java::math::BigInteger* getX() override;
	virtual bool isDestroyed() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xD2F96290676EC6CE;
	::java::math::BigInteger* x = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSAPrivateKey_h_