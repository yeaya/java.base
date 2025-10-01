#ifndef _java_net_MulticastSocket_h_
#define _java_net_MulticastSocket_h_
//$ class java.net.MulticastSocket
//$ extends java.net.DatagramSocket

#include <java/net/DatagramSocket.h>

namespace java {
	namespace net {
		class DatagramPacket;
		class InetAddress;
		class NetworkInterface;
		class SocketAddress;
	}
}

namespace java {
	namespace net {

class $import MulticastSocket : public ::java::net::DatagramSocket {
	$class(MulticastSocket, $NO_CLASS_INIT, ::java::net::DatagramSocket)
public:
	MulticastSocket();
	void init$(::java::net::MulticastSocket* delegate);
	void init$();
	void init$(int32_t port);
	void init$(::java::net::SocketAddress* bindaddr);
	virtual ::java::net::MulticastSocket* delegate() override;
	virtual ::java::net::InetAddress* getInterface();
	virtual bool getLoopbackMode();
	virtual ::java::net::NetworkInterface* getNetworkInterface();
	virtual int8_t getTTL();
	virtual int32_t getTimeToLive();
	virtual void joinGroup(::java::net::InetAddress* mcastaddr);
	virtual void joinGroup(::java::net::SocketAddress* mcastaddr, ::java::net::NetworkInterface* netIf) override;
	virtual void leaveGroup(::java::net::InetAddress* mcastaddr);
	virtual void leaveGroup(::java::net::SocketAddress* mcastaddr, ::java::net::NetworkInterface* netIf) override;
	using ::java::net::DatagramSocket::send;
	virtual void send(::java::net::DatagramPacket* p, int8_t ttl);
	virtual void setInterface(::java::net::InetAddress* inf);
	virtual void setLoopbackMode(bool disable);
	virtual void setNetworkInterface(::java::net::NetworkInterface* netIf);
	virtual void setTTL(int8_t ttl);
	virtual void setTimeToLive(int32_t ttl);
};

	} // net
} // java

#endif // _java_net_MulticastSocket_h_