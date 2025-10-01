#ifndef _java_security_KeyStore$Builder$1_h_
#define _java_security_KeyStore$Builder$1_h_
//$ class java.security.KeyStore$Builder$1
//$ extends java.security.KeyStore$Builder

#include <java/security/KeyStore$Builder.h>

namespace java {
	namespace security {
		class KeyStore;
		class KeyStore$ProtectionParameter;
	}
}

namespace java {
	namespace security {

class KeyStore$Builder$1 : public ::java::security::KeyStore$Builder {
	$class(KeyStore$Builder$1, $NO_CLASS_INIT, ::java::security::KeyStore$Builder)
public:
	KeyStore$Builder$1();
	void init$(::java::security::KeyStore* val$keyStore, ::java::security::KeyStore$ProtectionParameter* val$protectionParameter);
	virtual ::java::security::KeyStore* getKeyStore() override;
	virtual ::java::security::KeyStore$ProtectionParameter* getProtectionParameter($String* alias) override;
	::java::security::KeyStore$ProtectionParameter* val$protectionParameter = nullptr;
	::java::security::KeyStore* val$keyStore = nullptr;
	$volatile(bool) getCalled = false;
};

	} // security
} // java

#endif // _java_security_KeyStore$Builder$1_h_