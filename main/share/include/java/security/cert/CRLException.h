#ifndef _java_security_cert_CRLException_h_
#define _java_security_cert_CRLException_h_
//$ class java.security.cert.CRLException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import CRLException : public ::java::security::GeneralSecurityException {
	$class(CRLException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	CRLException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xA3178B7EDBBD4A65;
	CRLException(const CRLException& e);
	CRLException wrapper$();
	virtual void throwWrapper$() override;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CRLException_h_