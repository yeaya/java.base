#ifndef _javax_net_ssl_SSLKeyException_h_
#define _javax_net_ssl_SSLKeyException_h_
//$ class javax.net.ssl.SSLKeyException
//$ extends javax.net.ssl.SSLException

#include <javax/net/ssl/SSLException.h>

namespace javax {
	namespace net {
		namespace ssl {

class $import SSLKeyException : public ::javax::net::ssl::SSLException {
	$class(SSLKeyException, $NO_CLASS_INIT, ::javax::net::ssl::SSLException)
public:
	SSLKeyException();
	void init$($String* reason);
	static const int64_t serialVersionUID = (int64_t)0x8ffbb0487192412e;
	SSLKeyException(const SSLKeyException& e);
	virtual void throw$() override;
	inline SSLKeyException* operator ->() const {
		return (SSLKeyException*)throwing$;
	}
	inline operator SSLKeyException*() const {
		return (SSLKeyException*)throwing$;
	}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLKeyException_h_