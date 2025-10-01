#ifndef _sun_security_ssl_SSLCipher$SSLWriteCipher_h_
#define _sun_security_ssl_SSLCipher$SSLWriteCipher_h_
//$ class sun.security.ssl.SSLCipher$SSLWriteCipher
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
			class ProtocolVersion;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLCipher$SSLWriteCipher : public ::java::lang::Object {
	$class(SSLCipher$SSLWriteCipher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SSLCipher$SSLWriteCipher();
	void init$(::sun::security::ssl::Authenticator* authenticator, ::sun::security::ssl::ProtocolVersion* protocolVersion);
	virtual bool atKeyLimit();
	virtual int32_t calculateFragmentSize(int32_t packetLimit, int32_t headerSize) {return 0;}
	virtual int32_t calculatePacketSize(int32_t fragmentSize, int32_t headerSize) {return 0;}
	virtual void dispose();
	virtual int32_t encrypt(int8_t contentType, ::java::nio::ByteBuffer* bb) {return 0;}
	virtual int32_t getExplicitNonceSize() {return 0;}
	virtual bool isCBCMode();
	virtual bool isNullCipher();
	static ::sun::security::ssl::SSLCipher$SSLWriteCipher* nullDTlsWriteCipher();
	static ::sun::security::ssl::SSLCipher$SSLWriteCipher* nullTlsWriteCipher();
	::sun::security::ssl::Authenticator* authenticator = nullptr;
	::sun::security::ssl::ProtocolVersion* protocolVersion = nullptr;
	bool keyLimitEnabled = false;
	int64_t keyLimitCountdown = 0;
	::javax::crypto::SecretKey* baseSecret = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLCipher$SSLWriteCipher_h_