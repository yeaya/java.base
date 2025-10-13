#ifndef _sun_security_provider_SHA3_h_
#define _sun_security_provider_SHA3_h_
//$ class sun.security.provider.SHA3
//$ extends sun.security.provider.DigestBase

#include <java/lang/Array.h>
#include <sun/security/provider/DigestBase.h>

#pragma push_macro("DM")
#undef DM
#pragma push_macro("NR")
#undef NR
#pragma push_macro("RC_CONSTANTS")
#undef RC_CONSTANTS
#pragma push_macro("SHA3")
#undef SHA3
#pragma push_macro("WIDTH")
#undef WIDTH

namespace sun {
	namespace security {
		namespace provider {

class $export SHA3 : public ::sun::security::provider::DigestBase {
	$class(SHA3, 0, ::sun::security::provider::DigestBase)
public:
	SHA3();
	using ::sun::security::provider::DigestBase::engineUpdate;
	void init$($String* name, int32_t digestLength, int8_t suffix, int32_t c);
	static void bytes2Lanes($bytes* s, $longs* m);
	virtual $Object* clone() override;
	virtual void implCompress($bytes* b, int32_t ofs) override;
	void implCompress0($bytes* b, int32_t ofs);
	void implCompressCheck($bytes* b, int32_t ofs);
	virtual void implDigest($bytes* out, int32_t ofs) override;
	virtual void implReset() override;
	void keccak();
	static void lanes2Bytes($longs* m, $bytes* s);
	static int32_t setPaddingBytes(int8_t suffix, $bytes* in, int32_t len);
	static $longs* smChi($longs* a);
	static $longs* smIota($longs* a, int32_t rndIndex);
	static $longs* smPiRho($longs* a);
	static $longs* smTheta($longs* a);
	static const int32_t WIDTH = 200;
	static const int32_t DM = 5;
	static const int32_t NR = 24;
	static $longs* RC_CONSTANTS;
	int8_t suffix = 0;
	$bytes* state = nullptr;
	$longs* lanes = nullptr;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("DM")
#pragma pop_macro("NR")
#pragma pop_macro("RC_CONSTANTS")
#pragma pop_macro("SHA3")
#pragma pop_macro("WIDTH")

#endif // _sun_security_provider_SHA3_h_