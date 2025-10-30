#ifndef _javax_security_cert_CertificateExpiredException_h_
#define _javax_security_cert_CertificateExpiredException_h_
//$ class javax.security.cert.CertificateExpiredException
//$ extends javax.security.cert.CertificateException

#include <javax/security/cert/CertificateException.h>

namespace javax {
	namespace security {
		namespace cert {

class $import CertificateExpiredException : public ::javax::security::cert::CertificateException {
	$class(CertificateExpiredException, $NO_CLASS_INIT, ::javax::security::cert::CertificateException)
public:
	CertificateExpiredException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x46A9005375C6253B;
	CertificateExpiredException(const CertificateExpiredException& e);
	virtual void throw$() override;
	inline CertificateExpiredException* operator ->() {
		return (CertificateExpiredException*)throwing$;
	}
};

		} // cert
	} // security
} // javax

#endif // _javax_security_cert_CertificateExpiredException_h_