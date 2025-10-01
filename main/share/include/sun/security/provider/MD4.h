#ifndef _sun_security_provider_MD4_h_
#define _sun_security_provider_MD4_h_
//$ class sun.security.provider.MD4
//$ extends sun.security.provider.DigestBase

#include <java/lang/Array.h>
#include <sun/security/provider/DigestBase.h>

#pragma push_macro("S31")
#undef S31
#pragma push_macro("S11")
#undef S11
#pragma push_macro("S22")
#undef S22
#pragma push_macro("S33")
#undef S33
#pragma push_macro("S21")
#undef S21
#pragma push_macro("S32")
#undef S32
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

namespace java {
	namespace security {
		class MessageDigest;
		class Provider;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $import MD4 : public ::sun::security::provider::DigestBase {
	$class(MD4, 0, ::sun::security::provider::DigestBase)
public:
	MD4();
	using ::sun::security::provider::DigestBase::engineUpdate;
	void init$();
	static int32_t FF(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);
	static int32_t GG(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);
	static int32_t HH(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);
	virtual $Object* clone() override;
	static ::java::security::MessageDigest* getInstance();
	virtual void implCompress($bytes* buf, int32_t ofs) override;
	virtual void implDigest($bytes* out, int32_t ofs) override;
	virtual void implReset() override;
	void resetHashes();
	$ints* state = nullptr;
	static const int32_t S11 = 3;
	static const int32_t S12 = 7;
	static const int32_t S13 = 11;
	static const int32_t S14 = 19;
	static const int32_t S21 = 3;
	static const int32_t S22 = 5;
	static const int32_t S23 = 9;
	static const int32_t S24 = 13;
	static const int32_t S31 = 3;
	static const int32_t S32 = 9;
	static const int32_t S33 = 11;
	static const int32_t S34 = 15;
	static ::java::security::Provider* md4Provider;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("S31")
#pragma pop_macro("S11")
#pragma pop_macro("S22")
#pragma pop_macro("S33")
#pragma pop_macro("S21")
#pragma pop_macro("S32")
#pragma pop_macro("S13")
#pragma pop_macro("S24")
#pragma pop_macro("S12")
#pragma pop_macro("S23")
#pragma pop_macro("S34")
#pragma pop_macro("S14")

#endif // _sun_security_provider_MD4_h_