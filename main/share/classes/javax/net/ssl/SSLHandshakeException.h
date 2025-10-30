#ifndef _javax_net_ssl_SSLHandshakeException_h_
#define _javax_net_ssl_SSLHandshakeException_h_
//$ class javax.net.ssl.SSLHandshakeException
//$ extends javax.net.ssl.SSLException

#include <javax/net/ssl/SSLException.h>

namespace javax {
	namespace net {
		namespace ssl {

class $export SSLHandshakeException : public ::javax::net::ssl::SSLException {
	$class(SSLHandshakeException, $NO_CLASS_INIT, ::javax::net::ssl::SSLException)
public:
	SSLHandshakeException();
	void init$($String* reason);
	static const int64_t serialVersionUID = (int64_t)0xB9F96DAD9F8D3C96;
	SSLHandshakeException(const SSLHandshakeException& e);
	virtual void throw$() override;
	inline SSLHandshakeException* operator ->() {
		return (SSLHandshakeException*)throwing$;
	}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLHandshakeException_h_