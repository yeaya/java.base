#ifndef _sun_security_provider_SHA2_h_
#define _sun_security_provider_SHA2_h_
//$ class sun.security.provider.SHA2
//$ extends sun.security.provider.DigestBase

#include <java/lang/Array.h>
#include <sun/security/provider/DigestBase.h>

#pragma push_macro("SHA2")
#undef SHA2
#pragma push_macro("ITERATION")
#undef ITERATION
#pragma push_macro("W")
#undef W
#pragma push_macro("ROUND_CONSTS")
#undef ROUND_CONSTS

namespace sun {
	namespace security {
		namespace provider {

class SHA2 : public ::sun::security::provider::DigestBase {
	$class(SHA2, 0, ::sun::security::provider::DigestBase)
public:
	SHA2();
	using ::sun::security::provider::DigestBase::engineUpdate;
	void init$($String* name, int32_t digestLength, $ints* initialHashes);
	virtual $Object* clone() override;
	virtual void implCompress($bytes* buf, int32_t ofs) override;
	void implCompress0($bytes* buf, int32_t ofs);
	void implCompressCheck($bytes* buf, int32_t ofs);
	virtual void implDigest($bytes* out, int32_t ofs) override;
	virtual void implReset() override;
	void resetHashes();
	static const int32_t ITERATION = 64;
	static $ints* ROUND_CONSTS;
	$ints* W = nullptr;
	$ints* state = nullptr;
	$ints* initialHashes = nullptr;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("SHA2")
#pragma pop_macro("ITERATION")
#pragma pop_macro("W")
#pragma pop_macro("ROUND_CONSTS")

#endif // _sun_security_provider_SHA2_h_