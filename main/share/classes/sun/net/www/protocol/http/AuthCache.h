#ifndef _sun_net_www_protocol_http_AuthCache_h_
#define _sun_net_www_protocol_http_AuthCache_h_
//$ interface sun.net.www.protocol.http.AuthCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					class AuthCacheValue;
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

class $export AuthCache : public ::java::lang::Object {
	$interface(AuthCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::net::www::protocol::http::AuthCacheValue* get($String* pkey, $String* skey) {return nullptr;}
	virtual void put($String* pkey, ::sun::net::www::protocol::http::AuthCacheValue* value) {}
	virtual void remove($String* pkey, ::sun::net::www::protocol::http::AuthCacheValue* entry) {}
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_AuthCache_h_