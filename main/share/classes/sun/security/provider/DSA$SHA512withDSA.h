#ifndef _sun_security_provider_DSA$SHA512withDSA_h_
#define _sun_security_provider_DSA$SHA512withDSA_h_
//$ class sun.security.provider.DSA$SHA512withDSA
//$ extends sun.security.provider.DSA

#include <sun/security/provider/DSA.h>

namespace sun {
	namespace security {
		namespace provider {

class DSA$SHA512withDSA : public ::sun::security::provider::DSA {
	$class(DSA$SHA512withDSA, $NO_CLASS_INIT, ::sun::security::provider::DSA)
public:
	DSA$SHA512withDSA();
	using ::sun::security::provider::DSA::engineInitSign;
	using ::sun::security::provider::DSA::engineInitVerify;
	using ::sun::security::provider::DSA::engineSign;
	void init$();
	virtual $String* toString() override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSA$SHA512withDSA_h_