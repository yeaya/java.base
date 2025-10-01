#ifndef _java_net_PlainDatagramSocketImpl_h_
#define _java_net_PlainDatagramSocketImpl_h_
//$ class java.net.PlainDatagramSocketImpl
//$ extends java.net.AbstractPlainDatagramSocketImpl

#include <java/net/AbstractPlainDatagramSocketImpl.h>

namespace java {
	namespace net {
		class DatagramPacket;
		class InetAddress;
		class NetworkInterface;
	}
}

namespace java {
	namespace net {

class PlainDatagramSocketImpl : public ::java::net::AbstractPlainDatagramSocketImpl {
	$class(PlainDatagramSocketImpl, 0, ::java::net::AbstractPlainDatagramSocketImpl)
public:
	PlainDatagramSocketImpl();
	using ::java::net::AbstractPlainDatagramSocketImpl::join;
	using ::java::net::AbstractPlainDatagramSocketImpl::leave;
	void init$(bool isMulticast);
	virtual void bind0(int32_t lport, ::java::net::InetAddress* laddr) override;
	virtual void connect0(::java::net::InetAddress* address, int32_t port) override;
	virtual int32_t dataAvailable() override;
	virtual void datagramSocketClose() override;
	virtual void datagramSocketCreate() override;
	virtual void disconnect0(int32_t family) override;
	virtual int8_t getTTL() override;
	virtual int32_t getTimeToLive() override;
	static void init();
	virtual void join(::java::net::InetAddress* inetaddr, ::java::net::NetworkInterface* netIf) override;
	virtual void leave(::java::net::InetAddress* inetaddr, ::java::net::NetworkInterface* netIf) override;
	virtual int32_t peek(::java::net::InetAddress* i) override;
	virtual int32_t peekData(::java::net::DatagramPacket* p) override;
	virtual void receive0(::java::net::DatagramPacket* p) override;
	virtual void send0(::java::net::DatagramPacket* p) override;
	virtual void setTTL(int8_t ttl) override;
	virtual void setTimeToLive(int32_t ttl) override;
	virtual $Object* socketGetOption(int32_t opt) override;
	virtual void socketSetOption(int32_t opt, Object$* val) override;
	virtual void socketSetOption0(int32_t opt, Object$* val);
};

	} // net
} // java

#endif // _java_net_PlainDatagramSocketImpl_h_