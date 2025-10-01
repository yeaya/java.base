#ifndef _java_security_InvalidKeyException_h_
#define _java_security_InvalidKeyException_h_
//$ class java.security.InvalidKeyException
//$ extends java.security.KeyException

#include <java/security/KeyException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace security {

class $export InvalidKeyException : public ::java::security::KeyException {
	$class(InvalidKeyException, $NO_CLASS_INIT, ::java::security::KeyException)
public:
	InvalidKeyException();
	void init$();
	void init$($String* msg);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x4F15114BC2A9D3C8;
	InvalidKeyException(const InvalidKeyException& e);
	InvalidKeyException wrapper$();
	virtual void throwWrapper$() override;
};

	} // security
} // java

#endif // _java_security_InvalidKeyException_h_