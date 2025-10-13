#ifndef _sun_net_www_protocol_http_AuthScheme_h_
#define _sun_net_www_protocol_http_AuthScheme_h_
//$ class sun.net.www.protocol.http.AuthScheme
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BASIC")
#undef BASIC
#pragma push_macro("DIGEST")
#undef DIGEST
#pragma push_macro("KERBEROS")
#undef KERBEROS
#pragma push_macro("NEGOTIATE")
#undef NEGOTIATE
#pragma push_macro("NTLM")
#undef NTLM
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class $export AuthScheme : public ::java::lang::Enum {
	$class(AuthScheme, 0, ::java::lang::Enum)
public:
	AuthScheme();
	static $Array<::sun::net::www::protocol::http::AuthScheme>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::net::www::protocol::http::AuthScheme* valueOf($String* name);
	static $Array<::sun::net::www::protocol::http::AuthScheme>* values();
	static ::sun::net::www::protocol::http::AuthScheme* BASIC;
	static ::sun::net::www::protocol::http::AuthScheme* DIGEST;
	static ::sun::net::www::protocol::http::AuthScheme* NTLM;
	static ::sun::net::www::protocol::http::AuthScheme* NEGOTIATE;
	static ::sun::net::www::protocol::http::AuthScheme* KERBEROS;
	static ::sun::net::www::protocol::http::AuthScheme* UNKNOWN;
	static $Array<::sun::net::www::protocol::http::AuthScheme>* $VALUES;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#pragma pop_macro("BASIC")
#pragma pop_macro("DIGEST")
#pragma pop_macro("KERBEROS")
#pragma pop_macro("NEGOTIATE")
#pragma pop_macro("NTLM")
#pragma pop_macro("UNKNOWN")

#endif // _sun_net_www_protocol_http_AuthScheme_h_