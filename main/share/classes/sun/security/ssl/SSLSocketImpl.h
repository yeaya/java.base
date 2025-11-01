#ifndef _sun_security_ssl_SSLSocketImpl_h_
#define _sun_security_ssl_SSLSocketImpl_h_
//$ class sun.security.ssl.SSLSocketImpl
//$ extends sun.security.ssl.BaseSSLSocketImpl
//$ implements sun.security.ssl.SSLTransport

#include <java/lang/Array.h>
#include <sun/security/ssl/BaseSSLSocketImpl.h>
#include <sun/security/ssl/SSLTransport.h>

namespace java {
	namespace io {
		class EOFException;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class Socket;
		class SocketAddress;
		class SocketOption;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class Set;
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
namespace sun {
	namespace security {
		namespace ssl {
			class Plaintext;
			class SSLConfiguration;
			class SSLContextImpl;
			class SSLSocketImpl$AppInputStream;
			class SSLSocketImpl$AppOutputStream;
			class TransportContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLSocketImpl : public ::sun::security::ssl::BaseSSLSocketImpl, public ::sun::security::ssl::SSLTransport {
	$class(SSLSocketImpl, 0, ::sun::security::ssl::BaseSSLSocketImpl, ::sun::security::ssl::SSLTransport)
public:
	SSLSocketImpl();
	using ::sun::security::ssl::BaseSSLSocketImpl::connect;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::ssl::SSLContextImpl* sslContext);
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, ::sun::security::ssl::SSLConfiguration* sslConfig);
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, $String* peerHost, int32_t peerPort);
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, ::java::net::InetAddress* address, int32_t peerPort);
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, $String* peerHost, int32_t peerPort, ::java::net::InetAddress* localAddr, int32_t localPort);
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, ::java::net::InetAddress* peerAddr, int32_t peerPort, ::java::net::InetAddress* localAddr, int32_t localPort);
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, ::java::net::Socket* sock, ::java::io::InputStream* consumed, bool autoClose);
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, ::java::net::Socket* sock, $String* peerHost, int32_t port, bool autoClose);
	virtual void addHandshakeCompletedListener(::javax::net::ssl::HandshakeCompletedListener* listener) override;
	virtual void bind(::java::net::SocketAddress* bindpoint) override;
	void bruteForceCloseInput(bool hasCloseReceipt);
	virtual void close() override;
	void closeNotify(bool useUserCanceled);
	void closeSocket(bool selfInitiated);
	virtual void connect(::java::net::SocketAddress* endpoint, int32_t timeout) override;
	::sun::security::ssl::Plaintext* decode(::java::nio::ByteBuffer* destination);
	void deliverClosedNotify(bool useUserCanceled);
	void doneConnect();
	void duplexCloseInput();
	void duplexCloseOutput();
	void ensureNegotiated(bool resumable);
	virtual $String* getApplicationProtocol() override;
	virtual bool getEnableSessionCreation() override;
	virtual $StringArray* getEnabledCipherSuites() override;
	virtual $StringArray* getEnabledProtocols() override;
	virtual $String* getHandshakeApplicationProtocol() override;
	virtual ::java::util::function::BiFunction* getHandshakeApplicationProtocolSelector() override;
	virtual ::javax::net::ssl::SSLSession* getHandshakeSession() override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual ::java::net::SocketAddress* getLocalSocketAddress() override;
	virtual bool getNeedClientAuth() override;
	virtual $Object* getOption(::java::net::SocketOption* name) override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual $String* getPeerHost() override;
	virtual int32_t getPeerPort() override;
	virtual ::java::net::SocketAddress* getRemoteSocketAddress() override;
	virtual ::javax::net::ssl::SSLParameters* getSSLParameters() override;
	virtual ::javax::net::ssl::SSLSession* getSession() override;
	virtual $StringArray* getSupportedCipherSuites() override;
	virtual $StringArray* getSupportedProtocols() override;
	virtual bool getUseClientMode() override;
	virtual bool getWantClientAuth() override;
	::sun::security::ssl::Plaintext* handleEOF(::java::io::EOFException* eofe);
	void handleException(::java::lang::Exception* cause);
	virtual bool isClosed() override;
	virtual bool isInputShutdown() override;
	virtual bool isOutputShutdown() override;
	::java::nio::ByteBuffer* readApplicationRecord(::java::nio::ByteBuffer* buffer);
	int32_t readHandshakeRecord();
	virtual void removeHandshakeCompletedListener(::javax::net::ssl::HandshakeCompletedListener* listener) override;
	virtual void setEnableSessionCreation(bool flag) override;
	virtual void setEnabledCipherSuites($StringArray* suites) override;
	virtual void setEnabledProtocols($StringArray* protocols) override;
	virtual void setHandshakeApplicationProtocolSelector(::java::util::function::BiFunction* selector) override;
	void setHost($String* host);
	virtual void setNeedClientAuth(bool need) override;
	virtual ::java::net::Socket* setOption(::java::net::SocketOption* name, Object$* value) override;
	virtual void setPerformancePreferences(int32_t connectionTime, int32_t latency, int32_t bandwidth) override;
	virtual void setSSLParameters(::javax::net::ssl::SSLParameters* params) override;
	virtual void setSoTimeout(int32_t timeout) override;
	virtual void setUseClientMode(bool mode) override;
	virtual void setWantClientAuth(bool want) override;
	virtual void shutdown() override;
	virtual void shutdownInput() override;
	void shutdownInput(bool checkCloseNotify);
	virtual void shutdownOutput() override;
	virtual void startHandshake() override;
	void startHandshake(bool resumable);
	virtual ::java::util::Set* supportedOptions() override;
	virtual $String* toString() override;
	void tryKeyUpdate();
	void tryNewSessionTicket();
	virtual bool useDelegatedTask() override;
	void useImplicitHost(bool useNameService);
	void waitForClose();
	::sun::security::ssl::SSLContextImpl* sslContext = nullptr;
	::sun::security::ssl::TransportContext* conContext = nullptr;
	::sun::security::ssl::SSLSocketImpl$AppInputStream* appInput = nullptr;
	::sun::security::ssl::SSLSocketImpl$AppOutputStream* appOutput = nullptr;
	$String* peerHost = nullptr;
	bool autoClose = false;
	bool isConnected$ = false;
	$volatile(bool) tlsIsClosed = false;
	::java::util::concurrent::locks::ReentrantLock* socketLock = nullptr;
	::java::util::concurrent::locks::ReentrantLock* handshakeLock = nullptr;
	static bool trustNameService;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLSocketImpl_h_