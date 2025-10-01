#ifndef _sun_security_provider_MD2_h_
#define _sun_security_provider_MD2_h_
//$ class sun.security.provider.MD2
//$ extends sun.security.provider.DigestBase

#include <java/lang/Array.h>
#include <sun/security/provider/DigestBase.h>

#pragma push_macro("C")
#undef C
#pragma push_macro("S")
#undef S
#pragma push_macro("X")
#undef X
#pragma push_macro("PADDING")
#undef PADDING

namespace sun {
	namespace security {
		namespace provider {

class $import MD2 : public ::sun::security::provider::DigestBase {
	$class(MD2, 0, ::sun::security::provider::DigestBase)
public:
	MD2();
	using ::sun::security::provider::DigestBase::engineUpdate;
	void init$();
	virtual $Object* clone() override;
	virtual void implCompress($bytes* b, int32_t ofs) override;
	virtual void implDigest($bytes* out, int32_t ofs) override;
	virtual void implReset() override;
	$ints* X = nullptr;
	$ints* C = nullptr;
	$bytes* cBytes = nullptr;
	static $ints* S;
	static $Array<int8_t, 2>* PADDING;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("C")
#pragma pop_macro("S")
#pragma pop_macro("X")
#pragma pop_macro("PADDING")

#endif // _sun_security_provider_MD2_h_