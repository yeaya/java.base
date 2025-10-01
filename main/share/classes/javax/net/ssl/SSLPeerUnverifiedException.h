#ifndef _javax_net_ssl_SSLPeerUnverifiedException_h_
#define _javax_net_ssl_SSLPeerUnverifiedException_h_
//$ class javax.net.ssl.SSLPeerUnverifiedException
//$ extends javax.net.ssl.SSLException

#include <javax/net/ssl/SSLException.h>

namespace javax {
	namespace net {
		namespace ssl {

class $export SSLPeerUnverifiedException : public ::javax::net::ssl::SSLException {
	$class(SSLPeerUnverifiedException, $NO_CLASS_INIT, ::javax::net::ssl::SSLException)
public:
	SSLPeerUnverifiedException();
	void init$($String* reason);
	static const int64_t serialVersionUID = (int64_t)0x8437867ACCFEB81D;
	SSLPeerUnverifiedException(const SSLPeerUnverifiedException& e);
	SSLPeerUnverifiedException wrapper$();
	virtual void throwWrapper$() override;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLPeerUnverifiedException_h_