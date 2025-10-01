#ifndef _javax_net_ssl_HttpsURLConnection_h_
#define _javax_net_ssl_HttpsURLConnection_h_
//$ class javax.net.ssl.HttpsURLConnection
//$ extends java.net.HttpURLConnection

#include <java/lang/Array.h>
#include <java/net/HttpURLConnection.h>

namespace java {
	namespace net {
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
namespace java {
	namespace util {
		class Optional;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class HostnameVerifier;
			class SSLSocketFactory;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $import HttpsURLConnection : public ::java::net::HttpURLConnection {
	$class(HttpsURLConnection, 0, ::java::net::HttpURLConnection)
public:
	HttpsURLConnection();
	using ::java::net::HttpURLConnection::getHeaderField;
	void init$(::java::net::URL* url);
	virtual $String* getCipherSuite() {return nullptr;}
	static ::javax::net::ssl::HostnameVerifier* getDefaultHostnameVerifier();
	static ::javax::net::ssl::SSLSocketFactory* getDefaultSSLSocketFactory();
	virtual ::javax::net::ssl::HostnameVerifier* getHostnameVerifier();
	virtual $Array<::java::security::cert::Certificate>* getLocalCertificates() {return nullptr;}
	virtual ::java::security::Principal* getLocalPrincipal();
	virtual ::java::security::Principal* getPeerPrincipal();
	virtual ::java::util::Optional* getSSLSession();
	virtual ::javax::net::ssl::SSLSocketFactory* getSSLSocketFactory();
	virtual $Array<::java::security::cert::Certificate>* getServerCertificates() {return nullptr;}
	static void setDefaultHostnameVerifier(::javax::net::ssl::HostnameVerifier* v);
	static void setDefaultSSLSocketFactory(::javax::net::ssl::SSLSocketFactory* sf);
	virtual void setHostnameVerifier(::javax::net::ssl::HostnameVerifier* v);
	virtual void setSSLSocketFactory(::javax::net::ssl::SSLSocketFactory* sf);
	static ::javax::net::ssl::HostnameVerifier* defaultHostnameVerifier;
	::javax::net::ssl::HostnameVerifier* hostnameVerifier = nullptr;
	static ::javax::net::ssl::SSLSocketFactory* defaultSSLSocketFactory;
	::javax::net::ssl::SSLSocketFactory* sslSocketFactory = nullptr;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_HttpsURLConnection_h_