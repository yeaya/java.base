#ifndef _BadProxySelector$HTTPProxySelector_h_
#define _BadProxySelector$HTTPProxySelector_h_
//$ class BadProxySelector$HTTPProxySelector
//$ extends java.net.ProxySelector

#include <java/net/ProxySelector.h>

namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace net {
		class SocketAddress;
		class URI;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class BadProxySelector$HTTPProxySelector : public ::java::net::ProxySelector {
	$class(BadProxySelector$HTTPProxySelector, $NO_CLASS_INIT, ::java::net::ProxySelector)
public:
	BadProxySelector$HTTPProxySelector();
	void init$();
	virtual void connectFailed(::java::net::URI* uri, ::java::net::SocketAddress* sa, ::java::io::IOException* ioe) override;
	virtual ::java::util::List* select(::java::net::URI* uri) override;
};

#endif // _BadProxySelector$HTTPProxySelector_h_