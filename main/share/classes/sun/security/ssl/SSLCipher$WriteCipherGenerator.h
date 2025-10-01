#ifndef _sun_security_ssl_SSLCipher$WriteCipherGenerator_h_
#define _sun_security_ssl_SSLCipher$WriteCipherGenerator_h_
//$ interface sun.security.ssl.SSLCipher$WriteCipherGenerator
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class SSLCipher$WriteCipherGenerator : public ::java::lang::Object {
	$interface(SSLCipher$WriteCipherGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::security::ssl::SSLCipher$SSLWriteCipher* createCipher(::sun::security::ssl::SSLCipher* sslCipher, ::sun::security::ssl::Authenticator* authenticator, ::sun::security::ssl::ProtocolVersion* protocolVersion, $String* algorithm, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) {return nullptr;}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLCipher$WriteCipherGenerator_h_