#ifndef _sun_security_provider_SHA2$SHA224_h_
#define _sun_security_provider_SHA2$SHA224_h_
//$ class sun.security.provider.SHA2$SHA224
//$ extends sun.security.provider.SHA2

#include <java/lang/Array.h>
#include <sun/security/provider/SHA2.h>

#pragma push_macro("INITIAL_HASHES")
#undef INITIAL_HASHES

namespace sun {
	namespace security {
		namespace provider {

class SHA2$SHA224 : public ::sun::security::provider::SHA2 {
	$class(SHA2$SHA224, 0, ::sun::security::provider::SHA2)
public:
	SHA2$SHA224();
	using ::sun::security::provider::SHA2::engineUpdate;
	void init$();
	virtual $Object* clone() override;
	static $ints* INITIAL_HASHES;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("INITIAL_HASHES")

#endif // _sun_security_provider_SHA2$SHA224_h_