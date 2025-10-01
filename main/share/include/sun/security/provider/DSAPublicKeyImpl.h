#ifndef _sun_security_provider_DSAPublicKeyImpl_h_
#define _sun_security_provider_DSAPublicKeyImpl_h_
//$ class sun.security.provider.DSAPublicKeyImpl
//$ extends sun.security.provider.DSAPublicKey

#include <java/lang/Array.h>
#include <sun/security/provider/DSAPublicKey.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $import DSAPublicKeyImpl : public ::sun::security::provider::DSAPublicKey {
	$class(DSAPublicKeyImpl, $NO_CLASS_INIT, ::sun::security::provider::DSAPublicKey)
public:
	DSAPublicKeyImpl();
	void init$(::java::math::BigInteger* y, ::java::math::BigInteger* p, ::java::math::BigInteger* q, ::java::math::BigInteger* g);
	void init$($bytes* encoded);
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x6C859E0FB206318A;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSAPublicKeyImpl_h_