#ifndef _java_security_KeyStore$SimpleLoadStoreParameter_h_
#define _java_security_KeyStore$SimpleLoadStoreParameter_h_
//$ class java.security.KeyStore$SimpleLoadStoreParameter
//$ extends java.security.KeyStore$LoadStoreParameter

#include <java/security/KeyStore$LoadStoreParameter.h>

namespace java {
	namespace security {
		class KeyStore$ProtectionParameter;
	}
}

namespace java {
	namespace security {

class $import KeyStore$SimpleLoadStoreParameter : public ::java::security::KeyStore$LoadStoreParameter {
	$class(KeyStore$SimpleLoadStoreParameter, $NO_CLASS_INIT, ::java::security::KeyStore$LoadStoreParameter)
public:
	KeyStore$SimpleLoadStoreParameter();
	void init$(::java::security::KeyStore$ProtectionParameter* protection);
	virtual ::java::security::KeyStore$ProtectionParameter* getProtectionParameter() override;
	::java::security::KeyStore$ProtectionParameter* protection = nullptr;
};

	} // security
} // java

#endif // _java_security_KeyStore$SimpleLoadStoreParameter_h_