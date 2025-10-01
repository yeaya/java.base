#ifndef _sun_security_x509_CertAttrSet_h_
#define _sun_security_x509_CertAttrSet_h_
//$ interface sun.security.x509.CertAttrSet
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import CertAttrSet : public ::java::lang::Object {
	$interface(CertAttrSet, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void delete$($String* name) {}
	virtual void encode(::java::io::OutputStream* out) {}
	virtual $Object* get($String* name) {return nullptr;}
	virtual ::java::util::Enumeration* getElements() {return nullptr;}
	virtual $String* getName() {return nullptr;}
	virtual void set($String* name, Object$* obj) {}
	virtual $String* toString() override;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_CertAttrSet_h_