#ifndef _java_security_ProviderException_h_
#define _java_security_ProviderException_h_
//$ class java.security.ProviderException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace security {

class $import ProviderException : public ::java::lang::RuntimeException {
	$class(ProviderException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ProviderException();
	void init$();
	void init$($String* s);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x48F1258CC7ABFB8A;
	ProviderException(const ProviderException& e);
	virtual void throw$() override;
	inline ProviderException* operator ->() {
		return (ProviderException*)throwing$;
	}
};

	} // security
} // java

#endif // _java_security_ProviderException_h_