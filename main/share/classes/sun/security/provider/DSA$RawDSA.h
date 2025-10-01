#ifndef _sun_security_provider_DSA$RawDSA_h_
#define _sun_security_provider_DSA$RawDSA_h_
//$ class sun.security.provider.DSA$RawDSA
//$ extends sun.security.provider.DSA$Raw

#include <sun/security/provider/DSA$Raw.h>

namespace sun {
	namespace security {
		namespace provider {

class DSA$RawDSA : public ::sun::security::provider::DSA$Raw {
	$class(DSA$RawDSA, $NO_CLASS_INIT, ::sun::security::provider::DSA$Raw)
public:
	DSA$RawDSA();
	using ::sun::security::provider::DSA$Raw::engineInitSign;
	using ::sun::security::provider::DSA$Raw::engineInitVerify;
	using ::sun::security::provider::DSA$Raw::engineSign;
	void init$();
	virtual $String* toString() override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSA$RawDSA_h_