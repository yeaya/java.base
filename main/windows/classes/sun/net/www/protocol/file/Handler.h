#ifndef _sun_net_www_protocol_file_Handler_h_
#define _sun_net_www_protocol_file_Handler_h_
//$ class sun.net.www.protocol.file.Handler
//$ extends java.net.URLStreamHandler

#include <java/net/URLStreamHandler.h>

namespace java {
	namespace io {
		class File;
	}
}
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
				namespace file {

class Handler : public ::java::net::URLStreamHandler {
	$class(Handler, $PRELOAD | $NO_CLASS_INIT, ::java::net::URLStreamHandler)
public:
	Handler();
	using ::java::net::URLStreamHandler::equals;
	using ::java::net::URLStreamHandler::hashCode;
	void init$();
	virtual ::java::net::URLConnection* createFileURLConnection(::java::net::URL* url, ::java::io::File* file);
	$String* getHost(::java::net::URL* url);
	virtual bool hostsEqual(::java::net::URL* u1, ::java::net::URL* u2) override;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* url) override;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* url, ::java::net::Proxy* p) override;
	virtual void parseURL(::java::net::URL* u, $String* spec, int32_t start, int32_t limit) override;
};

				} // file
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_file_Handler_h_