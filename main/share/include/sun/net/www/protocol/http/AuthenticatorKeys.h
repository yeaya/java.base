#ifndef _sun_net_www_protocol_http_AuthenticatorKeys_h_
#define _sun_net_www_protocol_http_AuthenticatorKeys_h_
//$ class sun.net.www.protocol.http.AuthenticatorKeys
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("IDS")
#undef IDS
#pragma push_macro("DEFAULT")
#undef DEFAULT

namespace java {
	namespace net {
		class Authenticator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicLong;
			}
		}
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					class AuthenticatorKeys$AuthenticatorKeyAccess;
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

class $import AuthenticatorKeys : public ::java::lang::Object {
	$class(AuthenticatorKeys, 0, ::java::lang::Object)
public:
	AuthenticatorKeys();
	void init$();
	static $String* computeKey(::java::net::Authenticator* a);
	static $String* getKey(::java::net::Authenticator* authenticator);
	static void setAuthenticatorKeyAccess(::sun::net::www::protocol::http::AuthenticatorKeys$AuthenticatorKeyAccess* access);
	static $String* DEFAULT;
	static ::java::util::concurrent::atomic::AtomicLong* IDS;
	static ::sun::net::www::protocol::http::AuthenticatorKeys$AuthenticatorKeyAccess* authenticatorKeyAccess;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#pragma pop_macro("IDS")
#pragma pop_macro("DEFAULT")

#endif // _sun_net_www_protocol_http_AuthenticatorKeys_h_