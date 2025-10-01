#ifndef _sun_security_ssl_HandshakeHash$CloneableHash_h_
#define _sun_security_ssl_HandshakeHash$CloneableHash_h_
//$ class sun.security.ssl.HandshakeHash$CloneableHash
//$ extends sun.security.ssl.HandshakeHash$TranscriptHash

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeHash$TranscriptHash.h>

namespace java {
	namespace security {
		class MessageDigest;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class HandshakeHash$CloneableHash : public ::sun::security::ssl::HandshakeHash$TranscriptHash {
	$class(HandshakeHash$CloneableHash, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeHash$TranscriptHash)
public:
	HandshakeHash$CloneableHash();
	void init$(::java::security::MessageDigest* md);
	virtual $bytes* archived() override;
	virtual $bytes* digest() override;
	virtual void update($bytes* input, int32_t offset, int32_t length) override;
	::java::security::MessageDigest* md = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HandshakeHash$CloneableHash_h_