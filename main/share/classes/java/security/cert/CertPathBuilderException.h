#ifndef _java_security_cert_CertPathBuilderException_h_
#define _java_security_cert_CertPathBuilderException_h_
//$ class java.security.cert.CertPathBuilderException
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

class $export CertPathBuilderException : public ::java::security::GeneralSecurityException {
	$class(CertPathBuilderException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	CertPathBuilderException();
	void init$();
	void init$($String* msg);
	void init$($Throwable* cause);
	void init$($String* msg, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x49C7E696BA4607A2;
	CertPathBuilderException(const CertPathBuilderException& e);
	virtual void throw$() override;
	inline CertPathBuilderException* operator ->() {
		return (CertPathBuilderException*)throwing$;
	}
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertPathBuilderException_h_