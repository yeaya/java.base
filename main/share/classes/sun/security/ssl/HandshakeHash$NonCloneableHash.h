#ifndef _sun_security_ssl_HandshakeHash$NonCloneableHash_h_
#define _sun_security_ssl_HandshakeHash$NonCloneableHash_h_
//$ class sun.security.ssl.HandshakeHash$NonCloneableHash
//$ extends sun.security.ssl.HandshakeHash$TranscriptHash

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeHash$TranscriptHash.h>

namespace java {
	namespace io {
		class ByteArrayOutputStream;
	}
}
namespace java {
	namespace security {
		class MessageDigest;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class HandshakeHash$NonCloneableHash : public ::sun::security::ssl::HandshakeHash$TranscriptHash {
	$class(HandshakeHash$NonCloneableHash, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeHash$TranscriptHash)
public:
	HandshakeHash$NonCloneableHash();
	void init$(::java::security::MessageDigest* md);
	virtual $bytes* archived() override;
	virtual $bytes* digest() override;
	virtual void update($bytes* input, int32_t offset, int32_t length) override;
	::java::security::MessageDigest* md = nullptr;
	::java::io::ByteArrayOutputStream* baos = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HandshakeHash$NonCloneableHash_h_