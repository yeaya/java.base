#ifndef _java_security_cert_CRLSelector_h_
#define _java_security_cert_CRLSelector_h_
//$ interface java.security.cert.CRLSelector
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace security {
		namespace cert {
			class CRL;
		}
	}
}

namespace java {
	namespace security {
		namespace cert {

class $export CRLSelector : public ::java::lang::Cloneable {
	$interface(CRLSelector, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	virtual $Object* clone() override;
	virtual bool match(::java::security::cert::CRL* crl) {return false;}
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CRLSelector_h_