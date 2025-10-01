#ifndef _sun_net_www_protocol_http_NegotiateAuthentication_h_
#define _sun_net_www_protocol_http_NegotiateAuthentication_h_
//$ class sun.net.www.protocol.http.NegotiateAuthentication
//$ extends sun.net.www.protocol.http.AuthenticationInfo

#include <java/lang/Array.h>
#include <sun/net/www/protocol/http/AuthenticationInfo.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
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
					class HttpCallerInfo;
					class HttpURLConnection;
					class Negotiator;
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

class NegotiateAuthentication : public ::sun::net::www::protocol::http::AuthenticationInfo {
	$class(NegotiateAuthentication, 0, ::sun::net::www::protocol::http::AuthenticationInfo)
public:
	NegotiateAuthentication();
	void init$(::sun::net::www::protocol::http::HttpCallerInfo* hci);
	$bytes* firstToken();
	static ::java::util::HashMap* getCache();
	virtual $String* getHeaderValue(::java::net::URL* url, $String* method) override;
	virtual bool isAuthorizationStale($String* header) override;
	static bool isSupported(::sun::net::www::protocol::http::HttpCallerInfo* hci);
	$bytes* nextToken($bytes* token);
	virtual bool setHeaders(::sun::net::www::protocol::http::HttpURLConnection* conn, ::sun::net::www::HeaderParser* p, $String* raw) override;
	virtual bool supportsPreemptiveAuthorization() override;
	virtual bool useAuthCache() override;
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)100;
	::sun::net::www::protocol::http::HttpCallerInfo* hci = nullptr;
	static ::java::util::HashMap* supported;
	static ::java::lang::ThreadLocal* cache;
	static ::java::util::concurrent::locks::ReentrantLock* negotiateLock;
	static bool cacheSPNEGO;
	::sun::net::www::protocol::http::Negotiator* negotiator = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_NegotiateAuthentication_h_