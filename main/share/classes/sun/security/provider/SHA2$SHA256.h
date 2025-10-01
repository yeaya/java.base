#ifndef _sun_security_provider_SHA2$SHA256_h_
#define _sun_security_provider_SHA2$SHA256_h_
//$ class sun.security.provider.SHA2$SHA256
//$ extends sun.security.provider.SHA2

#include <java/lang/Array.h>
#include <sun/security/provider/SHA2.h>

#pragma push_macro("INITIAL_HASHES")
#undef INITIAL_HASHES

namespace sun {
	namespace security {
		namespace provider {

class SHA2$SHA256 : public ::sun::security::provider::SHA2 {
	$class(SHA2$SHA256, 0, ::sun::security::provider::SHA2)
public:
	SHA2$SHA256();
	using ::sun::security::provider::SHA2::engineUpdate;
	void init$();
	virtual $Object* clone() override;
	static $ints* INITIAL_HASHES;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("INITIAL_HASHES")

#endif // _sun_security_provider_SHA2$SHA256_h_