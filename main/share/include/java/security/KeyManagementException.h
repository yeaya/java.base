#ifndef _java_security_KeyManagementException_h_
#define _java_security_KeyManagementException_h_
//$ class java.security.KeyManagementException
//$ extends java.security.KeyException

#include <java/security/KeyException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace security {

class $import KeyManagementException : public ::java::security::KeyException {
	$class(KeyManagementException, $NO_CLASS_INIT, ::java::security::KeyException)
public:
	KeyManagementException();
	void init$();
	void init$($String* msg);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x0D26D0ADB8D6A627;
	KeyManagementException(const KeyManagementException& e);
	KeyManagementException wrapper$();
	virtual void throwWrapper$() override;
};

	} // security
} // java

#endif // _java_security_KeyManagementException_h_