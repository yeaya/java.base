#ifndef _sun_security_provider_SHAKE256_h_
#define _sun_security_provider_SHAKE256_h_
//$ class sun.security.provider.SHAKE256
//$ extends sun.security.provider.SHA3

#include <java/lang/Array.h>
#include <sun/security/provider/SHA3.h>

namespace sun {
	namespace security {
		namespace provider {

class $import SHAKE256 : public ::sun::security::provider::SHA3 {
	$class(SHAKE256, $NO_CLASS_INIT, ::sun::security::provider::SHA3)
public:
	SHAKE256();
	using ::sun::security::provider::SHA3::engineUpdate;
	void init$(int32_t d);
	virtual $Object* clone() override;
	$bytes* digest();
	void reset();
	void update(int8_t in);
	void update($bytes* in, int32_t off, int32_t len);
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_SHAKE256_h_