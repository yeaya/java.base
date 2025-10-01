#ifndef _sun_net_www_protocol_mailto_Handler_h_
#define _sun_net_www_protocol_mailto_Handler_h_
//$ class sun.net.www.protocol.mailto.Handler
//$ extends java.net.URLStreamHandler

#include <java/net/URLStreamHandler.h>

namespace java {
	namespace net {
		class URL;
		class URLConnection;
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace mailto {

class Handler : public ::java::net::URLStreamHandler {
	$class(Handler, $NO_CLASS_INIT, ::java::net::URLStreamHandler)
public:
	Handler();
	using ::java::net::URLStreamHandler::equals;
	using ::java::net::URLStreamHandler::hashCode;
	void init$();
	using ::java::net::URLStreamHandler::openConnection;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u) override;
	virtual void parseURL(::java::net::URL* u, $String* spec, int32_t start, int32_t limit) override;
	void setURLHandler(::java::net::URL* u, $String* protocol, $String* host, int32_t port, $String* file, $String* ref);
};

				} // mailto
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_mailto_Handler_h_