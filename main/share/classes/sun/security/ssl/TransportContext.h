#ifndef _sun_security_ssl_TransportContext_h_
#define _sun_security_ssl_TransportContext_h_
//$ class sun.security.ssl.TransportContext
//$ extends sun.security.ssl.ConnectionContext

#include <java/lang/Array.h>
#include <sun/security/ssl/ConnectionContext.h>

namespace java {
	namespace lang {
		class Exception;
		class Throwable;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLEngineResult$HandshakeStatus;
			class SSLException;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class Alert;
			class CipherSuite;
			class HandshakeContext;
			class InputRecord;
			class OutputRecord;
			class Plaintext;
			class ProtocolVersion;
			class SSLConfiguration;
			class SSLContextImpl;
			class SSLSessionImpl;
			class SSLTransport;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class TransportContext : public ::sun::security::ssl::ConnectionContext {
	$class(TransportContext, 0, ::sun::security::ssl::ConnectionContext)
public:
	TransportContext();
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, ::sun::security::ssl::SSLTransport* transport, ::sun::security::ssl::InputRecord* inputRecord, ::sun::security::ssl::OutputRecord* outputRecord);
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, ::sun::security::ssl::SSLTransport* transport, ::sun::security::ssl::InputRecord* inputRecord, ::sun::security::ssl::OutputRecord* outputRecord, bool isClientMode);
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, ::sun::security::ssl::SSLTransport* transport, ::sun::security::ssl::SSLConfiguration* sslConfig, ::sun::security::ssl::InputRecord* inputRecord, ::sun::security::ssl::OutputRecord* outputRecord);
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, ::sun::security::ssl::SSLTransport* transport, ::sun::security::ssl::SSLConfiguration* sslConfig, ::sun::security::ssl::InputRecord* inputRecord, ::sun::security::ssl::OutputRecord* outputRecord, bool isUnsureMode);
	void closeInbound();
	void closeNotify(bool isUserCanceled);
	void closeOutbound();
	void dispatch(::sun::security::ssl::Plaintext* plaintext);
	::javax::net::ssl::SSLException* fatal(::sun::security::ssl::Alert* alert, $String* diagnostic);
	::javax::net::ssl::SSLException* fatal(::sun::security::ssl::Alert* alert, $Throwable* cause);
	::javax::net::ssl::SSLException* fatal(::sun::security::ssl::Alert* alert, $String* diagnostic, $Throwable* cause);
	::javax::net::ssl::SSLException* fatal(::sun::security::ssl::Alert* alert, $String* diagnostic, bool recvFatalAlert, $Throwable* cause);
	::javax::net::ssl::SSLEngineResult$HandshakeStatus* finishHandshake();
	::javax::net::ssl::SSLEngineResult$HandshakeStatus* finishPostHandshake();
	::javax::net::ssl::SSLEngineResult$HandshakeStatus* getHandshakeStatus();
	void initiateInboundClose();
	void initiateOutboundClose();
	bool isInboundClosed();
	bool isOutboundClosed();
	bool isOutboundDone();
	bool isPostHandshakeContext();
	void kickstart();
	void passiveInboundClose();
	void setUseClientMode(bool useClientMode);
	void warning(::sun::security::ssl::Alert* alert);
	::sun::security::ssl::SSLTransport* transport = nullptr;
	::java::util::Map* consumers = nullptr;
	::java::security::AccessControlContext* acc = nullptr;
	::sun::security::ssl::SSLContextImpl* sslContext = nullptr;
	::sun::security::ssl::SSLConfiguration* sslConfig = nullptr;
	::sun::security::ssl::InputRecord* inputRecord = nullptr;
	::sun::security::ssl::OutputRecord* outputRecord = nullptr;
	bool isUnsureMode = false;
	bool isNegotiated = false;
	bool isBroken = false;
	bool isInputCloseNotified = false;
	bool peerUserCanceled = false;
	::java::lang::Exception* closeReason = nullptr;
	::java::lang::Exception* delegatedThrown = nullptr;
	bool needHandshakeFinishedStatus = false;
	bool hasDelegatedFinished = false;
	::sun::security::ssl::SSLSessionImpl* conSession = nullptr;
	::sun::security::ssl::ProtocolVersion* protocolVersion = nullptr;
	$String* applicationProtocol = nullptr;
	::sun::security::ssl::HandshakeContext* handshakeContext = nullptr;
	bool secureRenegotiation = false;
	$bytes* clientVerifyData = nullptr;
	$bytes* serverVerifyData = nullptr;
	::java::util::List* serverRequestedNamedGroups = nullptr;
	::sun::security::ssl::CipherSuite* cipherSuite = nullptr;
	static $bytes* emptyByteArray;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_TransportContext_h_