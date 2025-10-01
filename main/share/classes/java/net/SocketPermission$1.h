#ifndef _java_net_SocketPermission$1_h_
#define _java_net_SocketPermission$1_h_
//$ class java.net.SocketPermission$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {

class SocketPermission$1 : public ::java::security::PrivilegedAction {
	$class(SocketPermission$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SocketPermission$1();
	void init$($String* val$suffix);
	virtual $Object* run() override;
	$String* val$suffix = nullptr;
};

	} // net
} // java

#endif // _java_net_SocketPermission$1_h_