#ifndef _java_security_cert_CertPathChecker_h_
#define _java_security_cert_CertPathChecker_h_
//$ interface java.security.cert.CertPathChecker
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export CertPathChecker : public ::java::lang::Object {
	$interface(CertPathChecker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void check(::java::security::cert::Certificate* cert) {}
	virtual void init(bool forward) {}
	virtual bool isForwardCheckingSupported() {return false;}
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertPathChecker_h_