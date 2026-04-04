#ifndef _java_security_UnrecoverableEntryException_h_
#define _java_security_UnrecoverableEntryException_h_
//$ class java.security.UnrecoverableEntryException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace java {
	namespace security {

class $export UnrecoverableEntryException : public ::java::security::GeneralSecurityException {
	$class(UnrecoverableEntryException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	UnrecoverableEntryException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xc12c5b7a252ded39;
	UnrecoverableEntryException(const UnrecoverableEntryException& e);
	virtual void throw$() override;
	inline UnrecoverableEntryException* operator ->() const {
		return (UnrecoverableEntryException*)throwing$;
	}
	inline operator UnrecoverableEntryException*() const {
		return (UnrecoverableEntryException*)throwing$;
	}
};

	} // security
} // java

#endif // _java_security_UnrecoverableEntryException_h_