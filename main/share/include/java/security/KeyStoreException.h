#ifndef _java_security_KeyStoreException_h_
#define _java_security_KeyStoreException_h_
//$ class java.security.KeyStoreException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace security {

class $import KeyStoreException : public ::java::security::GeneralSecurityException {
	$class(KeyStoreException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	KeyStoreException();
	void init$();
	void init$($String* msg);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xF0774236C8491BD2;
	KeyStoreException(const KeyStoreException& e);
	KeyStoreException wrapper$();
	virtual void throwWrapper$() override;
};

	} // security
} // java

#endif // _java_security_KeyStoreException_h_