#ifndef _java_net_InetAddress$CachedLocalHost_h_
#define _java_net_InetAddress$CachedLocalHost_h_
//$ class java.net.InetAddress$CachedLocalHost
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}

namespace java {
	namespace net {

class InetAddress$CachedLocalHost : public ::java::lang::Object {
	$class(InetAddress$CachedLocalHost, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InetAddress$CachedLocalHost();
	void init$($String* host, ::java::net::InetAddress* addr);
	$String* host = nullptr;
	::java::net::InetAddress* addr = nullptr;
	int64_t expiryTime = 0;
};

	} // net
} // java

#endif // _java_net_InetAddress$CachedLocalHost_h_