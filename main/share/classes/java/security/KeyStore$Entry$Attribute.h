#ifndef _java_security_KeyStore$Entry$Attribute_h_
#define _java_security_KeyStore$Entry$Attribute_h_
//$ interface java.security.KeyStore$Entry$Attribute
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {

class $export KeyStore$Entry$Attribute : public ::java::lang::Object {
	$interface(KeyStore$Entry$Attribute, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getName() {return nullptr;}
	virtual $String* getValue() {return nullptr;}
};

	} // security
} // java

#endif // _java_security_KeyStore$Entry$Attribute_h_