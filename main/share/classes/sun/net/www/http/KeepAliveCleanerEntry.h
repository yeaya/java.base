#ifndef _sun_net_www_http_KeepAliveCleanerEntry_h_
#define _sun_net_www_http_KeepAliveCleanerEntry_h_
//$ class sun.net.www.http.KeepAliveCleanerEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace net {
		namespace www {
			namespace http {
				class HttpClient;
				class KeepAliveStream;
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace http {

class KeepAliveCleanerEntry : public ::java::lang::Object {
	$class(KeepAliveCleanerEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeepAliveCleanerEntry();
	void init$(::sun::net::www::http::KeepAliveStream* kas, ::sun::net::www::http::HttpClient* hc);
	virtual ::sun::net::www::http::HttpClient* getHttpClient();
	virtual ::sun::net::www::http::KeepAliveStream* getKeepAliveStream();
	virtual bool getQueuedForCleanup();
	virtual void setQueuedForCleanup();
	::sun::net::www::http::KeepAliveStream* kas = nullptr;
	::sun::net::www::http::HttpClient* hc = nullptr;
};

			} // http
		} // www
	} // net
} // sun

#endif // _sun_net_www_http_KeepAliveCleanerEntry_h_