#ifndef _sun_security_util_PolicyUtil_h_
#define _sun_security_util_PolicyUtil_h_
//$ class sun.security.util.PolicyUtil
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("P11KEYSTORE")
#undef P11KEYSTORE
#pragma push_macro("NONE")
#undef NONE

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace security {
		class KeyStore;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export PolicyUtil : public ::java::lang::Object {
	$class(PolicyUtil, 0, ::java::lang::Object)
public:
	PolicyUtil();
	void init$();
	static ::java::io::InputStream* getInputStream(::java::net::URL* url);
	static ::java::security::KeyStore* getKeyStore(::java::net::URL* policyUrl, $String* keyStoreName, $String* keyStoreType, $String* keyStoreProvider, $String* storePassURL, ::sun::security::util::Debug* debug);
	static $String* P11KEYSTORE;
	static $String* NONE;
};

		} // util
	} // security
} // sun

#pragma pop_macro("P11KEYSTORE")
#pragma pop_macro("NONE")

#endif // _sun_security_util_PolicyUtil_h_