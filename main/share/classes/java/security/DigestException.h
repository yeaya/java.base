#ifndef _java_security_DigestException_h_
#define _java_security_DigestException_h_
//$ class java.security.DigestException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace security {

class $export DigestException : public ::java::security::GeneralSecurityException {
	$class(DigestException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	DigestException();
	void init$();
	void init$($String* msg);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x50C9F235117CBC23;
	DigestException(const DigestException& e);
	virtual void throw$() override;
	inline DigestException* operator ->() {
		return (DigestException*)throwing$;
	}
};

	} // security
} // java

#endif // _java_security_DigestException_h_