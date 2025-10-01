#ifndef _javax_security_cert_CertificateEncodingException_h_
#define _javax_security_cert_CertificateEncodingException_h_
//$ class javax.security.cert.CertificateEncodingException
//$ extends javax.security.cert.CertificateException

#include <javax/security/cert/CertificateException.h>

namespace javax {
	namespace security {
		namespace cert {

class $export CertificateEncodingException : public ::javax::security::cert::CertificateException {
	$class(CertificateEncodingException, $NO_CLASS_INIT, ::javax::security::cert::CertificateException)
public:
	CertificateEncodingException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x8E5FA652C8E34DF2;
	CertificateEncodingException(const CertificateEncodingException& e);
	CertificateEncodingException wrapper$();
	virtual void throwWrapper$() override;
};

		} // cert
	} // security
} // javax

#endif // _javax_security_cert_CertificateEncodingException_h_