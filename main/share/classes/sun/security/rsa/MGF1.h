#ifndef _sun_security_rsa_MGF1_h_
#define _sun_security_rsa_MGF1_h_
//$ class sun.security.rsa.MGF1
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MGF1")
#undef MGF1

namespace java {
	namespace security {
		class MessageDigest;
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class $export MGF1 : public ::java::lang::Object {
	$class(MGF1, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MGF1();
	void init$($String* mdAlgo);
	void generateAndXor($bytes* seed, int32_t seedOfs, int32_t seedLen, int32_t maskLen, $bytes* out, int32_t outOfs);
	$String* getName();
	::java::security::MessageDigest* md = nullptr;
};

		} // rsa
	} // security
} // sun

#pragma pop_macro("MGF1")

#endif // _sun_security_rsa_MGF1_h_