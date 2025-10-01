#ifndef _sun_security_util_PermissionFactory_h_
#define _sun_security_util_PermissionFactory_h_
//$ interface sun.security.util.PermissionFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class Permission;
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export PermissionFactory : public ::java::lang::Object {
	$interface(PermissionFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::security::Permission* newPermission($String* name) {return nullptr;}
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_PermissionFactory_h_