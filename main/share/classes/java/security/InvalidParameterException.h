#ifndef _java_security_InvalidParameterException_h_
#define _java_security_InvalidParameterException_h_
//$ class java.security.InvalidParameterException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace java {
	namespace security {

class $export InvalidParameterException : public ::java::lang::IllegalArgumentException {
	$class(InvalidParameterException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	InvalidParameterException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xF417E2294F7CE7A0;
	InvalidParameterException(const InvalidParameterException& e);
	InvalidParameterException wrapper$();
	virtual void throwWrapper$() override;
};

	} // security
} // java

#endif // _java_security_InvalidParameterException_h_