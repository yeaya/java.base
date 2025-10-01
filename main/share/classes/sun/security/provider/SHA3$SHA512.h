#ifndef _sun_security_provider_SHA3$SHA512_h_
#define _sun_security_provider_SHA3$SHA512_h_
//$ class sun.security.provider.SHA3$SHA512
//$ extends sun.security.provider.SHA3

#include <sun/security/provider/SHA3.h>

namespace sun {
	namespace security {
		namespace provider {

class SHA3$SHA512 : public ::sun::security::provider::SHA3 {
	$class(SHA3$SHA512, $NO_CLASS_INIT, ::sun::security::provider::SHA3)
public:
	SHA3$SHA512();
	using ::sun::security::provider::SHA3::engineUpdate;
	void init$();
	virtual $Object* clone() override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_SHA3$SHA512_h_