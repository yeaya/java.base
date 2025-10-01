#ifndef _java_net_HttpConnectSocketImpl$1_h_
#define _java_net_HttpConnectSocketImpl$1_h_
//$ class java.net.HttpConnectSocketImpl$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {

class HttpConnectSocketImpl$1 : public ::java::security::PrivilegedAction {
	$class(HttpConnectSocketImpl$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	HttpConnectSocketImpl$1();
	void init$();
	virtual $Object* run() override;
};

	} // net
} // java

#endif // _java_net_HttpConnectSocketImpl$1_h_