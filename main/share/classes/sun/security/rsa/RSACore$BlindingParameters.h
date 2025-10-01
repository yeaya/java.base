#ifndef _sun_security_rsa_RSACore$BlindingParameters_h_
#define _sun_security_rsa_RSACore$BlindingParameters_h_
//$ class sun.security.rsa.RSACore$BlindingParameters
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BIG_TWO")
#undef BIG_TWO

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace sun {
	namespace security {
		namespace rsa {
			class RSACore$BlindingRandomPair;
		}
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class RSACore$BlindingParameters : public ::java::lang::Object {
	$class(RSACore$BlindingParameters, 0, ::java::lang::Object)
public:
	RSACore$BlindingParameters();
	void init$(::java::math::BigInteger* e, ::java::math::BigInteger* d, ::java::math::BigInteger* n);
	::sun::security::rsa::RSACore$BlindingRandomPair* getBlindingRandomPair(::java::math::BigInteger* e, ::java::math::BigInteger* d, ::java::math::BigInteger* n);
	bool isReusable();
	static ::java::math::BigInteger* BIG_TWO;
	::java::math::BigInteger* e = nullptr;
	::java::math::BigInteger* d = nullptr;
	::java::math::BigInteger* u = nullptr;
	::java::math::BigInteger* v = nullptr;
};

		} // rsa
	} // security
} // sun

#pragma pop_macro("BIG_TWO")

#endif // _sun_security_rsa_RSACore$BlindingParameters_h_