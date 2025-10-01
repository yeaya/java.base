#ifndef _sun_net_www_http_HttpClient_h_
#define _sun_net_www_http_HttpClient_h_
//$ class sun.net.www.http.HttpClient
//$ extends sun.net.NetworkClient

#include <sun/net/NetworkClient.h>

#pragma push_macro("HTTP_CONTINUE")
#undef HTTP_CONTINUE

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class CacheRequest;
		class InetSocketAddress;
		class Proxy;
		class URL;
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
				class HttpCapture;
				class KeepAliveCache;
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
					class HttpURLConnection;
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
			namespace http {

class HttpClient : public ::sun::net::NetworkClient {
	$class(HttpClient, 0, ::sun::net::NetworkClient)
public:
	HttpClient();
	void init$();
	void init$(::java::net::URL* url);
	void init$(::java::net::URL* url, bool proxyDisabled);
	void init$(::java::net::URL* url, $String* proxyHost, int32_t proxyPort);
	void init$(::java::net::URL* url, ::java::net::Proxy* p, int32_t to);
	void init$(::java::net::URL* url, $String* proxyHost, int32_t proxyPort, bool proxyDisabled);
	void init$(::java::net::URL* url, $String* proxyHost, int32_t proxyPort, bool proxyDisabled, int32_t to);
	static ::sun::net::www::http::HttpClient* New(::java::net::URL* url);
	static ::sun::net::www::http::HttpClient* New(::java::net::URL* url, bool useCache);
	static ::sun::net::www::http::HttpClient* New(::java::net::URL* url, ::java::net::Proxy* p, int32_t to, bool useCache, ::sun::net::www::protocol::http::HttpURLConnection* httpuc);
	static ::sun::net::www::http::HttpClient* New(::java::net::URL* url, ::java::net::Proxy* p, int32_t to, ::sun::net::www::protocol::http::HttpURLConnection* httpuc);
	static ::sun::net::www::http::HttpClient* New(::java::net::URL* url, $String* proxyHost, int32_t proxyPort, bool useCache);
	static ::sun::net::www::http::HttpClient* New(::java::net::URL* url, $String* proxyHost, int32_t proxyPort, bool useCache, int32_t to, ::sun::net::www::protocol::http::HttpURLConnection* httpuc);
	virtual void afterConnect();
	virtual bool available();
	void checkTunneling(::sun::net::www::protocol::http::HttpURLConnection* httpuc);
	virtual void closeIdleConnection();
	virtual void closeServer() override;
	virtual void finished();
	$String* getAuthenticatorKey();
	virtual ::java::net::CacheRequest* getCacheRequest();
	virtual int32_t getDefaultPort();
	static int32_t getDefaultPort($String* proto);
	virtual bool getHttpKeepAliveSet();
	virtual ::java::io::InputStream* getInputStream();
	virtual int32_t getKeepAliveTimeout();
	virtual ::java::io::OutputStream* getOutputStream();
	virtual $String* getProxyHostUsed();
	virtual int32_t getProxyPortUsed();
	virtual $String* getRequestMethod();
	virtual $String* getURLFile();
	virtual bool isCachedConnection();
	virtual bool isInKeepAliveCache();
	bool isKeepingAlive();
	void lock();
	static void logFinest($String* msg);
	virtual bool needsTunneling();
	static ::java::net::Proxy* newHttpProxy($String* proxyHost, int32_t proxyPort, $String* proto);
	virtual void openServer($String* server, int32_t port) override;
	virtual void openServer();
	virtual bool parseHTTP(::sun::net::www::MessageHeader* responses, ::sun::net::ProgressSource* pi, ::sun::net::www::protocol::http::HttpURLConnection* httpuc);
	bool parseHTTPHeader(::sun::net::www::MessageHeader* responses, ::sun::net::ProgressSource* pi, ::sun::net::www::protocol::http::HttpURLConnection* httpuc);
	void privilegedOpenServer(::java::net::InetSocketAddress* server);
	virtual void putInKeepAliveCache();
	static void resetProperties();
	virtual void setCacheRequest(::java::net::CacheRequest* cacheRequest);
	virtual void setDoNotRetry(bool value);
	virtual void setIgnoreContinue(bool value);
	void superOpenServer($String* proxyHost, int32_t proxyPort);
	virtual $String* toString() override;
	void unlock();
	virtual void writeRequests(::sun::net::www::MessageHeader* head);
	virtual void writeRequests(::sun::net::www::MessageHeader* head, ::sun::net::www::http::PosterOutputStream* pos);
	virtual void writeRequests(::sun::net::www::MessageHeader* head, ::sun::net::www::http::PosterOutputStream* pos, bool streaming);
	static bool $assertionsDisabled;
	::java::util::concurrent::locks::ReentrantLock* clientLock = nullptr;
	bool cachedHttpClient = false;
	bool inCache = false;
	::sun::net::www::MessageHeader* requests = nullptr;
	::sun::net::www::http::PosterOutputStream* poster = nullptr;
	bool streaming = false;
	bool failedOnce = false;
	bool ignoreContinue = false;
	static const int32_t HTTP_CONTINUE = 100;
	static const int32_t httpPortNumber = 80;
	bool proxyDisabled = false;
	bool usingProxy = false;
	$String* host = nullptr;
	int32_t port = 0;
	static ::sun::net::www::http::KeepAliveCache* kac;
	static bool keepAliveProp;
	static bool retryPostProp;
	static bool cacheNTLMProp;
	static bool cacheSPNEGOProp;
	$volatile(bool) keepingAlive = false;
	$volatile(bool) disableKeepAlive = false;
	int32_t keepAliveConnections = 0;
	int32_t keepAliveTimeout = 0;
	::java::net::CacheRequest* cacheRequest = nullptr;
	::java::net::URL* url = nullptr;
	bool reuse = false;
	::sun::net::www::http::HttpCapture* capture = nullptr;
	static ::sun::util::logging::PlatformLogger* logger;
	$volatile($String*) authenticatorKey = nullptr;
};

			} // http
		} // www
	} // net
} // sun

#pragma pop_macro("HTTP_CONTINUE")

#endif // _sun_net_www_http_HttpClient_h_