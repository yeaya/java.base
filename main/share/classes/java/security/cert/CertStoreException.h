#ifndef _java_security_cert_CertStoreException_h_
#define _java_security_cert_CertStoreException_h_
//$ class java.security.cert.CertStoreException
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

class $export CertStoreException : public ::java::security::GeneralSecurityException {
	$class(CertStoreException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	CertStoreException();
	void init$();
	void init$($String* msg);
	void init$($Throwable* cause);
	void init$($String* msg, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x213DCD1E71B810FD;
	CertStoreException(const CertStoreException& e);
	CertStoreException wrapper$();
	virtual void throwWrapper$() override;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertStoreException_h_