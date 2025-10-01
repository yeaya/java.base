#ifndef _sun_security_ssl_HandshakeHash$CacheOnlyHash_h_
#define _sun_security_ssl_HandshakeHash$CacheOnlyHash_h_
//$ class sun.security.ssl.HandshakeHash$CacheOnlyHash
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

class HandshakeHash$CacheOnlyHash : public ::sun::security::ssl::HandshakeHash$TranscriptHash {
	$class(HandshakeHash$CacheOnlyHash, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeHash$TranscriptHash)
public:
	HandshakeHash$CacheOnlyHash();
	void init$();
	virtual $bytes* archived() override;
	::sun::security::ssl::HandshakeHash$CacheOnlyHash* copy();
	virtual $bytes* digest() override;
	virtual void update($bytes* input, int32_t offset, int32_t length) override;
	::java::io::ByteArrayOutputStream* baos = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HandshakeHash$CacheOnlyHash_h_