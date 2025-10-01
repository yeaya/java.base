#ifndef _sun_net_www_http_KeepAliveEntry_h_
#define _sun_net_www_http_KeepAliveEntry_h_
//$ class sun.net.www.http.KeepAliveEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class KeepAliveEntry : public ::java::lang::Object {
	$class(KeepAliveEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeepAliveEntry();
	void init$(::sun::net::www::http::HttpClient* hc, int64_t idleStartTime);
	::sun::net::www::http::HttpClient* hc = nullptr;
	int64_t idleStartTime = 0;
};

			} // http
		} // www
	} // net
} // sun

#endif // _sun_net_www_http_KeepAliveEntry_h_