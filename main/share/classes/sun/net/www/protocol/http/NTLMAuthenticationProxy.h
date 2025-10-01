#ifndef _sun_net_www_protocol_http_NTLMAuthenticationProxy_h_
#define _sun_net_www_protocol_http_NTLMAuthenticationProxy_h_
//$ class sun.net.www.protocol.http.NTLMAuthenticationProxy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Method;
		}
	}
}
namespace java {
	namespace net {
		class PasswordAuthentication;
		class URL;
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					class AuthenticationInfo;
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

class NTLMAuthenticationProxy : public ::java::lang::Object {
	$class(NTLMAuthenticationProxy, 0, ::java::lang::Object)
public:
	NTLMAuthenticationProxy();
	void init$(::java::lang::reflect::Constructor* fourArgCtr, ::java::lang::reflect::Constructor* sixArgCtr);
	virtual ::sun::net::www::protocol::http::AuthenticationInfo* create(bool isProxy, ::java::net::URL* url, ::java::net::PasswordAuthentication* pw, $String* authenticatorKey);
	virtual ::sun::net::www::protocol::http::AuthenticationInfo* create(bool isProxy, $String* host, int32_t port, ::java::net::PasswordAuthentication* pw, $String* authenticatorKey);
	static void finest(::java::lang::Exception* e);
	static bool isTrustedSite(::java::net::URL* url);
	static bool supportsTransparentAuth();
	static ::sun::net::www::protocol::http::NTLMAuthenticationProxy* tryLoadNTLMAuthentication();
	static ::java::lang::reflect::Method* supportsTA;
	static ::java::lang::reflect::Method* isTrustedSite$;
	static $String* clazzStr;
	static $String* supportsTAStr;
	static $String* isTrustedSiteStr;
	static ::sun::net::www::protocol::http::NTLMAuthenticationProxy* proxy;
	static bool supported;
	static bool supportsTransparentAuth$;
	::java::lang::reflect::Constructor* fourArgCtr = nullptr;
	::java::lang::reflect::Constructor* sixArgCtr = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_NTLMAuthenticationProxy_h_