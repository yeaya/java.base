#ifndef _sun_net_www_protocol_http_AuthCacheValue$Type_h_
#define _sun_net_www_protocol_http_AuthCacheValue$Type_h_
//$ class sun.net.www.protocol.http.AuthCacheValue$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class $export AuthCacheValue$Type : public ::java::lang::Enum {
	$class(AuthCacheValue$Type, 0, ::java::lang::Enum)
public:
	AuthCacheValue$Type();
	static $Array<::sun::net::www::protocol::http::AuthCacheValue$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::net::www::protocol::http::AuthCacheValue$Type* valueOf($String* name);
	static $Array<::sun::net::www::protocol::http::AuthCacheValue$Type>* values();
	static ::sun::net::www::protocol::http::AuthCacheValue$Type* Proxy;
	static ::sun::net::www::protocol::http::AuthCacheValue$Type* Server;
	static $Array<::sun::net::www::protocol::http::AuthCacheValue$Type>* $VALUES;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_AuthCacheValue$Type_h_