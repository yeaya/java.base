#ifndef _java_security_cert_CertificateParsingException_h_
#define _java_security_cert_CertificateParsingException_h_
//$ class java.security.cert.CertificateParsingException
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

class $export CertificateParsingException : public ::java::security::cert::CertificateException {
	$class(CertificateParsingException, $NO_CLASS_INIT, ::java::security::cert::CertificateException)
public:
	CertificateParsingException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x9120948A67723DD3;
	CertificateParsingException(const CertificateParsingException& e);
	CertificateParsingException wrapper$();
	virtual void throwWrapper$() override;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertificateParsingException_h_