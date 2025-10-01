#ifndef _sun_net_www_protocol_http_HttpURLConnection$10_h_
#define _sun_net_www_protocol_http_HttpURLConnection$10_h_
//$ class sun.net.www.protocol.http.HttpURLConnection$10
//$ extends java.security.PrivilegedExceptionAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace io {
		class IOException;
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

class HttpURLConnection$10 : public ::java::security::PrivilegedExceptionAction {
	$class(HttpURLConnection$10, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	HttpURLConnection$10();
	void init$(::sun::net::www::protocol::http::HttpURLConnection* this$0, ::java::io::IOException* val$rememberedException, $ObjectArray* val$args);
	virtual $Object* run() override;
	::sun::net::www::protocol::http::HttpURLConnection* this$0 = nullptr;
	$ObjectArray* val$args = nullptr;
	::java::io::IOException* val$rememberedException = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_HttpURLConnection$10_h_