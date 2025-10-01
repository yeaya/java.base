#ifndef _sun_net_www_protocol_http_AuthCacheValue_h_
#define _sun_net_www_protocol_http_AuthCacheValue_h_
//$ class sun.net.www.protocol.http.AuthCacheValue
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace net {
		class PasswordAuthentication;
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					class AuthCache;
					class AuthCacheValue$Type;
					class AuthScheme;
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

class $export AuthCacheValue : public ::java::io::Serializable {
	$class(AuthCacheValue, 0, ::java::io::Serializable)
public:
	AuthCacheValue();
	void init$();
	virtual ::java::net::PasswordAuthentication* credentials() {return nullptr;}
	virtual ::sun::net::www::protocol::http::AuthScheme* getAuthScheme() {return nullptr;}
	virtual ::sun::net::www::protocol::http::AuthCacheValue$Type* getAuthType() {return nullptr;}
	virtual $String* getHost() {return nullptr;}
	virtual $String* getPath() {return nullptr;}
	virtual int32_t getPort() {return 0;}
	virtual $String* getProtocolScheme() {return nullptr;}
	virtual $String* getRealm() {return nullptr;}
	static void setAuthCache(::sun::net::www::protocol::http::AuthCache* map);
	static const int64_t serialVersionUID = (int64_t)0x0A34215FB27A6F9B;
	static ::sun::net::www::protocol::http::AuthCache* cache;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_AuthCacheValue_h_