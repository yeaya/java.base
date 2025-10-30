#ifndef _java_security_InvalidAlgorithmParameterException_h_
#define _java_security_InvalidAlgorithmParameterException_h_
//$ class java.security.InvalidAlgorithmParameterException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace security {

class $export InvalidAlgorithmParameterException : public ::java::security::GeneralSecurityException {
	$class(InvalidAlgorithmParameterException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	InvalidAlgorithmParameterException();
	void init$();
	void init$($String* msg);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x27C15C46E25BAE70;
	InvalidAlgorithmParameterException(const InvalidAlgorithmParameterException& e);
	virtual void throw$() override;
	inline InvalidAlgorithmParameterException* operator ->() {
		return (InvalidAlgorithmParameterException*)throwing$;
	}
};

	} // security
} // java

#endif // _java_security_InvalidAlgorithmParameterException_h_