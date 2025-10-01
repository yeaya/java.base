#ifndef _javax_net_DefaultSocketFactory_h_
#define _javax_net_DefaultSocketFactory_h_
//$ class javax.net.DefaultSocketFactory
//$ extends javax.net.SocketFactory

#include <javax/net/SocketFactory.h>

namespace java {
	namespace net {
		class InetAddress;
		class Socket;
	}
}

namespace javax {
	namespace net {

class DefaultSocketFactory : public ::javax::net::SocketFactory {
	$class(DefaultSocketFactory, $NO_CLASS_INIT, ::javax::net::SocketFactory)
public:
	DefaultSocketFactory();
	void init$();
	virtual ::java::net::Socket* createSocket() override;
	virtual ::java::net::Socket* createSocket($String* host, int32_t port) override;
	virtual ::java::net::Socket* createSocket(::java::net::InetAddress* address, int32_t port) override;
	virtual ::java::net::Socket* createSocket($String* host, int32_t port, ::java::net::InetAddress* clientAddress, int32_t clientPort) override;
	virtual ::java::net::Socket* createSocket(::java::net::InetAddress* address, int32_t port, ::java::net::InetAddress* clientAddress, int32_t clientPort) override;
};

	} // net
} // javax

#endif // _javax_net_DefaultSocketFactory_h_