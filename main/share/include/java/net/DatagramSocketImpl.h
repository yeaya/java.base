#ifndef _java_net_DatagramSocketImpl_h_
#define _java_net_DatagramSocketImpl_h_
//$ class java.net.DatagramSocketImpl
//$ extends java.net.SocketOptions

#include <java/net/SocketOptions.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace net {
		class DatagramPacket;
		class InetAddress;
		class NetworkInterface;
		class SocketAddress;
		class SocketOption;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace net {

class $import DatagramSocketImpl : public ::java::net::SocketOptions {
	$class(DatagramSocketImpl, $NO_CLASS_INIT, ::java::net::SocketOptions)
public:
	DatagramSocketImpl();
	using ::java::net::SocketOptions::getOption;
	void init$();
	virtual void bind(int32_t lport, ::java::net::InetAddress* laddr) {}
	virtual void close() {}
	virtual void connect(::java::net::InetAddress* address, int32_t port);
	virtual void create() {}
	virtual int32_t dataAvailable();
	virtual void disconnect();
	virtual ::java::io::FileDescriptor* getFileDescriptor();
	virtual int32_t getLocalPort();
	virtual $Object* getOption(::java::net::SocketOption* name);
	virtual int8_t getTTL() {return 0;}
	virtual int32_t getTimeToLive() {return 0;}
	virtual void join(::java::net::InetAddress* inetaddr) {}
	virtual void joinGroup(::java::net::SocketAddress* mcastaddr, ::java::net::NetworkInterface* netIf) {}
	virtual void leave(::java::net::InetAddress* inetaddr) {}
	virtual void leaveGroup(::java::net::SocketAddress* mcastaddr, ::java::net::NetworkInterface* netIf) {}
	virtual int32_t peek(::java::net::InetAddress* i) {return 0;}
	virtual int32_t peekData(::java::net::DatagramPacket* p) {return 0;}
	virtual void receive(::java::net::DatagramPacket* p) {}
	virtual void send(::java::net::DatagramPacket* p) {}
	using ::java::net::SocketOptions::setOption;
	virtual void setOption(::java::net::SocketOption* name, Object$* value);
	virtual void setTTL(int8_t ttl) {}
	virtual void setTimeToLive(int32_t ttl) {}
	virtual ::java::util::Set* supportedOptions();
	int32_t localPort = 0;
	::java::io::FileDescriptor* fd = nullptr;
};

	} // net
} // java

#endif // _java_net_DatagramSocketImpl_h_