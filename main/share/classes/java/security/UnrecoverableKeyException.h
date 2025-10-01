#ifndef _java_security_UnrecoverableKeyException_h_
#define _java_security_UnrecoverableKeyException_h_
//$ class java.security.UnrecoverableKeyException
//$ extends java.security.UnrecoverableEntryException

#include <java/security/UnrecoverableEntryException.h>

namespace java {
	namespace security {

class $export UnrecoverableKeyException : public ::java::security::UnrecoverableEntryException {
	$class(UnrecoverableKeyException, $NO_CLASS_INIT, ::java::security::UnrecoverableEntryException)
public:
	UnrecoverableKeyException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x64F637531E15766D;
	UnrecoverableKeyException(const UnrecoverableKeyException& e);
	UnrecoverableKeyException wrapper$();
	virtual void throwWrapper$() override;
};

	} // security
} // java

#endif // _java_security_UnrecoverableKeyException_h_