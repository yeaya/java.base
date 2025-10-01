#ifndef _sun_net_www_protocol_http_HttpCallerInfo_h_
#define _sun_net_www_protocol_http_HttpCallerInfo_h_
//$ class sun.net.www.protocol.http.HttpCallerInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class Authenticator;
		class Authenticator$RequestorType;
		class InetAddress;
		class URL;
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class $export HttpCallerInfo : public ::java::lang::Object {
	$class(HttpCallerInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HttpCallerInfo();
	void init$(::sun::net::www::protocol::http::HttpCallerInfo* old, $String* scheme);
	void init$(::java::net::URL* url, ::java::net::Authenticator* a);
	void init$(::java::net::URL* url, $String* host, int32_t port, ::java::net::Authenticator* a);
	::java::net::URL* url = nullptr;
	$String* host = nullptr;
	$String* protocol = nullptr;
	$String* prompt = nullptr;
	$String* scheme = nullptr;
	int32_t port = 0;
	::java::net::InetAddress* addr = nullptr;
	::java::net::Authenticator$RequestorType* authType = nullptr;
	::java::net::Authenticator* authenticator = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_HttpCallerInfo_h_