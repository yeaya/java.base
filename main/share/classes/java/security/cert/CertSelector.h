#ifndef _java_security_cert_CertSelector_h_
#define _java_security_cert_CertSelector_h_
//$ interface java.security.cert.CertSelector
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}

namespace java {
	namespace security {
		namespace cert {

class $export CertSelector : public ::java::lang::Cloneable {
	$interface(CertSelector, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	virtual $Object* clone() override;
	virtual bool match(::java::security::cert::Certificate* cert) {return false;}
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertSelector_h_