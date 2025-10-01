#ifndef _sun_net_www_protocol_https_HttpsClient_h_
#define _sun_net_www_protocol_https_HttpsClient_h_
//$ class sun.net.www.protocol.https.HttpsClient
//$ extends sun.net.www.http.HttpClient
//$ implements javax.net.ssl.HandshakeCompletedListener

#include <java/lang/Array.h>
#include <javax/net/ssl/HandshakeCompletedListener.h>
#include <sun/net/www/http/HttpClient.h>

namespace java {
	namespace net {
		class Proxy;
		class Socket;
		class URL;
	}
}
namespace java {
	namespace security {
		class Principal;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class HandshakeCompletedEvent;
			class HostnameVerifier;
			class SSLSession;
			class SSLSocketFactory;
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
				namespace https {

class HttpsClient : public ::sun::net::www::http::HttpClient, public ::javax::net::ssl::HandshakeCompletedListener {
	$class(HttpsClient, 0, ::sun::net::www::http::HttpClient, ::javax::net::ssl::HandshakeCompletedListener)
public:
	HttpsClient();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::net::ssl::SSLSocketFactory* sf, ::java::net::URL* url);
	void init$(::javax::net::ssl::SSLSocketFactory* sf, ::java::net::URL* url, $String* proxyHost, int32_t proxyPort);
	void init$(::javax::net::ssl::SSLSocketFactory* sf, ::java::net::URL* url, $String* proxyHost, int32_t proxyPort, int32_t connectTimeout);
	void init$(::javax::net::ssl::SSLSocketFactory* sf, ::java::net::URL* url, ::java::net::Proxy* proxy, int32_t connectTimeout);
	static ::sun::net::www::http::HttpClient* New(::javax::net::ssl::SSLSocketFactory* sf, ::java::net::URL* url, ::javax::net::ssl::HostnameVerifier* hv, ::sun::net::www::protocol::http::HttpURLConnection* httpuc);
	static ::sun::net::www::http::HttpClient* New(::javax::net::ssl::SSLSocketFactory* sf, ::java::net::URL* url, ::javax::net::ssl::HostnameVerifier* hv, bool useCache, ::sun::net::www::protocol::http::HttpURLConnection* httpuc);
	static ::sun::net::www::http::HttpClient* New(::javax::net::ssl::SSLSocketFactory* sf, ::java::net::URL* url, ::javax::net::ssl::HostnameVerifier* hv, $String* proxyHost, int32_t proxyPort, ::sun::net::www::protocol::http::HttpURLConnection* httpuc);
	static ::sun::net::www::http::HttpClient* New(::javax::net::ssl::SSLSocketFactory* sf, ::java::net::URL* url, ::javax::net::ssl::HostnameVerifier* hv, $String* proxyHost, int32_t proxyPort, bool useCache, ::sun::net::www::protocol::http::HttpURLConnection* httpuc);
	static ::sun::net::www::http::HttpClient* New(::javax::net::ssl::SSLSocketFactory* sf, ::java::net::URL* url, ::javax::net::ssl::HostnameVerifier* hv, $String* proxyHost, int32_t proxyPort, bool useCache, int32_t connectTimeout, ::sun::net::www::protocol::http::HttpURLConnection* httpuc);
	static ::sun::net::www::http::HttpClient* New(::javax::net::ssl::SSLSocketFactory* sf, ::java::net::URL* url, ::javax::net::ssl::HostnameVerifier* hv, ::java::net::Proxy* p, bool useCache, int32_t connectTimeout, ::sun::net::www::protocol::http::HttpURLConnection* httpuc);
	virtual void afterConnect() override;
	void checkURLSpoofing(::javax::net::ssl::HostnameVerifier* hostnameVerifier);
	virtual void closeIdleConnection() override;
	virtual ::java::net::Socket* createSocket() override;
	$String* getCipherSuite();
	$StringArray* getCipherSuites();
	virtual int32_t getDefaultPort() override;
	$Array<::java::security::cert::Certificate>* getLocalCertificates();
	::java::security::Principal* getLocalPrincipal();
	::java::security::Principal* getPeerPrincipal();
	$StringArray* getProtocols();
	virtual $String* getProxyHostUsed() override;
	virtual int32_t getProxyPortUsed() override;
	::javax::net::ssl::SSLSession* getSSLSession();
	::javax::net::ssl::SSLSocketFactory* getSSLSocketFactory();
	$Array<::java::security::cert::Certificate>* getServerCertificates();
	$String* getUserAgent();
	virtual void handshakeCompleted(::javax::net::ssl::HandshakeCompletedEvent* event) override;
	virtual bool needsTunneling() override;
	virtual void putInKeepAliveCache() override;
	void setHostnameVerifier(::javax::net::ssl::HostnameVerifier* hv);
	void setSSLSocketFactory(::javax::net::ssl::SSLSocketFactory* sf);
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	static const int32_t httpsPortNumber = 443;
	static $String* defaultHVCanonicalName;
	::javax::net::ssl::HostnameVerifier* hv = nullptr;
	::javax::net::ssl::SSLSocketFactory* sslSocketFactory = nullptr;
	::javax::net::ssl::SSLSession* session = nullptr;
};

				} // https
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_https_HttpsClient_h_