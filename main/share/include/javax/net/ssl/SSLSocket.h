#ifndef _javax_net_ssl_SSLSocket_h_
#define _javax_net_ssl_SSLSocket_h_
//$ class javax.net.ssl.SSLSocket
//$ extends java.net.Socket

#include <java/lang/Array.h>
#include <java/net/Socket.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
		}
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class HandshakeCompletedListener;
			class SSLParameters;
			class SSLSession;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $import SSLSocket : public ::java::net::Socket {
	$class(SSLSocket, $NO_CLASS_INIT, ::java::net::Socket)
public:
	SSLSocket();
	void init$();
	void init$($String* host, int32_t port);
	void init$(::java::net::InetAddress* address, int32_t port);
	void init$($String* host, int32_t port, ::java::net::InetAddress* clientAddress, int32_t clientPort);
	void init$(::java::net::InetAddress* address, int32_t port, ::java::net::InetAddress* clientAddress, int32_t clientPort);
	virtual void addHandshakeCompletedListener(::javax::net::ssl::HandshakeCompletedListener* listener) {}
	virtual $String* getApplicationProtocol();
	virtual bool getEnableSessionCreation() {return false;}
	virtual $StringArray* getEnabledCipherSuites() {return nullptr;}
	virtual $StringArray* getEnabledProtocols() {return nullptr;}
	virtual $String* getHandshakeApplicationProtocol();
	virtual ::java::util::function::BiFunction* getHandshakeApplicationProtocolSelector();
	virtual ::javax::net::ssl::SSLSession* getHandshakeSession();
	virtual bool getNeedClientAuth() {return false;}
	virtual ::javax::net::ssl::SSLParameters* getSSLParameters();
	virtual ::javax::net::ssl::SSLSession* getSession() {return nullptr;}
	virtual $StringArray* getSupportedCipherSuites() {return nullptr;}
	virtual $StringArray* getSupportedProtocols() {return nullptr;}
	virtual bool getUseClientMode() {return false;}
	virtual bool getWantClientAuth() {return false;}
	virtual void removeHandshakeCompletedListener(::javax::net::ssl::HandshakeCompletedListener* listener) {}
	virtual void setEnableSessionCreation(bool flag) {}
	virtual void setEnabledCipherSuites($StringArray* suites) {}
	virtual void setEnabledProtocols($StringArray* protocols) {}
	virtual void setHandshakeApplicationProtocolSelector(::java::util::function::BiFunction* selector);
	virtual void setNeedClientAuth(bool need) {}
	virtual void setSSLParameters(::javax::net::ssl::SSLParameters* params);
	virtual void setUseClientMode(bool mode) {}
	virtual void setWantClientAuth(bool want) {}
	virtual void startHandshake() {}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLSocket_h_