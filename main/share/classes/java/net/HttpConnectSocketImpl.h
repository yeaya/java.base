#ifndef _java_net_HttpConnectSocketImpl_h_
#define _java_net_HttpConnectSocketImpl_h_
//$ class java.net.HttpConnectSocketImpl
//$ extends java.net.DelegatingSocketImpl

#include <java/net/DelegatingSocketImpl.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Field;
			class Method;
		}
	}
}
namespace java {
	namespace net {
		class HttpURLConnection;
		class InetAddress;
		class InetSocketAddress;
		class Proxy;
		class Socket;
		class SocketAddress;
		class SocketImpl;
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}

namespace java {
	namespace net {

class HttpConnectSocketImpl : public ::java::net::DelegatingSocketImpl {
	$class(HttpConnectSocketImpl, 0, ::java::net::DelegatingSocketImpl)
public:
	HttpConnectSocketImpl();
	void init$(::java::net::Proxy* proxy, ::java::net::SocketImpl* delegate, ::java::net::Socket* socket);
	virtual void accept(::java::net::SocketImpl* s) override;
	virtual void connect($String* host, int32_t port) override;
	virtual void connect(::java::net::InetAddress* address, int32_t port) override;
	virtual void connect(::java::net::SocketAddress* endpoint, int32_t timeout) override;
	::java::net::Socket* doTunnel($String* urlString, int32_t connectTimeout);
	void doTunneling(::java::net::HttpURLConnection* conn);
	virtual ::java::net::InetAddress* getInetAddress() override;
	virtual int32_t getPort() override;
	virtual void listen(int32_t backlog) override;
	::java::net::Socket* privilegedDoTunnel($String* urlString, int32_t timeout);
	virtual void reset() override;
	using ::java::net::DelegatingSocketImpl::setOption;
	virtual void setOption(int32_t opt, Object$* val) override;
	static $String* httpURLClazzStr;
	static $String* netClientClazzStr;
	static $String* doTunnelingStr;
	static ::java::lang::reflect::Field* httpField;
	static ::java::lang::reflect::Field* serverSocketField;
	static ::java::lang::reflect::Method* doTunneling$;
	$String* server = nullptr;
	::java::net::Socket* socket = nullptr;
	::java::net::InetSocketAddress* external_address = nullptr;
	::java::util::HashMap* optionsMap = nullptr;
};

	} // net
} // java

#endif // _java_net_HttpConnectSocketImpl_h_