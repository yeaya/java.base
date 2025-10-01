#ifndef _java_net_TwoStacksPlainDatagramSocketImpl_h_
#define _java_net_TwoStacksPlainDatagramSocketImpl_h_
//$ class java.net.TwoStacksPlainDatagramSocketImpl
//$ extends java.net.AbstractPlainDatagramSocketImpl

#include <java/net/AbstractPlainDatagramSocketImpl.h>

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
	}
}

namespace java {
	namespace net {

class TwoStacksPlainDatagramSocketImpl : public ::java::net::AbstractPlainDatagramSocketImpl {
	$class(TwoStacksPlainDatagramSocketImpl, 0, ::java::net::AbstractPlainDatagramSocketImpl)
public:
	TwoStacksPlainDatagramSocketImpl();
	using ::java::net::AbstractPlainDatagramSocketImpl::join;
	using ::java::net::AbstractPlainDatagramSocketImpl::leave;
	using ::java::net::AbstractPlainDatagramSocketImpl::getOption;
	void init$(bool exclBind, bool isMulticast);
	virtual void bind(int32_t lport, ::java::net::InetAddress* laddr) override;
	virtual void bind0(int32_t lport, ::java::net::InetAddress* laddr) override;
	void bind0(int32_t lport, ::java::net::InetAddress* laddr, bool exclBind);
	virtual void close() override;
	virtual void connect0(::java::net::InetAddress* address, int32_t port) override;
	virtual void create() override;
	virtual int32_t dataAvailable() override;
	virtual void datagramSocketClose() override;
	virtual void datagramSocketCreate() override;
	virtual void disconnect0(int32_t family) override;
	virtual $Object* getOption(int32_t optID) override;
	virtual int8_t getTTL() override;
	virtual int32_t getTimeToLive() override;
	static void init();
	virtual bool isClosed() override;
	virtual void join(::java::net::InetAddress* inetaddr, ::java::net::NetworkInterface* netIf) override;
	virtual void leave(::java::net::InetAddress* inetaddr, ::java::net::NetworkInterface* netIf) override;
	virtual int32_t peek(::java::net::InetAddress* i) override;
	virtual int32_t peekData(::java::net::DatagramPacket* p) override;
	virtual void receive(::java::net::DatagramPacket* p) override;
	virtual void receive0(::java::net::DatagramPacket* p) override;
	virtual void send0(::java::net::DatagramPacket* p) override;
	virtual void setTTL(int8_t ttl) override;
	virtual void setTimeToLive(int32_t ttl) override;
	virtual $Object* socketGetOption(int32_t opt) override;
	$Object* socketLocalAddress(int32_t family);
	void socketNativeSetOption(int32_t opt, Object$* val);
	virtual void socketSetOption(int32_t opt, Object$* val) override;
	::java::io::FileDescriptor* fd1 = nullptr;
	::java::net::InetAddress* anyLocalBoundAddr = nullptr;
	int32_t fduse = 0;
	int32_t lastfd = 0;
	bool exclusiveBind = false;
	bool reuseAddressEmulated = false;
	bool isReuseAddress = false;
};

	} // net
} // java

#endif // _java_net_TwoStacksPlainDatagramSocketImpl_h_