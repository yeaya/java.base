#ifndef _java_security_cert_CertificateEncodingException_h_
#define _java_security_cert_CertificateEncodingException_h_
//$ class java.security.cert.CertificateEncodingException
//$ extends java.security.cert.CertificateException

#include <java/security/cert/CertificateException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $export CertificateEncodingException : public ::java::security::cert::CertificateException {
	$class(CertificateEncodingException, $NO_CLASS_INIT, ::java::security::cert::CertificateException)
public:
	CertificateEncodingException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x565013CBD61205CA;
	CertificateEncodingException(const CertificateEncodingException& e);
	virtual void throw$() override;
	inline CertificateEncodingException* operator ->() {
		return (CertificateEncodingException*)throwing$;
	}
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertificateEncodingException_h_