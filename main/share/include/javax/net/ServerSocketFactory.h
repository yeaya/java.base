#ifndef _javax_net_ServerSocketFactory_h_
#define _javax_net_ServerSocketFactory_h_
//$ class javax.net.ServerSocketFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class InetAddress;
		class ServerSocket;
	}
}

namespace javax {
	namespace net {

class $import ServerSocketFactory : public ::java::lang::Object {
	$class(ServerSocketFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ServerSocketFactory();
	void init$();
	virtual ::java::net::ServerSocket* createServerSocket();
	virtual ::java::net::ServerSocket* createServerSocket(int32_t port) {return nullptr;}
	virtual ::java::net::ServerSocket* createServerSocket(int32_t port, int32_t backlog) {return nullptr;}
	virtual ::java::net::ServerSocket* createServerSocket(int32_t port, int32_t backlog, ::java::net::InetAddress* ifAddress) {return nullptr;}
	static ::javax::net::ServerSocketFactory* getDefault();
	static ::javax::net::ServerSocketFactory* theFactory;
};

	} // net
} // javax

#endif // _javax_net_ServerSocketFactory_h_