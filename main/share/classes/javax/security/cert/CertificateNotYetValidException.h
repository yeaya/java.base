#ifndef _javax_security_cert_CertificateNotYetValidException_h_
#define _javax_security_cert_CertificateNotYetValidException_h_
//$ class javax.security.cert.CertificateNotYetValidException
//$ extends javax.security.cert.CertificateException

#include <javax/security/cert/CertificateException.h>

namespace javax {
	namespace security {
		namespace cert {

class $export CertificateNotYetValidException : public ::javax::security::cert::CertificateException {
	$class(CertificateNotYetValidException, $NO_CLASS_INIT, ::javax::security::cert::CertificateException)
public:
	CertificateNotYetValidException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x836e3ab144afd75e;
	CertificateNotYetValidException(const CertificateNotYetValidException& e);
	virtual void throw$() override;
	inline CertificateNotYetValidException* operator ->() const {
		return (CertificateNotYetValidException*)throwing$;
	}
	inline operator CertificateNotYetValidException*() const {
		return (CertificateNotYetValidException*)throwing$;
	}
};

		} // cert
	} // security
} // javax

#endif // _javax_security_cert_CertificateNotYetValidException_h_