#ifndef _java_security_KeyStore$PrivateKeyEntry_h_
#define _java_security_KeyStore$PrivateKeyEntry_h_
//$ class java.security.KeyStore$PrivateKeyEntry
//$ extends java.security.KeyStore$Entry

#include <java/lang/Array.h>
#include <java/security/KeyStore$Entry.h>

namespace java {
	namespace security {
		class PrivateKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace security {

class $export KeyStore$PrivateKeyEntry : public ::java::security::KeyStore$Entry {
	$class(KeyStore$PrivateKeyEntry, $NO_CLASS_INIT, ::java::security::KeyStore$Entry)
public:
	KeyStore$PrivateKeyEntry();
	void init$(::java::security::PrivateKey* privateKey, $Array<::java::security::cert::Certificate>* chain);
	void init$(::java::security::PrivateKey* privateKey, $Array<::java::security::cert::Certificate>* chain, ::java::util::Set* attributes);
	virtual ::java::util::Set* getAttributes() override;
	::java::security::cert::Certificate* getCertificate();
	$Array<::java::security::cert::Certificate>* getCertificateChain();
	::java::security::PrivateKey* getPrivateKey();
	virtual $String* toString() override;
	::java::security::PrivateKey* privKey = nullptr;
	$Array<::java::security::cert::Certificate>* chain = nullptr;
	::java::util::Set* attributes = nullptr;
};

	} // security
} // java

#endif // _java_security_KeyStore$PrivateKeyEntry_h_