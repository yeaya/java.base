#ifndef _sun_security_ssl_HandshakeHash$T12HandshakeHash_h_
#define _sun_security_ssl_HandshakeHash$T12HandshakeHash_h_
//$ class sun.security.ssl.HandshakeHash$T12HandshakeHash
//$ extends sun.security.ssl.HandshakeHash$TranscriptHash

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeHash$TranscriptHash.h>

namespace java {
	namespace io {
		class ByteArrayOutputStream;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class CipherSuite;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class HandshakeHash$T12HandshakeHash : public ::sun::security::ssl::HandshakeHash$TranscriptHash {
	$class(HandshakeHash$T12HandshakeHash, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeHash$TranscriptHash)
public:
	HandshakeHash$T12HandshakeHash();
	void init$(::sun::security::ssl::CipherSuite* cipherSuite);
	virtual $bytes* archived() override;
	virtual $bytes* digest() override;
	virtual void update($bytes* input, int32_t offset, int32_t length) override;
	::sun::security::ssl::HandshakeHash$TranscriptHash* transcriptHash = nullptr;
	::java::io::ByteArrayOutputStream* baos = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HandshakeHash$T12HandshakeHash_h_