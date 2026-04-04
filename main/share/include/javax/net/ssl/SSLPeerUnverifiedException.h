#ifndef _javax_net_ssl_SSLPeerUnverifiedException_h_
#define _javax_net_ssl_SSLPeerUnverifiedException_h_
//$ class javax.net.ssl.SSLPeerUnverifiedException
//$ extends javax.net.ssl.SSLException

#include <javax/net/ssl/SSLException.h>

namespace javax {
	namespace net {
		namespace ssl {

class $import SSLPeerUnverifiedException : public ::javax::net::ssl::SSLException {
	$class(SSLPeerUnverifiedException, $NO_CLASS_INIT, ::javax::net::ssl::SSLException)
public:
	SSLPeerUnverifiedException();
	void init$($String* reason);
	static const int64_t serialVersionUID = (int64_t)0x8437867accfeb81d;
	SSLPeerUnverifiedException(const SSLPeerUnverifiedException& e);
	virtual void throw$() override;
	inline SSLPeerUnverifiedException* operator ->() const {
		return (SSLPeerUnverifiedException*)throwing$;
	}
	inline operator SSLPeerUnverifiedException*() const {
		return (SSLPeerUnverifiedException*)throwing$;
	}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLPeerUnverifiedException_h_