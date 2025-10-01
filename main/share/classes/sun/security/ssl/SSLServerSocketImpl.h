#ifndef _sun_security_ssl_SSLServerSocketImpl_h_
#define _sun_security_ssl_SSLServerSocketImpl_h_
//$ class sun.security.ssl.SSLServerSocketImpl
//$ extends javax.net.ssl.SSLServerSocket

#include <java/lang/Array.h>
#include <javax/net/ssl/SSLServerSocket.h>

namespace java {
	namespace net {
		class InetAddress;
		class Socket;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLParameters;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class SSLConfiguration;
			class SSLContextImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLServerSocketImpl : public ::javax::net::ssl::SSLServerSocket {
	$class(SSLServerSocketImpl, $NO_CLASS_INIT, ::javax::net::ssl::SSLServerSocket)
public:
	SSLServerSocketImpl();
	void init$(::sun::security::ssl::SSLContextImpl* sslContext);
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, int32_t port, int32_t backlog);
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, int32_t port, int32_t backlog, ::java::net::InetAddress* address);
	virtual ::java::net::Socket* accept() override;
	virtual bool getEnableSessionCreation() override;
	virtual $StringArray* getEnabledCipherSuites() override;
	virtual $StringArray* getEnabledProtocols() override;
	virtual bool getNeedClientAuth() override;
	virtual ::javax::net::ssl::SSLParameters* getSSLParameters() override;
	virtual $StringArray* getSupportedCipherSuites() override;
	virtual $StringArray* getSupportedProtocols() override;
	virtual bool getUseClientMode() override;
	virtual bool getWantClientAuth() override;
	virtual void setEnableSessionCreation(bool flag) override;
	virtual void setEnabledCipherSuites($StringArray* suites) override;
	virtual void setEnabledProtocols($StringArray* protocols) override;
	virtual void setNeedClientAuth(bool need) override;
	virtual void setSSLParameters(::javax::net::ssl::SSLParameters* params) override;
	virtual void setUseClientMode(bool useClientMode) override;
	virtual void setWantClientAuth(bool want) override;
	virtual $String* toString() override;
	::sun::security::ssl::SSLContextImpl* sslContext = nullptr;
	::sun::security::ssl::SSLConfiguration* sslConfig = nullptr;
	::java::util::concurrent::locks::ReentrantLock* serverSocketLock = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLServerSocketImpl_h_