#ifndef _sun_security_ssl_SSLCipher$StreamWriteCipherGenerator_h_
#define _sun_security_ssl_SSLCipher$StreamWriteCipherGenerator_h_
//$ class sun.security.ssl.SSLCipher$StreamWriteCipherGenerator
//$ extends sun.security.ssl.SSLCipher$WriteCipherGenerator

#include <sun/security/ssl/SSLCipher$WriteCipherGenerator.h>

namespace java {
	namespace security {
		class Key;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class Authenticator;
			class ProtocolVersion;
			class SSLCipher;
			class SSLCipher$SSLWriteCipher;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLCipher$StreamWriteCipherGenerator : public ::sun::security::ssl::SSLCipher$WriteCipherGenerator {
	$class(SSLCipher$StreamWriteCipherGenerator, $NO_CLASS_INIT, ::sun::security::ssl::SSLCipher$WriteCipherGenerator)
public:
	SSLCipher$StreamWriteCipherGenerator();
	void init$();
	virtual ::sun::security::ssl::SSLCipher$SSLWriteCipher* createCipher(::sun::security::ssl::SSLCipher* sslCipher, ::sun::security::ssl::Authenticator* authenticator, ::sun::security::ssl::ProtocolVersion* protocolVersion, $String* algorithm, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLCipher$StreamWriteCipherGenerator_h_