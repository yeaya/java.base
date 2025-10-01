#ifndef _sun_net_www_protocol_http_DigestAuthentication_h_
#define _sun_net_www_protocol_http_DigestAuthentication_h_
//$ class sun.net.www.protocol.http.DigestAuthentication
//$ extends sun.net.www.protocol.http.AuthenticationInfo

#include <java/lang/Array.h>
#include <sun/net/www/protocol/http/AuthenticationInfo.h>

namespace java {
	namespace net {
		class PasswordAuthentication;
		class URL;
	}
}
namespace java {
	namespace security {
		class MessageDigest;
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
					class DigestAuthentication$Parameters;
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

class DigestAuthentication : public ::sun::net::www::protocol::http::AuthenticationInfo {
	$class(DigestAuthentication, 0, ::sun::net::www::protocol::http::AuthenticationInfo)
public:
	DigestAuthentication();
	void init$(bool isProxy, ::java::net::URL* url, $String* realm, $String* authMethod, ::java::net::PasswordAuthentication* pw, ::sun::net::www::protocol::http::DigestAuthentication$Parameters* params, $String* authenticatorKey);
	void init$(bool isProxy, $String* host, int32_t port, $String* realm, $String* authMethod, ::java::net::PasswordAuthentication* pw, ::sun::net::www::protocol::http::DigestAuthentication$Parameters* params, $String* authenticatorKey);
	virtual void checkResponse($String* header, $String* method, ::java::net::URL* url);
	virtual void checkResponse($String* header, $String* method, $String* uri);
	$String* computeDigest(bool isRequest, $String* userName, $chars* password, $String* realm, $String* connMethod, $String* requestURI, $String* nonceString, $String* cnonce, $String* ncValue);
	$String* encode($String* src, $chars* passwd, ::java::security::MessageDigest* md);
	virtual $String* getHeaderValue(::java::net::URL* url, $String* method) override;
	virtual $String* getHeaderValue($String* requestURI, $String* method);
	$String* getHeaderValueImpl($String* uri, $String* method);
	virtual bool isAuthorizationStale($String* header) override;
	virtual bool setHeaders(::sun::net::www::protocol::http::HttpURLConnection* conn, ::sun::net::www::HeaderParser* p, $String* raw) override;
	virtual bool supportsPreemptiveAuthorization() override;
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)100;
	$String* authMethod = nullptr;
	static $String* compatPropName;
	static bool delimCompatFlag;
	::sun::net::www::protocol::http::DigestAuthentication$Parameters* params = nullptr;
	static $chars* charArray;
	static $StringArray* zeroPad;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_DigestAuthentication_h_