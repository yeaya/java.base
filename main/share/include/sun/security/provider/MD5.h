#ifndef _sun_security_provider_MD5_h_
#define _sun_security_provider_MD5_h_
//$ class sun.security.provider.MD5
//$ extends sun.security.provider.DigestBase

#include <java/lang/Array.h>
#include <sun/security/provider/DigestBase.h>

#pragma push_macro("S31")
#undef S31
#pragma push_macro("S42")
#undef S42
#pragma push_macro("S41")
#undef S41
#pragma push_macro("S11")
#undef S11
#pragma push_macro("S22")
#undef S22
#pragma push_macro("S33")
#undef S33
#pragma push_macro("S44")
#undef S44
#pragma push_macro("S21")
#undef S21
#pragma push_macro("S32")
#undef S32
#pragma push_macro("S43")
#undef S43
#pragma push_macro("S13")
#undef S13
#pragma push_macro("S24")
#undef S24
#pragma push_macro("S12")
#undef S12
#pragma push_macro("S23")
#undef S23
#pragma push_macro("S34")
#undef S34
#pragma push_macro("S14")
#undef S14

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

#pragma pop_macro("S31")
#pragma pop_macro("S42")
#pragma pop_macro("S41")
#pragma pop_macro("S11")
#pragma pop_macro("S22")
#pragma pop_macro("S33")
#pragma pop_macro("S44")
#pragma pop_macro("S21")
#pragma pop_macro("S32")
#pragma pop_macro("S43")
#pragma pop_macro("S13")
#pragma pop_macro("S24")
#pragma pop_macro("S12")
#pragma pop_macro("S23")
#pragma pop_macro("S34")
#pragma pop_macro("S14")

#endif // _sun_security_provider_MD5_h_