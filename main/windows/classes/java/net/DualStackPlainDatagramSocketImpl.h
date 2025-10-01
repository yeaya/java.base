#ifndef _java_net_DualStackPlainDatagramSocketImpl_h_
#define _java_net_DualStackPlainDatagramSocketImpl_h_
//$ class java.net.DualStackPlainDatagramSocketImpl
//$ extends java.net.AbstractPlainDatagramSocketImpl

#include <java/lang/Array.h>
#include <java/net/AbstractPlainDatagramSocketImpl.h>

namespace java {
	namespace net {
		class DatagramPacket;
		class InetAddress;
		class NetworkInterface;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaIOFileDescriptorAccess;
		}
	}
}

namespace java {
	namespace net {

class DualStackPlainDatagramSocketImpl : public ::java::net::AbstractPlainDatagramSocketImpl {
	$class(DualStackPlainDatagramSocketImpl, 0, ::java::net::AbstractPlainDatagramSocketImpl)
public:
	DualStackPlainDatagramSocketImpl();
	using ::java::net::AbstractPlainDatagramSocketImpl::join;
	using ::java::net::AbstractPlainDatagramSocketImpl::leave;
	void init$(bool exclBind);
	virtual void bind0(int32_t lport, ::java::net::InetAddress* laddr) override;
	int32_t checkAndReturnNativeFD();
	virtual void connect0(::java::net::InetAddress* address, int32_t port) override;
	virtual int32_t dataAvailable() override;
	virtual void datagramSocketClose() override;
	virtual void datagramSocketCreate() override;
	virtual void disconnect0(int32_t family) override;
	virtual int8_t getTTL() override;
	virtual int32_t getTimeToLive() override;
	static void initIDs();
	virtual void join(::java::net::InetAddress* inetaddr, ::java::net::NetworkInterface* netIf) override;
	virtual void leave(::java::net::InetAddress* inetaddr, ::java::net::NetworkInterface* netIf) override;
	virtual int32_t peek(::java::net::InetAddress* address) override;
	virtual int32_t peekData(::java::net::DatagramPacket* p) override;
	virtual void receive0(::java::net::DatagramPacket* p) override;
	virtual void send0(::java::net::DatagramPacket* p) override;
	virtual void setTTL(int8_t ttl) override;
	virtual void setTimeToLive(int32_t ttl) override;
	static void socketBind(int32_t fd, ::java::net::InetAddress* localAddress, int32_t localport, bool exclBind);
	static void socketClose(int32_t fd);
	static void socketConnect(int32_t fd, ::java::net::InetAddress* address, int32_t port);
	static int32_t socketCreate();
	static void socketDisconnect(int32_t fd);
	static int32_t socketGetIntOption(int32_t fd, int32_t cmd);
	virtual $Object* socketGetOption(int32_t opt) override;
	static $Object* socketLocalAddress(int32_t fd);
	static int32_t socketLocalPort(int32_t fd);
	static int32_t socketReceiveOrPeekData(int32_t fd, ::java::net::DatagramPacket* packet, int32_t timeout, bool connected, bool peek);
	static void socketSend(int32_t fd, $bytes* data, int32_t offset, int32_t length, ::java::net::InetAddress* address, int32_t port, bool connected);
	static void socketSetIntOption(int32_t fd, int32_t cmd, int32_t optionValue);
	virtual void socketSetOption(int32_t opt, Object$* val) override;
	virtual ::java::util::Set* supportedOptions() override;
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* fdAccess;
	bool exclusiveBind = false;
	bool reuseAddressEmulated = false;
	bool isReuseAddress = false;
};

	} // net
} // java

#endif // _java_net_DualStackPlainDatagramSocketImpl_h_