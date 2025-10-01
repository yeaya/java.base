#ifndef _java_security_cert_CertStoreParameters_h_
#define _java_security_cert_CertStoreParameters_h_
//$ interface java.security.cert.CertStoreParameters
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace security {
		namespace cert {

class $export CertStoreParameters : public ::java::lang::Cloneable {
	$interface(CertStoreParameters, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	virtual $Object* clone() override;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertStoreParameters_h_