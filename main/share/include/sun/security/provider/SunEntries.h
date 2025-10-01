#ifndef _sun_security_provider_SunEntries_h_
#define _sun_security_provider_SunEntries_h_
//$ class sun.security.provider.SunEntries
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PROP_RNDSOURCE")
#undef PROP_RNDSOURCE
#pragma push_macro("URL_DEV_URANDOM")
#undef URL_DEV_URANDOM
#pragma push_macro("PROP_EGD")
#undef PROP_EGD
#pragma push_macro("DEF_SECURE_RANDOM_ALGO")
#undef DEF_SECURE_RANDOM_ALGO
#pragma push_macro("URL_DEV_RANDOM")
#undef URL_DEV_RANDOM

namespace java {
	namespace io {
		class File;
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
		class HashMap;
		class Iterator;
		class LinkedHashSet;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $import SunEntries : public ::java::lang::Object {
	$class(SunEntries, 0, ::java::lang::Object)
public:
	SunEntries();
	void init$(::java::security::Provider* p);
	void add(::java::security::Provider* p, $String* type, $String* algo, $String* cn);
	void add(::java::security::Provider* p, $String* type, $String* algo, $String* cn, ::java::util::HashMap* attrs);
	void addWithAlias(::java::security::Provider* p, $String* type, $String* algo, $String* cn, ::java::util::HashMap* attrs);
	static ::java::io::File* getDeviceFile(::java::net::URL* device);
	static $String* getSeedSource();
	::java::util::Iterator* iterator();
	static $String* DEF_SECURE_RANDOM_ALGO;
	::java::util::LinkedHashSet* services = nullptr;
	static $String* PROP_EGD;
	static $String* PROP_RNDSOURCE;
	static bool useLegacyDSA;
	static $String* URL_DEV_RANDOM;
	static $String* URL_DEV_URANDOM;
	static $String* seedSource;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("PROP_RNDSOURCE")
#pragma pop_macro("URL_DEV_URANDOM")
#pragma pop_macro("PROP_EGD")
#pragma pop_macro("DEF_SECURE_RANDOM_ALGO")
#pragma pop_macro("URL_DEV_RANDOM")

#endif // _sun_security_provider_SunEntries_h_