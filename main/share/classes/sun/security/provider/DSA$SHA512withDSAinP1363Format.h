#ifndef _sun_security_provider_DSA$SHA512withDSAinP1363Format_h_
#define _sun_security_provider_DSA$SHA512withDSAinP1363Format_h_
//$ class sun.security.provider.DSA$SHA512withDSAinP1363Format
//$ extends sun.security.provider.DSA

#include <sun/security/provider/DSA.h>

namespace sun {
	namespace security {
		namespace provider {

class DSA$SHA512withDSAinP1363Format : public ::sun::security::provider::DSA {
	$class(DSA$SHA512withDSAinP1363Format, $NO_CLASS_INIT, ::sun::security::provider::DSA)
public:
	DSA$SHA512withDSAinP1363Format();
	using ::sun::security::provider::DSA::engineInitSign;
	using ::sun::security::provider::DSA::engineInitVerify;
	using ::sun::security::provider::DSA::engineSign;
	void init$();
	virtual $String* toString() override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSA$SHA512withDSAinP1363Format_h_