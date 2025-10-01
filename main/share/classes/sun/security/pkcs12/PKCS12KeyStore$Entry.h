#ifndef _sun_security_pkcs12_PKCS12KeyStore$Entry_h_
#define _sun_security_pkcs12_PKCS12KeyStore$Entry_h_
//$ class sun.security.pkcs12.PKCS12KeyStore$Entry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Date;
		class Set;
	}
}

namespace sun {
	namespace security {
		namespace pkcs12 {

class PKCS12KeyStore$Entry : public ::java::lang::Object {
	$class(PKCS12KeyStore$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PKCS12KeyStore$Entry();
	void init$();
	::java::util::Date* date = nullptr;
	$String* alias = nullptr;
	$bytes* keyId = nullptr;
	::java::util::Set* attributes = nullptr;
};

		} // pkcs12
	} // security
} // sun

#endif // _sun_security_pkcs12_PKCS12KeyStore$Entry_h_