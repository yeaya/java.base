#ifndef _java_net_PlainSocketImpl_h_
#define _java_net_PlainSocketImpl_h_
//$ class java.net.PlainSocketImpl
//$ extends java.net.AbstractPlainSocketImpl

#include <java/lang/Array.h>
#include <java/net/AbstractPlainSocketImpl.h>

#pragma push_macro("WOULDBLOCK")
#undef WOULDBLOCK

namespace java {
	namespace net {
		class InetAddress;
		class InetAddressContainer;
		class InetSocketAddress;
		class SocketImpl;
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

class PlainSocketImpl : public ::java::net::AbstractPlainSocketImpl {
	$class(PlainSocketImpl, 0, ::java::net::AbstractPlainSocketImpl)
public:
	PlainSocketImpl();
	void init$(bool isServer);
	static int32_t accept0(int32_t fd, $Array<::java::net::InetSocketAddress>* isaa);
	static int32_t available0(int32_t fd);
	static void bind0(int32_t fd, ::java::net::InetAddress* localAddress, int32_t localport, bool exclBind);
	int32_t checkAndReturnNativeFD();
	static void close0(int32_t fd);
	static void configureBlocking(int32_t fd, bool blocking);
	static int32_t connect0(int32_t fd, ::java::net::InetAddress* remote, int32_t remotePort);
	static int32_t getIntOption(int32_t fd, int32_t cmd);
	static void initIDs();
	static void listen0(int32_t fd, int32_t backlog);
	static void localAddress(int32_t fd, ::java::net::InetAddressContainer* in);
	static int32_t localPort0(int32_t fd);
	static void sendOOB(int32_t fd, int32_t data);
	static void setIntOption(int32_t fd, int32_t cmd, int32_t optionValue);
	static void setSoTimeout0(int32_t fd, int32_t timeout);
	static void shutdown0(int32_t fd, int32_t howto);
	static int32_t socket0(bool stream);
	virtual void socketAccept(::java::net::SocketImpl* s) override;
	virtual int32_t socketAvailable() override;
	virtual void socketBind(::java::net::InetAddress* address, int32_t port) override;
	virtual void socketClose0(bool useDeferredClose) override;
	virtual void socketConnect(::java::net::InetAddress* address, int32_t port, int32_t timeout) override;
	virtual void socketCreate(bool stream) override;
	virtual int32_t socketGetOption(int32_t opt, Object$* iaContainerObj) override;
	virtual void socketListen(int32_t backlog) override;
	virtual void socketSendUrgentData(int32_t data) override;
	virtual void socketSetOption(int32_t opt, bool on, Object$* value) override;
	virtual void socketShutdown(int32_t howto) override;
	static void waitForConnect(int32_t fd, int32_t timeout);
	static void waitForNewConnection(int32_t fd, int32_t timeout);
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* fdAccess;
	static bool preferIPv4Stack;
	static bool useExclusiveBind;
	bool isReuseAddress = false;
	static const int32_t WOULDBLOCK = (-2);
};

	} // net
} // java

#pragma pop_macro("WOULDBLOCK")

#endif // _java_net_PlainSocketImpl_h_