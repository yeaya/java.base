#ifndef _sun_security_ssl_HandshakeContext_h_
#define _sun_security_ssl_HandshakeContext_h_
//$ class sun.security.ssl.HandshakeContext
//$ extends sun.security.ssl.ConnectionContext

#include <java/lang/Array.h>
#include <sun/security/ssl/ConnectionContext.h>

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class AlgorithmConstraints;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class LinkedHashMap;
		class List;
		class Map;
		class Queue;
	}
}
namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SNIServerName;
		}
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {
				class X500Principal;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class CipherSuite;
			class HandshakeHash;
			class HandshakeOutStream;
			class NamedGroup;
			class Plaintext;
			class ProtocolVersion;
			class RandomCookie;
			class SSLConfiguration;
			class SSLContextImpl;
			class SSLKeyDerivation;
			class SSLKeyExchange;
			class SSLSessionImpl;
			class TransportContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class HandshakeContext : public ::sun::security::ssl::ConnectionContext {
	$class(HandshakeContext, 0, ::sun::security::ssl::ConnectionContext)
public:
	HandshakeContext();
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, ::sun::security::ssl::TransportContext* conContext);
	void init$(::sun::security::ssl::TransportContext* conContext);
	virtual void dispatch(int8_t handshakeType, ::sun::security::ssl::Plaintext* plaintext);
	virtual void dispatch(int8_t handshakeType, ::java::nio::ByteBuffer* fragment);
	static ::java::util::List* getActiveCipherSuites(::java::util::List* enabledProtocols, ::java::util::List* enabledCipherSuites, ::java::security::AlgorithmConstraints* algorithmConstraints);
	static ::java::util::List* getActiveProtocols(::java::util::List* enabledProtocols, ::java::util::List* enabledCipherSuites, ::java::security::AlgorithmConstraints* algorithmConstraints);
	static int8_t getHandshakeType(::sun::security::ssl::TransportContext* conContext, ::sun::security::ssl::Plaintext* plaintext);
	virtual ::java::util::List* getRequestedServerNames();
	void initialize();
	static bool isActivatable(::sun::security::ssl::CipherSuite* suite, ::java::security::AlgorithmConstraints* algorithmConstraints, ::java::util::Map* cachedStatus);
	virtual bool isNegotiable(::sun::security::ssl::CipherSuite* cs);
	static bool isNegotiable(::java::util::List* proposed, ::sun::security::ssl::CipherSuite* cs);
	static bool isNegotiable(::java::util::List* proposed, ::sun::security::ssl::ProtocolVersion* protocolVersion, ::sun::security::ssl::CipherSuite* cs);
	virtual bool isNegotiable(::sun::security::ssl::ProtocolVersion* protocolVersion);
	virtual void kickstart() {}
	virtual void setVersion(::sun::security::ssl::ProtocolVersion* protocolVersion);
	static bool allowUnsafeRenegotiation;
	static bool allowLegacyHelloMessages;
	::java::util::LinkedHashMap* handshakeConsumers = nullptr;
	::java::util::HashMap* handshakeProducers = nullptr;
	::sun::security::ssl::SSLContextImpl* sslContext = nullptr;
	::sun::security::ssl::TransportContext* conContext = nullptr;
	::sun::security::ssl::SSLConfiguration* sslConfig = nullptr;
	::java::util::List* activeProtocols = nullptr;
	::java::util::List* activeCipherSuites = nullptr;
	::java::security::AlgorithmConstraints* algorithmConstraints = nullptr;
	::sun::security::ssl::ProtocolVersion* maximumActiveProtocol = nullptr;
	::sun::security::ssl::HandshakeOutStream* handshakeOutput = nullptr;
	::sun::security::ssl::HandshakeHash* handshakeHash = nullptr;
	::sun::security::ssl::SSLSessionImpl* handshakeSession = nullptr;
	bool handshakeFinished = false;
	bool kickstartMessageDelivered = false;
	bool isResumption = false;
	::sun::security::ssl::SSLSessionImpl* resumingSession = nullptr;
	bool statelessResumption = false;
	::java::util::Queue* delegatedActions = nullptr;
	$volatile(bool) taskDelegated = false;
	$volatile(::java::lang::Exception*) delegatedThrown = nullptr;
	::sun::security::ssl::ProtocolVersion* negotiatedProtocol = nullptr;
	::sun::security::ssl::CipherSuite* negotiatedCipherSuite = nullptr;
	::java::util::List* handshakePossessions = nullptr;
	::java::util::List* handshakeCredentials = nullptr;
	::sun::security::ssl::SSLKeyDerivation* handshakeKeyDerivation = nullptr;
	::sun::security::ssl::SSLKeyExchange* handshakeKeyExchange = nullptr;
	::javax::crypto::SecretKey* baseReadSecret = nullptr;
	::javax::crypto::SecretKey* baseWriteSecret = nullptr;
	int32_t clientHelloVersion = 0;
	$String* applicationProtocol = nullptr;
	::sun::security::ssl::RandomCookie* clientHelloRandom = nullptr;
	::sun::security::ssl::RandomCookie* serverHelloRandom = nullptr;
	$bytes* certRequestContext = nullptr;
	::java::util::Map* handshakeExtensions = nullptr;
	int32_t maxFragmentLength = 0;
	::java::util::List* localSupportedSignAlgs = nullptr;
	::java::util::List* peerRequestedSignatureSchemes = nullptr;
	::java::util::List* peerRequestedCertSignSchemes = nullptr;
	$Array<::javax::security::auth::x500::X500Principal>* peerSupportedAuthorities = nullptr;
	::java::util::List* clientRequestedNamedGroups = nullptr;
	::sun::security::ssl::NamedGroup* serverSelectedNamedGroup = nullptr;
	::java::util::List* requestedServerNames = nullptr;
	::javax::net::ssl::SNIServerName* negotiatedServerName = nullptr;
	bool staplingActive = false;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HandshakeContext_h_