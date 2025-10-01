#ifndef _sun_security_provider_MD4$1_h_
#define _sun_security_provider_MD4$1_h_
//$ class sun.security.provider.MD4$1
//$ extends java.security.Provider

#include <java/security/Provider.h>

namespace sun {
	namespace security {
		namespace provider {

class MD4$1 : public ::java::security::Provider {
	$class(MD4$1, $NO_CLASS_INIT, ::java::security::Provider)
public:
	MD4$1();
	using ::java::security::Provider::getProperty;
	void init$($String* name, $String* versionStr, $String* info);
	using ::java::security::Provider::load;
	static const int64_t serialVersionUID = (int64_t)0x852CD4F9FDE43F63;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_MD4$1_h_