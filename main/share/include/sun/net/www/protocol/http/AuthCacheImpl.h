#ifndef _sun_net_www_protocol_http_AuthCacheImpl_h_
#define _sun_net_www_protocol_http_AuthCacheImpl_h_
//$ class sun.net.www.protocol.http.AuthCacheImpl
//$ extends sun.net.www.protocol.http.AuthCache

#include <sun/net/www/protocol/http/AuthCache.h>

namespace java {
	namespace util {
		class HashMap;
	}
}
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

class $import AuthCacheImpl : public ::sun::net::www::protocol::http::AuthCache {
	$class(AuthCacheImpl, $NO_CLASS_INIT, ::sun::net::www::protocol::http::AuthCache)
public:
	AuthCacheImpl();
	void init$();
	virtual ::sun::net::www::protocol::http::AuthCacheValue* get($String* pkey, $String* skey) override;
	virtual void put($String* pkey, ::sun::net::www::protocol::http::AuthCacheValue* value) override;
	virtual void remove($String* pkey, ::sun::net::www::protocol::http::AuthCacheValue* entry) override;
	virtual void setMap(::java::util::HashMap* map);
	::java::util::HashMap* hashtable = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_AuthCacheImpl_h_