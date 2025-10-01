#ifndef _java_security_KeyPair_h_
#define _java_security_KeyPair_h_
//$ class java.security.KeyPair
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace security {
		class PrivateKey;
		class PublicKey;
	}
}

namespace java {
	namespace security {

class $export KeyPair : public ::java::io::Serializable {
	$class(KeyPair, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	KeyPair();
	void init$(::java::security::PublicKey* publicKey, ::java::security::PrivateKey* privateKey);
	::java::security::PrivateKey* getPrivate();
	::java::security::PublicKey* getPublic();
	static const int64_t serialVersionUID = (int64_t)0x97030C3AD2CD1293;
	::java::security::PrivateKey* privateKey = nullptr;
	::java::security::PublicKey* publicKey = nullptr;
};

	} // security
} // java

#endif // _java_security_KeyPair_h_