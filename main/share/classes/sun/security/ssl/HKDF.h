#ifndef _sun_security_ssl_HKDF_h_
#define _sun_security_ssl_HKDF_h_
//$ class sun.security.ssl.HKDF
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HKDF")
#undef HKDF

namespace javax {
	namespace crypto {
		class Mac;
		class SecretKey;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class HKDF : public ::java::lang::Object {
	$class(HKDF, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HKDF();
	void init$($String* hashAlg);
	::javax::crypto::SecretKey* expand(::javax::crypto::SecretKey* pseudoRandKey, $bytes* info, int32_t outLen, $String* keyAlg);
	::javax::crypto::SecretKey* extract(::javax::crypto::SecretKey* salt, ::javax::crypto::SecretKey* inputKey, $String* keyAlg);
	::javax::crypto::SecretKey* extract($bytes* salt, ::javax::crypto::SecretKey* inputKey, $String* keyAlg);
	::javax::crypto::Mac* hmacObj = nullptr;
	int32_t hmacLen = 0;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("HKDF")

#endif // _sun_security_ssl_HKDF_h_