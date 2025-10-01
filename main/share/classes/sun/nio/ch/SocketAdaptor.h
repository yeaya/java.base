#ifndef _sun_nio_ch_SocketAdaptor_h_
#define _sun_nio_ch_SocketAdaptor_h_
//$ class sun.nio.ch.SocketAdaptor
//$ extends java.net.Socket

#include <java/net/Socket.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class InetSocketAddress;
		class SocketAddress;
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
namespace sun {
	namespace nio {
		namespace ch {
			class SocketChannelImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class SocketAdaptor : public ::java::net::Socket {
	$class(SocketAdaptor, $NO_CLASS_INIT, ::java::net::Socket)
public:
	SocketAdaptor();
	void init$(::sun::nio::ch::SocketChannelImpl* sc);
	virtual void bind(::java::net::SocketAddress* local) override;
	virtual void close() override;
	virtual void connect(::java::net::SocketAddress* remote) override;
	virtual void connect(::java::net::SocketAddress* remote, int32_t timeout) override;
	static ::java::net::Socket* create(::sun::nio::ch::SocketChannelImpl* sc);
	bool getBooleanOption(::java::net::SocketOption* name);
	virtual ::java::nio::channels::SocketChannel* getChannel() override;
	virtual ::java::net::InetAddress* getInetAddress() override;
	virtual ::java::io::InputStream* getInputStream() override;
	int32_t getIntOption(::java::net::SocketOption* name);
	virtual bool getKeepAlive() override;
	virtual ::java::net::InetAddress* getLocalAddress() override;
	virtual int32_t getLocalPort() override;
	virtual ::java::net::SocketAddress* getLocalSocketAddress() override;
	virtual bool getOOBInline() override;
	virtual $Object* getOption(::java::net::SocketOption* name) override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual int32_t getPort() override;
	virtual int32_t getReceiveBufferSize() override;
	virtual ::java::net::SocketAddress* getRemoteSocketAddress() override;
	virtual bool getReuseAddress() override;
	virtual int32_t getSendBufferSize() override;
	virtual int32_t getSoLinger() override;
	virtual int32_t getSoTimeout() override;
	virtual bool getTcpNoDelay() override;
	virtual int32_t getTrafficClass() override;
	virtual bool isBound() override;
	virtual bool isClosed() override;
	virtual bool isConnected() override;
	virtual bool isInputShutdown() override;
	virtual bool isOutputShutdown() override;
	static ::java::net::Socket* lambda$create$0(::sun::nio::ch::SocketChannelImpl* sc);
	::java::net::InetSocketAddress* localAddress();
	::java::net::InetSocketAddress* remoteAddress();
	virtual void sendUrgentData(int32_t data) override;
	void setBooleanOption(::java::net::SocketOption* name, bool value);
	void setIntOption(::java::net::SocketOption* name, int32_t value);
	virtual void setKeepAlive(bool on) override;
	virtual void setOOBInline(bool on) override;
	virtual ::java::net::Socket* setOption(::java::net::SocketOption* name, Object$* value) override;
	virtual void setReceiveBufferSize(int32_t size) override;
	virtual void setReuseAddress(bool on) override;
	virtual void setSendBufferSize(int32_t size) override;
	virtual void setSoLinger(bool on, int32_t linger) override;
	virtual void setSoTimeout(int32_t timeout) override;
	virtual void setTcpNoDelay(bool on) override;
	virtual void setTrafficClass(int32_t tc) override;
	virtual void shutdownInput() override;
	virtual void shutdownOutput() override;
	virtual ::java::util::Set* supportedOptions() override;
	virtual $String* toString() override;
	::sun::nio::ch::SocketChannelImpl* sc = nullptr;
	$volatile(int32_t) timeout = 0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SocketAdaptor_h_