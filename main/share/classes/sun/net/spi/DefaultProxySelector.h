#ifndef _sun_net_spi_DefaultProxySelector_h_
#define _sun_net_spi_DefaultProxySelector_h_
//$ class sun.net.spi.DefaultProxySelector
//$ extends java.net.ProxySelector

#include <java/lang/Array.h>
#include <java/net/ProxySelector.h>

#pragma push_macro("NO_PROXY_LIST")
#undef NO_PROXY_LIST
#pragma push_macro("SOCKS_PROXY_VERSION")
#undef SOCKS_PROXY_VERSION

namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace net {
		class Proxy;
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
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace sun {
	namespace net {
		namespace spi {

class DefaultProxySelector : public ::java::net::ProxySelector {
	$class(DefaultProxySelector, 0, ::java::net::ProxySelector)
public:
	DefaultProxySelector();
	void init$();
	virtual void connectFailed(::java::net::URI* uri, ::java::net::SocketAddress* sa, ::java::io::IOException* ioe) override;
	int32_t defaultPort($String* protocol);
	static $String* disjunctToRegex($String* disjunct);
	$Array<::java::net::Proxy>* getSystemProxies($String* protocol, $String* host);
	static bool init();
	virtual ::java::util::List* select(::java::net::URI* uri) override;
	static bool shouldNotUseProxyFor(::java::util::regex::Pattern* pattern, $String* urlhost);
	static int32_t socksProxyVersion();
	static ::java::util::regex::Pattern* toPattern($String* mask);
	static $Array<::java::lang::String, 2>* props;
	static $String* SOCKS_PROXY_VERSION;
	static bool hasSystemProxies;
	static ::java::util::List* NO_PROXY_LIST;
};

		} // spi
	} // net
} // sun

#pragma pop_macro("NO_PROXY_LIST")
#pragma pop_macro("SOCKS_PROXY_VERSION")

#endif // _sun_net_spi_DefaultProxySelector_h_