#ifndef _sun_security_ssl_SSLCipher$SSLReadCipher_h_
#define _sun_security_ssl_SSLCipher$SSLReadCipher_h_
//$ class sun.security.ssl.SSLCipher$SSLReadCipher
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace javax {
	namespace crypto {
		class SecretKey;
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

class SSLCipher$SSLReadCipher : public ::java::lang::Object {
	$class(SSLCipher$SSLReadCipher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SSLCipher$SSLReadCipher();
	void init$(::sun::security::ssl::Authenticator* authenticator, ::sun::security::ssl::ProtocolVersion* protocolVersion);
	virtual bool atKeyLimit();
	virtual ::sun::security::ssl::Plaintext* decrypt(int8_t contentType, ::java::nio::ByteBuffer* bb, $bytes* sequence) {return nullptr;}
	virtual void dispose();
	virtual int32_t estimateFragmentSize(int32_t packetSize, int32_t headerSize) {return 0;}
	virtual bool isNullCipher();
	static ::sun::security::ssl::SSLCipher$SSLReadCipher* nullDTlsReadCipher();
	static ::sun::security::ssl::SSLCipher$SSLReadCipher* nullTlsReadCipher();
	::sun::security::ssl::Authenticator* authenticator = nullptr;
	::sun::security::ssl::ProtocolVersion* protocolVersion = nullptr;
	bool keyLimitEnabled = false;
	int64_t keyLimitCountdown = 0;
	::javax::crypto::SecretKey* baseSecret = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLCipher$SSLReadCipher_h_