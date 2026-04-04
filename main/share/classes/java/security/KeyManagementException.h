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

class $export KeyManagementException : public ::java::security::KeyException {
	$class(KeyManagementException, $NO_CLASS_INIT, ::java::security::KeyException)
public:
	KeyManagementException();
	void init$();
	void init$($String* msg);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x0d26d0adb8d6a627;
	KeyManagementException(const KeyManagementException& e);
	virtual void throw$() override;
	inline KeyManagementException* operator ->() const {
		return (KeyManagementException*)throwing$;
	}
	inline operator KeyManagementException*() const {
		return (KeyManagementException*)throwing$;
	}
};

	} // security
} // java

#endif // _java_security_KeyManagementException_h_