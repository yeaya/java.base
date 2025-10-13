#ifndef _sun_security_ssl_JsseJce_h_
#define _sun_security_ssl_JsseJce_h_
//$ class sun.security.ssl.JsseJce
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ALLOW_ECC")
#undef ALLOW_ECC
#pragma push_macro("CIPHER_3DES")
#undef CIPHER_3DES
#pragma push_macro("CIPHER_AES")
#undef CIPHER_AES
#pragma push_macro("CIPHER_AES_GCM")
#undef CIPHER_AES_GCM
#pragma push_macro("CIPHER_DES")
#undef CIPHER_DES
#pragma push_macro("CIPHER_RC4")
#undef CIPHER_RC4
#pragma push_macro("CIPHER_RSA_PKCS1")
#undef CIPHER_RSA_PKCS1
#pragma push_macro("SIGNATURE_DSA")
#undef SIGNATURE_DSA
#pragma push_macro("SIGNATURE_ECDSA")
#undef SIGNATURE_ECDSA
#pragma push_macro("SIGNATURE_EDDSA")
#undef SIGNATURE_EDDSA
#pragma push_macro("SIGNATURE_RAWDSA")
#undef SIGNATURE_RAWDSA
#pragma push_macro("SIGNATURE_RAWECDSA")
#undef SIGNATURE_RAWECDSA
#pragma push_macro("SIGNATURE_RAWRSA")
#undef SIGNATURE_RAWRSA
#pragma push_macro("SIGNATURE_SSLRSA")
#undef SIGNATURE_SSLRSA

namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class RSAPublicKeySpec;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class JsseJce : public ::java::lang::Object {
	$class(JsseJce, 0, ::java::lang::Object)
public:
	JsseJce();
	void init$();
	static int32_t getRSAKeyLength(::java::security::PublicKey* key);
	static ::java::security::spec::RSAPublicKeySpec* getRSAPublicKeySpec(::java::security::PublicKey* key);
	static bool isEcAvailable();
	static bool ALLOW_ECC;
	static $String* CIPHER_RSA_PKCS1;
	static $String* CIPHER_RC4;
	static $String* CIPHER_DES;
	static $String* CIPHER_3DES;
	static $String* CIPHER_AES;
	static $String* CIPHER_AES_GCM;
	static $String* CIPHER_CHACHA20_POLY1305;
	static $String* SIGNATURE_DSA;
	static $String* SIGNATURE_ECDSA;
	static $String* SIGNATURE_EDDSA;
	static $String* SIGNATURE_RAWDSA;
	static $String* SIGNATURE_RAWECDSA;
	static $String* SIGNATURE_RAWRSA;
	static $String* SIGNATURE_SSLRSA;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("ALLOW_ECC")
#pragma pop_macro("CIPHER_3DES")
#pragma pop_macro("CIPHER_AES")
#pragma pop_macro("CIPHER_AES_GCM")
#pragma pop_macro("CIPHER_DES")
#pragma pop_macro("CIPHER_RC4")
#pragma pop_macro("CIPHER_RSA_PKCS1")
#pragma pop_macro("SIGNATURE_DSA")
#pragma pop_macro("SIGNATURE_ECDSA")
#pragma pop_macro("SIGNATURE_EDDSA")
#pragma pop_macro("SIGNATURE_RAWDSA")
#pragma pop_macro("SIGNATURE_RAWECDSA")
#pragma pop_macro("SIGNATURE_RAWRSA")
#pragma pop_macro("SIGNATURE_SSLRSA")

#endif // _sun_security_ssl_JsseJce_h_