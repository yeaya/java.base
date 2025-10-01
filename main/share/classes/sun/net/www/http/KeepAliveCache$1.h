#ifndef _sun_net_www_http_KeepAliveCache$1_h_
#define _sun_net_www_http_KeepAliveCache$1_h_
//$ class sun.net.www.http.KeepAliveCache$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		namespace www {
			namespace http {
				class KeepAliveCache;
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace http {

class KeepAliveCache$1 : public ::java::security::PrivilegedAction {
	$class(KeepAliveCache$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	KeepAliveCache$1();
	void init$(::sun::net::www::http::KeepAliveCache* this$0, ::sun::net::www::http::KeepAliveCache* val$cache);
	virtual $Object* run() override;
	::sun::net::www::http::KeepAliveCache* this$0 = nullptr;
	::sun::net::www::http::KeepAliveCache* val$cache = nullptr;
};

			} // http
		} // www
	} // net
} // sun

#endif // _sun_net_www_http_KeepAliveCache$1_h_