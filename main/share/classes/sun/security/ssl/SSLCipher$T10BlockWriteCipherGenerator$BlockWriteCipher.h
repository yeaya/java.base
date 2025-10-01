#ifndef _sun_security_ssl_SSLCipher$T10BlockWriteCipherGenerator$BlockWriteCipher_h_
#define _sun_security_ssl_SSLCipher$T10BlockWriteCipherGenerator$BlockWriteCipher_h_
//$ class sun.security.ssl.SSLCipher$T10BlockWriteCipherGenerator$BlockWriteCipher
//$ extends sun.security.ssl.SSLCipher$SSLWriteCipher

#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
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
namespace javax {
	namespace crypto {
		class Cipher;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class Authenticator;
			class ProtocolVersion;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLCipher$T10BlockWriteCipherGenerator$BlockWriteCipher : public ::sun::security::ssl::SSLCipher$SSLWriteCipher {
	$class(SSLCipher$T10BlockWriteCipherGenerator$BlockWriteCipher, $NO_CLASS_INIT, ::sun::security::ssl::SSLCipher$SSLWriteCipher)
public:
	SSLCipher$T10BlockWriteCipherGenerator$BlockWriteCipher();
	void init$(::sun::security::ssl::Authenticator* authenticator, ::sun::security::ssl::ProtocolVersion* protocolVersion, $String* algorithm, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	virtual int32_t calculateFragmentSize(int32_t packetLimit, int32_t headerSize) override;
	virtual int32_t calculatePacketSize(int32_t fragmentSize, int32_t headerSize) override;
	virtual void dispose() override;
	virtual int32_t encrypt(int8_t contentType, ::java::nio::ByteBuffer* bb) override;
	virtual int32_t getExplicitNonceSize() override;
	virtual bool isCBCMode() override;
	::javax::crypto::Cipher* cipher = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLCipher$T10BlockWriteCipherGenerator$BlockWriteCipher_h_