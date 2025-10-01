#ifndef _javax_net_ssl_SSLSocketFactory$DefaultFactoryHolder_h_
#define _javax_net_ssl_SSLSocketFactory$DefaultFactoryHolder_h_
//$ class javax.net.ssl.SSLSocketFactory$DefaultFactoryHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace net {
		namespace ssl {
			class SSLSocketFactory;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class SSLSocketFactory$DefaultFactoryHolder : public ::java::lang::Object {
	$class(SSLSocketFactory$DefaultFactoryHolder, 0, ::java::lang::Object)
public:
	SSLSocketFactory$DefaultFactoryHolder();
	void init$();
	static void log($String* msg);
	static ::javax::net::ssl::SSLSocketFactory* defaultFactory;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLSocketFactory$DefaultFactoryHolder_h_