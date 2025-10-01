#ifndef _java_net_SocksSocketImpl$1_h_
#define _java_net_SocksSocketImpl$1_h_
//$ class java.net.SocksSocketImpl$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace net {
		class SocksSocketImpl;
	}
}

namespace java {
	namespace net {

class SocksSocketImpl$1 : public ::java::security::PrivilegedExceptionAction {
	$class(SocksSocketImpl$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	SocksSocketImpl$1();
	void init$(::java::net::SocksSocketImpl* this$0, $String* val$host, int32_t val$port, int32_t val$timeout);
	virtual $Object* run() override;
	::java::net::SocksSocketImpl* this$0 = nullptr;
	int32_t val$timeout = 0;
	int32_t val$port = 0;
	$String* val$host = nullptr;
};

	} // net
} // java

#endif // _java_net_SocksSocketImpl$1_h_