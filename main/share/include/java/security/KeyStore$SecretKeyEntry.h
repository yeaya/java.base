#ifndef _java_security_KeyStore$SecretKeyEntry_h_
#define _java_security_KeyStore$SecretKeyEntry_h_
//$ class java.security.KeyStore$SecretKeyEntry
//$ extends java.security.KeyStore$Entry

#include <java/security/KeyStore$Entry.h>

namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace crypto {
		class SecretKey;
	}
}

namespace java {
	namespace security {

class $import KeyStore$SecretKeyEntry : public ::java::security::KeyStore$Entry {
	$class(KeyStore$SecretKeyEntry, $NO_CLASS_INIT, ::java::security::KeyStore$Entry)
public:
	KeyStore$SecretKeyEntry();
	void init$(::javax::crypto::SecretKey* secretKey);
	void init$(::javax::crypto::SecretKey* secretKey, ::java::util::Set* attributes);
	virtual ::java::util::Set* getAttributes() override;
	::javax::crypto::SecretKey* getSecretKey();
	virtual $String* toString() override;
	::javax::crypto::SecretKey* sKey = nullptr;
	::java::util::Set* attributes = nullptr;
};

	} // security
} // java

#endif // _java_security_KeyStore$SecretKeyEntry_h_