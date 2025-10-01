#ifndef _VerifyStackTrace$1_h_
#define _VerifyStackTrace$1_h_
//$ class VerifyStackTrace$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

class VerifyStackTrace$Handle;

class VerifyStackTrace$1 : public ::java::security::PrivilegedAction {
	$class(VerifyStackTrace$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	VerifyStackTrace$1();
	void init$(::VerifyStackTrace$Handle* val$handle);
	virtual $Object* run() override;
	::VerifyStackTrace$Handle* val$handle = nullptr;
};

#endif // _VerifyStackTrace$1_h_