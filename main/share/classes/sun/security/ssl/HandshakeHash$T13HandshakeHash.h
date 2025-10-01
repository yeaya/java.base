#ifndef _sun_security_ssl_HandshakeHash$T13HandshakeHash_h_
#define _sun_security_ssl_HandshakeHash$T13HandshakeHash_h_
//$ class sun.security.ssl.HandshakeHash$T13HandshakeHash
//$ extends sun.security.ssl.HandshakeHash$TranscriptHash

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeHash$TranscriptHash.h>

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

class HandshakeHash$T13HandshakeHash : public ::sun::security::ssl::HandshakeHash$TranscriptHash {
	$class(HandshakeHash$T13HandshakeHash, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeHash$TranscriptHash)
public:
	HandshakeHash$T13HandshakeHash();
	void init$(::sun::security::ssl::CipherSuite* cipherSuite);
	virtual $bytes* archived() override;
	virtual $bytes* digest() override;
	virtual void update($bytes* input, int32_t offset, int32_t length) override;
	::sun::security::ssl::HandshakeHash$TranscriptHash* transcriptHash = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HandshakeHash$T13HandshakeHash_h_