#ifndef _sun_security_ssl_SSLCipher$StreamReadCipherGenerator_h_
#define _sun_security_ssl_SSLCipher$StreamReadCipherGenerator_h_
//$ class sun.security.ssl.SSLCipher$StreamReadCipherGenerator
//$ extends sun.security.ssl.SSLCipher$ReadCipherGenerator

#include <sun/security/ssl/SSLCipher$ReadCipherGenerator.h>

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
			class SSLCipher$SSLReadCipher;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLCipher$StreamReadCipherGenerator : public ::sun::security::ssl::SSLCipher$ReadCipherGenerator {
	$class(SSLCipher$StreamReadCipherGenerator, $NO_CLASS_INIT, ::sun::security::ssl::SSLCipher$ReadCipherGenerator)
public:
	SSLCipher$StreamReadCipherGenerator();
	void init$();
	virtual ::sun::security::ssl::SSLCipher$SSLReadCipher* createCipher(::sun::security::ssl::SSLCipher* sslCipher, ::sun::security::ssl::Authenticator* authenticator, ::sun::security::ssl::ProtocolVersion* protocolVersion, $String* algorithm, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLCipher$StreamReadCipherGenerator_h_