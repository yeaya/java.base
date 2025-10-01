#ifndef _sun_security_provider_VerificationProvider_h_
#define _sun_security_provider_VerificationProvider_h_
//$ class sun.security.provider.VerificationProvider
//$ extends java.security.Provider

#include <java/security/Provider.h>

#pragma push_macro("ACTIVE")
#undef ACTIVE

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $import VerificationProvider : public ::java::security::Provider {
	$class(VerificationProvider, 0, ::java::security::Provider)
public:
	VerificationProvider();
	using ::java::security::Provider::load;
	using ::java::security::Provider::getProperty;
	void init$();
	void putEntries(::java::util::Iterator* i);
	static const int64_t serialVersionUID = (int64_t)0x67D7C60FEB01A24D;
	static bool ACTIVE;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("ACTIVE")

#endif // _sun_security_provider_VerificationProvider_h_