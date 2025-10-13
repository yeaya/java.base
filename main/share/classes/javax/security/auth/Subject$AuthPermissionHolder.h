#ifndef _javax_security_auth_Subject$AuthPermissionHolder_h_
#define _javax_security_auth_Subject$AuthPermissionHolder_h_
//$ class javax.security.auth.Subject$AuthPermissionHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DO_AS_PERMISSION")
#undef DO_AS_PERMISSION
#pragma push_macro("DO_AS_PRIVILEGED_PERMISSION")
#undef DO_AS_PRIVILEGED_PERMISSION
#pragma push_macro("GET_SUBJECT_PERMISSION")
#undef GET_SUBJECT_PERMISSION
#pragma push_macro("MODIFY_PRINCIPALS_PERMISSION")
#undef MODIFY_PRINCIPALS_PERMISSION
#pragma push_macro("MODIFY_PRIVATE_CREDENTIALS_PERMISSION")
#undef MODIFY_PRIVATE_CREDENTIALS_PERMISSION
#pragma push_macro("MODIFY_PUBLIC_CREDENTIALS_PERMISSION")
#undef MODIFY_PUBLIC_CREDENTIALS_PERMISSION
#pragma push_macro("SET_READ_ONLY_PERMISSION")
#undef SET_READ_ONLY_PERMISSION

namespace javax {
	namespace security {
		namespace auth {
			class AuthPermission;
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {

class $export Subject$AuthPermissionHolder : public ::java::lang::Object {
	$class(Subject$AuthPermissionHolder, 0, ::java::lang::Object)
public:
	Subject$AuthPermissionHolder();
	void init$();
	static ::javax::security::auth::AuthPermission* DO_AS_PERMISSION;
	static ::javax::security::auth::AuthPermission* DO_AS_PRIVILEGED_PERMISSION;
	static ::javax::security::auth::AuthPermission* SET_READ_ONLY_PERMISSION;
	static ::javax::security::auth::AuthPermission* GET_SUBJECT_PERMISSION;
	static ::javax::security::auth::AuthPermission* MODIFY_PRINCIPALS_PERMISSION;
	static ::javax::security::auth::AuthPermission* MODIFY_PUBLIC_CREDENTIALS_PERMISSION;
	static ::javax::security::auth::AuthPermission* MODIFY_PRIVATE_CREDENTIALS_PERMISSION;
};

		} // auth
	} // security
} // javax

#pragma pop_macro("DO_AS_PERMISSION")
#pragma pop_macro("DO_AS_PRIVILEGED_PERMISSION")
#pragma pop_macro("GET_SUBJECT_PERMISSION")
#pragma pop_macro("MODIFY_PRINCIPALS_PERMISSION")
#pragma pop_macro("MODIFY_PRIVATE_CREDENTIALS_PERMISSION")
#pragma pop_macro("MODIFY_PUBLIC_CREDENTIALS_PERMISSION")
#pragma pop_macro("SET_READ_ONLY_PERMISSION")

#endif // _javax_security_auth_Subject$AuthPermissionHolder_h_