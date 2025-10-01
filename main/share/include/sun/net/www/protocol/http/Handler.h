#ifndef _sun_net_www_protocol_http_Handler_h_
#define _sun_net_www_protocol_http_Handler_h_
//$ class sun.net.www.protocol.http.Handler
//$ extends java.net.URLStreamHandler

#include <java/net/URLStreamHandler.h>

namespace java {
	namespace net {
		class Proxy;
		class URL;
		class URLConnection;
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class $import Handler : public ::java::net::URLStreamHandler {
	$class(Handler, $NO_CLASS_INIT, ::java::net::URLStreamHandler)
public:
	Handler();
	using ::java::net::URLStreamHandler::equals;
	using ::java::net::URLStreamHandler::hashCode;
	void init$();
	void init$($String* proxy, int32_t port);
	virtual int32_t getDefaultPort() override;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u) override;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u, ::java::net::Proxy* p) override;
	$String* proxy = nullptr;
	int32_t proxyPort = 0;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_Handler_h_