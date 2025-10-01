#ifndef _sun_nio_ch_ServerSocketAdaptor_h_
#define _sun_nio_ch_ServerSocketAdaptor_h_
//$ class sun.nio.ch.ServerSocketAdaptor
//$ extends java.net.ServerSocket

#include <java/net/ServerSocket.h>

namespace java {
	namespace net {
		class InetAddress;
		class Socket;
		class SocketAddress;
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
namespace sun {
	namespace nio {
		namespace ch {
			class ServerSocketChannelImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class ServerSocketAdaptor : public ::java::net::ServerSocket {
	$class(ServerSocketAdaptor, $NO_CLASS_INIT, ::java::net::ServerSocket)
public:
	ServerSocketAdaptor();
	void init$(::sun::nio::ch::ServerSocketChannelImpl* ssc);
	virtual ::java::net::Socket* accept() override;
	virtual void bind(::java::net::SocketAddress* local) override;
	virtual void bind(::java::net::SocketAddress* local, int32_t backlog) override;
	virtual void close() override;
	static ::java::net::ServerSocket* create(::sun::nio::ch::ServerSocketChannelImpl* ssc);
	virtual ::java::nio::channels::ServerSocketChannel* getChannel() override;
	virtual ::java::net::InetAddress* getInetAddress() override;
	virtual int32_t getLocalPort() override;
	virtual $Object* getOption(::java::net::SocketOption* name) override;
	virtual int32_t getReceiveBufferSize() override;
	virtual bool getReuseAddress() override;
	virtual int32_t getSoTimeout() override;
	virtual bool isBound() override;
	virtual bool isClosed() override;
	static ::java::net::ServerSocket* lambda$create$0(::sun::nio::ch::ServerSocketChannelImpl* ssc);
	virtual ::java::net::ServerSocket* setOption(::java::net::SocketOption* name, Object$* value) override;
	virtual void setReceiveBufferSize(int32_t size) override;
	virtual void setReuseAddress(bool on) override;
	virtual void setSoTimeout(int32_t timeout) override;
	virtual ::java::util::Set* supportedOptions() override;
	virtual $String* toString() override;
	::sun::nio::ch::ServerSocketChannelImpl* ssc = nullptr;
	$volatile(int32_t) timeout = 0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_ServerSocketAdaptor_h_