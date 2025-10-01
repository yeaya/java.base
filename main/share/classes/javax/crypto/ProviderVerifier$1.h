#ifndef _javax_crypto_ProviderVerifier$1_h_
#define _javax_crypto_ProviderVerifier$1_h_
//$ class javax.crypto.ProviderVerifier$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace javax {
	namespace crypto {
		class ProviderVerifier;
	}
}

namespace javax {
	namespace crypto {

class ProviderVerifier$1 : public ::java::security::PrivilegedExceptionAction {
	$class(ProviderVerifier$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ProviderVerifier$1();
	void init$(::javax::crypto::ProviderVerifier* this$0, ::java::net::URL* val$url);
	virtual $Object* run() override;
	::javax::crypto::ProviderVerifier* this$0 = nullptr;
	::java::net::URL* val$url = nullptr;
};

	} // crypto
} // javax

#endif // _javax_crypto_ProviderVerifier$1_h_