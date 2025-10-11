#ifndef _java_security_cert_CRL_h_
#define _java_security_cert_CRL_h_
//$ class java.security.cert.CRL
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CRL")
#undef CRL

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

class $import CRL : public ::java::lang::Object {
	$class(CRL, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CRL();
	void init$($String* type);
	$String* getType();
	virtual bool isRevoked(::java::security::cert::Certificate* cert) {return false;}
	virtual $String* toString() override;
	$String* type = nullptr;
};

		} // cert
	} // security
} // java

#pragma pop_macro("CRL")

#endif // _java_security_cert_CRL_h_