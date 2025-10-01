#ifndef _sun_security_ssl_BaseSSLSocketImpl_h_
#define _sun_security_ssl_BaseSSLSocketImpl_h_
//$ class sun.security.ssl.BaseSSLSocketImpl
//$ extends javax.net.ssl.SSLSocket

#include <javax/net/ssl/SSLSocket.h>

#pragma push_macro("PROP_NAME")
#undef PROP_NAME

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
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
	namespace security {
		namespace ssl {

class BaseSSLSocketImpl : public ::javax::net::ssl::SSLSocket {
	$class(BaseSSLSocketImpl, $HAS_FINALIZE, ::javax::net::ssl::SSLSocket)
public:
	BaseSSLSocketImpl();
	using ::javax::net::ssl::SSLSocket::connect;
	void init$();
	void init$(::java::net::Socket* socket);
	void init$(::java::net::Socket* socket, ::java::io::InputStream* consumed);
	virtual void bind(::java::net::SocketAddress* bindpoint) override;
	virtual void close() override;
	virtual void connect(::java::net::SocketAddress* endpoint) override;
	virtual void finalize() override;
	virtual ::java::nio::channels::SocketChannel* getChannel() override;
	virtual ::java::net::InetAddress* getInetAddress() override;
	virtual ::java::io::InputStream* getInputStream() override;
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
	virtual bool isConnected() override;
	virtual bool isInputShutdown() override;
	virtual bool isLayered();
	virtual bool isOutputShutdown() override;
	virtual void sendUrgentData(int32_t data) override;
	virtual void setKeepAlive(bool on) override;
	virtual void setOOBInline(bool on) override;
	virtual ::java::net::Socket* setOption(::java::net::SocketOption* name, Object$* value) override;
	virtual void setPerformancePreferences(int32_t connectionTime, int32_t latency, int32_t bandwidth) override;
	virtual void setReceiveBufferSize(int32_t size) override;
	virtual void setReuseAddress(bool on) override;
	virtual void setSendBufferSize(int32_t size) override;
	virtual void setSoLinger(bool flag, int32_t linger) override;
	virtual void setSoTimeout(int32_t timeout) override;
	virtual void setTcpNoDelay(bool value) override;
	virtual void setTrafficClass(int32_t tc) override;
	virtual void shutdownInput() override;
	virtual void shutdownOutput() override;
	virtual ::java::util::Set* supportedOptions() override;
	virtual $String* toString() override;
	::java::net::Socket* self = nullptr;
	::java::io::InputStream* consumedInput = nullptr;
	static $String* PROP_NAME;
	static bool requireCloseNotify;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("PROP_NAME")

#endif // _sun_security_ssl_BaseSSLSocketImpl_h_