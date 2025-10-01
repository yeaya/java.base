#ifndef _sun_net_www_protocol_http_HttpAuthenticator_h_
#define _sun_net_www_protocol_http_HttpAuthenticator_h_
//$ interface sun.net.www.protocol.http.HttpAuthenticator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URL;
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class $import HttpAuthenticator : public ::java::lang::Object {
	$interface(HttpAuthenticator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* authString(::java::net::URL* u, $String* scheme, $String* realm) {return nullptr;}
	virtual bool schemeSupported($String* scheme) {return false;}
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_HttpAuthenticator_h_