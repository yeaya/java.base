#ifndef _java_security_cert_X509Extension_h_
#define _java_security_cert_X509Extension_h_
//$ interface java.security.cert.X509Extension
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $export X509Extension : public ::java::lang::Object {
	$interface(X509Extension, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Set* getCriticalExtensionOIDs() {return nullptr;}
	virtual $bytes* getExtensionValue($String* oid) {return nullptr;}
	virtual ::java::util::Set* getNonCriticalExtensionOIDs() {return nullptr;}
	virtual bool hasUnsupportedCriticalExtension() {return false;}
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_X509Extension_h_