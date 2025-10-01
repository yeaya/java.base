#ifndef _sun_security_ssl_TrustStoreManager$TrustAnchorManager_h_
#define _sun_security_ssl_TrustStoreManager$TrustAnchorManager_h_
//$ class sun.security.ssl.TrustStoreManager$TrustAnchorManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace java {
	namespace security {
		class KeyStore;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class TrustStoreManager$TrustStoreDescriptor;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class TrustStoreManager$TrustAnchorManager : public ::java::lang::Object {
	$class(TrustStoreManager$TrustAnchorManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TrustStoreManager$TrustAnchorManager();
	void init$();
	::java::security::KeyStore* getKeyStore(::sun::security::ssl::TrustStoreManager$TrustStoreDescriptor* descriptor);
	::java::util::Set* getTrustedCerts(::sun::security::ssl::TrustStoreManager$TrustStoreDescriptor* descriptor);
	static ::java::security::KeyStore* loadKeyStore(::sun::security::ssl::TrustStoreManager$TrustStoreDescriptor* descriptor);
	static ::java::util::Set* loadTrustedCerts(::java::security::KeyStore* ks);
	::sun::security::ssl::TrustStoreManager$TrustStoreDescriptor* descriptor = nullptr;
	::java::lang::ref::WeakReference* ksRef = nullptr;
	::java::lang::ref::WeakReference* csRef = nullptr;
	::java::util::concurrent::locks::ReentrantLock* tamLock = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_TrustStoreManager$TrustAnchorManager_h_