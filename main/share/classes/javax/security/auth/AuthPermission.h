#ifndef _javax_security_auth_AuthPermission_h_
#define _javax_security_auth_AuthPermission_h_
//$ class javax.security.auth.AuthPermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

namespace javax {
	namespace security {
		namespace auth {

class $export AuthPermission : public ::java::security::BasicPermission {
	$class(AuthPermission, $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	AuthPermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	static const int64_t serialVersionUID = (int64_t)0x50932AD66DA4D0E6;
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_AuthPermission_h_