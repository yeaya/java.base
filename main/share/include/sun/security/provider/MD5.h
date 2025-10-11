#ifndef _sun_security_provider_MD5_h_
#define _sun_security_provider_MD5_h_
//$ class sun.security.provider.MD5
//$ extends sun.security.provider.DigestBase

#include <java/lang/Array.h>
#include <sun/security/provider/DigestBase.h>

#pragma push_macro("FF")
#undef FF
#pragma push_macro("GG")
#undef GG
#pragma push_macro("HH")
#undef HH
#pragma push_macro("II")
#undef II
#pragma push_macro("MD5")
#undef MD5

namespace sun {
	namespace security {
		namespace provider {

class $import MD5 : public ::sun::security::provider::DigestBase {
	$class(MD5, $NO_CLASS_INIT, ::sun::security::provider::DigestBase)
public:
	MD5();
	using ::sun::security::provider::DigestBase::engineUpdate;
	void init$();
	static int32_t FF(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s, int32_t ac);
	static int32_t GG(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s, int32_t ac);
	static int32_t HH(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s, int32_t ac);
	static int32_t II(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s, int32_t ac);
	virtual $Object* clone() override;
	virtual void implCompress($bytes* buf, int32_t ofs) override;
	void implCompress0($bytes* buf, int32_t ofs);
	void implCompressCheck($bytes* buf, int32_t ofs);
	virtual void implDigest($bytes* out, int32_t ofs) override;
	virtual void implReset() override;
	$ints* state = nullptr;
	static const int32_t S11 = 7;
	static const int32_t S12 = 12;
	static const int32_t S13 = 17;
	static const int32_t S14 = 22;
	static const int32_t S21 = 5;
	static const int32_t S22 = 9;
	static const int32_t S23 = 14;
	static const int32_t S24 = 20;
	static const int32_t S31 = 4;
	static const int32_t S32 = 11;
	static const int32_t S33 = 16;
	static const int32_t S34 = 23;
	static const int32_t S41 = 6;
	static const int32_t S42 = 10;
	static const int32_t S43 = 15;
	static const int32_t S44 = 21;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("FF")
#pragma pop_macro("GG")
#pragma pop_macro("HH")
#pragma pop_macro("II")
#pragma pop_macro("MD5")

#endif // _sun_security_provider_MD5_h_