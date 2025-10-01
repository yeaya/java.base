#ifndef _sun_security_x509_CertParseError_h_
#define _sun_security_x509_CertParseError_h_
//$ class sun.security.x509.CertParseError
//$ extends sun.security.x509.CertException

#include <sun/security/x509/CertException.h>

namespace sun {
	namespace security {
		namespace x509 {

class CertParseError : public ::sun::security::x509::CertException {
	$class(CertParseError, $NO_CLASS_INIT, ::sun::security::x509::CertException)
public:
	CertParseError();
	void init$($String* where);
	static const int64_t serialVersionUID = (int64_t)0xC0B8E28EF949FE34;
	CertParseError(const CertParseError& e);
	CertParseError wrapper$();
	virtual void throwWrapper$() override;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_CertParseError_h_