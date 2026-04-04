#ifndef _java_security_NoSuchAlgorithmException_h_
#define _java_security_NoSuchAlgorithmException_h_
//$ class java.security.NoSuchAlgorithmException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace security {

class $import NoSuchAlgorithmException : public ::java::security::GeneralSecurityException {
	$class(NoSuchAlgorithmException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	NoSuchAlgorithmException();
	void init$();
	void init$($String* msg);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x98b1c93339b055be;
	NoSuchAlgorithmException(const NoSuchAlgorithmException& e);
	virtual void throw$() override;
	inline NoSuchAlgorithmException* operator ->() const {
		return (NoSuchAlgorithmException*)throwing$;
	}
	inline operator NoSuchAlgorithmException*() const {
		return (NoSuchAlgorithmException*)throwing$;
	}
};

	} // security
} // java

#endif // _java_security_NoSuchAlgorithmException_h_