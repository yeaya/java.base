#ifndef _com_sun_crypto_provider_PrivateKeyInfo_h_
#define _com_sun_crypto_provider_PrivateKeyInfo_h_
//$ class com.sun.crypto.provider.PrivateKeyInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("VERSION")
#undef VERSION

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class AlgorithmId;
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class PrivateKeyInfo : public ::java::lang::Object {
	$class(PrivateKeyInfo, 0, ::java::lang::Object)
public:
	PrivateKeyInfo();
	void init$($bytes* encoded);
	void clear();
	::sun::security::x509::AlgorithmId* getAlgorithm();
	static ::java::math::BigInteger* VERSION;
	::sun::security::x509::AlgorithmId* algid = nullptr;
	$bytes* privkey = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("VERSION")

#endif // _com_sun_crypto_provider_PrivateKeyInfo_h_