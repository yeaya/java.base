#ifndef _sun_net_ApplicationProxy_h_
#define _sun_net_ApplicationProxy_h_
//$ class sun.net.ApplicationProxy
//$ extends java.net.Proxy

#include <java/net/Proxy.h>

namespace sun {
	namespace net {

class $export ApplicationProxy : public ::java::net::Proxy {
	$class(ApplicationProxy, $NO_CLASS_INIT, ::java::net::Proxy)
public:
	ApplicationProxy();
	void init$(::java::net::Proxy* proxy);
	static ::sun::net::ApplicationProxy* create(::java::net::Proxy* proxy);
};

	} // net
} // sun

#endif // _sun_net_ApplicationProxy_h_