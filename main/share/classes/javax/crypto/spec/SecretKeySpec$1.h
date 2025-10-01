#ifndef _javax_crypto_spec_SecretKeySpec$1_h_
#define _javax_crypto_spec_SecretKeySpec$1_h_
//$ class javax.crypto.spec.SecretKeySpec$1
//$ extends jdk.internal.access.JavaxCryptoSpecAccess

#include <jdk/internal/access/JavaxCryptoSpecAccess.h>

namespace javax {
	namespace crypto {
		namespace spec {
			class SecretKeySpec;
		}
	}
}

namespace javax {
	namespace crypto {
		namespace spec {

class SecretKeySpec$1 : public ::jdk::internal::access::JavaxCryptoSpecAccess {
	$class(SecretKeySpec$1, $NO_CLASS_INIT, ::jdk::internal::access::JavaxCryptoSpecAccess)
public:
	SecretKeySpec$1();
	void init$();
	virtual void clearSecretKeySpec(::javax::crypto::spec::SecretKeySpec* keySpec) override;
};

		} // spec
	} // crypto
} // javax

#endif // _javax_crypto_spec_SecretKeySpec$1_h_