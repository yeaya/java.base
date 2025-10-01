#ifndef _javax_net_ssl_SSLSocketFactory$1_h_
#define _javax_net_ssl_SSLSocketFactory$1_h_
//$ class javax.net.ssl.SSLSocketFactory$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace net {
		namespace ssl {

class SSLSocketFactory$1 : public ::java::security::PrivilegedAction {
	$class(SSLSocketFactory$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SSLSocketFactory$1();
	void init$($String* val$name);
	virtual $Object* run() override;
	$String* val$name = nullptr;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLSocketFactory$1_h_