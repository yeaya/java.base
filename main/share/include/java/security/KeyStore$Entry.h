#ifndef _java_security_KeyStore$Entry_h_
#define _java_security_KeyStore$Entry_h_
//$ interface java.security.KeyStore$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace security {

class $import KeyStore$Entry : public ::java::lang::Object {
	$interface(KeyStore$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Set* getAttributes();
};

	} // security
} // java

#endif // _java_security_KeyStore$Entry_h_