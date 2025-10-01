#ifndef _javax_net_ssl_ExtendedSSLSession_h_
#define _javax_net_ssl_ExtendedSSLSession_h_
//$ class javax.net.ssl.ExtendedSSLSession
//$ extends javax.net.ssl.SSLSession

#include <java/lang/Array.h>
#include <javax/net/ssl/SSLSession.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $export ExtendedSSLSession : public ::javax::net::ssl::SSLSession {
	$class(ExtendedSSLSession, $NO_CLASS_INIT, ::javax::net::ssl::SSLSession)
public:
	ExtendedSSLSession();
	void init$();
	virtual $StringArray* getLocalSupportedSignatureAlgorithms() {return nullptr;}
	virtual $StringArray* getPeerSupportedSignatureAlgorithms() {return nullptr;}
	virtual ::java::util::List* getRequestedServerNames();
	virtual ::java::util::List* getStatusResponses();
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_ExtendedSSLSession_h_