#ifndef _java_security_spec_InvalidKeySpecException_h_
#define _java_security_spec_InvalidKeySpecException_h_
//$ class java.security.spec.InvalidKeySpecException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace security {
		namespace spec {

class $export InvalidKeySpecException : public ::java::security::GeneralSecurityException {
	$class(InvalidKeySpecException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	InvalidKeySpecException();
	void init$();
	void init$($String* msg);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x31366AE64EDA869A;
	InvalidKeySpecException(const InvalidKeySpecException& e);
	InvalidKeySpecException wrapper$();
	virtual void throwWrapper$() override;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_InvalidKeySpecException_h_