#ifndef _sun_net_www_protocol_http_BasicAuthentication_h_
#define _sun_net_www_protocol_http_BasicAuthentication_h_
//$ class sun.net.www.protocol.http.BasicAuthentication
//$ extends sun.net.www.protocol.http.AuthenticationInfo

#include <sun/net/www/protocol/http/AuthenticationInfo.h>

namespace java {
	namespace net {
		class PasswordAuthentication;
		class URL;
	}
}
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
					class HttpURLConnection;
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

class BasicAuthentication : public ::sun::net::www::protocol::http::AuthenticationInfo {
	$class(BasicAuthentication, 0, ::sun::net::www::protocol::http::AuthenticationInfo)
public:
	BasicAuthentication();
	void init$(bool isProxy, $String* host, int32_t port, $String* realm, ::java::net::PasswordAuthentication* pw, bool isUTF8, $String* authenticatorKey);
	void init$(bool isProxy, $String* host, int32_t port, $String* realm, $String* auth, $String* authenticatorKey);
	void init$(bool isProxy, ::java::net::URL* url, $String* realm, ::java::net::PasswordAuthentication* pw, bool isUTF8, $String* authenticatorKey);
	void init$(bool isProxy, ::java::net::URL* url, $String* realm, $String* auth, $String* authenticatorKey);
	static $String* authValueFrom(::java::net::PasswordAuthentication* pw, bool isUTF8);
	virtual $String* getHeaderValue(::java::net::URL* url, $String* method) override;
	static $String* getRootPath($String* npath, $String* opath);
	virtual bool isAuthorizationStale($String* header) override;
	virtual bool setHeaders(::sun::net::www::protocol::http::HttpURLConnection* conn, ::sun::net::www::HeaderParser* p, $String* raw) override;
	virtual bool supportsPreemptiveAuthorization() override;
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)100;
	$String* auth = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_BasicAuthentication_h_