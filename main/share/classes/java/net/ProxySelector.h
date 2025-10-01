#ifndef _java_net_ProxySelector_h_
#define _java_net_ProxySelector_h_
//$ class java.net.ProxySelector
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
		class SocketAddress;
		class URI;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace net {

class $export ProxySelector : public ::java::lang::Object {
	$class(ProxySelector, 0, ::java::lang::Object)
public:
	ProxySelector();
	void init$();
	virtual void connectFailed(::java::net::URI* uri, ::java::net::SocketAddress* sa, ::java::io::IOException* ioe) {}
	static ::java::net::ProxySelector* getDefault();
	static ::java::net::ProxySelector* of(::java::net::InetSocketAddress* proxyAddress);
	virtual ::java::util::List* select(::java::net::URI* uri) {return nullptr;}
	static void setDefault(::java::net::ProxySelector* ps);
	static $volatile(::java::net::ProxySelector*) theProxySelector;
};

	} // net
} // java

#endif // _java_net_ProxySelector_h_