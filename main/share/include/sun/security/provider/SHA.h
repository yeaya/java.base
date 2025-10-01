#ifndef _sun_security_provider_SHA_h_
#define _sun_security_provider_SHA_h_
//$ class sun.security.provider.SHA
//$ extends sun.security.provider.DigestBase

#include <java/lang/Array.h>
#include <sun/security/provider/DigestBase.h>

#pragma push_macro("W")
#undef W

namespace sun {
	namespace security {
		namespace provider {

class $import SHA : public ::sun::security::provider::DigestBase {
	$class(SHA, $NO_CLASS_INIT, ::sun::security::provider::DigestBase)
public:
	SHA();
	using ::sun::security::provider::DigestBase::engineUpdate;
	void init$();
	virtual $Object* clone() override;
	virtual void implCompress($bytes* buf, int32_t ofs) override;
	void implCompress0($bytes* buf, int32_t ofs);
	void implCompressCheck($bytes* buf, int32_t ofs);
	virtual void implDigest($bytes* out, int32_t ofs) override;
	virtual void implReset() override;
	void resetHashes();
	$ints* W = nullptr;
	$ints* state = nullptr;
	static const int32_t round1_kt = 0x5A827999;
	static const int32_t round2_kt = 0x6ED9EBA1;
	static const int32_t round3_kt = 0x8F1BBCDC;
	static const int32_t round4_kt = 0xCA62C1D6;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("W")

#endif // _sun_security_provider_SHA_h_