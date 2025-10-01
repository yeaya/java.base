#ifndef _java_net_AbstractPlainDatagramSocketImpl_h_
#define _java_net_AbstractPlainDatagramSocketImpl_h_
//$ class java.net.AbstractPlainDatagramSocketImpl
//$ extends java.net.DatagramSocketImpl

#include <java/net/DatagramSocketImpl.h>

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
namespace sun {
	namespace net {
		namespace ext {
			class ExtendedSocketOptions;
		}
	}
}

namespace java {
	namespace net {

class AbstractPlainDatagramSocketImpl : public ::java::net::DatagramSocketImpl {
	$class(AbstractPlainDatagramSocketImpl, 0, ::java::net::DatagramSocketImpl)
public:
	AbstractPlainDatagramSocketImpl();
	virtual int32_t dataAvailable() override;
	virtual int8_t getTTL() override {return 0;}
	virtual int32_t getTimeToLive() override {return 0;}
	void init$(bool isMulticast);
	virtual void bind(int32_t lport, ::java::net::InetAddress* laddr) override;
	virtual void bind0(int32_t lport, ::java::net::InetAddress* laddr) {}
	virtual void close() override;
	virtual void connect(::java::net::InetAddress* address, int32_t port) override;
	virtual void connect0(::java::net::InetAddress* address, int32_t port) {}
	virtual void create() override;
	virtual void datagramSocketClose() {}
	virtual void datagramSocketCreate() {}
	static ::java::util::Set* datagramSocketOptions();
	virtual void disconnect() override;
	virtual void disconnect0(int32_t family) {}
	virtual $Object* getOption(int32_t optID) override;
	virtual $Object* getOption(::java::net::SocketOption* name) override;
	virtual bool isClosed();
	static bool isReusePortAvailable();
	static bool isReusePortAvailable0();
	virtual void join(::java::net::InetAddress* inetaddr) override;
	virtual void join(::java::net::InetAddress* inetaddr, ::java::net::NetworkInterface* netIf) {}
	virtual void joinGroup(::java::net::SocketAddress* mcastaddr, ::java::net::NetworkInterface* netIf) override;
	virtual void leave(::java::net::InetAddress* inetaddr) override;
	virtual void leave(::java::net::InetAddress* inetaddr, ::java::net::NetworkInterface* netIf) {}
	virtual void leaveGroup(::java::net::SocketAddress* mcastaddr, ::java::net::NetworkInterface* netIf) override;
	virtual bool nativeConnectDisabled();
	virtual int32_t peek(::java::net::InetAddress* i) override {return 0;}
	virtual int32_t peekData(::java::net::DatagramPacket* p) override {return 0;}
	virtual void receive(::java::net::DatagramPacket* p) override;
	virtual void receive0(::java::net::DatagramPacket* p) {}
	virtual void send(::java::net::DatagramPacket* p) override;
	virtual void send0(::java::net::DatagramPacket* p) {}
	virtual void setOption(int32_t optID, Object$* o) override;
	virtual void setOption(::java::net::SocketOption* name, Object$* value) override;
	virtual void setTTL(int8_t ttl) override {}
	virtual void setTimeToLive(int32_t ttl) override {}
	virtual $Object* socketGetOption(int32_t opt) {return nullptr;}
	virtual void socketSetOption(int32_t opt, Object$* val) {}
	virtual ::java::util::Set* supportedOptions() override;
	int32_t timeout = 0;
	bool connected = false;
	int32_t trafficClass = 0;
	::java::net::InetAddress* connectedAddress = nullptr;
	int32_t connectedPort = 0;
	bool isMulticast = false;
	static $String* os;
	static bool connectDisabled;
	static $volatile(bool) checkedReusePort;
	static $volatile(bool) isReusePortAvailable$;
	static ::sun::net::ext::ExtendedSocketOptions* extendedOptions;
	static ::java::util::Set* datagramSocketOptions$;
};

	} // net
} // java

#endif // _java_net_AbstractPlainDatagramSocketImpl_h_