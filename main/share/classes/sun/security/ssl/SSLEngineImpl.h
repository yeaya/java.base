#ifndef _sun_security_ssl_SSLEngineImpl_h_
#define _sun_security_ssl_SSLEngineImpl_h_
//$ class sun.security.ssl.SSLEngineImpl
//$ extends javax.net.ssl.SSLEngine
//$ implements sun.security.ssl.SSLTransport

#include <java/lang/Array.h>
#include <javax/net/ssl/SSLEngine.h>
#include <sun/security/ssl/SSLTransport.h>

namespace java {
	namespace lang {
		class Exception;
		class Runnable;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
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
			class SSLEngineResult;
			class SSLEngineResult$HandshakeStatus;
			class SSLException;
			class SSLParameters;
			class SSLSession;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class Ciphertext;
			class Plaintext;
			class SSLContextImpl;
			class TransportContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLEngineImpl : public ::javax::net::ssl::SSLEngine, public ::sun::security::ssl::SSLTransport {
	$class(SSLEngineImpl, $NO_CLASS_INIT, ::javax::net::ssl::SSLEngine, ::sun::security::ssl::SSLTransport)
public:
	SSLEngineImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $String* getPeerHost() override;
	virtual int32_t getPeerPort() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::ssl::SSLContextImpl* sslContext);
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, $String* host, int32_t port);
	virtual void beginHandshake() override;
	static void checkParams($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength, $Array<::java::nio::ByteBuffer>* dsts, int32_t dstsOffset, int32_t dstsLength);
	void checkTaskThrown();
	virtual void closeInbound() override;
	virtual void closeOutbound() override;
	::sun::security::ssl::Plaintext* decode($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength, $Array<::java::nio::ByteBuffer>* dsts, int32_t dstsOffset, int32_t dstsLength);
	::sun::security::ssl::Ciphertext* encode($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength, $Array<::java::nio::ByteBuffer>* dsts, int32_t dstsOffset, int32_t dstsLength);
	virtual $String* getApplicationProtocol() override;
	virtual ::java::lang::Runnable* getDelegatedTask() override;
	virtual bool getEnableSessionCreation() override;
	virtual $StringArray* getEnabledCipherSuites() override;
	virtual $StringArray* getEnabledProtocols() override;
	virtual $String* getHandshakeApplicationProtocol() override;
	virtual ::java::util::function::BiFunction* getHandshakeApplicationProtocolSelector() override;
	virtual ::javax::net::ssl::SSLSession* getHandshakeSession() override;
	virtual ::javax::net::ssl::SSLEngineResult$HandshakeStatus* getHandshakeStatus() override;
	virtual bool getNeedClientAuth() override;
	virtual ::javax::net::ssl::SSLParameters* getSSLParameters() override;
	virtual ::javax::net::ssl::SSLSession* getSession() override;
	virtual $StringArray* getSupportedCipherSuites() override;
	virtual $StringArray* getSupportedProtocols() override;
	static ::javax::net::ssl::SSLException* getTaskThrown(::java::lang::Exception* taskThrown);
	virtual bool getUseClientMode() override;
	virtual bool getWantClientAuth() override;
	virtual bool isInboundDone() override;
	virtual bool isOutboundDone() override;
	::javax::net::ssl::SSLEngineResult* readRecord($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength, $Array<::java::nio::ByteBuffer>* dsts, int32_t dstsOffset, int32_t dstsLength);
	virtual void setEnableSessionCreation(bool flag) override;
	virtual void setEnabledCipherSuites($StringArray* suites) override;
	virtual void setEnabledProtocols($StringArray* protocols) override;
	virtual void setHandshakeApplicationProtocolSelector(::java::util::function::BiFunction* selector) override;
	virtual void setNeedClientAuth(bool need) override;
	virtual void setSSLParameters(::javax::net::ssl::SSLParameters* params) override;
	virtual void setUseClientMode(bool mode) override;
	virtual void setWantClientAuth(bool want) override;
	virtual $String* toString() override;
	::javax::net::ssl::SSLEngineResult$HandshakeStatus* tryKeyUpdate(::javax::net::ssl::SSLEngineResult$HandshakeStatus* currentHandshakeStatus);
	::javax::net::ssl::SSLEngineResult$HandshakeStatus* tryNewSessionTicket(::javax::net::ssl::SSLEngineResult$HandshakeStatus* currentHandshakeStatus);
	::javax::net::ssl::SSLEngineResult$HandshakeStatus* tryToFinishHandshake(int8_t contentType);
	using ::javax::net::ssl::SSLEngine::unwrap;
	virtual ::javax::net::ssl::SSLEngineResult* unwrap(::java::nio::ByteBuffer* src, $Array<::java::nio::ByteBuffer>* dsts, int32_t offset, int32_t length) override;
	::javax::net::ssl::SSLEngineResult* unwrap($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength, $Array<::java::nio::ByteBuffer>* dsts, int32_t dstsOffset, int32_t dstsLength);
	virtual bool useDelegatedTask() override;
	using ::javax::net::ssl::SSLEngine::wrap;
	virtual ::javax::net::ssl::SSLEngineResult* wrap($Array<::java::nio::ByteBuffer>* appData, int32_t offset, int32_t length, ::java::nio::ByteBuffer* netData) override;
	::javax::net::ssl::SSLEngineResult* wrap($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength, $Array<::java::nio::ByteBuffer>* dsts, int32_t dstsOffset, int32_t dstsLength);
	::javax::net::ssl::SSLEngineResult* writeRecord($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength, $Array<::java::nio::ByteBuffer>* dsts, int32_t dstsOffset, int32_t dstsLength);
	::sun::security::ssl::SSLContextImpl* sslContext = nullptr;
	::sun::security::ssl::TransportContext* conContext = nullptr;
	::java::util::concurrent::locks::ReentrantLock* engineLock = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLEngineImpl_h_