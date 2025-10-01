#ifndef _java_security_GeneralSecurityException_h_
#define _java_security_GeneralSecurityException_h_
//$ class java.security.GeneralSecurityException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace security {

class $export GeneralSecurityException : public ::java::lang::Exception {
	$class(GeneralSecurityException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	GeneralSecurityException();
	void init$();
	void init$($String* msg);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x0C6AF626B2B015A5;
	GeneralSecurityException(const GeneralSecurityException& e);
	GeneralSecurityException wrapper$();
	virtual void throwWrapper$() override;
};

	} // security
} // java

#endif // _java_security_GeneralSecurityException_h_