#ifndef _sun_nio_ch_DatagramSocketAdaptor_h_
#define _sun_nio_ch_DatagramSocketAdaptor_h_
//$ class sun.nio.ch.DatagramSocketAdaptor
//$ extends java.net.MulticastSocket

#include <java/net/MulticastSocket.h>

namespace java {
	namespace net {
		class DatagramPacket;
		class DatagramSocket;
		class InetAddress;
		class NetworkInterface;
		class SocketAddress;
		class SocketOption;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class DatagramChannel;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class DatagramChannelImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $export DatagramSocketAdaptor : public ::java::net::MulticastSocket {
	$class(DatagramSocketAdaptor, $NO_CLASS_INIT, ::java::net::MulticastSocket)
public:
	DatagramSocketAdaptor();
	void init$(::sun::nio::ch::DatagramChannelImpl* dc);
	::java::net::InetAddress* anyInetAddress();
	::java::net::NetworkInterface* anyNetworkInterface();
	virtual void bind(::java::net::SocketAddress* local) override;
	static ::java::net::InetAddress* checkGroup(::java::net::SocketAddress* mcastaddr);
	virtual void close() override;
	virtual void connect(::java::net::InetAddress* address, int32_t port) override;
	virtual void connect(::java::net::SocketAddress* remote) override;
	void connectInternal(::java::net::SocketAddress* remote);
	static ::java::net::DatagramSocket* create(::sun::nio::ch::DatagramChannelImpl* dc);
	::java::net::NetworkInterface* defaultNetworkInterface();
	virtual void disconnect() override;
	bool getBooleanOption(::java::net::SocketOption* name);
	virtual bool getBroadcast() override;
	virtual ::java::nio::channels::DatagramChannel* getChannel() override;
	virtual ::java::net::InetAddress* getInetAddress() override;
	int32_t getIntOption(::java::net::SocketOption* name);
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
	virtual void joinGroup(::java::net::InetAddress* group) override;
	virtual void joinGroup(::java::net::SocketAddress* mcastaddr, ::java::net::NetworkInterface* netIf) override;
	static ::java::net::InetAddress* lambda$getInterface$0(::java::net::NetworkInterface* ni);
	virtual void leaveGroup(::java::net::InetAddress* group) override;
	virtual void leaveGroup(::java::net::SocketAddress* mcastaddr, ::java::net::NetworkInterface* netIf) override;
	::java::net::NetworkInterface* outgoingNetworkInterface();
	virtual void receive(::java::net::DatagramPacket* p) override;
	virtual void send(::java::net::DatagramPacket* p) override;
	virtual void send(::java::net::DatagramPacket* p, int8_t ttl) override;
	void setBooleanOption(::java::net::SocketOption* name, bool value);
	virtual void setBroadcast(bool on) override;
	void setIntOption(::java::net::SocketOption* name, int32_t value);
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
	::sun::nio::ch::DatagramChannelImpl* dc = nullptr;
	$volatile(int32_t) timeout = 0;
	::java::util::concurrent::locks::ReentrantLock* sendLock = nullptr;
	$Object* outgoingInterfaceLock = nullptr;
	::java::net::NetworkInterface* outgoingNetworkInterface$ = nullptr;
	::java::net::InetAddress* outgoingInetAddress = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_DatagramSocketAdaptor_h_