#ifndef _javax_net_SocketFactory_h_
#define _javax_net_SocketFactory_h_
//$ class javax.net.SocketFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class InetAddress;
		class Socket;
	}
}

namespace javax {
	namespace net {

class $export SocketFactory : public ::java::lang::Object {
	$class(SocketFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SocketFactory();
	void init$();
	virtual ::java::net::Socket* createSocket();
	virtual ::java::net::Socket* createSocket($String* host, int32_t port) {return nullptr;}
	virtual ::java::net::Socket* createSocket($String* host, int32_t port, ::java::net::InetAddress* localHost, int32_t localPort) {return nullptr;}
	virtual ::java::net::Socket* createSocket(::java::net::InetAddress* host, int32_t port) {return nullptr;}
	virtual ::java::net::Socket* createSocket(::java::net::InetAddress* address, int32_t port, ::java::net::InetAddress* localAddress, int32_t localPort) {return nullptr;}
	static ::javax::net::SocketFactory* getDefault();
	static ::javax::net::SocketFactory* theFactory;
};

	} // net
} // javax

#endif // _javax_net_SocketFactory_h_