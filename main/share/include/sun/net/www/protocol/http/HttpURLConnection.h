#ifndef _sun_net_www_protocol_http_HttpURLConnection_h_
#define _sun_net_www_protocol_http_HttpURLConnection_h_
//$ class sun.net.www.protocol.http.HttpURLConnection
//$ extends java.net.HttpURLConnection

#include <java/lang/Array.h>
#include <java/net/HttpURLConnection.h>

#pragma push_macro("EXCLUDE_HEADERS")
#undef EXCLUDE_HEADERS
#pragma push_macro("EXCLUDE_HEADERS2")
#undef EXCLUDE_HEADERS2
#pragma push_macro("HTTP_CONNECT")
#undef HTTP_CONNECT
#pragma push_macro("RETRY_MSG1")
#undef RETRY_MSG1
#pragma push_macro("RETRY_MSG2")
#undef RETRY_MSG2
#pragma push_macro("RETRY_MSG3")
#undef RETRY_MSG3
#pragma push_macro("SET_COOKIE")
#undef SET_COOKIE
#pragma push_macro("SET_COOKIE2")
#undef SET_COOKIE2

namespace java {
	namespace io {
		class IOException;
		class InputStream;
		class OutputStream;
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace net {
		class Authenticator;
		class Authenticator$RequestorType;
		class CacheResponse;
		class CookieHandler;
		class InetAddress;
		class PasswordAuthentication;
		class Proxy;
		class ResponseCache;
		class SocketPermission;
		class URL;
		class URLConnection;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
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
		class ProgressSource;
	}
}
namespace sun {
	namespace net {
		namespace www {
			class MessageHeader;
		}
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace http {
				class HttpClient;
				class PosterOutputStream;
			}
		}
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					class AuthenticationHeader;
					class AuthenticationInfo;
					class DigestAuthentication$Parameters;
					class Handler;
					class HttpAuthenticator;
					class HttpURLConnection$StreamingOutputStream;
					class HttpURLConnection$TunnelState;
				}
			}
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class $import HttpURLConnection : public ::java::net::HttpURLConnection {
	$class(HttpURLConnection, 0, ::java::net::HttpURLConnection)
public:
	HttpURLConnection();
	void init$(::java::net::URL* u, ::sun::net::www::protocol::http::Handler* handler);
	void init$(::java::net::URL* u, $String* host, int32_t port);
	void init$(::java::net::URL* u, ::java::net::Proxy* p);
	void init$(::java::net::URL* u, ::java::net::Proxy* p, ::sun::net::www::protocol::http::Handler* handler);
	virtual ::java::net::SocketPermission* URLtoSocketPermission(::java::net::URL* url);
	virtual void addRequestProperty($String* key, $String* value) override;
	virtual $Object* authObj();
	virtual void authObj(Object$* authObj);
	static $String* checkHost($String* h);
	void checkMessageHeader($String* key, $String* value);
	void checkResponseCredentials(bool inClose);
	bool checkReuseConnection();
	bool checkSetHost();
	static ::java::net::URL* checkURL(::java::net::URL* u);
	void checkURLFile();
	virtual void connect() override;
	static $String* connectRequestURI(::java::net::URL* url);
	virtual void disconnect() override;
	void disconnectInternal();
	void disconnectWeb();
	virtual void doTunneling();
	void doTunneling0();
	void expect100Continue();
	$String* filterHeaderField($String* name, $String* value);
	bool followRedirect();
	bool followRedirect0($String* loc, int32_t stat, ::java::net::URL* locUrl);
	virtual $String* getAuthenticatorKey();
	::java::io::IOException* getChainedException(::java::io::IOException* rememberedException);
	virtual int32_t getConnectTimeout() override;
	virtual ::java::net::CookieHandler* getCookieHandler();
	virtual ::java::io::InputStream* getErrorStream() override;
	::java::util::Map* getFilteredHeaderFields();
	virtual $String* getHeaderField($String* name) override;
	virtual $String* getHeaderField(int32_t n) override;
	virtual $String* getHeaderFieldKey(int32_t n) override;
	virtual ::java::util::Map* getHeaderFields() override;
	$String* getHostAndPort(::java::net::URL* url);
	static ::sun::util::logging::PlatformLogger* getHttpLogger();
	::sun::net::www::protocol::http::AuthenticationInfo* getHttpProxyAuthentication(::sun::net::www::protocol::http::AuthenticationHeader* authhdr);
	virtual ::java::io::InputStream* getInputStream() override;
	::java::io::InputStream* getInputStream0();
	virtual $String* getMethod();
	static $String* getNetProperty($String* name);
	virtual ::sun::net::www::http::HttpClient* getNewHttpClient(::java::net::URL* url, ::java::net::Proxy* p, int32_t connectTimeout);
	virtual ::sun::net::www::http::HttpClient* getNewHttpClient(::java::net::URL* url, ::java::net::Proxy* p, int32_t connectTimeout, bool useCache);
	virtual ::java::io::OutputStream* getOutputStream() override;
	::java::io::OutputStream* getOutputStream0();
	virtual int32_t getReadTimeout() override;
	virtual ::java::util::Map* getRequestProperties() override;
	virtual $String* getRequestProperty($String* key) override;
	virtual $String* getRequestURI();
	::sun::net::www::protocol::http::AuthenticationInfo* getServerAuthentication(::sun::net::www::protocol::http::AuthenticationHeader* authhdr);
	virtual ::sun::net::www::MessageHeader* getUserSetHeaders();
	static bool hostsEqual(::java::net::URL* u1, ::java::net::URL* u2);
	bool isExternalMessageHeaderAllowed($String* key, $String* value);
	bool isLockHeldByCurrentThread();
	bool isRestrictedHeader($String* key, $String* value);
	static $String* lambda$getNetProperty$0($String* name);
	void lock();
	::sun::net::www::MessageHeader* mapToMessageHeader(::java::util::Map* map);
	static ::java::io::InputStream* openConnectionCheckRedirects(::java::net::URLConnection* c);
	virtual void plainConnect();
	virtual void plainConnect0();
	static ::java::net::PasswordAuthentication* privilegedRequestPasswordAuthentication(::java::net::Authenticator* authenticator, $String* host, ::java::net::InetAddress* addr, int32_t port, $String* protocol, $String* prompt, $String* scheme, ::java::net::URL* url, ::java::net::Authenticator$RequestorType* authType);
	virtual void proxiedConnect(::java::net::URL* url, $String* proxyHost, int32_t proxyPort, bool useCache);
	void reset();
	::sun::net::www::protocol::http::AuthenticationInfo* resetProxyAuthentication(::sun::net::www::protocol::http::AuthenticationInfo* proxyAuthentication, ::sun::net::www::protocol::http::AuthenticationHeader* auth);
	static bool sameDestination(::java::net::URL* firstURL, ::java::net::URL* secondURL);
	static ::java::util::Set* schemesListToSet($String* list);
	void sendCONNECTRequest();
	virtual void setAuthenticationProperty($String* key, $String* value);
	virtual void setAuthenticator(::java::net::Authenticator* auth) override;
	virtual void setConnectTimeout(int32_t timeout) override;
	void setCookieHeader();
	static void setDefaultAuthenticator(::sun::net::www::protocol::http::HttpAuthenticator* a);
	virtual void setNewClient(::java::net::URL* url);
	virtual void setNewClient(::java::net::URL* url, bool useCache);
	void setPreemptiveProxyAuthentication(::sun::net::www::MessageHeader* requests);
	virtual void setProxiedClient(::java::net::URL* url, $String* proxyHost, int32_t proxyPort);
	virtual void setProxiedClient(::java::net::URL* url, $String* proxyHost, int32_t proxyPort, bool useCache);
	virtual void setReadTimeout(int32_t timeout) override;
	virtual void setRequestMethod($String* method) override;
	virtual void setRequestProperty($String* key, $String* value) override;
	virtual void setTunnelState(::sun::net::www::protocol::http::HttpURLConnection$TunnelState* tunnelState);
	virtual bool streaming();
	static $String* stripIPv6ZoneId($String* host);
	virtual ::sun::net::www::protocol::http::HttpURLConnection$TunnelState* tunnelState();
	void unlock();
	virtual bool usingProxy() override;
	virtual bool usingProxyInternal();
	void writeRequests();
	static bool $assertionsDisabled;
	static $String* HTTP_CONNECT;
	static $String* version;
	static $String* userAgent;
	static const int32_t defaultmaxRedirects = 20;
	static int32_t maxRedirects;
	static bool validateProxy;
	static bool validateServer;
	static ::java::util::Set* disabledProxyingSchemes;
	static ::java::util::Set* disabledTunnelingSchemes;
	::sun::net::www::protocol::http::HttpURLConnection$StreamingOutputStream* strOutputStream = nullptr;
	static $String* RETRY_MSG1;
	static $String* RETRY_MSG2;
	static $String* RETRY_MSG3;
	static bool enableESBuffer;
	static int32_t timeout4ESBuffer;
	static int32_t bufSize4ES;
	static bool allowRestrictedHeaders;
	static ::java::util::Set* restrictedHeaderSet;
	static $StringArray* restrictedHeaders;
	static $String* httpVersion;
	static $String* acceptString;
	static $StringArray* EXCLUDE_HEADERS;
	static $StringArray* EXCLUDE_HEADERS2;
	::sun::net::www::http::HttpClient* http = nullptr;
	::sun::net::www::protocol::http::Handler* handler = nullptr;
	::java::net::Proxy* instProxy = nullptr;
	$volatile(::java::net::Authenticator*) authenticator = nullptr;
	$volatile($String*) authenticatorKey = nullptr;
	::java::net::CookieHandler* cookieHandler = nullptr;
	::java::net::ResponseCache* cacheHandler = nullptr;
	$volatile(bool) usingProxy$ = false;
	::java::net::CacheResponse* cachedResponse = nullptr;
	::sun::net::www::MessageHeader* cachedHeaders = nullptr;
	::java::io::InputStream* cachedInputStream = nullptr;
	::java::io::PrintStream* ps = nullptr;
	::java::io::InputStream* errorStream = nullptr;
	bool setUserCookies = false;
	$String* userCookies = nullptr;
	$String* userCookies2 = nullptr;
	static ::sun::net::www::protocol::http::HttpAuthenticator* defaultAuth;
	::sun::net::www::MessageHeader* requests = nullptr;
	::sun::net::www::MessageHeader* userHeaders = nullptr;
	bool connecting = false;
	$String* domain = nullptr;
	::sun::net::www::protocol::http::DigestAuthentication$Parameters* digestparams = nullptr;
	::sun::net::www::protocol::http::AuthenticationInfo* currentProxyCredentials = nullptr;
	::sun::net::www::protocol::http::AuthenticationInfo* currentServerCredentials = nullptr;
	bool needToCheck = false;
	bool doingNTLM2ndStage = false;
	bool doingNTLMp2ndStage = false;
	bool tryTransparentNTLMServer = false;
	bool tryTransparentNTLMProxy = false;
	bool useProxyResponseCode = false;
	$Object* authObj$ = nullptr;
	bool isUserServerAuth = false;
	bool isUserProxyAuth = false;
	$String* serverAuthKey = nullptr;
	$String* proxyAuthKey = nullptr;
	::sun::net::ProgressSource* pi = nullptr;
	::sun::net::www::MessageHeader* responses = nullptr;
	::java::io::InputStream* inputStream = nullptr;
	::sun::net::www::http::PosterOutputStream* poster = nullptr;
	bool setRequests = false;
	bool failedOnce = false;
	::java::lang::Exception* rememberedException = nullptr;
	::sun::net::www::http::HttpClient* reuseClient = nullptr;
	::sun::net::www::protocol::http::HttpURLConnection$TunnelState* tunnelState$ = nullptr;
	int32_t connectTimeout = 0;
	int32_t readTimeout = 0;
	::java::net::SocketPermission* socketPermission = nullptr;
	static ::sun::util::logging::PlatformLogger* logger;
	::java::util::concurrent::locks::ReentrantLock* connectionLock = nullptr;
	$String* requestURI = nullptr;
	$bytes* cdata = nullptr;
	static $String* SET_COOKIE;
	static $String* SET_COOKIE2;
	::java::util::Map* filteredHeaders = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#pragma pop_macro("EXCLUDE_HEADERS")
#pragma pop_macro("EXCLUDE_HEADERS2")
#pragma pop_macro("HTTP_CONNECT")
#pragma pop_macro("RETRY_MSG1")
#pragma pop_macro("RETRY_MSG2")
#pragma pop_macro("RETRY_MSG3")
#pragma pop_macro("SET_COOKIE")
#pragma pop_macro("SET_COOKIE2")

#endif // _sun_net_www_protocol_http_HttpURLConnection_h_