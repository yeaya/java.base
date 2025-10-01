#ifndef _java_security_SignatureException_h_
#define _java_security_SignatureException_h_
//$ class java.security.SignatureException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace security {

class $export SignatureException : public ::java::security::GeneralSecurityException {
	$class(SignatureException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	SignatureException();
	void init$();
	void init$($String* msg);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x6838D7805E1E2FD6;
	SignatureException(const SignatureException& e);
	SignatureException wrapper$();
	virtual void throwWrapper$() override;
};

	} // security
} // java

#endif // _java_security_SignatureException_h_