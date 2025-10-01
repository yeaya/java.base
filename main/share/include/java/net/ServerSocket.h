#ifndef _java_net_ServerSocket_h_
#define _java_net_ServerSocket_h_
//$ class java.net.ServerSocket
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class Socket;
		class SocketAddress;
		class SocketImpl;
		class SocketImplFactory;
		class SocketOption;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class ServerSocketChannel;
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

class $import ServerSocket : public ::java::io::Closeable {
	$class(ServerSocket, 0, ::java::io::Closeable)
public:
	ServerSocket();
	void init$(::java::net::SocketImpl* impl);
	void init$();
	void init$(int32_t port);
	void init$(int32_t port, int32_t backlog);
	void init$(int32_t port, int32_t backlog, ::java::net::InetAddress* bindAddr);
	virtual ::java::net::Socket* accept();
	virtual void bind(::java::net::SocketAddress* endpoint);
	virtual void bind(::java::net::SocketAddress* endpoint, int32_t backlog);
	static ::java::lang::Void* checkPermission();
	virtual void close() override;
	virtual void createImpl();
	void customImplAccept(::java::net::SocketImpl* si);
	void ensureCompatible(::java::net::SocketImpl* si);
	virtual ::java::nio::channels::ServerSocketChannel* getChannel();
	virtual ::java::net::SocketImpl* getImpl();
	virtual ::java::net::InetAddress* getInetAddress();
	virtual int32_t getLocalPort();
	virtual ::java::net::SocketAddress* getLocalSocketAddress();
	virtual $Object* getOption(::java::net::SocketOption* name);
	virtual int32_t getReceiveBufferSize();
	virtual bool getReuseAddress();
	virtual int32_t getSoTimeout();
	void implAccept(::java::net::Socket* s);
	::java::net::SocketImpl* implAccept();
	void implAccept(::java::net::SocketImpl* si);
	virtual bool isBound();
	virtual bool isClosed();
	::java::net::SocketImpl* platformImplAccept();
	void setImpl();
	virtual ::java::net::ServerSocket* setOption(::java::net::SocketOption* name, Object$* value);
	virtual void setPerformancePreferences(int32_t connectionTime, int32_t latency, int32_t bandwidth);
	virtual void setReceiveBufferSize(int32_t size);
	virtual void setReuseAddress(bool on);
	virtual void setSoTimeout(int32_t timeout);
	static void setSocketFactory(::java::net::SocketImplFactory* fac);
	virtual ::java::util::Set* supportedOptions();
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	bool created = false;
	bool bound = false;
	bool closed = false;
	$Object* closeLock = nullptr;
	::java::net::SocketImpl* impl = nullptr;
	static $volatile(::java::net::SocketImplFactory*) factory;
	$volatile(::java::util::Set*) options = nullptr;
};

	} // net
} // java

#endif // _java_net_ServerSocket_h_