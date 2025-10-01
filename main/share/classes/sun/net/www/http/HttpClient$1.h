#ifndef _sun_net_www_http_HttpClient$1_h_
#define _sun_net_www_http_HttpClient$1_h_
//$ class sun.net.www.http.HttpClient$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace net {
		class InetSocketAddress;
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace http {
				class HttpClient;
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace http {

class HttpClient$1 : public ::java::security::PrivilegedExceptionAction {
	$class(HttpClient$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	HttpClient$1();
	void init$(::sun::net::www::http::HttpClient* this$0, ::java::net::InetSocketAddress* val$server);
	virtual $Object* run() override;
	::sun::net::www::http::HttpClient* this$0 = nullptr;
	::java::net::InetSocketAddress* val$server = nullptr;
};

			} // http
		} // www
	} // net
} // sun

#endif // _sun_net_www_http_HttpClient$1_h_