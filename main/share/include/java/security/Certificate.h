#ifndef _java_security_Certificate_h_
#define _java_security_Certificate_h_
//$ interface java.security.Certificate
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace security {
		class Principal;
		class PublicKey;
	}
}

namespace java {
	namespace security {

class $import Certificate : public ::java::lang::Object {
	$interface(Certificate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void decode(::java::io::InputStream* stream) {}
	virtual void encode(::java::io::OutputStream* stream) {}
	virtual $String* getFormat() {return nullptr;}
	virtual ::java::security::Principal* getGuarantor() {return nullptr;}
	virtual ::java::security::Principal* getPrincipal() {return nullptr;}
	virtual ::java::security::PublicKey* getPublicKey() {return nullptr;}
	using ::java::lang::Object::toString;
	virtual $String* toString(bool detailed) {return nullptr;}
};

	} // security
} // java

#endif // _java_security_Certificate_h_