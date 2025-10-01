#ifndef _javax_net_ssl_SSLServerSocket_h_
#define _javax_net_ssl_SSLServerSocket_h_
//$ class javax.net.ssl.SSLServerSocket
//$ extends java.net.ServerSocket

#include <java/lang/Array.h>
#include <java/net/ServerSocket.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLParameters;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $import SSLServerSocket : public ::java::net::ServerSocket {
	$class(SSLServerSocket, $NO_CLASS_INIT, ::java::net::ServerSocket)
public:
	SSLServerSocket();
	void init$();
	void init$(int32_t port);
	void init$(int32_t port, int32_t backlog);
	void init$(int32_t port, int32_t backlog, ::java::net::InetAddress* address);
	virtual bool getEnableSessionCreation() {return false;}
	virtual $StringArray* getEnabledCipherSuites() {return nullptr;}
	virtual $StringArray* getEnabledProtocols() {return nullptr;}
	virtual bool getNeedClientAuth() {return false;}
	virtual ::javax::net::ssl::SSLParameters* getSSLParameters();
	virtual $StringArray* getSupportedCipherSuites() {return nullptr;}
	virtual $StringArray* getSupportedProtocols() {return nullptr;}
	virtual bool getUseClientMode() {return false;}
	virtual bool getWantClientAuth() {return false;}
	virtual void setEnableSessionCreation(bool flag) {}
	virtual void setEnabledCipherSuites($StringArray* suites) {}
	virtual void setEnabledProtocols($StringArray* protocols) {}
	virtual void setNeedClientAuth(bool need) {}
	virtual void setSSLParameters(::javax::net::ssl::SSLParameters* params);
	virtual void setUseClientMode(bool mode) {}
	virtual void setWantClientAuth(bool want) {}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLServerSocket_h_