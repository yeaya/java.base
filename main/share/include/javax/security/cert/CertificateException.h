#ifndef _javax_security_cert_CertificateException_h_
#define _javax_security_cert_CertificateException_h_
//$ class javax.security.cert.CertificateException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace security {
		namespace cert {

class $import CertificateException : public ::java::lang::Exception {
	$class(CertificateException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	CertificateException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xB01A44F078C454F6;
	CertificateException(const CertificateException& e);
	virtual void throw$() override;
	inline CertificateException* operator ->() {
		return (CertificateException*)throwing$;
	}
};

		} // cert
	} // security
} // javax

#endif // _javax_security_cert_CertificateException_h_