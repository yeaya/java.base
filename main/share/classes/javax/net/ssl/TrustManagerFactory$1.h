#ifndef _javax_net_ssl_TrustManagerFactory$1_h_
#define _javax_net_ssl_TrustManagerFactory$1_h_
//$ class javax.net.ssl.TrustManagerFactory$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace net {
		namespace ssl {

class TrustManagerFactory$1 : public ::java::security::PrivilegedAction {
	$class(TrustManagerFactory$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	TrustManagerFactory$1();
	void init$();
	virtual $Object* run() override;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_TrustManagerFactory$1_h_