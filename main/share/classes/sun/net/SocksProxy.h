#ifndef _sun_net_SocksProxy_h_
#define _sun_net_SocksProxy_h_
//$ class sun.net.SocksProxy
//$ extends java.net.Proxy

#include <java/net/Proxy.h>

namespace java {
	namespace net {
		class SocketAddress;
	}
}

namespace sun {
	namespace net {

class $export SocksProxy : public ::java::net::Proxy {
	$class(SocksProxy, $NO_CLASS_INIT, ::java::net::Proxy)
public:
	SocksProxy();
	void init$(::java::net::SocketAddress* addr, int32_t version);
	static ::sun::net::SocksProxy* create(::java::net::SocketAddress* addr, int32_t version);
	int32_t protocolVersion();
	int32_t version = 0;
};

	} // net
} // sun

#endif // _sun_net_SocksProxy_h_