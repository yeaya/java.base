#ifndef _sun_security_ssl_HandshakeHash_h_
#define _sun_security_ssl_HandshakeHash_h_
//$ class sun.security.ssl.HandshakeHash
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class LinkedList;
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
			class HandshakeHash$TranscriptHash;
			class ProtocolVersion;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class HandshakeHash : public ::java::lang::Object {
	$class(HandshakeHash, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HandshakeHash();
	void init$();
	$bytes* archived();
	void consume();
	::sun::security::ssl::HandshakeHash* copy();
	void deliver($bytes* input);
	void deliver($bytes* input, int32_t offset, int32_t length);
	void deliver(::java::nio::ByteBuffer* input);
	void determine(::sun::security::ssl::ProtocolVersion* protocolVersion, ::sun::security::ssl::CipherSuite* cipherSuite);
	$bytes* digest();
	$bytes* digest($String* algorithm);
	$bytes* digest($String* algorithm, ::javax::crypto::SecretKey* masterSecret);
	$bytes* digest(bool useClientLabel, ::javax::crypto::SecretKey* masterSecret);
	void finish();
	bool isHashable(int8_t handshakeType);
	void push($bytes* input);
	void receive($bytes* input);
	void receive(::java::nio::ByteBuffer* input, int32_t length);
	void receive(::java::nio::ByteBuffer* input);
	$bytes* removeLastReceived();
	void update();
	void utilize();
	::sun::security::ssl::HandshakeHash$TranscriptHash* transcriptHash = nullptr;
	::java::util::LinkedList* reserves = nullptr;
	bool hasBeenUsed = false;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HandshakeHash_h_