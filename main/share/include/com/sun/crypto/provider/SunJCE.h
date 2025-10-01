#ifndef _com_sun_crypto_provider_SunJCE_h_
#define _com_sun_crypto_provider_SunJCE_h_
//$ class com.sun.crypto.provider.SunJCE
//$ extends java.security.Provider

#include <java/security/Provider.h>

namespace java {
	namespace security {
		class SecureRandom;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class List;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $import SunJCE : public ::java::security::Provider {
	$class(SunJCE, 0, ::java::security::Provider)
public:
	SunJCE();
	using ::java::security::Provider::getProperty;
	void init$();
	static ::com::sun::crypto::provider::SunJCE* getInstance();
	static ::java::security::SecureRandom* getRandom();
	using ::java::security::Provider::load;
	void ps($String* type, $String* algo, $String* cn);
	void ps($String* type, $String* algo, $String* cn, ::java::util::List* als, ::java::util::HashMap* attrs);
	void psA($String* type, $String* algo, $String* cn, ::java::util::HashMap* attrs);
	void putEntries();
	static const int64_t serialVersionUID = (int64_t)0x5E8AE38E90BA8DF1;
	static $String* info;
	static const bool debug = false;
	static $volatile(::com::sun::crypto::provider::SunJCE*) instance;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_SunJCE_h_