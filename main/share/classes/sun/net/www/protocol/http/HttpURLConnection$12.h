#ifndef _sun_net_www_protocol_http_HttpURLConnection$12_h_
#define _sun_net_www_protocol_http_HttpURLConnection$12_h_
//$ class sun.net.www.protocol.http.HttpURLConnection$12
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

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
					class HttpURLConnection;
				}
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class HttpURLConnection$12 : public ::java::security::PrivilegedExceptionAction {
	$class(HttpURLConnection$12, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	HttpURLConnection$12();
	void init$(::sun::net::www::protocol::http::HttpURLConnection* this$0, $String* val$loc, int32_t val$stat, ::java::net::URL* val$locUrl0);
	virtual $Object* run() override;
	::sun::net::www::protocol::http::HttpURLConnection* this$0 = nullptr;
	::java::net::URL* val$locUrl0 = nullptr;
	int32_t val$stat = 0;
	$String* val$loc = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_HttpURLConnection$12_h_