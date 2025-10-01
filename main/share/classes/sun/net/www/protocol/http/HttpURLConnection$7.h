#ifndef _sun_net_www_protocol_http_HttpURLConnection$7_h_
#define _sun_net_www_protocol_http_HttpURLConnection$7_h_
//$ class sun.net.www.protocol.http.HttpURLConnection$7
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

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

class HttpURLConnection$7 : public ::java::security::PrivilegedAction {
	$class(HttpURLConnection$7, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	HttpURLConnection$7();
	void init$(::sun::net::www::protocol::http::HttpURLConnection* this$0);
	virtual $Object* run() override;
	::sun::net::www::protocol::http::HttpURLConnection* this$0 = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_HttpURLConnection$7_h_