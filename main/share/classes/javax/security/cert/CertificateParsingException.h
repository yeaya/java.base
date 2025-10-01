#ifndef _javax_security_cert_CertificateParsingException_h_
#define _javax_security_cert_CertificateParsingException_h_
//$ class javax.security.cert.CertificateParsingException
//$ extends javax.security.cert.CertificateException

#include <javax/security/cert/CertificateException.h>

namespace javax {
	namespace security {
		namespace cert {

class $export CertificateParsingException : public ::javax::security::cert::CertificateException {
	$class(CertificateParsingException, $NO_CLASS_INIT, ::javax::security::cert::CertificateException)
public:
	CertificateParsingException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x8ABDDEBCE7E9541B;
	CertificateParsingException(const CertificateParsingException& e);
	CertificateParsingException wrapper$();
	virtual void throwWrapper$() override;
};

		} // cert
	} // security
} // javax

#endif // _javax_security_cert_CertificateParsingException_h_