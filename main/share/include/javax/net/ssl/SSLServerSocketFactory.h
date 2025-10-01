#ifndef _javax_net_ssl_SSLServerSocketFactory_h_
#define _javax_net_ssl_SSLServerSocketFactory_h_
//$ class javax.net.ssl.SSLServerSocketFactory
//$ extends javax.net.ServerSocketFactory

#include <java/lang/Array.h>
#include <javax/net/ServerSocketFactory.h>

namespace javax {
	namespace net {
		namespace ssl {

class $import SSLServerSocketFactory : public ::javax::net::ServerSocketFactory {
	$class(SSLServerSocketFactory, $NO_CLASS_INIT, ::javax::net::ServerSocketFactory)
public:
	SSLServerSocketFactory();
	void init$();
	static ::javax::net::ServerSocketFactory* getDefault();
	virtual $StringArray* getDefaultCipherSuites() {return nullptr;}
	virtual $StringArray* getSupportedCipherSuites() {return nullptr;}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLServerSocketFactory_h_