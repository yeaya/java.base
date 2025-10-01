#ifndef _sun_security_provider_DSA$Raw_h_
#define _sun_security_provider_DSA$Raw_h_
//$ class sun.security.provider.DSA$Raw
//$ extends sun.security.provider.DSA

#include <sun/security/provider/DSA.h>

namespace sun {
	namespace security {
		namespace provider {

class DSA$Raw : public ::sun::security::provider::DSA {
	$class(DSA$Raw, $NO_CLASS_INIT, ::sun::security::provider::DSA)
public:
	DSA$Raw();
	using ::sun::security::provider::DSA::engineInitSign;
	using ::sun::security::provider::DSA::engineInitVerify;
	using ::sun::security::provider::DSA::engineSign;
	void init$(bool p1363Format);
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSA$Raw_h_