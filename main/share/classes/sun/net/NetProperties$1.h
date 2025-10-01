#ifndef _sun_net_NetProperties$1_h_
#define _sun_net_NetProperties$1_h_
//$ class sun.net.NetProperties$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {

class NetProperties$1 : public ::java::security::PrivilegedAction {
	$class(NetProperties$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	NetProperties$1();
	void init$();
	virtual $Object* run() override;
};

	} // net
} // sun

#endif // _sun_net_NetProperties$1_h_