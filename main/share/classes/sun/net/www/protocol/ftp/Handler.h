#ifndef _sun_net_www_protocol_ftp_Handler_h_
#define _sun_net_www_protocol_ftp_Handler_h_
//$ class sun.net.www.protocol.ftp.Handler
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
				namespace ftp {

class $export Handler : public ::java::net::URLStreamHandler {
	$class(Handler, $NO_CLASS_INIT, ::java::net::URLStreamHandler)
public:
	Handler();
	using ::java::net::URLStreamHandler::hashCode;
	using ::java::net::URLStreamHandler::equals;
	void init$();
	virtual bool equals(::java::net::URL* u1, ::java::net::URL* u2) override;
	virtual int32_t getDefaultPort() override;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u) override;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u, ::java::net::Proxy* p) override;
};

				} // ftp
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_ftp_Handler_h_