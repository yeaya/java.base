#ifndef _java_net_AbstractPlainSocketImpl_h_
#define _java_net_AbstractPlainSocketImpl_h_
//$ class java.net.AbstractPlainSocketImpl
//$ extends java.net.SocketImpl
//$ implements sun.net.PlatformSocketImpl

#include <java/net/SocketImpl.h>
#include <sun/net/PlatformSocketImpl.h>

#pragma push_macro("SHUT_RD")
#undef SHUT_RD
#pragma push_macro("SHUT_WR")
#undef SHUT_WR

namespace java {
	namespace io {
		class FileDescriptor;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class SocketAddress;
		class SocketInputStream;
		class SocketOption;
		class SocketOutputStream;
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

class AbstractPlainSocketImpl : public ::java::net::SocketImpl, public ::sun::net::PlatformSocketImpl {
	$class(AbstractPlainSocketImpl, 0, ::java::net::SocketImpl, ::sun::net::PlatformSocketImpl)
public:
	AbstractPlainSocketImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool isServer);
	virtual void accept(::java::net::SocketImpl* si) override;
	virtual ::java::io::FileDescriptor* acquireFD();
	virtual int32_t available() override;
	virtual void bind(::java::net::InetAddress* address, int32_t lport) override;
	static ::java::util::Set* clientSocketOptions();
	virtual void close() override;
	virtual void connect($String* host, int32_t port) override;
	virtual void connect(::java::net::InetAddress* address, int32_t port) override;
	virtual void connect(::java::net::SocketAddress* address, int32_t timeout) override;
	void connectToAddress(::java::net::InetAddress* address, int32_t port, int32_t timeout);
	virtual void create(bool stream) override;
	virtual void doConnect(::java::net::InetAddress* address, int32_t port, int32_t timeout);
	virtual ::java::io::InputStream* getInputStream() override;
	virtual $Object* getOption(int32_t opt) override;
	virtual $Object* getOption(::java::net::SocketOption* name) override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual int32_t getTimeout();
	virtual bool isClosedOrPending();
	virtual bool isConnectionReset();
	static bool isReusePortAvailable();
	static bool isReusePortAvailable0();
	::java::net::SocketInputStream* lambda$getInputStream$0();
	::java::net::SocketOutputStream* lambda$getOutputStream$1();
	virtual void listen(int32_t count) override;
	virtual void releaseFD();
	virtual void reset() override;
	virtual void sendUrgentData(int32_t data) override;
	static ::java::util::Set* serverSocketOptions();
	virtual void setAddress(::java::net::InetAddress* address);
	virtual void setConnectionReset();
	virtual void setFileDescriptor(::java::io::FileDescriptor* fd);
	virtual void setInputStream(::java::net::SocketInputStream* in);
	virtual void setLocalPort(int32_t localport);
	virtual void setOption(int32_t opt, Object$* val) override;
	virtual void setOption(::java::net::SocketOption* name, Object$* value) override;
	virtual void setPort(int32_t port);
	virtual void shutdownInput() override;
	virtual void shutdownOutput() override;
	virtual void socketAccept(::java::net::SocketImpl* s) {}
	virtual int32_t socketAvailable() {return 0;}
	virtual void socketBind(::java::net::InetAddress* address, int32_t port) {}
	virtual void socketClose();
	virtual void socketClose0(bool useDeferredClose) {}
	virtual void socketConnect(::java::net::InetAddress* address, int32_t port, int32_t timeout) {}
	virtual void socketCreate(bool stream) {}
	virtual int32_t socketGetOption(int32_t opt, Object$* iaContainerObj) {return 0;}
	virtual void socketListen(int32_t count) {}
	void socketPreClose();
	virtual void socketSendUrgentData(int32_t data) {}
	virtual void socketSetOption(int32_t cmd, bool on, Object$* value) {}
	virtual void socketShutdown(int32_t howto) {}
	virtual ::java::util::Set* supportedOptions() override;
	virtual bool supportsUrgentData() override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	int32_t timeout = 0;
	int32_t trafficClass = 0;
	bool shut_rd = false;
	bool shut_wr = false;
	::java::net::SocketInputStream* socketInputStream = nullptr;
	::java::net::SocketOutputStream* socketOutputStream = nullptr;
	int32_t fdUseCount = 0;
	$Object* fdLock = nullptr;
	bool closePending = false;
	$volatile(bool) connectionReset = false;
	bool isBound = false;
	$volatile(bool) isConnected = false;
	bool stream = false;
	bool isServer = false;
	static $volatile(bool) checkedReusePort;
	static $volatile(bool) isReusePortAvailable$;
	static ::sun::net::ext::ExtendedSocketOptions* extendedOptions;
	static ::java::util::Set* clientSocketOptions$;
	static ::java::util::Set* serverSocketOptions$;
	static const int32_t SHUT_RD = 0;
	static const int32_t SHUT_WR = 1;
};

	} // net
} // java

#pragma pop_macro("SHUT_RD")
#pragma pop_macro("SHUT_WR")

#endif // _java_net_AbstractPlainSocketImpl_h_