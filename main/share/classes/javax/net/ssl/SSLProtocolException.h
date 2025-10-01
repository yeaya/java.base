#ifndef _javax_net_ssl_SSLProtocolException_h_
#define _javax_net_ssl_SSLProtocolException_h_
//$ class javax.net.ssl.SSLProtocolException
//$ extends javax.net.ssl.SSLException

#include <javax/net/ssl/SSLException.h>

namespace javax {
	namespace net {
		namespace ssl {

class $export SSLProtocolException : public ::javax::net::ssl::SSLException {
	$class(SSLProtocolException, $NO_CLASS_INIT, ::javax::net::ssl::SSLException)
public:
	SSLProtocolException();
	void init$($String* reason);
	static const int64_t serialVersionUID = (int64_t)0x4B90C3A533ED3AD0;
	SSLProtocolException(const SSLProtocolException& e);
	SSLProtocolException wrapper$();
	virtual void throwWrapper$() override;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLProtocolException_h_