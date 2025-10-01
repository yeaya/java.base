#ifndef _java_net_SocketOptions_h_
#define _java_net_SocketOptions_h_
//$ interface java.net.SocketOptions
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("IP_TOS")
#undef IP_TOS
#pragma push_macro("IP_MULTICAST_IF2")
#undef IP_MULTICAST_IF2
#pragma push_macro("SO_TIMEOUT")
#undef SO_TIMEOUT
#pragma push_macro("IP_MULTICAST_IF")
#undef IP_MULTICAST_IF
#pragma push_macro("SO_SNDBUF")
#undef SO_SNDBUF
#pragma push_macro("SO_REUSEADDR")
#undef SO_REUSEADDR
#pragma push_macro("TCP_NODELAY")
#undef TCP_NODELAY
#pragma push_macro("SO_LINGER")
#undef SO_LINGER
#pragma push_macro("SO_BINDADDR")
#undef SO_BINDADDR
#pragma push_macro("IP_MULTICAST_LOOP")
#undef IP_MULTICAST_LOOP
#pragma push_macro("SO_RCVBUF")
#undef SO_RCVBUF
#pragma push_macro("SO_KEEPALIVE")
#undef SO_KEEPALIVE
#pragma push_macro("SO_BROADCAST")
#undef SO_BROADCAST
#pragma push_macro("SO_OOBINLINE")
#undef SO_OOBINLINE
#pragma push_macro("SO_REUSEPORT")
#undef SO_REUSEPORT

namespace java {
	namespace net {

class $export SocketOptions : public ::java::lang::Object {
	$interface(SocketOptions, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getOption(int32_t optID) {return nullptr;}
	virtual void setOption(int32_t optID, Object$* value) {}
	static const int32_t TCP_NODELAY = 1;
	static const int32_t SO_BINDADDR = 15;
	static const int32_t SO_REUSEADDR = 4;
	static const int32_t SO_REUSEPORT = 14;
	static const int32_t SO_BROADCAST = 32;
	static const int32_t IP_MULTICAST_IF = 16;
	static const int32_t IP_MULTICAST_IF2 = 31;
	static const int32_t IP_MULTICAST_LOOP = 18;
	static const int32_t IP_TOS = 3;
	static const int32_t SO_LINGER = 128;
	static const int32_t SO_TIMEOUT = 4102;
	static const int32_t SO_SNDBUF = 4097;
	static const int32_t SO_RCVBUF = 4098;
	static const int32_t SO_KEEPALIVE = 8;
	static const int32_t SO_OOBINLINE = 4099;
};

	} // net
} // java

#pragma pop_macro("IP_TOS")
#pragma pop_macro("IP_MULTICAST_IF2")
#pragma pop_macro("SO_TIMEOUT")
#pragma pop_macro("IP_MULTICAST_IF")
#pragma pop_macro("SO_SNDBUF")
#pragma pop_macro("SO_REUSEADDR")
#pragma pop_macro("TCP_NODELAY")
#pragma pop_macro("SO_LINGER")
#pragma pop_macro("SO_BINDADDR")
#pragma pop_macro("IP_MULTICAST_LOOP")
#pragma pop_macro("SO_RCVBUF")
#pragma pop_macro("SO_KEEPALIVE")
#pragma pop_macro("SO_BROADCAST")
#pragma pop_macro("SO_OOBINLINE")
#pragma pop_macro("SO_REUSEPORT")

#endif // _java_net_SocketOptions_h_