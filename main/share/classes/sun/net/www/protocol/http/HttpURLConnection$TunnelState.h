#ifndef _sun_net_www_protocol_http_HttpURLConnection$TunnelState_h_
#define _sun_net_www_protocol_http_HttpURLConnection$TunnelState_h_
//$ class sun.net.www.protocol.http.HttpURLConnection$TunnelState
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("SETUP")
#undef SETUP
#pragma push_macro("TUNNELING")
#undef TUNNELING

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class $export HttpURLConnection$TunnelState : public ::java::lang::Enum {
	$class(HttpURLConnection$TunnelState, 0, ::java::lang::Enum)
public:
	HttpURLConnection$TunnelState();
	static $Array<::sun::net::www::protocol::http::HttpURLConnection$TunnelState>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::net::www::protocol::http::HttpURLConnection$TunnelState* valueOf($String* name);
	static $Array<::sun::net::www::protocol::http::HttpURLConnection$TunnelState>* values();
	static ::sun::net::www::protocol::http::HttpURLConnection$TunnelState* NONE;
	static ::sun::net::www::protocol::http::HttpURLConnection$TunnelState* SETUP;
	static ::sun::net::www::protocol::http::HttpURLConnection$TunnelState* TUNNELING;
	static $Array<::sun::net::www::protocol::http::HttpURLConnection$TunnelState>* $VALUES;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#pragma pop_macro("NONE")
#pragma pop_macro("SETUP")
#pragma pop_macro("TUNNELING")

#endif // _sun_net_www_protocol_http_HttpURLConnection$TunnelState_h_