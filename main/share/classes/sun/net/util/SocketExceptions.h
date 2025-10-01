#ifndef _sun_net_util_SocketExceptions_h_
#define _sun_net_util_SocketExceptions_h_
//$ class sun.net.util.SocketExceptions
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
		class SocketAddress;
		class UnixDomainSocketAddress;
	}
}

namespace sun {
	namespace net {
		namespace util {

class $export SocketExceptions : public ::java::lang::Object {
	$class(SocketExceptions, 0, ::java::lang::Object)
public:
	SocketExceptions();
	void init$();
	static ::java::io::IOException* create(::java::io::IOException* e, $String* msg);
	static ::java::io::IOException* of(::java::io::IOException* e, ::java::net::SocketAddress* addr);
	static ::java::io::IOException* ofInet(::java::io::IOException* e, ::java::net::InetSocketAddress* addr);
	static ::java::io::IOException* ofUnixDomain(::java::io::IOException* e, ::java::net::UnixDomainSocketAddress* addr);
	static bool enhancedExceptionText;
};

		} // util
	} // net
} // sun

#endif // _sun_net_util_SocketExceptions_h_