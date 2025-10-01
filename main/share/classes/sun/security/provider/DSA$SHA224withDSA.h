#ifndef _sun_security_provider_DSA$SHA224withDSA_h_
#define _sun_security_provider_DSA$SHA224withDSA_h_
//$ class sun.security.provider.DSA$SHA224withDSA
//$ extends sun.security.provider.DSA

#include <sun/security/provider/DSA.h>

namespace sun {
	namespace security {
		namespace provider {

class DSA$SHA224withDSA : public ::sun::security::provider::DSA {
	$class(DSA$SHA224withDSA, $NO_CLASS_INIT, ::sun::security::provider::DSA)
public:
	DSA$SHA224withDSA();
	using ::sun::security::provider::DSA::engineInitSign;
	using ::sun::security::provider::DSA::engineInitVerify;
	using ::sun::security::provider::DSA::engineSign;
	void init$();
	virtual $String* toString() override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSA$SHA224withDSA_h_