#ifndef _sun_net_NetHooks_h_
#define _sun_net_NetHooks_h_
//$ class sun.net.NetHooks
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace net {
		class InetAddress;
	}
}
namespace sun {
	namespace net {
		class NetHooks$Provider;
	}
}

namespace sun {
	namespace net {

class $export NetHooks : public ::java::lang::Object {
	$class(NetHooks, 0, ::java::lang::Object)
public:
	NetHooks();
	void init$();
	static void beforeTcpBind(::java::io::FileDescriptor* fdObj, ::java::net::InetAddress* address, int32_t port);
	static void beforeTcpConnect(::java::io::FileDescriptor* fdObj, ::java::net::InetAddress* address, int32_t port);
	static ::sun::net::NetHooks$Provider* provider;
};

	} // net
} // sun

#endif // _sun_net_NetHooks_h_