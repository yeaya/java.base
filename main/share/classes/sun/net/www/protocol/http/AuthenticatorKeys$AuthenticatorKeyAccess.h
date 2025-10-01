#ifndef _sun_net_www_protocol_http_AuthenticatorKeys$AuthenticatorKeyAccess_h_
#define _sun_net_www_protocol_http_AuthenticatorKeys$AuthenticatorKeyAccess_h_
//$ interface sun.net.www.protocol.http.AuthenticatorKeys$AuthenticatorKeyAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class Authenticator;
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class $export AuthenticatorKeys$AuthenticatorKeyAccess : public ::java::lang::Object {
	$interface(AuthenticatorKeys$AuthenticatorKeyAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getKey(::java::net::Authenticator* a) {return nullptr;}
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_AuthenticatorKeys$AuthenticatorKeyAccess_h_