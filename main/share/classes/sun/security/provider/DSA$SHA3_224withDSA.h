#ifndef _sun_security_provider_DSA$SHA3_224withDSA_h_
#define _sun_security_provider_DSA$SHA3_224withDSA_h_
//$ class sun.security.provider.DSA$SHA3_224withDSA
//$ extends sun.security.provider.DSA

#include <sun/security/provider/DSA.h>

namespace sun {
	namespace security {
		namespace provider {

class DSA$SHA3_224withDSA : public ::sun::security::provider::DSA {
	$class(DSA$SHA3_224withDSA, $NO_CLASS_INIT, ::sun::security::provider::DSA)
public:
	DSA$SHA3_224withDSA();
	using ::sun::security::provider::DSA::engineInitSign;
	using ::sun::security::provider::DSA::engineInitVerify;
	using ::sun::security::provider::DSA::engineSign;
	void init$();
	virtual $String* toString() override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSA$SHA3_224withDSA_h_