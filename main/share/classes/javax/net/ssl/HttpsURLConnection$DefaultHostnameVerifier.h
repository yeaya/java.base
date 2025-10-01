#ifndef _javax_net_ssl_HttpsURLConnection$DefaultHostnameVerifier_h_
#define _javax_net_ssl_HttpsURLConnection$DefaultHostnameVerifier_h_
//$ class javax.net.ssl.HttpsURLConnection$DefaultHostnameVerifier
//$ extends javax.net.ssl.HostnameVerifier

#include <javax/net/ssl/HostnameVerifier.h>

namespace javax {
	namespace net {
		namespace ssl {
			class SSLSession;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class HttpsURLConnection$DefaultHostnameVerifier : public ::javax::net::ssl::HostnameVerifier {
	$class(HttpsURLConnection$DefaultHostnameVerifier, $NO_CLASS_INIT, ::javax::net::ssl::HostnameVerifier)
public:
	HttpsURLConnection$DefaultHostnameVerifier();
	void init$();
	virtual bool verify($String* hostname, ::javax::net::ssl::SSLSession* session) override;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_HttpsURLConnection$DefaultHostnameVerifier_h_