#ifndef _sun_net_NetworkClient$3_h_
#define _sun_net_NetworkClient$3_h_
//$ class sun.net.NetworkClient$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		class NetworkClient;
	}
}

namespace sun {
	namespace net {

class NetworkClient$3 : public ::java::security::PrivilegedAction {
	$class(NetworkClient$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	NetworkClient$3();
	void init$(::sun::net::NetworkClient* this$0);
	virtual $Object* run() override;
	::sun::net::NetworkClient* this$0 = nullptr;
};

	} // net
} // sun

#endif // _sun_net_NetworkClient$3_h_