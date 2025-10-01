#ifndef _javax_security_auth_RefreshFailedException_h_
#define _javax_security_auth_RefreshFailedException_h_
//$ class javax.security.auth.RefreshFailedException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace security {
		namespace auth {

class $import RefreshFailedException : public ::java::lang::Exception {
	$class(RefreshFailedException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	RefreshFailedException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x4633347628F715B0;
	RefreshFailedException(const RefreshFailedException& e);
	RefreshFailedException wrapper$();
	virtual void throwWrapper$() override;
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_RefreshFailedException_h_