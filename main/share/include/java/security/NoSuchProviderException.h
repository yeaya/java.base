#ifndef _java_security_NoSuchProviderException_h_
#define _java_security_NoSuchProviderException_h_
//$ class java.security.NoSuchProviderException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace java {
	namespace security {

class $import NoSuchProviderException : public ::java::security::GeneralSecurityException {
	$class(NoSuchProviderException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	NoSuchProviderException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x75cbd4abb73cabca;
	NoSuchProviderException(const NoSuchProviderException& e);
	virtual void throw$() override;
	inline NoSuchProviderException* operator ->() const {
		return (NoSuchProviderException*)throwing$;
	}
	inline operator NoSuchProviderException*() const {
		return (NoSuchProviderException*)throwing$;
	}
};

	} // security
} // java

#endif // _java_security_NoSuchProviderException_h_