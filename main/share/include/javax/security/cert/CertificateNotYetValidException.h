#ifndef _javax_security_cert_CertificateNotYetValidException_h_
#define _javax_security_cert_CertificateNotYetValidException_h_
//$ class javax.security.cert.CertificateNotYetValidException
//$ extends javax.security.cert.CertificateException

#include <javax/security/cert/CertificateException.h>

namespace javax {
	namespace security {
		namespace cert {

class $import CertificateNotYetValidException : public ::javax::security::cert::CertificateException {
	$class(CertificateNotYetValidException, $NO_CLASS_INIT, ::javax::security::cert::CertificateException)
public:
	CertificateNotYetValidException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x836E3AB144AFD75E;
	CertificateNotYetValidException(const CertificateNotYetValidException& e);
	CertificateNotYetValidException wrapper$();
	virtual void throwWrapper$() override;
};

		} // cert
	} // security
} // javax

#endif // _javax_security_cert_CertificateNotYetValidException_h_