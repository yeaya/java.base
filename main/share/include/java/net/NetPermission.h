#ifndef _java_net_NetPermission_h_
#define _java_net_NetPermission_h_
//$ class java.net.NetPermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

namespace java {
	namespace net {

class $import NetPermission : public ::java::security::BasicPermission {
	$class(NetPermission, $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	NetPermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	static const int64_t serialVersionUID = (int64_t)0x8C3479EC677F6463;
};

	} // net
} // java

#endif // _java_net_NetPermission_h_