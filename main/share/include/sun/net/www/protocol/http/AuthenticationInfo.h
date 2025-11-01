#ifndef _sun_net_www_protocol_http_AuthenticationInfo_h_
#define _sun_net_www_protocol_http_AuthenticationInfo_h_
//$ class sun.net.www.protocol.http.AuthenticationInfo
//$ extends sun.net.www.protocol.http.AuthCacheValue
//$ implements java.lang.Cloneable

#include <java/lang/Cloneable.h>
#include <sun/net/www/protocol/http/AuthCacheValue.h>

#pragma push_macro("PROXY_AUTHENTICATION")
#undef PROXY_AUTHENTICATION
#pragma push_macro("SERVER_AUTHENTICATION")
#undef SERVER_AUTHENTICATION

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace net {
		class PasswordAuthentication;
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
				class Condition;
				class ReentrantLock;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
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
					class AuthCacheValue$Type;
					class AuthScheme;
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

class $import AuthenticationInfo : public ::sun::net::www::protocol::http::AuthCacheValue, public ::java::lang::Cloneable {
	$class(AuthenticationInfo, 0, ::sun::net::www::protocol::http::AuthCacheValue, ::java::lang::Cloneable)
public:
	AuthenticationInfo();
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(char16_t type, ::sun::net::www::protocol::http::AuthScheme* authScheme, $String* host, int32_t port, $String* realm, $String* authenticatorKey);
	void init$(char16_t type, ::sun::net::www::protocol::http::AuthScheme* authScheme, ::java::net::URL* url, $String* realm, $String* authenticatorKey);
	virtual void addToCache();
	virtual $String* cacheKey(bool includeRealm);
	virtual $Object* clone() override;
	virtual ::java::net::PasswordAuthentication* credentials() override;
	static void endAuthRequest($String* key);
	static ::sun::net::www::protocol::http::AuthenticationInfo* getAuth($String* key, ::java::net::URL* url);
	virtual ::sun::net::www::protocol::http::AuthScheme* getAuthScheme() override;
	virtual ::sun::net::www::protocol::http::AuthCacheValue$Type* getAuthType() override;
	$String* getAuthenticatorKey();
	static ::sun::net::www::protocol::http::AuthenticationInfo* getCachedProxyAuth($String* key);
	static ::sun::net::www::protocol::http::AuthenticationInfo* getCachedServerAuth($String* key);
	virtual $String* getHeaderName();
	virtual $String* getHeaderValue(::java::net::URL* url, $String* method) {return nullptr;}
	virtual $String* getHost() override;
	virtual $String* getPath() override;
	virtual int32_t getPort() override;
	virtual $String* getProtocolScheme() override;
	static ::sun::net::www::protocol::http::AuthenticationInfo* getProxyAuth($String* host, int32_t port, $String* authenticatorKey);
	static ::sun::net::www::protocol::http::AuthenticationInfo* getProxyAuth($String* key);
	static $String* getProxyAuthKey($String* host, int32_t port, $String* realm, ::sun::net::www::protocol::http::AuthScheme* scheme, $String* authenticatorKey);
	virtual $String* getRealm() override;
	static ::sun::net::www::protocol::http::AuthenticationInfo* getServerAuth(::java::net::URL* url, $String* authenticatorKey);
	static ::sun::net::www::protocol::http::AuthenticationInfo* getServerAuth($String* key);
	static $String* getServerAuthKey(::java::net::URL* url, $String* realm, ::sun::net::www::protocol::http::AuthScheme* scheme, $String* authenticatorKey);
	virtual bool isAuthorizationStale($String* header) {return false;}
	void readObject(::java::io::ObjectInputStream* s);
	static $String* reducePath($String* urlPath);
	virtual void removeFromCache();
	static ::sun::net::www::protocol::http::AuthenticationInfo* requestAuthentication($String* key, ::java::util::function::Function* cache);
	static void requestCompleted($String* key);
	virtual bool setHeaders(::sun::net::www::protocol::http::HttpURLConnection* conn, ::sun::net::www::HeaderParser* p, $String* raw) {return false;}
	virtual bool supportsPreemptiveAuthorization() {return false;}
	virtual $String* toString() override;
	virtual bool useAuthCache();
	void writeObject(::java::io::ObjectOutputStream* s);
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0xDC143BADD6E566F5;
	static const char16_t SERVER_AUTHENTICATION = ((char16_t)115);
	static const char16_t PROXY_AUTHENTICATION = ((char16_t)112);
	static bool serializeAuth;
	::java::net::PasswordAuthentication* pw = nullptr;
	static ::java::util::HashMap* requests;
	static ::java::util::concurrent::locks::ReentrantLock* requestLock;
	static ::java::util::concurrent::locks::Condition* requestFinished;
	char16_t type = 0;
	::sun::net::www::protocol::http::AuthScheme* authScheme = nullptr;
	$String* protocol = nullptr;
	$String* host = nullptr;
	int32_t port = 0;
	$String* realm = nullptr;
	$String* path = nullptr;
	$String* authenticatorKey = nullptr;
	$String* s1 = nullptr;
	$String* s2 = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#pragma pop_macro("PROXY_AUTHENTICATION")
#pragma pop_macro("SERVER_AUTHENTICATION")

#endif // _sun_net_www_protocol_http_AuthenticationInfo_h_