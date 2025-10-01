#ifndef _sun_net_www_protocol_http_HttpURLConnection$5_h_
#define _sun_net_www_protocol_http_HttpURLConnection$5_h_
//$ class sun.net.www.protocol.http.HttpURLConnection$5
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

class HttpURLConnection$5 : public ::java::security::PrivilegedExceptionAction {
	$class(HttpURLConnection$5, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	HttpURLConnection$5();
	void init$(::sun::net::www::protocol::http::HttpURLConnection* this$0, $String* val$hostarg);
	virtual $Object* run() override;
	::sun::net::www::protocol::http::HttpURLConnection* this$0 = nullptr;
	$String* val$hostarg = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_HttpURLConnection$5_h_