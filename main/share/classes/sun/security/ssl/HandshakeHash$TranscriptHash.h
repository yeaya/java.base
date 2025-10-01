#ifndef _sun_security_ssl_HandshakeHash$TranscriptHash_h_
#define _sun_security_ssl_HandshakeHash$TranscriptHash_h_
//$ interface sun.security.ssl.HandshakeHash$TranscriptHash
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace ssl {

class HandshakeHash$TranscriptHash : public ::java::lang::Object {
	$interface(HandshakeHash$TranscriptHash, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $bytes* archived() {return nullptr;}
	virtual $bytes* digest() {return nullptr;}
	virtual void update($bytes* input, int32_t offset, int32_t length) {}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HandshakeHash$TranscriptHash_h_