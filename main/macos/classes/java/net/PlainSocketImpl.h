#ifndef _java_net_PlainSocketImpl_h_
#define _java_net_PlainSocketImpl_h_
//$ class java.net.PlainSocketImpl
//$ extends java.net.AbstractPlainSocketImpl

#include <java/net/AbstractPlainSocketImpl.h>

namespace java {
	namespace net {
		class InetAddress;
		class SocketImpl;
	}
}

namespace java {
	namespace net {

class PlainSocketImpl : public ::java::net::AbstractPlainSocketImpl {
	$class(PlainSocketImpl, 0, ::java::net::AbstractPlainSocketImpl)
public:
	PlainSocketImpl();
	void init$(bool isServer);
	static void initProto();
	virtual void socketAccept(::java::net::SocketImpl* s) override;
	virtual int32_t socketAvailable() override;
	virtual void socketBind(::java::net::InetAddress* address, int32_t port) override;
	virtual void socketClose0(bool useDeferredClose) override;
	virtual void socketConnect(::java::net::InetAddress* address, int32_t port, int32_t timeout) override;
	virtual void socketCreate(bool stream) override;
	virtual void socketCreate(bool stream, bool isServer);
	virtual int32_t socketGetOption(int32_t opt, Object$* iaContainerObj) override;
	virtual void socketListen(int32_t count) override;
	virtual void socketSendUrgentData(int32_t data) override;
	virtual void socketSetOption(int32_t opt, bool b, Object$* val) override;
	virtual void socketSetOption0(int32_t cmd, bool on, Object$* value);
	virtual void socketShutdown(int32_t howto) override;
};

	} // net
} // java

#endif // _java_net_PlainSocketImpl_h_