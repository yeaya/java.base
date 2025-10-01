#ifndef _java_security_cert_Extension_h_
#define _java_security_cert_Extension_h_
//$ interface java.security.cert.Extension
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import Extension : public ::java::lang::Object {
	$interface(Extension, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void encode(::java::io::OutputStream* out) {}
	virtual $String* getId() {return nullptr;}
	virtual $bytes* getValue() {return nullptr;}
	virtual bool isCritical() {return false;}
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_Extension_h_