#ifndef _java_security_KeyException_h_
#define _java_security_KeyException_h_
//$ class java.security.KeyException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace security {

class $export KeyException : public ::java::security::GeneralSecurityException {
	$class(KeyException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	KeyException();
	void init$();
	void init$($String* msg);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x9824A37881E23914;
	KeyException(const KeyException& e);
	KeyException wrapper$();
	virtual void throwWrapper$() override;
};

	} // security
} // java

#endif // _java_security_KeyException_h_