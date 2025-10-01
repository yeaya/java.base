#ifndef _sun_security_util_SignatureUtil$PSSParamsHolder_h_
#define _sun_security_util_SignatureUtil$PSSParamsHolder_h_
//$ class sun.security.util.SignatureUtil$PSSParamsHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PSS_512_SPEC")
#undef PSS_512_SPEC
#pragma push_macro("PSS_256_SPEC")
#undef PSS_256_SPEC
#pragma push_macro("PSS_384_SPEC")
#undef PSS_384_SPEC

namespace java {
	namespace security {
		namespace spec {
			class PSSParameterSpec;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class SignatureUtil$PSSParamsHolder : public ::java::lang::Object {
	$class(SignatureUtil$PSSParamsHolder, 0, ::java::lang::Object)
public:
	SignatureUtil$PSSParamsHolder();
	void init$();
	static ::java::security::spec::PSSParameterSpec* PSS_256_SPEC;
	static ::java::security::spec::PSSParameterSpec* PSS_384_SPEC;
	static ::java::security::spec::PSSParameterSpec* PSS_512_SPEC;
};

		} // util
	} // security
} // sun

#pragma pop_macro("PSS_512_SPEC")
#pragma pop_macro("PSS_256_SPEC")
#pragma pop_macro("PSS_384_SPEC")

#endif // _sun_security_util_SignatureUtil$PSSParamsHolder_h_