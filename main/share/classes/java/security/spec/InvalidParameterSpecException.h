#ifndef _java_security_spec_InvalidParameterSpecException_h_
#define _java_security_spec_InvalidParameterSpecException_h_
//$ class java.security.spec.InvalidParameterSpecException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace java {
	namespace security {
		namespace spec {

class $export InvalidParameterSpecException : public ::java::security::GeneralSecurityException {
	$class(InvalidParameterSpecException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	InvalidParameterSpecException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xF28833CBBAC667D2;
	InvalidParameterSpecException(const InvalidParameterSpecException& e);
	virtual void throw$() override;
	inline InvalidParameterSpecException* operator ->() {
		return (InvalidParameterSpecException*)throwing$;
	}
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_InvalidParameterSpecException_h_