#ifndef _javax_net_DefaultServerSocketFactory_h_
#define _javax_net_DefaultServerSocketFactory_h_
//$ class javax.net.DefaultServerSocketFactory
//$ extends javax.net.ServerSocketFactory

#include <javax/net/ServerSocketFactory.h>

namespace java {
	namespace net {
		class InetAddress;
		class ServerSocket;
	}
}

namespace javax {
	namespace net {

class DefaultServerSocketFactory : public ::javax::net::ServerSocketFactory {
	$class(DefaultServerSocketFactory, $NO_CLASS_INIT, ::javax::net::ServerSocketFactory)
public:
	DefaultServerSocketFactory();
	void init$();
	virtual ::java::net::ServerSocket* createServerSocket() override;
	virtual ::java::net::ServerSocket* createServerSocket(int32_t port) override;
	virtual ::java::net::ServerSocket* createServerSocket(int32_t port, int32_t backlog) override;
	virtual ::java::net::ServerSocket* createServerSocket(int32_t port, int32_t backlog, ::java::net::InetAddress* ifAddress) override;
};

	} // net
} // javax

#endif // _javax_net_DefaultServerSocketFactory_h_