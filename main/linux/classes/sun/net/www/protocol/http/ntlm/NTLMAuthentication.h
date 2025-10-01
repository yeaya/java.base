#ifndef _sun_net_www_protocol_http_ntlm_NTLMAuthentication_h_
#define _sun_net_www_protocol_http_ntlm_NTLMAuthentication_h_
//$ class sun.net.www.protocol.http.ntlm.NTLMAuthentication
//$ extends sun.net.www.protocol.http.AuthenticationInfo

#include <sun/net/www/protocol/http/AuthenticationInfo.h>

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {
				class Client;
			}
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
					namespace ntlm {
						class NTLMAuthenticationCallback;
					}
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
					namespace ntlm {

class NTLMAuthentication : public ::sun::net::www::protocol::http::AuthenticationInfo {
	$class(NTLMAuthentication, 0, ::sun::net::www::protocol::http::AuthenticationInfo)
public:
	NTLMAuthentication();
	void init$(bool isProxy, ::java::net::URL* url, ::java::net::PasswordAuthentication* pw, $String* authenticatorKey);
	void init$(bool isProxy, $String* host, int32_t port, ::java::net::PasswordAuthentication* pw, $String* authenticatorKey);
	$String* buildType1Msg();
	$String* buildType3Msg($String* challenge);
	virtual $String* getHeaderValue(::java::net::URL* url, $String* method) override;
	void init(::java::net::PasswordAuthentication* pw);
	void init0();
	virtual bool isAuthorizationStale($String* header) override;
	static bool isTrustedSite(::java::net::URL* url);
	virtual bool setHeaders(::sun::net::www::protocol::http::HttpURLConnection* conn, ::sun::net::www::HeaderParser* p, $String* raw) override;
	virtual bool supportsPreemptiveAuthorization() override;
	static bool supportsTransparentAuth();
	virtual bool useAuthCache() override;
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)170;
	static ::sun::net::www::protocol::http::ntlm::NTLMAuthenticationCallback* NTLMAuthCallback;
	$String* hostname = nullptr;
	static $String* defaultDomain;
	static bool ntlmCache;
	::java::net::PasswordAuthentication* pw = nullptr;
	::com::sun::security::ntlm::Client* client = nullptr;
};

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_ntlm_NTLMAuthentication_h_