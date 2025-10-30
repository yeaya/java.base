#ifndef _java_security_cert_CertificateException_h_
#define _java_security_cert_CertificateException_h_
//$ class java.security.cert.CertificateException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import CertificateException : public ::java::security::GeneralSecurityException {
	$class(CertificateException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	CertificateException();
	void init$();
	void init$($String* msg);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x2C4E29E6077D2736;
	CertificateException(const CertificateException& e);
	virtual void throw$() override;
	inline CertificateException* operator ->() {
		return (CertificateException*)throwing$;
	}
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertificateException_h_