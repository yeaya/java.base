#ifndef _sun_security_ssl_X509Authentication$X509PossessionGenerator_h_
#define _sun_security_ssl_X509Authentication$X509PossessionGenerator_h_
//$ class sun.security.ssl.X509Authentication$X509PossessionGenerator
//$ extends sun.security.ssl.SSLPossessionGenerator

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLPossessionGenerator.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ClientHandshakeContext;
			class HandshakeContext;
			class SSLPossession;
			class ServerHandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class X509Authentication$X509PossessionGenerator : public ::sun::security::ssl::SSLPossessionGenerator {
	$class(X509Authentication$X509PossessionGenerator, $NO_CLASS_INIT, ::sun::security::ssl::SSLPossessionGenerator)
public:
	X509Authentication$X509PossessionGenerator();
	void init$($StringArray* keyTypes);
	::sun::security::ssl::SSLPossession* createClientPossession(::sun::security::ssl::ClientHandshakeContext* chc, $String* keyType);
	virtual ::sun::security::ssl::SSLPossession* createPossession(::sun::security::ssl::HandshakeContext* context) override;
	::sun::security::ssl::SSLPossession* createServerPossession(::sun::security::ssl::ServerHandshakeContext* shc, $String* keyType);
	$StringArray* keyTypes = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_X509Authentication$X509PossessionGenerator_h_