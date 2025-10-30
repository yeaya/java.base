#ifndef _java_security_cert_CertificateNotYetValidException_h_
#define _java_security_cert_CertificateNotYetValidException_h_
//$ class java.security.cert.CertificateNotYetValidException
//$ extends java.security.cert.CertificateException

#include <java/security/cert/CertificateException.h>

namespace java {
	namespace security {
		namespace cert {

class $import CertificateNotYetValidException : public ::java::security::cert::CertificateException {
	$class(CertificateNotYetValidException, $NO_CLASS_INIT, ::java::security::cert::CertificateException)
public:
	CertificateNotYetValidException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x3C7356120800B0FE;
	CertificateNotYetValidException(const CertificateNotYetValidException& e);
	virtual void throw$() override;
	inline CertificateNotYetValidException* operator ->() {
		return (CertificateNotYetValidException*)throwing$;
	}
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertificateNotYetValidException_h_