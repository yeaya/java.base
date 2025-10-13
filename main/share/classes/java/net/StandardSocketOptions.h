#ifndef _java_net_StandardSocketOptions_h_
#define _java_net_StandardSocketOptions_h_
//$ class java.net.StandardSocketOptions
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("IP_MULTICAST_IF")
#undef IP_MULTICAST_IF
#pragma push_macro("IP_MULTICAST_LOOP")
#undef IP_MULTICAST_LOOP
#pragma push_macro("IP_MULTICAST_TTL")
#undef IP_MULTICAST_TTL
#pragma push_macro("IP_TOS")
#undef IP_TOS
#pragma push_macro("SO_BROADCAST")
#undef SO_BROADCAST
#pragma push_macro("SO_KEEPALIVE")
#undef SO_KEEPALIVE
#pragma push_macro("SO_LINGER")
#undef SO_LINGER
#pragma push_macro("SO_RCVBUF")
#undef SO_RCVBUF
#pragma push_macro("SO_REUSEADDR")
#undef SO_REUSEADDR
#pragma push_macro("SO_REUSEPORT")
#undef SO_REUSEPORT
#pragma push_macro("SO_SNDBUF")
#undef SO_SNDBUF
#pragma push_macro("TCP_NODELAY")
#undef TCP_NODELAY

namespace java {
	namespace net {
		class SocketOption;
	}
}

namespace java {
	namespace net {

class $export StandardSocketOptions : public ::java::lang::Object {
	$class(StandardSocketOptions, 0, ::java::lang::Object)
public:
	StandardSocketOptions();
	void init$();
	static ::java::net::SocketOption* SO_BROADCAST;
	static ::java::net::SocketOption* SO_KEEPALIVE;
	static ::java::net::SocketOption* SO_SNDBUF;
	static ::java::net::SocketOption* SO_RCVBUF;
	static ::java::net::SocketOption* SO_REUSEADDR;
	static ::java::net::SocketOption* SO_REUSEPORT;
	static ::java::net::SocketOption* SO_LINGER;
	static ::java::net::SocketOption* IP_TOS;
	static ::java::net::SocketOption* IP_MULTICAST_IF;
	static ::java::net::SocketOption* IP_MULTICAST_TTL;
	static ::java::net::SocketOption* IP_MULTICAST_LOOP;
	static ::java::net::SocketOption* TCP_NODELAY;
};

	} // net
} // java

#pragma pop_macro("IP_MULTICAST_IF")
#pragma pop_macro("IP_MULTICAST_LOOP")
#pragma pop_macro("IP_MULTICAST_TTL")
#pragma pop_macro("IP_TOS")
#pragma pop_macro("SO_BROADCAST")
#pragma pop_macro("SO_KEEPALIVE")
#pragma pop_macro("SO_LINGER")
#pragma pop_macro("SO_RCVBUF")
#pragma pop_macro("SO_REUSEADDR")
#pragma pop_macro("SO_REUSEPORT")
#pragma pop_macro("SO_SNDBUF")
#pragma pop_macro("TCP_NODELAY")

#endif // _java_net_StandardSocketOptions_h_