#ifndef _sun_net_NetHooks$Provider_h_
#define _sun_net_NetHooks$Provider_h_
//$ class sun.net.NetHooks$Provider
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

class $export NetHooks$Provider : public ::java::lang::Object {
	$class(NetHooks$Provider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NetHooks$Provider();
	void init$();
	virtual void implBeforeTcpBind(::java::io::FileDescriptor* fdObj, ::java::net::InetAddress* address, int32_t port) {}
	virtual void implBeforeTcpConnect(::java::io::FileDescriptor* fdObj, ::java::net::InetAddress* address, int32_t port) {}
};

	} // net
} // sun

#endif // _sun_net_NetHooks$Provider_h_