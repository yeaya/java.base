#ifndef _sun_security_ssl_SSLConfiguration_h_
#define _sun_security_ssl_SSLConfiguration_h_
//$ class sun.security.ssl.SSLConfiguration
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace security {
		class AlgorithmConstraints;
	}
}
namespace java {
	namespace util {
		class Collection;
		class HashMap;
		class List;
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
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class ClientAuthType;
			class ProtocolVersion;
			class SSLContextImpl;
			class SSLExtension;
			class SSLHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLConfiguration : public ::java::lang::Cloneable {
	$class(SSLConfiguration, 0, ::java::lang::Cloneable)
public:
	SSLConfiguration();
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, bool isClientMode);
	void addHandshakeCompletedListener(::javax::net::ssl::HandshakeCompletedListener* listener);
	virtual $Object* clone() override;
	static ::java::util::List* getCustomizedSignatureScheme($String* propertyName);
	$Array<::sun::security::ssl::SSLExtension>* getEnabledExtensions(::sun::security::ssl::SSLHandshake* handshakeType);
	$Array<::sun::security::ssl::SSLExtension>* getEnabledExtensions(::sun::security::ssl::SSLHandshake* handshakeType, ::sun::security::ssl::ProtocolVersion* protocolVersion);
	$Array<::sun::security::ssl::SSLExtension>* getEnabledExtensions(::sun::security::ssl::SSLHandshake* handshakeType, ::java::util::List* activeProtocols);
	$Array<::sun::security::ssl::SSLExtension>* getExclusiveExtensions(::sun::security::ssl::SSLHandshake* handshakeType, ::java::util::List* excluded);
	::javax::net::ssl::SSLParameters* getSSLParameters();
	bool isAvailable(::sun::security::ssl::SSLExtension* extension);
	bool isAvailable(::sun::security::ssl::SSLExtension* extension, ::sun::security::ssl::ProtocolVersion* protocolVersion);
	void removeHandshakeCompletedListener(::javax::net::ssl::HandshakeCompletedListener* listener);
	void setSSLParameters(::javax::net::ssl::SSLParameters* params);
	void toggleClientMode();
	::java::security::AlgorithmConstraints* userSpecifiedAlgorithmConstraints = nullptr;
	::java::util::List* enabledProtocols = nullptr;
	::java::util::List* enabledCipherSuites = nullptr;
	::sun::security::ssl::ClientAuthType* clientAuthType = nullptr;
	$String* identificationProtocol = nullptr;
	::java::util::List* serverNames = nullptr;
	::java::util::Collection* sniMatchers = nullptr;
	$StringArray* applicationProtocols = nullptr;
	bool preferLocalCipherSuites = false;
	bool enableRetransmissions = false;
	int32_t maximumPacketSize = 0;
	::java::util::List* signatureSchemes = nullptr;
	::sun::security::ssl::ProtocolVersion* maximumProtocolVersion = nullptr;
	bool isClientMode = false;
	bool enableSessionCreation = false;
	::java::util::function::BiFunction* socketAPSelector = nullptr;
	::java::util::function::BiFunction* engineAPSelector = nullptr;
	::java::util::HashMap* handshakeListeners = nullptr;
	bool noSniExtension = false;
	bool noSniMatcher = false;
	static bool useExtendedMasterSecret;
	static bool allowLegacyResumption;
	static bool allowLegacyMasterSecret;
	static bool useCompatibilityMode;
	static bool acknowledgeCloseNotify;
	static int32_t maxHandshakeMessageSize;
	static int32_t maxCertificateChainLength;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLConfiguration_h_