#ifndef _java_security_cert_CertificateExpiredException_h_
#define _java_security_cert_CertificateExpiredException_h_
//$ class java.security.cert.CertificateExpiredException
//$ extends java.security.cert.CertificateException

#include <java/security/cert/CertificateException.h>

namespace java {
	namespace security {
		namespace cert {

class $import CertificateExpiredException : public ::java::security::cert::CertificateException {
	$class(CertificateExpiredException, $NO_CLASS_INIT, ::java::security::cert::CertificateException)
public:
	CertificateExpiredException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x7DE2ABA8816805CB;
	CertificateExpiredException(const CertificateExpiredException& e);
	virtual void throw$() override;
	inline CertificateExpiredException* operator ->() {
		return (CertificateExpiredException*)throwing$;
	}
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertificateExpiredException_h_