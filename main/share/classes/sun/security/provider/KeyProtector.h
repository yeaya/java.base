#ifndef _sun_security_provider_KeyProtector_h_
#define _sun_security_provider_KeyProtector_h_
//$ class sun.security.provider.KeyProtector
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DIGEST_ALG")
#undef DIGEST_ALG
#pragma push_macro("DIGEST_LEN")
#undef DIGEST_LEN
#pragma push_macro("SALT_LEN")
#undef SALT_LEN

namespace java {
	namespace security {
		class Key;
		class MessageDigest;
	}
}
namespace sun {
	namespace security {
		namespace pkcs {
			class EncryptedPrivateKeyInfo;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class KeyProtector : public ::java::lang::Object {
	$class(KeyProtector, 0, ::java::lang::Object)
public:
	KeyProtector();
	void init$($bytes* passwordBytes);
	$bytes* protect(::java::security::Key* key);
	::java::security::Key* recover(::sun::security::pkcs::EncryptedPrivateKeyInfo* encrInfo);
	static const int32_t SALT_LEN = 20;
	static $String* DIGEST_ALG;
	static const int32_t DIGEST_LEN = 20;
	$bytes* passwdBytes = nullptr;
	::java::security::MessageDigest* md = nullptr;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("DIGEST_ALG")
#pragma pop_macro("DIGEST_LEN")
#pragma pop_macro("SALT_LEN")

#endif // _sun_security_provider_KeyProtector_h_