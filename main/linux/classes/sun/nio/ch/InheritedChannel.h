#ifndef _sun_nio_ch_InheritedChannel_h_
#define _sun_nio_ch_InheritedChannel_h_
//$ class sun.nio.ch.InheritedChannel
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SOCK_STREAM")
#undef SOCK_STREAM
#pragma push_macro("O_RDWR")
#undef O_RDWR
#pragma push_macro("O_RDONLY")
#undef O_RDONLY
#pragma push_macro("AF_UNIX")
#undef AF_UNIX
#pragma push_macro("UNKNOWN")
#undef UNKNOWN
#pragma push_macro("AF_INET")
#undef AF_INET
#pragma push_macro("SOCK_DGRAM")
#undef SOCK_DGRAM
#pragma push_macro("AF_UNKNOWN")
#undef AF_UNKNOWN
#pragma push_macro("O_WRONLY")
#undef O_WRONLY
#pragma push_macro("AF_INET6")
#undef AF_INET6

namespace java {
	namespace net {
		class InetAddress;
		class ProtocolFamily;
		class SocketAddress;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class Channel;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class InheritedChannel : public ::java::lang::Object {
	$class(InheritedChannel, 0, ::java::lang::Object)
public:
	InheritedChannel();
	void init$();
	static int32_t addressFamily(int32_t fd);
	static void checkAccess();
	static void close0(int32_t fd);
	static ::java::nio::channels::Channel* createChannel();
	static void detachIOStreams();
	static int32_t dup(int32_t fd);
	static void dup2(int32_t fd, int32_t fd2);
	static ::java::nio::channels::Channel* getChannel();
	static ::java::net::InetAddress* inetPeerAddress0(int32_t fd);
	static void initIDs();
	static bool isConnected(int32_t fd);
	static int32_t open0($String* path, int32_t oflag);
	static int32_t peerPort0(int32_t fd);
	static ::java::net::ProtocolFamily* protocolFamily(::java::net::SocketAddress* sa);
	static ::java::net::ProtocolFamily* protocolFamily(int32_t family);
	static int32_t soType0(int32_t fd);
	static $String* unixPeerAddress(int32_t fd);
	static $bytes* unixPeerAddress0(int32_t fd);
	static bool $assertionsDisabled;
	static const int32_t UNKNOWN = (-1);
	static const int32_t SOCK_STREAM = 1;
	static const int32_t SOCK_DGRAM = 2;
	static const int32_t AF_UNKNOWN = (-1);
	static const int32_t AF_INET = 1;
	static const int32_t AF_INET6 = 2;
	static const int32_t AF_UNIX = 3;
	static const int32_t O_RDONLY = 0;
	static const int32_t O_WRONLY = 1;
	static const int32_t O_RDWR = 2;
	static int32_t devnull;
	static bool haveChannel;
	static ::java::nio::channels::Channel* channel;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("SOCK_STREAM")
#pragma pop_macro("O_RDWR")
#pragma pop_macro("O_RDONLY")
#pragma pop_macro("AF_UNIX")
#pragma pop_macro("UNKNOWN")
#pragma pop_macro("AF_INET")
#pragma pop_macro("SOCK_DGRAM")
#pragma pop_macro("AF_UNKNOWN")
#pragma pop_macro("O_WRONLY")
#pragma pop_macro("AF_INET6")

#endif // _sun_nio_ch_InheritedChannel_h_