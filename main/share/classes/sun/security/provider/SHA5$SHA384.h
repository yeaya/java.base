#ifndef _sun_security_provider_SHA5$SHA384_h_
#define _sun_security_provider_SHA5$SHA384_h_
//$ class sun.security.provider.SHA5$SHA384
//$ extends sun.security.provider.SHA5

#include <java/lang/Array.h>
#include <sun/security/provider/SHA5.h>

#pragma push_macro("INITIAL_HASHES")
#undef INITIAL_HASHES

namespace sun {
	namespace security {
		namespace provider {

class SHA5$SHA384 : public ::sun::security::provider::SHA5 {
	$class(SHA5$SHA384, 0, ::sun::security::provider::SHA5)
public:
	SHA5$SHA384();
	using ::sun::security::provider::SHA5::engineUpdate;
	void init$();
	virtual $Object* clone() override;
	static $longs* INITIAL_HASHES;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("INITIAL_HASHES")

#endif // _sun_security_provider_SHA5$SHA384_h_