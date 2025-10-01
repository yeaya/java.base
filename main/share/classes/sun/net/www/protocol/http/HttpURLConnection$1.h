#ifndef _sun_net_www_protocol_http_HttpURLConnection$1_h_
#define _sun_net_www_protocol_http_HttpURLConnection$1_h_
//$ class sun.net.www.protocol.http.HttpURLConnection$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

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

class HttpURLConnection$1 : public ::java::security::PrivilegedAction {
	$class(HttpURLConnection$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	HttpURLConnection$1();
	void init$($String* val$host, ::java::net::URL* val$url, ::java::net::Authenticator* val$authenticator, ::java::net::InetAddress* val$addr, int32_t val$port, $String* val$protocol, $String* val$prompt, $String* val$scheme, ::java::net::Authenticator$RequestorType* val$authType);
	virtual $Object* run() override;
	::java::net::Authenticator$RequestorType* val$authType = nullptr;
	$String* val$scheme = nullptr;
	$String* val$prompt = nullptr;
	$String* val$protocol = nullptr;
	int32_t val$port = 0;
	::java::net::InetAddress* val$addr = nullptr;
	::java::net::Authenticator* val$authenticator = nullptr;
	::java::net::URL* val$url = nullptr;
	$String* val$host = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_HttpURLConnection$1_h_