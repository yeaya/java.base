#ifndef _java_net_DatagramPacket_h_
#define _java_net_DatagramPacket_h_
//$ class java.net.DatagramPacket
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class InetAddress;
		class SocketAddress;
	}
}

namespace java {
	namespace net {

class $export DatagramPacket : public ::java::lang::Object {
	$class(DatagramPacket, 0, ::java::lang::Object)
public:
	DatagramPacket();
	void init$($bytes* buf, int32_t offset, int32_t length);
	void init$($bytes* buf, int32_t length);
	void init$($bytes* buf, int32_t offset, int32_t length, ::java::net::InetAddress* address, int32_t port);
	void init$($bytes* buf, int32_t offset, int32_t length, ::java::net::SocketAddress* address);
	void init$($bytes* buf, int32_t length, ::java::net::InetAddress* address, int32_t port);
	void init$($bytes* buf, int32_t length, ::java::net::SocketAddress* address);
	::java::net::InetAddress* getAddress();
	$bytes* getData();
	int32_t getLength();
	int32_t getOffset();
	int32_t getPort();
	::java::net::SocketAddress* getSocketAddress();
	static void init();
	void setAddress(::java::net::InetAddress* iaddr);
	void setData($bytes* buf, int32_t offset, int32_t length);
	void setData($bytes* buf);
	void setLength(int32_t length);
	void setPort(int32_t iport);
	void setSocketAddress(::java::net::SocketAddress* address);
	$bytes* buf = nullptr;
	int32_t offset = 0;
	int32_t length = 0;
	int32_t bufLength = 0;
	::java::net::InetAddress* address = nullptr;
	int32_t port = 0;
};

	} // net
} // java

#endif // _java_net_DatagramPacket_h_