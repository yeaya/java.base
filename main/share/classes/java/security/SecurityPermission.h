#ifndef _java_security_SecurityPermission_h_
#define _java_security_SecurityPermission_h_
//$ class java.security.SecurityPermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

namespace java {
	namespace security {

class $export SecurityPermission : public ::java::security::BasicPermission {
	$class(SecurityPermission, $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	SecurityPermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	static const int64_t serialVersionUID = (int64_t)0x48AA663EB1871D26;
};

	} // security
} // java

#endif // _java_security_SecurityPermission_h_