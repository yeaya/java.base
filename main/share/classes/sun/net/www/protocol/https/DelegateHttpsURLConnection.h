#ifndef _sun_net_www_protocol_https_DelegateHttpsURLConnection_h_
#define _sun_net_www_protocol_https_DelegateHttpsURLConnection_h_
//$ class sun.net.www.protocol.https.DelegateHttpsURLConnection
//$ extends sun.net.www.protocol.https.AbstractDelegateHttpsURLConnection

#include <sun/net/www/protocol/https/AbstractDelegateHttpsURLConnection.h>

namespace java {
	namespace net {
		class Proxy;
		class URL;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class HostnameVerifier;
			class HttpsURLConnection;
			class SSLSocketFactory;
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

class DelegateHttpsURLConnection : public ::sun::net::www::protocol::https::AbstractDelegateHttpsURLConnection {
	$class(DelegateHttpsURLConnection, $NO_CLASS_INIT, ::sun::net::www::protocol::https::AbstractDelegateHttpsURLConnection)
public:
	DelegateHttpsURLConnection();
	void init$(::java::net::URL* url, ::sun::net::www::protocol::http::Handler* handler, ::javax::net::ssl::HttpsURLConnection* httpsURLConnection);
	void init$(::java::net::URL* url, ::java::net::Proxy* p, ::sun::net::www::protocol::http::Handler* handler, ::javax::net::ssl::HttpsURLConnection* httpsURLConnection);
	virtual ::javax::net::ssl::HostnameVerifier* getHostnameVerifier() override;
	virtual ::javax::net::ssl::SSLSocketFactory* getSSLSocketFactory() override;
	::javax::net::ssl::HttpsURLConnection* httpsURLConnection = nullptr;
};

				} // https
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_https_DelegateHttpsURLConnection_h_