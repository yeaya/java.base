#ifndef _sun_security_ssl_SSLCipher$NullReadCipherGenerator$NullReadCipher_h_
#define _sun_security_ssl_SSLCipher$NullReadCipherGenerator$NullReadCipher_h_
//$ class sun.security.ssl.SSLCipher$NullReadCipherGenerator$NullReadCipher
//$ extends sun.security.ssl.SSLCipher$SSLReadCipher

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class Authenticator;
			class Plaintext;
			class ProtocolVersion;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLCipher$NullReadCipherGenerator$NullReadCipher : public ::sun::security::ssl::SSLCipher$SSLReadCipher {
	$class(SSLCipher$NullReadCipherGenerator$NullReadCipher, $NO_CLASS_INIT, ::sun::security::ssl::SSLCipher$SSLReadCipher)
public:
	SSLCipher$NullReadCipherGenerator$NullReadCipher();
	void init$(::sun::security::ssl::Authenticator* authenticator, ::sun::security::ssl::ProtocolVersion* protocolVersion);
	virtual ::sun::security::ssl::Plaintext* decrypt(int8_t contentType, ::java::nio::ByteBuffer* bb, $bytes* sequence) override;
	virtual int32_t estimateFragmentSize(int32_t packetSize, int32_t headerSize) override;
	virtual bool isNullCipher() override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLCipher$NullReadCipherGenerator$NullReadCipher_h_