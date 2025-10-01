#ifndef _jdk_internal_access_JavaxCryptoSpecAccess_h_
#define _jdk_internal_access_JavaxCryptoSpecAccess_h_
//$ interface jdk.internal.access.JavaxCryptoSpecAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace crypto {
		namespace spec {
			class SecretKeySpec;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $export JavaxCryptoSpecAccess : public ::java::lang::Object {
	$interface(JavaxCryptoSpecAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void clearSecretKeySpec(::javax::crypto::spec::SecretKeySpec* keySpec) {}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaxCryptoSpecAccess_h_