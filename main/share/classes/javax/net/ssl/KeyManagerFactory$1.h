#ifndef _javax_net_ssl_KeyManagerFactory$1_h_
#define _javax_net_ssl_KeyManagerFactory$1_h_
//$ class javax.net.ssl.KeyManagerFactory$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace net {
		namespace ssl {

class KeyManagerFactory$1 : public ::java::security::PrivilegedAction {
	$class(KeyManagerFactory$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	KeyManagerFactory$1();
	void init$();
	virtual $Object* run() override;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_KeyManagerFactory$1_h_