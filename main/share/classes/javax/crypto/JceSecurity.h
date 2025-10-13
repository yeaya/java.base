#ifndef _javax_crypto_JceSecurity_h_
#define _javax_crypto_JceSecurity_h_
//$ class javax.crypto.JceSecurity
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NULL_URL")
#undef NULL_URL
#pragma push_macro("PROVIDER_VERIFIED")
#undef PROVIDER_VERIFIED

namespace java {
	namespace lang {
		class Exception;
	}
}
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
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace crypto {
		class CryptoPermissions;
	}
}
namespace sun {
	namespace security {
		namespace jca {
			class GetInstance$Instance;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace javax {
	namespace crypto {

class JceSecurity : public ::java::lang::Object {
	$class(JceSecurity, 0, ::java::lang::Object)
public:
	JceSecurity();
	void init$();
	static bool canUseProvider(::java::security::Provider* p);
	static ::java::net::URL* getCodeBase($Class* clazz);
	static ::javax::crypto::CryptoPermissions* getDefaultPolicy();
	static ::javax::crypto::CryptoPermissions* getExemptPolicy();
	static ::sun::security::jca::GetInstance$Instance* getInstance($String* type, $Class* clazz, $String* algorithm, $String* provider);
	static ::sun::security::jca::GetInstance$Instance* getInstance($String* type, $Class* clazz, $String* algorithm, ::java::security::Provider* provider);
	static ::sun::security::jca::GetInstance$Instance* getInstance($String* type, $Class* clazz, $String* algorithm);
	static ::java::lang::Exception* getVerificationResult(::java::security::Provider* p);
	static bool isRestricted();
	static void setupJurisdictionPolicies();
	static ::javax::crypto::CryptoPermissions* verifyExemptJar(::java::net::URL* codeBase);
	static void verifyProvider(::java::net::URL* codeBase, ::java::security::Provider* p);
	static ::sun::security::util::Debug* debug;
	static ::javax::crypto::CryptoPermissions* defaultPolicy;
	static ::javax::crypto::CryptoPermissions* exemptPolicy;
	static ::java::util::Map* verificationResults;
	static ::java::util::Map* verifyingProviders;
	static bool isRestricted$;
	static $Object* PROVIDER_VERIFIED;
	static ::java::net::URL* NULL_URL;
	static ::java::util::Map* codeBaseCacheRef;
};

	} // crypto
} // javax

#pragma pop_macro("NULL_URL")
#pragma pop_macro("PROVIDER_VERIFIED")

#endif // _javax_crypto_JceSecurity_h_