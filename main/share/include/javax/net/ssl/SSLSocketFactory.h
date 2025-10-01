#ifndef _javax_net_ssl_SSLSocketFactory_h_
#define _javax_net_ssl_SSLSocketFactory_h_
//$ class javax.net.ssl.SSLSocketFactory
//$ extends javax.net.SocketFactory

#include <java/lang/Array.h>
#include <javax/net/SocketFactory.h>

#pragma push_macro("DEBUG")
#undef DEBUG

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class Socket;
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $import SSLSocketFactory : public ::javax::net::SocketFactory {
	$class(SSLSocketFactory, 0, ::javax::net::SocketFactory)
public:
	SSLSocketFactory();
	using ::javax::net::SocketFactory::createSocket;
	void init$();
	virtual ::java::net::Socket* createSocket(::java::net::Socket* s, $String* host, int32_t port, bool autoClose) {return nullptr;}
	virtual ::java::net::Socket* createSocket(::java::net::Socket* s, ::java::io::InputStream* consumed, bool autoClose);
	static ::javax::net::SocketFactory* getDefault();
	virtual $StringArray* getDefaultCipherSuites() {return nullptr;}
	static $String* getSecurityProperty($String* name);
	virtual $StringArray* getSupportedCipherSuites() {return nullptr;}
	static bool DEBUG;
};

		} // ssl
	} // net
} // javax

#pragma pop_macro("DEBUG")

#endif // _javax_net_ssl_SSLSocketFactory_h_