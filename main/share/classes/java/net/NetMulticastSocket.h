#ifndef _java_net_NetMulticastSocket_h_
#define _java_net_NetMulticastSocket_h_
//$ class java.net.NetMulticastSocket
//$ extends java.net.MulticastSocket

#include <java/net/MulticastSocket.h>

#pragma push_macro("ST_CONNECTED")
#undef ST_CONNECTED
#pragma push_macro("ST_CONNECTED_NO_IMPL")
#undef ST_CONNECTED_NO_IMPL
#pragma push_macro("ST_NOT_CONNECTED")
#undef ST_NOT_CONNECTED

namespace java {
	namespace net {
		class DatagramPacket;
		class DatagramSocket;
		class DatagramSocketImpl;
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

class NetMulticastSocket : public ::java::net::MulticastSocket {
	$class(NetMulticastSocket, $NO_CLASS_INIT, ::java::net::MulticastSocket)
public:
	NetMulticastSocket();
	void init$(::java::net::DatagramSocketImpl* impl);
	virtual void bind(::java::net::SocketAddress* addr) override;
	static void checkAddress(::java::net::InetAddress* addr, $String* op);
	bool checkFiltering(::java::net::DatagramPacket* p);
	static bool checkOldImpl(::java::net::DatagramSocketImpl* impl);
	virtual void close() override;
	virtual void connect(::java::net::InetAddress* address, int32_t port) override;
	virtual void connect(::java::net::SocketAddress* addr) override;
	void connectInternal(::java::net::InetAddress* address, int32_t port);
	virtual void disconnect() override;
	virtual bool getBroadcast() override;
	::java::net::DatagramSocketImpl* getImpl();
	virtual ::java::net::InetAddress* getInetAddress() override;
	virtual ::java::net::InetAddress* getInterface() override;
	virtual ::java::net::InetAddress* getLocalAddress() override;
	virtual int32_t getLocalPort() override;
	virtual ::java::net::SocketAddress* getLocalSocketAddress() override;
	virtual bool getLoopbackMode() override;
	virtual ::java::net::NetworkInterface* getNetworkInterface() override;
	virtual $Object* getOption(::java::net::SocketOption* name) override;
	virtual int32_t getPort() override;
	virtual int32_t getReceiveBufferSize() override;
	virtual ::java::net::SocketAddress* getRemoteSocketAddress() override;
	virtual bool getReuseAddress() override;
	virtual int32_t getSendBufferSize() override;
	virtual int32_t getSoTimeout() override;
	virtual int8_t getTTL() override;
	virtual int32_t getTimeToLive() override;
	virtual int32_t getTrafficClass() override;
	virtual bool isBound() override;
	virtual bool isClosed() override;
	virtual bool isConnected() override;
	virtual void joinGroup(::java::net::InetAddress* mcastaddr) override;
	virtual void joinGroup(::java::net::SocketAddress* mcastaddr, ::java::net::NetworkInterface* netIf) override;
	virtual void leaveGroup(::java::net::InetAddress* mcastaddr) override;
	virtual void leaveGroup(::java::net::SocketAddress* mcastaddr, ::java::net::NetworkInterface* netIf) override;
	virtual void receive(::java::net::DatagramPacket* p) override;
	virtual void send(::java::net::DatagramPacket* p) override;
	virtual void send(::java::net::DatagramPacket* p, int8_t ttl) override;
	virtual void setBroadcast(bool on) override;
	virtual void setInterface(::java::net::InetAddress* inf) override;
	virtual void setLoopbackMode(bool disable) override;
	virtual void setNetworkInterface(::java::net::NetworkInterface* netIf) override;
	virtual ::java::net::DatagramSocket* setOption(::java::net::SocketOption* name, Object$* value) override;
	virtual void setReceiveBufferSize(int32_t size) override;
	virtual void setReuseAddress(bool on) override;
	virtual void setSendBufferSize(int32_t size) override;
	virtual void setSoTimeout(int32_t timeout) override;
	virtual void setTTL(int8_t ttl) override;
	virtual void setTimeToLive(int32_t ttl) override;
	virtual void setTrafficClass(int32_t tc) override;
	virtual ::java::util::Set* supportedOptions() override;
	bool bound = false;
	bool closed = false;
	$volatile(bool) created = false;
	$Object* closeLock = nullptr;
	::java::net::DatagramSocketImpl* impl = nullptr;
	bool oldImpl = false;
	bool explicitFilter = false;
	int32_t bytesLeftToFilter = 0;
	static const int32_t ST_NOT_CONNECTED = 0;
	static const int32_t ST_CONNECTED = 1;
	static const int32_t ST_CONNECTED_NO_IMPL = 2;
	int32_t connectState = 0;
	::java::net::InetAddress* connectedAddress = nullptr;
	int32_t connectedPort = 0;
	$volatile(::java::util::Set*) options = nullptr;
	$Object* optionsLock = nullptr;
	bool interfaceSet = false;
	$Object* ttlLock = nullptr;
	$Object* infLock = nullptr;
	::java::net::InetAddress* infAddress = nullptr;
};

	} // net
} // java

#pragma pop_macro("ST_CONNECTED")
#pragma pop_macro("ST_CONNECTED_NO_IMPL")
#pragma pop_macro("ST_NOT_CONNECTED")

#endif // _java_net_NetMulticastSocket_h_