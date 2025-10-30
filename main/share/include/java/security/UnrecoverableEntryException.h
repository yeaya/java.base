#ifndef _java_security_UnrecoverableEntryException_h_
#define _java_security_UnrecoverableEntryException_h_
//$ class java.security.UnrecoverableEntryException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace java {
	namespace security {

class $import UnrecoverableEntryException : public ::java::security::GeneralSecurityException {
	$class(UnrecoverableEntryException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	UnrecoverableEntryException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xC12C5B7A252DED39;
	UnrecoverableEntryException(const UnrecoverableEntryException& e);
	virtual void throw$() override;
	inline UnrecoverableEntryException* operator ->() {
		return (UnrecoverableEntryException*)throwing$;
	}
};

	} // security
} // java

#endif // _java_security_UnrecoverableEntryException_h_