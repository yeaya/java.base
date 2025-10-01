#ifndef _sun_net_www_protocol_https_AbstractDelegateHttpsURLConnection_h_
#define _sun_net_www_protocol_https_AbstractDelegateHttpsURLConnection_h_
//$ class sun.net.www.protocol.https.AbstractDelegateHttpsURLConnection
//$ extends sun.net.www.protocol.http.HttpURLConnection

#include <java/lang/Array.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>

namespace java {
	namespace net {
		class Proxy;
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
			class HostnameVerifier;
			class SSLSession;
			class SSLSocketFactory;
		}
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace http {
				class HttpClient;
			}
		}
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					class Handler;
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

class AbstractDelegateHttpsURLConnection : public ::sun::net::www::protocol::http::HttpURLConnection {
	$class(AbstractDelegateHttpsURLConnection, $NO_CLASS_INIT, ::sun::net::www::protocol::http::HttpURLConnection)
public:
	AbstractDelegateHttpsURLConnection();
	void init$(::java::net::URL* url, ::sun::net::www::protocol::http::Handler* handler);
	void init$(::java::net::URL* url, ::java::net::Proxy* p, ::sun::net::www::protocol::http::Handler* handler);
	virtual void connect() override;
	virtual $String* getCipherSuite();
	virtual ::javax::net::ssl::HostnameVerifier* getHostnameVerifier() {return nullptr;}
	virtual $Array<::java::security::cert::Certificate>* getLocalCertificates();
	virtual ::java::security::Principal* getLocalPrincipal();
	virtual ::sun::net::www::http::HttpClient* getNewHttpClient(::java::net::URL* url, ::java::net::Proxy* p, int32_t connectTimeout) override;
	virtual ::sun::net::www::http::HttpClient* getNewHttpClient(::java::net::URL* url, ::java::net::Proxy* p, int32_t connectTimeout, bool useCache) override;
	virtual ::java::security::Principal* getPeerPrincipal();
	virtual ::javax::net::ssl::SSLSession* getSSLSession();
	virtual ::javax::net::ssl::SSLSocketFactory* getSSLSocketFactory() {return nullptr;}
	virtual $Array<::java::security::cert::Certificate>* getServerCertificates();
	virtual bool isConnected();
	virtual void proxiedConnect(::java::net::URL* url, $String* proxyHost, int32_t proxyPort, bool useCache) override;
	virtual void setConnected(bool conn);
	virtual void setNewClient(::java::net::URL* url) override;
	virtual void setNewClient(::java::net::URL* url, bool useCache) override;
	virtual void setProxiedClient(::java::net::URL* url, $String* proxyHost, int32_t proxyPort) override;
	virtual void setProxiedClient(::java::net::URL* url, $String* proxyHost, int32_t proxyPort, bool useCache) override;
};

				} // https
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_https_AbstractDelegateHttpsURLConnection_h_