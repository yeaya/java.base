#ifndef _javax_net_ssl_SSLServerSocketFactory$DefaultFactoryHolder_h_
#define _javax_net_ssl_SSLServerSocketFactory$DefaultFactoryHolder_h_
//$ class javax.net.ssl.SSLServerSocketFactory$DefaultFactoryHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace net {
		namespace ssl {
			class SSLServerSocketFactory;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class SSLServerSocketFactory$DefaultFactoryHolder : public ::java::lang::Object {
	$class(SSLServerSocketFactory$DefaultFactoryHolder, 0, ::java::lang::Object)
public:
	SSLServerSocketFactory$DefaultFactoryHolder();
	void init$();
	static void log($String* msg);
	static ::javax::net::ssl::SSLServerSocketFactory* defaultFactory;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLServerSocketFactory$DefaultFactoryHolder_h_