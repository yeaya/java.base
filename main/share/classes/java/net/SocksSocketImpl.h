#ifndef _java_net_SocksSocketImpl_h_
#define _java_net_SocksSocketImpl_h_
//$ class java.net.SocksSocketImpl
//$ extends java.net.DelegatingSocketImpl
//$ implements java.net.SocksConsts

#include <java/lang/Array.h>
#include <java/net/DelegatingSocketImpl.h>
#include <java/net/SocksConsts.h>

namespace java {
	namespace io {
		class BufferedOutputStream;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class InetSocketAddress;
		class Proxy;
		class Socket;
		class SocketAddress;
		class SocketImpl;
	}
}

namespace java {
	namespace net {

class SocksSocketImpl : public ::java::net::DelegatingSocketImpl, public ::java::net::SocksConsts {
	$class(SocksSocketImpl, 0, ::java::net::DelegatingSocketImpl, ::java::net::SocksConsts)
public:
	SocksSocketImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::net::SocketImpl* delegate);
	void init$(::java::net::Proxy* proxy, ::java::net::SocketImpl* delegate);
	virtual void accept(::java::net::SocketImpl* s) override;
	bool authenticate(int8_t method, ::java::io::InputStream* in, ::java::io::BufferedOutputStream* out, int64_t deadlineMillis);
	virtual void close() override;
	virtual void connect($String* host, int32_t port) override;
	virtual void connect(::java::net::InetAddress* address, int32_t port) override;
	virtual void connect(::java::net::SocketAddress* endpoint, int32_t timeout) override;
	void connectV4(::java::io::InputStream* in, ::java::io::OutputStream* out, ::java::net::InetSocketAddress* endpoint, int64_t deadlineMillis);
	virtual ::java::net::InetAddress* getInetAddress() override;
	virtual int32_t getPort() override;
	$String* getUserName();
	virtual void listen(int32_t backlog) override;
	void privilegedConnect($String* host, int32_t port, int32_t timeout);
	int32_t readSocksReply(::java::io::InputStream* in, $bytes* data, int64_t deadlineMillis);
	static int32_t remainingMillis(int64_t deadlineMillis);
	virtual void reset() override;
	void superConnectServer($String* host, int32_t port, int32_t timeout);
	virtual $String* toString() override;
	static bool useV4(::java::net::Proxy* proxy);
	static bool $assertionsDisabled;
	$String* server = nullptr;
	int32_t serverPort = 0;
	::java::net::InetSocketAddress* external_address = nullptr;
	bool useV4$ = false;
	::java::net::Socket* cmdsock = nullptr;
	::java::io::InputStream* cmdIn = nullptr;
	::java::io::OutputStream* cmdOut = nullptr;
};

	} // net
} // java

#endif // _java_net_SocksSocketImpl_h_