#ifndef _java_net_NetMulticastSocket$1_h_
#define _java_net_NetMulticastSocket$1_h_
//$ class java.net.NetMulticastSocket$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace net {
		class DatagramSocketImpl;
	}
}

namespace java {
	namespace net {

class NetMulticastSocket$1 : public ::java::security::PrivilegedExceptionAction {
	$class(NetMulticastSocket$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	NetMulticastSocket$1();
	void init$(::java::net::DatagramSocketImpl* val$impl);
	virtual $Object* run() override;
	::java::net::DatagramSocketImpl* val$impl = nullptr;
};

	} // net
} // java

#endif // _java_net_NetMulticastSocket$1_h_