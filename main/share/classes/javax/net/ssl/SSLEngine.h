#ifndef _javax_net_ssl_SSLEngine_h_
#define _javax_net_ssl_SSLEngine_h_
//$ class javax.net.ssl.SSLEngine
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
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
			class SSLParameters;
			class SSLSession;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $export SSLEngine : public ::java::lang::Object {
	$class(SSLEngine, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SSLEngine();
	void init$();
	void init$($String* peerHost, int32_t peerPort);
	virtual void beginHandshake() {}
	virtual void closeInbound() {}
	virtual void closeOutbound() {}
	virtual $String* getApplicationProtocol();
	virtual ::java::lang::Runnable* getDelegatedTask() {return nullptr;}
	virtual bool getEnableSessionCreation() {return false;}
	virtual $StringArray* getEnabledCipherSuites() {return nullptr;}
	virtual $StringArray* getEnabledProtocols() {return nullptr;}
	virtual $String* getHandshakeApplicationProtocol();
	virtual ::java::util::function::BiFunction* getHandshakeApplicationProtocolSelector();
	virtual ::javax::net::ssl::SSLSession* getHandshakeSession();
	virtual ::javax::net::ssl::SSLEngineResult$HandshakeStatus* getHandshakeStatus() {return nullptr;}
	virtual bool getNeedClientAuth() {return false;}
	virtual $String* getPeerHost();
	virtual int32_t getPeerPort();
	virtual ::javax::net::ssl::SSLParameters* getSSLParameters();
	virtual ::javax::net::ssl::SSLSession* getSession() {return nullptr;}
	virtual $StringArray* getSupportedCipherSuites() {return nullptr;}
	virtual $StringArray* getSupportedProtocols() {return nullptr;}
	virtual bool getUseClientMode() {return false;}
	virtual bool getWantClientAuth() {return false;}
	virtual bool isInboundDone() {return false;}
	virtual bool isOutboundDone() {return false;}
	virtual void setEnableSessionCreation(bool flag) {}
	virtual void setEnabledCipherSuites($StringArray* suites) {}
	virtual void setEnabledProtocols($StringArray* protocols) {}
	virtual void setHandshakeApplicationProtocolSelector(::java::util::function::BiFunction* selector);
	virtual void setNeedClientAuth(bool need) {}
	virtual void setSSLParameters(::javax::net::ssl::SSLParameters* params);
	virtual void setUseClientMode(bool mode) {}
	virtual void setWantClientAuth(bool want) {}
	virtual ::javax::net::ssl::SSLEngineResult* unwrap(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual ::javax::net::ssl::SSLEngineResult* unwrap(::java::nio::ByteBuffer* src, $Array<::java::nio::ByteBuffer>* dsts);
	virtual ::javax::net::ssl::SSLEngineResult* unwrap(::java::nio::ByteBuffer* src, $Array<::java::nio::ByteBuffer>* dsts, int32_t offset, int32_t length) {return nullptr;}
	virtual ::javax::net::ssl::SSLEngineResult* wrap(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual ::javax::net::ssl::SSLEngineResult* wrap($Array<::java::nio::ByteBuffer>* srcs, ::java::nio::ByteBuffer* dst);
	virtual ::javax::net::ssl::SSLEngineResult* wrap($Array<::java::nio::ByteBuffer>* srcs, int32_t offset, int32_t length, ::java::nio::ByteBuffer* dst) {return nullptr;}
	$String* peerHost = nullptr;
	int32_t peerPort = 0;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLEngine_h_