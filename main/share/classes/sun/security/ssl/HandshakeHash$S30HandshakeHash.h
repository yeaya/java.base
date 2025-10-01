#ifndef _sun_security_ssl_HandshakeHash$S30HandshakeHash_h_
#define _sun_security_ssl_HandshakeHash$S30HandshakeHash_h_
//$ class sun.security.ssl.HandshakeHash$S30HandshakeHash
//$ extends sun.security.ssl.HandshakeHash$TranscriptHash

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeHash$TranscriptHash.h>

#pragma push_macro("SSL_CLIENT")
#undef SSL_CLIENT
#pragma push_macro("SSL_SERVER")
#undef SSL_SERVER

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
namespace javax {
	namespace crypto {
		class SecretKey;
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

class HandshakeHash$S30HandshakeHash : public ::sun::security::ssl::HandshakeHash$TranscriptHash {
	$class(HandshakeHash$S30HandshakeHash, 0, ::sun::security::ssl::HandshakeHash$TranscriptHash)
public:
	HandshakeHash$S30HandshakeHash();
	void init$(::sun::security::ssl::CipherSuite* cipherSuite);
	virtual $bytes* archived() override;
	::java::security::MessageDigest* cloneMd5();
	::java::security::MessageDigest* cloneSha();
	virtual $bytes* digest() override;
	$bytes* digest(bool useClientLabel, ::javax::crypto::SecretKey* masterSecret);
	$bytes* digest($String* algorithm, ::javax::crypto::SecretKey* masterSecret);
	static void digestKey(::java::security::MessageDigest* md, ::javax::crypto::SecretKey* key);
	static $bytes* genPad(int32_t b, int32_t count);
	virtual void update($bytes* input, int32_t offset, int32_t length) override;
	static void updateDigest(::java::security::MessageDigest* md, $bytes* pad1, $bytes* pad2, ::javax::crypto::SecretKey* masterSecret);
	static $bytes* MD5_pad1;
	static $bytes* MD5_pad2;
	static $bytes* SHA_pad1;
	static $bytes* SHA_pad2;
	static $bytes* SSL_CLIENT;
	static $bytes* SSL_SERVER;
	::java::security::MessageDigest* mdMD5 = nullptr;
	::java::security::MessageDigest* mdSHA = nullptr;
	::sun::security::ssl::HandshakeHash$TranscriptHash* md5 = nullptr;
	::sun::security::ssl::HandshakeHash$TranscriptHash* sha = nullptr;
	::java::io::ByteArrayOutputStream* baos = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("SSL_CLIENT")
#pragma pop_macro("SSL_SERVER")

#endif // _sun_security_ssl_HandshakeHash$S30HandshakeHash_h_