#ifndef _sun_net_www_protocol_http_HttpURLConnection$8_h_
#define _sun_net_www_protocol_http_HttpURLConnection$8_h_
//$ class sun.net.www.protocol.http.HttpURLConnection$8
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

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

class HttpURLConnection$8 : public ::java::security::PrivilegedExceptionAction {
	$class(HttpURLConnection$8, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	HttpURLConnection$8();
	void init$(::sun::net::www::protocol::http::HttpURLConnection* this$0);
	virtual $Object* run() override;
	::sun::net::www::protocol::http::HttpURLConnection* this$0 = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_HttpURLConnection$8_h_