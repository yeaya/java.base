#ifndef _sun_net_www_protocol_http_AuthenticationHeader$SchemeMapValue_h_
#define _sun_net_www_protocol_http_AuthenticationHeader$SchemeMapValue_h_
//$ class sun.net.www.protocol.http.AuthenticationHeader$SchemeMapValue
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace net {
		namespace www {
			class HeaderParser;
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class $import AuthenticationHeader$SchemeMapValue : public ::java::lang::Object {
	$class(AuthenticationHeader$SchemeMapValue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AuthenticationHeader$SchemeMapValue();
	void init$(::sun::net::www::HeaderParser* h, $String* r);
	$String* raw = nullptr;
	::sun::net::www::HeaderParser* parser = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_AuthenticationHeader$SchemeMapValue_h_