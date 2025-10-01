#ifndef _javax_net_ssl_SSLKeyException_h_
#define _javax_net_ssl_SSLKeyException_h_
//$ class javax.net.ssl.SSLKeyException
//$ extends javax.net.ssl.SSLException

#include <javax/net/ssl/SSLException.h>

namespace javax {
	namespace net {
		namespace ssl {

class $export SSLKeyException : public ::javax::net::ssl::SSLException {
	$class(SSLKeyException, $NO_CLASS_INIT, ::javax::net::ssl::SSLException)
public:
	SSLKeyException();
	void init$($String* reason);
	static const int64_t serialVersionUID = (int64_t)0x8FFBB0487192412E;
	SSLKeyException(const SSLKeyException& e);
	SSLKeyException wrapper$();
	virtual void throwWrapper$() override;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLKeyException_h_