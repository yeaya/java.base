#ifndef _sun_net_www_protocol_https_Handler_h_
#define _sun_net_www_protocol_https_Handler_h_
//$ class sun.net.www.protocol.https.Handler
//$ extends sun.net.www.protocol.http.Handler

#include <sun/net/www/protocol/http/Handler.h>

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
				namespace https {

class Handler : public ::sun::net::www::protocol::http::Handler {
	$class(Handler, $NO_CLASS_INIT, ::sun::net::www::protocol::http::Handler)
public:
	Handler();
	using ::sun::net::www::protocol::http::Handler::equals;
	using ::sun::net::www::protocol::http::Handler::hashCode;
	void init$();
	void init$($String* proxy, int32_t port);
	virtual int32_t getDefaultPort() override;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u) override;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u, ::java::net::Proxy* p) override;
	$String* proxy = nullptr;
	int32_t proxyPort = 0;
};

				} // https
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_https_Handler_h_