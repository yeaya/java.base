#ifndef _java_net_Socket_h_
#define _java_net_Socket_h_
//$ class java.net.Socket
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

#pragma push_macro("IN")
#undef IN
#pragma push_macro("OUT")
#undef OUT

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class Proxy;
		class SocketAddress;
		class SocketImpl;
		class SocketImplFactory;
		class SocketOption;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
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

class $export Socket : public ::java::io::Closeable {
	$class(Socket, 0, ::java::io::Closeable)
public:
	Socket();
	void init$();
	void init$(::java::net::Proxy* proxy);
	void init$(::java::net::SocketImpl* impl);
	void init$($String* host, int32_t port);
	void init$(::java::net::InetAddress* address, int32_t port);
	void init$($String* host, int32_t port, ::java::net::InetAddress* localAddr, int32_t localPort);
	void init$(::java::net::InetAddress* address, int32_t port, ::java::net::InetAddress* localAddr, int32_t localPort);
	void init$($String* host, int32_t port, bool stream);
	void init$(::java::net::InetAddress* host, int32_t port, bool stream);
	void init$(::java::net::SocketAddress* address, ::java::net::SocketAddress* localAddr, bool stream);
	virtual void bind(::java::net::SocketAddress* bindpoint);
	void checkAddress(::java::net::InetAddress* addr, $String* op);
	static ::java::lang::Void* checkPermission(::java::net::SocketImpl* impl);
	virtual void close() override;
	virtual void connect(::java::net::SocketAddress* endpoint);
	virtual void connect(::java::net::SocketAddress* endpoint, int32_t timeout);
	virtual void createImpl(bool stream);
	virtual ::java::nio::channels::SocketChannel* getChannel();
	virtual ::java::net::SocketImpl* getImpl();
	virtual ::java::net::InetAddress* getInetAddress();
	virtual ::java::io::InputStream* getInputStream();
	virtual bool getKeepAlive();
	virtual ::java::net::InetAddress* getLocalAddress();
	virtual int32_t getLocalPort();
	virtual ::java::net::SocketAddress* getLocalSocketAddress();
	virtual bool getOOBInline();
	virtual $Object* getOption(::java::net::SocketOption* name);
	virtual ::java::io::OutputStream* getOutputStream();
	virtual int32_t getPort();
	virtual int32_t getReceiveBufferSize();
	virtual ::java::net::SocketAddress* getRemoteSocketAddress();
	virtual bool getReuseAddress();
	virtual int32_t getSendBufferSize();
	virtual int32_t getSoLinger();
	virtual int32_t getSoTimeout();
	virtual bool getTcpNoDelay();
	virtual int32_t getTrafficClass();
	virtual bool isBound();
	virtual bool isClosed();
	virtual bool isConnected();
	virtual bool isInputShutdown();
	virtual bool isOutputShutdown();
	void postAccept();
	virtual void sendUrgentData(int32_t data);
	virtual void setImpl(::java::net::SocketImpl* si);
	virtual void setImpl();
	virtual void setKeepAlive(bool on);
	virtual void setOOBInline(bool on);
	virtual ::java::net::Socket* setOption(::java::net::SocketOption* name, Object$* value);
	virtual void setPerformancePreferences(int32_t connectionTime, int32_t latency, int32_t bandwidth);
	virtual void setReceiveBufferSize(int32_t size);
	virtual void setReuseAddress(bool on);
	virtual void setSendBufferSize(int32_t size);
	virtual void setSoLinger(bool on, int32_t linger);
	virtual void setSoTimeout(int32_t timeout);
	static void setSocketImplFactory(::java::net::SocketImplFactory* fac);
	virtual void setTcpNoDelay(bool on);
	virtual void setTrafficClass(int32_t tc);
	virtual void shutdownInput();
	virtual void shutdownOutput();
	static ::java::net::SocketImplFactory* socketImplFactory();
	virtual ::java::util::Set* supportedOptions();
	virtual $String* toString() override;
	bool created = false;
	bool bound = false;
	bool connected = false;
	bool closed = false;
	$Object* closeLock = nullptr;
	bool shutIn = false;
	bool shutOut = false;
	::java::net::SocketImpl* impl = nullptr;
	$volatile(::java::io::InputStream*) in = nullptr;
	$volatile(::java::io::OutputStream*) out = nullptr;
	static ::java::lang::invoke::VarHandle* IN;
	static ::java::lang::invoke::VarHandle* OUT;
	static $volatile(::java::net::SocketImplFactory*) factory;
	$volatile(::java::util::Set*) options = nullptr;
};

	} // net
} // java

#pragma pop_macro("IN")
#pragma pop_macro("OUT")

#endif // _java_net_Socket_h_