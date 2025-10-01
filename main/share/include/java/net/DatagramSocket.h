#ifndef _java_net_DatagramSocket_h_
#define _java_net_DatagramSocket_h_
//$ class java.net.DatagramSocket
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

#pragma push_macro("NO_DELEGATE")
#undef NO_DELEGATE
#pragma push_macro("USE_PLAINDATAGRAMSOCKET")
#undef USE_PLAINDATAGRAMSOCKET

namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace net {
		class DatagramPacket;
		class DatagramSocketImpl;
		class DatagramSocketImplFactory;
		class InetAddress;
		class NetworkInterface;
		class SocketAddress;
		class SocketException;
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
	namespace net {

class $import DatagramSocket : public ::java::io::Closeable {
	$class(DatagramSocket, 0, ::java::io::Closeable)
public:
	DatagramSocket();
	void init$(::java::net::DatagramSocket* delegate);
	void init$();
	void init$(::java::net::DatagramSocketImpl* impl);
	void init$(::java::net::SocketAddress* bindaddr);
	void init$(int32_t port);
	void init$(int32_t port, ::java::net::InetAddress* laddr);
	virtual void bind(::java::net::SocketAddress* addr);
	virtual void close() override;
	virtual void connect(::java::net::InetAddress* address, int32_t port);
	virtual void connect(::java::net::SocketAddress* addr);
	static ::java::net::DatagramSocket* createDelegate(::java::net::SocketAddress* bindaddr, $Class* type);
	virtual ::java::net::DatagramSocket* delegate();
	virtual void disconnect();
	virtual bool getBroadcast();
	virtual ::java::nio::channels::DatagramChannel* getChannel();
	virtual ::java::net::InetAddress* getInetAddress();
	virtual ::java::net::InetAddress* getLocalAddress();
	virtual int32_t getLocalPort();
	virtual ::java::net::SocketAddress* getLocalSocketAddress();
	virtual $Object* getOption(::java::net::SocketOption* name);
	virtual int32_t getPort();
	virtual int32_t getReceiveBufferSize();
	virtual ::java::net::SocketAddress* getRemoteSocketAddress();
	virtual bool getReuseAddress();
	virtual int32_t getSendBufferSize();
	virtual int32_t getSoTimeout();
	virtual int32_t getTrafficClass();
	virtual bool isBound();
	virtual bool isClosed();
	virtual bool isConnected();
	virtual void joinGroup(::java::net::SocketAddress* mcastaddr, ::java::net::NetworkInterface* netIf);
	static $String* lambda$usePlainDatagramSocketImpl$0();
	virtual void leaveGroup(::java::net::SocketAddress* mcastaddr, ::java::net::NetworkInterface* netIf);
	virtual void receive(::java::net::DatagramPacket* p);
	virtual void send(::java::net::DatagramPacket* p);
	virtual void setBroadcast(bool on);
	static void setDatagramSocketImplFactory(::java::net::DatagramSocketImplFactory* fac);
	virtual ::java::net::DatagramSocket* setOption(::java::net::SocketOption* name, Object$* value);
	virtual void setReceiveBufferSize(int32_t size);
	virtual void setReuseAddress(bool on);
	virtual void setSendBufferSize(int32_t size);
	virtual void setSoTimeout(int32_t timeout);
	virtual void setTrafficClass(int32_t tc);
	virtual ::java::util::Set* supportedOptions();
	static ::java::net::SocketException* toSocketException(::java::io::IOException* e);
	static bool usePlainDatagramSocketImpl();
	static bool $assertionsDisabled;
	::java::net::DatagramSocket* delegate$ = nullptr;
	static $volatile(::java::net::DatagramSocketImplFactory*) factory;
	static ::java::net::SocketAddress* NO_DELEGATE;
	static bool USE_PLAINDATAGRAMSOCKET;
};

	} // net
} // java

#pragma pop_macro("NO_DELEGATE")
#pragma pop_macro("USE_PLAINDATAGRAMSOCKET")

#endif // _java_net_DatagramSocket_h_