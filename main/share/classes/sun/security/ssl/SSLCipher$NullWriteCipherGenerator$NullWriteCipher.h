#ifndef _sun_security_ssl_SSLCipher$NullWriteCipherGenerator$NullWriteCipher_h_
#define _sun_security_ssl_SSLCipher$NullWriteCipherGenerator$NullWriteCipher_h_
//$ class sun.security.ssl.SSLCipher$NullWriteCipherGenerator$NullWriteCipher
//$ extends sun.security.ssl.SSLCipher$SSLWriteCipher

#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>

namespace java {
	namespace nio {
		class ByteBuffer;
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

class SSLCipher$NullWriteCipherGenerator$NullWriteCipher : public ::sun::security::ssl::SSLCipher$SSLWriteCipher {
	$class(SSLCipher$NullWriteCipherGenerator$NullWriteCipher, $NO_CLASS_INIT, ::sun::security::ssl::SSLCipher$SSLWriteCipher)
public:
	SSLCipher$NullWriteCipherGenerator$NullWriteCipher();
	void init$(::sun::security::ssl::Authenticator* authenticator, ::sun::security::ssl::ProtocolVersion* protocolVersion);
	virtual int32_t calculateFragmentSize(int32_t packetLimit, int32_t headerSize) override;
	virtual int32_t calculatePacketSize(int32_t fragmentSize, int32_t headerSize) override;
	virtual int32_t encrypt(int8_t contentType, ::java::nio::ByteBuffer* bb) override;
	virtual int32_t getExplicitNonceSize() override;
	virtual bool isNullCipher() override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLCipher$NullWriteCipherGenerator$NullWriteCipher_h_