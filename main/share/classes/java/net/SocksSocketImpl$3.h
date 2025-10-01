#ifndef _java_net_SocksSocketImpl$3_h_
#define _java_net_SocksSocketImpl$3_h_
//$ class java.net.SocksSocketImpl$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {
		class SocksSocketImpl;
	}
}

namespace java {
	namespace net {

class SocksSocketImpl$3 : public ::java::security::PrivilegedAction {
	$class(SocksSocketImpl$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SocksSocketImpl$3();
	void init$(::java::net::SocksSocketImpl* this$0);
	virtual $Object* run() override;
	::java::net::SocksSocketImpl* this$0 = nullptr;
};

	} // net
} // java

#endif // _java_net_SocksSocketImpl$3_h_