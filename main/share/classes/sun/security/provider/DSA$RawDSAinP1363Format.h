#ifndef _sun_security_provider_DSA$RawDSAinP1363Format_h_
#define _sun_security_provider_DSA$RawDSAinP1363Format_h_
//$ class sun.security.provider.DSA$RawDSAinP1363Format
//$ extends sun.security.provider.DSA$Raw

#include <sun/security/provider/DSA$Raw.h>

namespace sun {
	namespace security {
		namespace provider {

class DSA$RawDSAinP1363Format : public ::sun::security::provider::DSA$Raw {
	$class(DSA$RawDSAinP1363Format, $NO_CLASS_INIT, ::sun::security::provider::DSA$Raw)
public:
	DSA$RawDSAinP1363Format();
	using ::sun::security::provider::DSA$Raw::engineInitSign;
	using ::sun::security::provider::DSA$Raw::engineInitVerify;
	using ::sun::security::provider::DSA$Raw::engineSign;
	void init$();
	virtual $String* toString() override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSA$RawDSAinP1363Format_h_