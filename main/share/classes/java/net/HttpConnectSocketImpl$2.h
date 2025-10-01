#ifndef _java_net_HttpConnectSocketImpl$2_h_
#define _java_net_HttpConnectSocketImpl$2_h_
//$ class java.net.HttpConnectSocketImpl$2
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace net {
		class HttpConnectSocketImpl;
	}
}

namespace java {
	namespace net {

class HttpConnectSocketImpl$2 : public ::java::security::PrivilegedExceptionAction {
	$class(HttpConnectSocketImpl$2, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	HttpConnectSocketImpl$2();
	void init$(::java::net::HttpConnectSocketImpl* this$0, $String* val$urlString, int32_t val$timeout);
	virtual $Object* run() override;
	::java::net::HttpConnectSocketImpl* this$0 = nullptr;
	int32_t val$timeout = 0;
	$String* val$urlString = nullptr;
};

	} // net
} // java

#endif // _java_net_HttpConnectSocketImpl$2_h_