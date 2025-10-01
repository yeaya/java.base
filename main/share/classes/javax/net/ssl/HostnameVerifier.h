#ifndef _javax_net_ssl_HostnameVerifier_h_
#define _javax_net_ssl_HostnameVerifier_h_
//$ interface javax.net.ssl.HostnameVerifier
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export HostnameVerifier : public ::java::lang::Object {
	$interface(HostnameVerifier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool verify($String* hostname, ::javax::net::ssl::SSLSession* session) {return false;}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_HostnameVerifier_h_