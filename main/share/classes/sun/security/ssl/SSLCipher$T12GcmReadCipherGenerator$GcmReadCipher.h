#ifndef _sun_security_ssl_SSLCipher$T12GcmReadCipherGenerator$GcmReadCipher_h_
#define _sun_security_ssl_SSLCipher$T12GcmReadCipherGenerator$GcmReadCipher_h_
//$ class sun.security.ssl.SSLCipher$T12GcmReadCipherGenerator$GcmReadCipher
//$ extends sun.security.ssl.SSLCipher$SSLReadCipher

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>

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
			class Plaintext;
			class ProtocolVersion;
			class SSLCipher;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLCipher$T12GcmReadCipherGenerator$GcmReadCipher : public ::sun::security::ssl::SSLCipher$SSLReadCipher {
	$class(SSLCipher$T12GcmReadCipherGenerator$GcmReadCipher, $NO_CLASS_INIT, ::sun::security::ssl::SSLCipher$SSLReadCipher)
public:
	SSLCipher$T12GcmReadCipherGenerator$GcmReadCipher();
	void init$(::sun::security::ssl::Authenticator* authenticator, ::sun::security::ssl::ProtocolVersion* protocolVersion, ::sun::security::ssl::SSLCipher* sslCipher, $String* algorithm, ::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random);
	virtual ::sun::security::ssl::Plaintext* decrypt(int8_t contentType, ::java::nio::ByteBuffer* bb, $bytes* sequence) override;
	virtual void dispose() override;
	virtual int32_t estimateFragmentSize(int32_t packetSize, int32_t headerSize) override;
	::javax::crypto::Cipher* cipher = nullptr;
	int32_t tagSize = 0;
	::java::security::Key* key = nullptr;
	$bytes* fixedIv = nullptr;
	int32_t recordIvSize = 0;
	::java::security::SecureRandom* random = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLCipher$T12GcmReadCipherGenerator$GcmReadCipher_h_