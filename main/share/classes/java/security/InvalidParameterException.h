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
	static const int64_t serialVersionUID = (int64_t)0xf417e2294f7ce7a0;
	InvalidParameterException(const InvalidParameterException& e);
	virtual void throw$() override;
	inline InvalidParameterException* operator ->() const {
		return (InvalidParameterException*)throwing$;
	}
	inline operator InvalidParameterException*() const {
		return (InvalidParameterException*)throwing$;
	}
};

	} // security
} // java

#endif // _java_security_InvalidParameterException_h_