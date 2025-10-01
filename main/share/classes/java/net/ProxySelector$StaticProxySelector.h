#ifndef _java_net_ProxySelector$StaticProxySelector_h_
#define _java_net_ProxySelector$StaticProxySelector_h_
//$ class java.net.ProxySelector$StaticProxySelector
//$ extends java.net.ProxySelector

#include <java/net/ProxySelector.h>

#pragma push_macro("NO_PROXY_LIST")
#undef NO_PROXY_LIST

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

class $export ProxySelector$StaticProxySelector : public ::java::net::ProxySelector {
	$class(ProxySelector$StaticProxySelector, 0, ::java::net::ProxySelector)
public:
	ProxySelector$StaticProxySelector();
	void init$(::java::net::InetSocketAddress* address);
	virtual void connectFailed(::java::net::URI* uri, ::java::net::SocketAddress* sa, ::java::io::IOException* e) override;
	virtual ::java::util::List* select(::java::net::URI* uri) override;
	static ::java::util::List* NO_PROXY_LIST;
	::java::util::List* list = nullptr;
};

	} // net
} // java

#pragma pop_macro("NO_PROXY_LIST")

#endif // _java_net_ProxySelector$StaticProxySelector_h_