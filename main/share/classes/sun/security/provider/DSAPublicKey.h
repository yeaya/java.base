#ifndef _sun_security_provider_DSAPublicKey_h_
#define _sun_security_provider_DSAPublicKey_h_
//$ class sun.security.provider.DSAPublicKey
//$ extends sun.security.x509.X509Key
//$ implements java.security.interfaces.DSAPublicKey

#include <java/lang/Array.h>
#include <java/security/interfaces/DSAPublicKey.h>
#include <sun/security/x509/X509Key.h>

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

class $export DSAPublicKey : public ::sun::security::x509::X509Key, public ::java::security::interfaces::DSAPublicKey {
	$class(DSAPublicKey, $NO_CLASS_INIT, ::sun::security::x509::X509Key, ::java::security::interfaces::DSAPublicKey)
public:
	DSAPublicKey();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $String* getAlgorithm() override;
	virtual $bytes* getEncoded() override;
	virtual $String* getFormat() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::math::BigInteger* y, ::java::math::BigInteger* p, ::java::math::BigInteger* q, ::java::math::BigInteger* g);
	void init$($bytes* encoded);
	virtual ::java::security::interfaces::DSAParams* getParams() override;
	virtual ::java::math::BigInteger* getY() override;
	virtual void parseKeyBits() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xD6727D0D0419EB7B;
	::java::math::BigInteger* y = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSAPublicKey_h_