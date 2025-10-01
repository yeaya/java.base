#ifndef _sun_net_www_protocol_jmod_Handler_h_
#define _sun_net_www_protocol_jmod_Handler_h_
//$ class sun.net.www.protocol.jmod.Handler
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
				namespace jmod {

class Handler : public ::java::net::URLStreamHandler {
	$class(Handler, $NO_CLASS_INIT, ::java::net::URLStreamHandler)
public:
	Handler();
	using ::java::net::URLStreamHandler::equals;
	using ::java::net::URLStreamHandler::hashCode;
	void init$();
	using ::java::net::URLStreamHandler::openConnection;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* url) override;
};

				} // jmod
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_jmod_Handler_h_