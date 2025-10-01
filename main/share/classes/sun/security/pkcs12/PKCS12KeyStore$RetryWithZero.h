#ifndef _sun_security_pkcs12_PKCS12KeyStore$RetryWithZero_h_
#define _sun_security_pkcs12_PKCS12KeyStore$RetryWithZero_h_
//$ interface sun.security.pkcs12.PKCS12KeyStore$RetryWithZero
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace pkcs12 {

class PKCS12KeyStore$RetryWithZero : public ::java::lang::Object {
	$interface(PKCS12KeyStore$RetryWithZero, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static $Object* run(::sun::security::pkcs12::PKCS12KeyStore$RetryWithZero* f, $chars* password);
	virtual $Object* tryOnce($chars* password) {return nullptr;}
};

		} // pkcs12
	} // security
} // sun

#endif // _sun_security_pkcs12_PKCS12KeyStore$RetryWithZero_h_