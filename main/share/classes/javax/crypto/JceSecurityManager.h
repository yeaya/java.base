#ifndef _javax_crypto_JceSecurityManager_h_
#define _javax_crypto_JceSecurityManager_h_
//$ class javax.crypto.JceSecurityManager
//$ extends java.lang.SecurityManager

#include <java/lang/SecurityManager.h>

#pragma push_macro("CACHE_NULL_MARK")
#undef CACHE_NULL_MARK
#pragma push_macro("INSTANCE")
#undef INSTANCE

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
		class Vector;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}
namespace javax {
	namespace crypto {
		class CryptoAllPermission;
		class CryptoPermission;
		class CryptoPermissions;
	}
}

namespace javax {
	namespace crypto {

class JceSecurityManager : public ::java::lang::SecurityManager {
	$class(JceSecurityManager, 0, ::java::lang::SecurityManager)
public:
	JceSecurityManager();
	void init$();
	static ::javax::crypto::CryptoPermissions* getAppPermissions(::java::net::URL* callerCodeBase);
	::javax::crypto::CryptoPermission* getCryptoPermission($String* alg);
	::javax::crypto::CryptoPermission* getDefaultPermission($String* alg);
	bool isCallerTrusted(::java::security::Provider* provider);
	static ::javax::crypto::CryptoPermissions* defaultPolicy;
	static ::javax::crypto::CryptoPermissions* exemptPolicy;
	static ::javax::crypto::CryptoAllPermission* allPerm;
	static ::java::util::Vector* TrustedCallersCache;
	static ::java::util::concurrent::ConcurrentMap* exemptCache;
	static ::javax::crypto::CryptoPermissions* CACHE_NULL_MARK;
	static ::javax::crypto::JceSecurityManager* INSTANCE;
};

	} // crypto
} // javax

#pragma pop_macro("CACHE_NULL_MARK")
#pragma pop_macro("INSTANCE")

#endif // _javax_crypto_JceSecurityManager_h_