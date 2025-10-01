#ifndef _sun_nio_ch_UnixDomainSockets_h_
#define _sun_nio_ch_UnixDomainSockets_h_
//$ class sun.nio.ch.UnixDomainSockets
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("UNNAMED")
#undef UNNAMED

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace net {
		class NetPermission;
		class SocketAddress;
		class UnixDomainSocketAddress;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class UnixDomainSockets : public ::java::lang::Object {
	$class(UnixDomainSockets, 0, ::java::lang::Object)
public:
	UnixDomainSockets();
	void init$();
	static int32_t accept(::java::io::FileDescriptor* fd, ::java::io::FileDescriptor* newfd, $StringArray* paths);
	static int32_t accept0(::java::io::FileDescriptor* fd, ::java::io::FileDescriptor* newfd, $ObjectArray* array);
	static void bind(::java::io::FileDescriptor* fd, ::java::nio::file::Path* addr);
	static void bind0(::java::io::FileDescriptor* fd, $bytes* path);
	static ::java::net::UnixDomainSocketAddress* checkAddress(::java::net::SocketAddress* sa);
	static void checkPermission();
	static int32_t connect(::java::io::FileDescriptor* fd, ::java::net::SocketAddress* sa);
	static int32_t connect(::java::io::FileDescriptor* fd, ::java::nio::file::Path* path);
	static int32_t connect0(::java::io::FileDescriptor* fd, $bytes* path);
	static ::java::net::UnixDomainSocketAddress* generateTempName();
	static $bytes* getPathBytes(::java::nio::file::Path* path);
	static ::java::util::Random* getRandom();
	static ::java::net::UnixDomainSocketAddress* getRevealedLocalAddress(::java::net::SocketAddress* sa);
	static $String* getRevealedLocalAddressAsString(::java::net::SocketAddress* sa);
	static bool init();
	static bool isSupported();
	static ::java::net::UnixDomainSocketAddress* localAddress(::java::io::FileDescriptor* fd);
	static $bytes* localAddress0(::java::io::FileDescriptor* fd);
	static ::java::io::FileDescriptor* socket();
	static int32_t socket0();
	static ::java::net::UnixDomainSocketAddress* UNNAMED;
	static bool supported;
	static $String* tempDir;
	static ::java::net::NetPermission* accessUnixDomainSocket;
	static ::java::util::Random* random;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("UNNAMED")

#endif // _sun_nio_ch_UnixDomainSockets_h_