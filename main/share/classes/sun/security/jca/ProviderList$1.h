#ifndef _sun_security_jca_ProviderList$1_h_
#define _sun_security_jca_ProviderList$1_h_
//$ class sun.security.jca.ProviderList$1
//$ extends java.security.Provider

#include <java/security/Provider.h>

namespace java {
	namespace security {
		class Provider$Service;
	}
}

namespace sun {
	namespace security {
		namespace jca {

class ProviderList$1 : public ::java::security::Provider {
	$class(ProviderList$1, $NO_CLASS_INIT, ::java::security::Provider)
public:
	ProviderList$1();
	using ::java::security::Provider::getProperty;
	void init$($String* name, $String* versionStr, $String* info);
	virtual ::java::security::Provider$Service* getService($String* type, $String* algorithm) override;
	using ::java::security::Provider::load;
	static const int64_t serialVersionUID = (int64_t)0x0FFA6E84CA1E2BC5;
};

		} // jca
	} // security
} // sun

#endif // _sun_security_jca_ProviderList$1_h_