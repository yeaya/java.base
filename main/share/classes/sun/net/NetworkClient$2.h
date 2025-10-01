#ifndef _sun_net_NetworkClient$2_h_
#define _sun_net_NetworkClient$2_h_
//$ class sun.net.NetworkClient$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		class NetworkClient;
	}
}

namespace sun {
	namespace net {

class NetworkClient$2 : public ::java::security::PrivilegedAction {
	$class(NetworkClient$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	NetworkClient$2();
	void init$(::sun::net::NetworkClient* this$0);
	virtual $Object* run() override;
	::sun::net::NetworkClient* this$0 = nullptr;
};

	} // net
} // sun

#endif // _sun_net_NetworkClient$2_h_