#ifndef _sun_security_jca_ProviderConfig$ProviderLoader_h_
#define _sun_security_jca_ProviderConfig$ProviderLoader_h_
//$ class sun.security.jca.ProviderConfig$ProviderLoader
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace util {
		class ServiceLoader;
	}
}

namespace sun {
	namespace security {
		namespace jca {

class ProviderConfig$ProviderLoader : public ::java::lang::Object {
	$class(ProviderConfig$ProviderLoader, 0, ::java::lang::Object)
public:
	ProviderConfig$ProviderLoader();
	void init$();
	::java::security::Provider* legacyLoad($String* classname);
	::java::security::Provider* load($String* pn);
	static ::sun::security::jca::ProviderConfig$ProviderLoader* INSTANCE;
	::java::util::ServiceLoader* services = nullptr;
};

		} // jca
	} // security
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_security_jca_ProviderConfig$ProviderLoader_h_