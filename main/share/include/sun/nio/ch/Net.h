#ifndef _sun_nio_ch_Net_h_
#define _sun_nio_ch_Net_h_
//$ class sun.nio.ch.Net
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("POLLCONN")
#undef POLLCONN
#pragma push_macro("POLLERR")
#undef POLLERR
#pragma push_macro("POLLHUP")
#undef POLLHUP
#pragma push_macro("POLLIN")
#undef POLLIN
#pragma push_macro("POLLNVAL")
#undef POLLNVAL
#pragma push_macro("POLLOUT")
#undef POLLOUT
#pragma push_macro("SHUT_RD")
#undef SHUT_RD
#pragma push_macro("SHUT_RDWR")
#undef SHUT_RDWR
#pragma push_macro("SHUT_WR")
#undef SHUT_WR
#pragma push_macro("UNSPEC")
#undef UNSPEC

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace net {
		class Inet4Address;
		class InetAddress;
		class InetSocketAddress;
		class NetworkInterface;
		class ProtocolFamily;
		class SocketAddress;
		class SocketOption;
	}
}
namespace sun {
	namespace net {
		namespace ext {
			class ExtendedSocketOptions;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $import Net : public ::java::lang::Object {
	$class(Net, 0, ::java::lang::Object)
public:
	Net();
	void init$();
	static int32_t accept(::java::io::FileDescriptor* fd, ::java::io::FileDescriptor* newfd, $Array<::java::net::InetSocketAddress>* isaa);
	static ::java::net::Inet4Address* anyInet4Address(::java::net::NetworkInterface* interf);
	static ::java::net::InetAddress* anyLocalAddress(::java::net::ProtocolFamily* family);
	static ::java::net::InetSocketAddress* asInetSocketAddress(::java::net::SocketAddress* sa);
	static int32_t available(::java::io::FileDescriptor* fd);
	static void bind(::java::io::FileDescriptor* fd, ::java::net::InetAddress* addr, int32_t port);
	static void bind(::java::net::ProtocolFamily* family, ::java::io::FileDescriptor* fd, ::java::net::InetAddress* addr, int32_t port);
	static void bind0(::java::io::FileDescriptor* fd, bool preferIPv6, bool useExclBind, ::java::net::InetAddress* addr, int32_t port);
	static int32_t block4(::java::io::FileDescriptor* fd, int32_t group, int32_t interf, int32_t source);
	static int32_t block6(::java::io::FileDescriptor* fd, $bytes* group, int32_t index, $bytes* source);
	static int32_t blockOrUnblock4(bool block, ::java::io::FileDescriptor* fd, int32_t group, int32_t interf, int32_t source);
	static int32_t blockOrUnblock6(bool block, ::java::io::FileDescriptor* fd, $bytes* group, int32_t index, $bytes* source);
	static bool canIPv6SocketJoinIPv4Group();
	static bool canIPv6SocketJoinIPv4Group0();
	static bool canJoin6WithIPv4Group();
	static bool canJoin6WithIPv4Group0();
	static bool canUseIPv6OptionsWithIPv4LocalAddress();
	static bool canUseIPv6OptionsWithIPv4LocalAddress0();
	static ::java::net::InetSocketAddress* checkAddress(::java::net::SocketAddress* sa);
	static ::java::net::InetSocketAddress* checkAddress(::java::net::SocketAddress* sa, ::java::net::ProtocolFamily* family);
	static int32_t connect(::java::io::FileDescriptor* fd, ::java::net::InetAddress* remote, int32_t remotePort);
	static int32_t connect(::java::net::ProtocolFamily* family, ::java::io::FileDescriptor* fd, ::java::net::InetAddress* remote, int32_t remotePort);
	static int32_t connect(::java::net::ProtocolFamily* family, ::java::io::FileDescriptor* fd, ::java::net::SocketAddress* remote);
	static int32_t connect0(bool preferIPv6, ::java::io::FileDescriptor* fd, ::java::net::InetAddress* remote, int32_t remotePort);
	static bool discardOOB(::java::io::FileDescriptor* fd);
	static void drop4(::java::io::FileDescriptor* fd, int32_t group, int32_t interf, int32_t source);
	static void drop6(::java::io::FileDescriptor* fd, $bytes* group, int32_t index, $bytes* source);
	static int32_t getIntOption0(::java::io::FileDescriptor* fd, bool mayNeedConversion, int32_t level, int32_t opt);
	static int32_t getInterface4(::java::io::FileDescriptor* fd);
	static int32_t getInterface6(::java::io::FileDescriptor* fd);
	static ::java::net::InetSocketAddress* getLoopbackAddress(int32_t port);
	static ::java::net::InetSocketAddress* getRevealedLocalAddress(::java::net::SocketAddress* sa);
	static $String* getRevealedLocalAddressAsString(::java::net::SocketAddress* sa);
	static $Object* getSocketOption(::java::io::FileDescriptor* fd, ::java::net::SocketOption* name);
	static $Object* getSocketOption(::java::io::FileDescriptor* fd, ::java::net::ProtocolFamily* family, ::java::net::SocketOption* name);
	static int32_t inet4AsInt(::java::net::InetAddress* ia);
	static ::java::net::InetAddress* inet4FromInt(int32_t address);
	static ::java::net::InetAddress* inet4LoopbackAddress();
	static $bytes* inet6AsByteArray(::java::net::InetAddress* ia);
	static ::java::net::InetAddress* inet6LoopbackAddress();
	static void initIDs();
	static int32_t isExclusiveBindAvailable();
	static bool isFastTcpLoopbackRequested();
	static bool isIPv6Available();
	static bool isIPv6Available0();
	static bool isReusePortAvailable();
	static bool isReusePortAvailable0();
	static int32_t join4(::java::io::FileDescriptor* fd, int32_t group, int32_t interf, int32_t source);
	static int32_t join6(::java::io::FileDescriptor* fd, $bytes* group, int32_t index, $bytes* source);
	static int32_t joinOrDrop4(bool join, ::java::io::FileDescriptor* fd, int32_t group, int32_t interf, int32_t source);
	static int32_t joinOrDrop6(bool join, ::java::io::FileDescriptor* fd, $bytes* group, int32_t index, $bytes* source);
	static void listen(::java::io::FileDescriptor* fd, int32_t backlog);
	static ::java::net::InetSocketAddress* localAddress(::java::io::FileDescriptor* fd);
	static ::java::net::InetAddress* localInetAddress(::java::io::FileDescriptor* fd);
	static int32_t localPort(::java::io::FileDescriptor* fd);
	static int32_t poll(::java::io::FileDescriptor* fd, int32_t events, int64_t timeout);
	static bool pollConnect(::java::io::FileDescriptor* fd, int64_t timeout);
	static bool pollConnectNow(::java::io::FileDescriptor* fd);
	static int32_t pollNow(::java::io::FileDescriptor* fd, int32_t events);
	static int16_t pollconnValue();
	static int16_t pollerrValue();
	static int16_t pollhupValue();
	static int16_t pollinValue();
	static int16_t pollnvalValue();
	static int16_t polloutValue();
	static ::java::net::InetSocketAddress* remoteAddress(::java::io::FileDescriptor* fd);
	static ::java::net::InetAddress* remoteInetAddress(::java::io::FileDescriptor* fd);
	static int32_t remotePort(::java::io::FileDescriptor* fd);
	static int32_t sendOOB(::java::io::FileDescriptor* fd, int8_t data);
	static ::java::io::FileDescriptor* serverSocket(bool stream);
	static ::java::io::FileDescriptor* serverSocket(::java::net::ProtocolFamily* family, bool stream);
	static void setIntOption0(::java::io::FileDescriptor* fd, bool mayNeedConversion, int32_t level, int32_t opt, int32_t arg, bool isIPv6);
	static void setInterface4(::java::io::FileDescriptor* fd, int32_t interf);
	static void setInterface6(::java::io::FileDescriptor* fd, int32_t index);
	static void setSocketOption(::java::io::FileDescriptor* fd, ::java::net::SocketOption* name, Object$* value);
	static void setSocketOption(::java::io::FileDescriptor* fd, ::java::net::ProtocolFamily* family, ::java::net::SocketOption* name, Object$* value);
	static bool shouldSetBothIPv4AndIPv6Options();
	static bool shouldSetBothIPv4AndIPv6Options0();
	static void shutdown(::java::io::FileDescriptor* fd, int32_t how);
	static ::java::io::FileDescriptor* socket(bool stream);
	static ::java::io::FileDescriptor* socket(::java::net::ProtocolFamily* family, bool stream);
	static int32_t socket0(bool preferIPv6, bool stream, bool reuse, bool fastLoopback);
	static void translateException(::java::lang::Exception* x, bool unknownHostForUnresolved);
	static void translateException(::java::lang::Exception* x);
	static void translateToSocketException(::java::lang::Exception* x);
	static void unblock4(::java::io::FileDescriptor* fd, int32_t group, int32_t interf, int32_t source);
	static void unblock6(::java::io::FileDescriptor* fd, $bytes* group, int32_t index, $bytes* source);
	static bool useExclusiveBind();
	static bool $assertionsDisabled;
	static ::java::net::ProtocolFamily* UNSPEC;
	static bool exclusiveBind;
	static bool fastLoopback;
	static $volatile(bool) checkedIPv6;
	static $volatile(bool) isIPv6Available$;
	static $volatile(bool) checkedReusePort;
	static $volatile(bool) isReusePortAvailable$;
	static ::java::net::InetAddress* anyLocalInet4Address;
	static ::java::net::InetAddress* anyLocalInet6Address;
	static ::java::net::InetAddress* inet4LoopbackAddress$;
	static ::java::net::InetAddress* inet6LoopbackAddress$;
	static ::sun::net::ext::ExtendedSocketOptions* extendedOptions;
	static const int32_t SHUT_RD = 0;
	static const int32_t SHUT_WR = 1;
	static const int32_t SHUT_RDWR = 2;
	static int16_t POLLIN;
	static int16_t POLLOUT;
	static int16_t POLLERR;
	static int16_t POLLHUP;
	static int16_t POLLNVAL;
	static int16_t POLLCONN;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("POLLCONN")
#pragma pop_macro("POLLERR")
#pragma pop_macro("POLLHUP")
#pragma pop_macro("POLLIN")
#pragma pop_macro("POLLNVAL")
#pragma pop_macro("POLLOUT")
#pragma pop_macro("SHUT_RD")
#pragma pop_macro("SHUT_RDWR")
#pragma pop_macro("SHUT_WR")
#pragma pop_macro("UNSPEC")

#endif // _sun_nio_ch_Net_h_