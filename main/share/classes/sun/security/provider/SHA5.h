#ifndef _sun_security_provider_SHA5_h_
#define _sun_security_provider_SHA5_h_
//$ class sun.security.provider.SHA5
//$ extends sun.security.provider.DigestBase

#include <java/lang/Array.h>
#include <sun/security/provider/DigestBase.h>

#pragma push_macro("ITERATION")
#undef ITERATION
#pragma push_macro("ROUND_CONSTS")
#undef ROUND_CONSTS
#pragma push_macro("SHA5")
#undef SHA5
#pragma push_macro("W")
#undef W

namespace sun {
	namespace security {
		namespace provider {

class SHA5 : public ::sun::security::provider::DigestBase {
	$class(SHA5, 0, ::sun::security::provider::DigestBase)
public:
	SHA5();
	using ::sun::security::provider::DigestBase::engineUpdate;
	void init$($String* name, int32_t digestLength, $longs* initialHashes);
	virtual $Object* clone() override;
	virtual void implCompress($bytes* buf, int32_t ofs) override;
	void implCompress0($bytes* buf, int32_t ofs);
	void implCompressCheck($bytes* buf, int32_t ofs);
	virtual void implDigest($bytes* out, int32_t ofs) override;
	virtual void implReset() override;
	static int64_t lf_R(int64_t x, int32_t s);
	static int64_t lf_S(int64_t x, int32_t s);
	static int64_t lf_ch(int64_t x, int64_t y, int64_t z);
	static int64_t lf_delta0(int64_t x);
	static int64_t lf_delta1(int64_t x);
	static int64_t lf_maj(int64_t x, int64_t y, int64_t z);
	static int64_t lf_sigma0(int64_t x);
	static int64_t lf_sigma1(int64_t x);
	void resetHashes();
	static const int32_t ITERATION = 80;
	static $longs* ROUND_CONSTS;
	$longs* W = nullptr;
	$longs* state = nullptr;
	$longs* initialHashes = nullptr;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("ITERATION")
#pragma pop_macro("ROUND_CONSTS")
#pragma pop_macro("SHA5")
#pragma pop_macro("W")

#endif // _sun_security_provider_SHA5_h_