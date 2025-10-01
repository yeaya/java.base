#ifndef _java_security_KeyStore$LoadStoreParameter_h_
#define _java_security_KeyStore$LoadStoreParameter_h_
//$ interface java.security.KeyStore$LoadStoreParameter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class KeyStore$ProtectionParameter;
	}
}

namespace java {
	namespace security {

class $import KeyStore$LoadStoreParameter : public ::java::lang::Object {
	$interface(KeyStore$LoadStoreParameter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::security::KeyStore$ProtectionParameter* getProtectionParameter() {return nullptr;}
};

	} // security
} // java

#endif // _java_security_KeyStore$LoadStoreParameter_h_