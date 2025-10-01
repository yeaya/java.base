#ifndef _sun_security_jca_ProviderConfig_h_
#define _sun_security_jca_ProviderConfig_h_
//$ class sun.security.jca.ProviderConfig
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAX_LOAD_TRIES")
#undef MAX_LOAD_TRIES
#pragma push_macro("P11_SOL_NAME")
#undef P11_SOL_NAME
#pragma push_macro("P11_SOL_ARG")
#undef P11_SOL_ARG

namespace java {
	namespace security {
		class Provider;
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
		namespace jca {

class ProviderConfig : public ::java::lang::Object {
	$class(ProviderConfig, 0, ::java::lang::Object)
public:
	ProviderConfig();
	void init$($String* provName, $String* argument);
	void init$($String* provName);
	void init$(::java::security::Provider* provider);
	void checkSunPKCS11Solaris();
	void disableLoad();
	::java::security::Provider* doLoadProvider();
	virtual bool equals(Object$* obj) override;
	static $String* expand($String* value);
	::java::security::Provider* getProvider();
	bool hasArgument();
	virtual int32_t hashCode() override;
	bool isLoaded();
	bool shouldLoad();
	virtual $String* toString() override;
	static ::sun::security::util::Debug* debug;
	static $String* P11_SOL_NAME;
	static $String* P11_SOL_ARG;
	static const int32_t MAX_LOAD_TRIES = 30;
	$String* provName = nullptr;
	$String* argument = nullptr;
	int32_t tries = 0;
	$volatile(::java::security::Provider*) provider = nullptr;
	bool isLoading = false;
};

		} // jca
	} // security
} // sun

#pragma pop_macro("MAX_LOAD_TRIES")
#pragma pop_macro("P11_SOL_NAME")
#pragma pop_macro("P11_SOL_ARG")

#endif // _sun_security_jca_ProviderConfig_h_