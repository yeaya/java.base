#ifndef _sun_security_ssl_SSLCipher$T13GcmWriteCipherGenerator$GcmWriteCipher_h_
#define _sun_security_ssl_SSLCipher$T13GcmWriteCipherGenerator$GcmWriteCipher_h_
//$ class sun.security.ssl.SSLCipher$T13GcmWriteCipherGenerator$GcmWriteCipher
//$ extends sun.security.ssl.SSLCipher$SSLWriteCipher

#include <java/lang/Array.h>
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
			class SSLCipher;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLCipher$T13GcmWriteCipherGenerator$GcmWriteCipher : public ::sun::security::ssl::SSLCipher$SSLWriteCipher {
	$class(SSLCipher$T13GcmWriteCipherGenerator$GcmWriteCipher, $NO_CLASS_INIT, ::sun::security::ssl::SSLCipher$SSLWriteCipher)
public:
	SSLCipher$T13GcmWriteCipherGenerator$GcmWriteCipher();
	void init$(::sun::security::ssl::Authenticator* authenticator, ::sun::security::ssl::ProtocolVersion* protocolVersion, ::sun::security::ssl::SSLCipher* sslCipher, $String* algorithm, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	virtual int32_t calculateFragmentSize(int32_t packetLimit, int32_t headerSize) override;
	virtual int32_t calculatePacketSize(int32_t fragmentSize, int32_t headerSize) override;
	virtual void dispose() override;
	virtual int32_t encrypt(int8_t contentType, ::java::nio::ByteBuffer* bb) override;
	virtual int32_t getExplicitNonceSize() override;
	::javax::crypto::Cipher* cipher = nullptr;
	int32_t tagSize = 0;
	::java::security::Key* key = nullptr;
	$bytes* iv = nullptr;
	::java::security::SecureRandom* random = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLCipher$T13GcmWriteCipherGenerator$GcmWriteCipher_h_