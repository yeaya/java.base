#ifndef _sun_security_provider_Sun_h_
#define _sun_security_provider_Sun_h_
//$ class sun.security.provider.Sun
//$ extends java.security.Provider

#include <java/security/Provider.h>

#pragma push_macro("INFO")
#undef INFO

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $export Sun : public ::java::security::Provider {
	$class(Sun, 0, ::java::security::Provider)
public:
	Sun();
	using ::java::security::Provider::getProperty;
	void init$();
	using ::java::security::Provider::load;
	void putEntries(::java::util::Iterator* i);
	static const int64_t serialVersionUID = (int64_t)0x59601F7F066063B4;
	static $String* INFO;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("INFO")

#endif // _sun_security_provider_Sun_h_