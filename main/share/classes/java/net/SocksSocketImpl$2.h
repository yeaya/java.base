#ifndef _java_net_SocksSocketImpl$2_h_
#define _java_net_SocksSocketImpl$2_h_
//$ class java.net.SocksSocketImpl$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {
		class InetAddress;
		class SocksSocketImpl;
	}
}

namespace java {
	namespace net {

class SocksSocketImpl$2 : public ::java::security::PrivilegedAction {
	$class(SocksSocketImpl$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SocksSocketImpl$2();
	void init$(::java::net::SocksSocketImpl* this$0, ::java::net::InetAddress* val$addr);
	virtual $Object* run() override;
	::java::net::SocksSocketImpl* this$0 = nullptr;
	::java::net::InetAddress* val$addr = nullptr;
};

	} // net
} // java

#endif // _java_net_SocksSocketImpl$2_h_