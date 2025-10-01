#ifndef _javax_crypto_ProviderVerifier_h_
#define _javax_crypto_ProviderVerifier_h_
//$ class javax.crypto.ProviderVerifier
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace javax {
	namespace crypto {
		class CryptoPermissions;
	}
}

namespace javax {
	namespace crypto {

class ProviderVerifier : public ::java::lang::Object {
	$class(ProviderVerifier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProviderVerifier();
	void init$(::java::net::URL* jarURL, bool savePerms);
	void init$(::java::net::URL* jarURL, ::java::security::Provider* provider, bool savePerms);
	::javax::crypto::CryptoPermissions* getPermissions();
	static bool isTrustedCryptoProvider(::java::security::Provider* provider);
	void verify();
	static void verifyPolicySigned($Array<::java::security::cert::Certificate>* certs);
	::java::net::URL* jarURL = nullptr;
	::java::security::Provider* provider = nullptr;
	bool savePerms = false;
	::javax::crypto::CryptoPermissions* appPerms = nullptr;
};

	} // crypto
} // javax

#endif // _javax_crypto_ProviderVerifier_h_