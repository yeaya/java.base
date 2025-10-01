#ifndef _java_security_AccessControlException_h_
#define _java_security_AccessControlException_h_
//$ class java.security.AccessControlException
//$ extends java.lang.SecurityException

#include <java/lang/SecurityException.h>

namespace java {
	namespace security {
		class Permission;
	}
}

namespace java {
	namespace security {

class $import AccessControlException : public ::java::lang::SecurityException {
	$class(AccessControlException, $NO_CLASS_INIT, ::java::lang::SecurityException)
public:
	AccessControlException();
	void init$($String* s);
	void init$($String* s, ::java::security::Permission* p);
	virtual ::java::security::Permission* getPermission();
	static const int64_t serialVersionUID = (int64_t)0x474EA5094463B577;
	::java::security::Permission* perm = nullptr;
	AccessControlException(const AccessControlException& e);
	AccessControlException wrapper$();
	virtual void throwWrapper$() override;
};

	} // security
} // java

#endif // _java_security_AccessControlException_h_