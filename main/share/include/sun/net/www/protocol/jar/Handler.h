#ifndef _sun_net_www_protocol_jar_Handler_h_
#define _sun_net_www_protocol_jar_Handler_h_
//$ class sun.net.www.protocol.jar.Handler
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
				namespace jar {

class $import Handler : public ::java::net::URLStreamHandler {
	$class(Handler, 0, ::java::net::URLStreamHandler)
public:
	Handler();
	using ::java::net::URLStreamHandler::equals;
	using ::java::net::URLStreamHandler::hashCode;
	void init$();
	static $String* canonicalizeString($String* file, int32_t off);
	virtual $String* checkNestedProtocol($String* spec);
	static $String* doCanonicalize($String* file);
	virtual int32_t hashCode(::java::net::URL* u) override;
	static int32_t indexOfBangSlash($String* spec);
	using ::java::net::URLStreamHandler::openConnection;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u) override;
	$String* parseAbsoluteSpec($String* spec);
	$String* parseContextSpec(::java::net::URL* url, $String* spec);
	virtual void parseURL(::java::net::URL* url, $String* spec, int32_t start, int32_t limit) override;
	virtual bool sameFile(::java::net::URL* u1, ::java::net::URL* u2) override;
	static $String* separator;
};

				} // jar
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_jar_Handler_h_