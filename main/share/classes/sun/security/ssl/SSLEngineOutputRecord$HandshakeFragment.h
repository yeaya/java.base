#ifndef _sun_security_ssl_SSLEngineOutputRecord$HandshakeFragment_h_
#define _sun_security_ssl_SSLEngineOutputRecord$HandshakeFragment_h_
//$ class sun.security.ssl.SSLEngineOutputRecord$HandshakeFragment
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
namespace sun {
	namespace security {
		namespace ssl {
			class Ciphertext;
			class SSLEngineOutputRecord;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLEngineOutputRecord$HandshakeFragment : public ::java::lang::Object {
	$class(SSLEngineOutputRecord$HandshakeFragment, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SSLEngineOutputRecord$HandshakeFragment();
	void init$(::sun::security::ssl::SSLEngineOutputRecord* this$0);
	::sun::security::ssl::Ciphertext* acquireCiphertext(::java::nio::ByteBuffer* dstBuf);
	bool isEmpty();
	void queueUpAlert(int8_t level, int8_t description);
	void queueUpChangeCipherSpec();
	void queueUpFragment($bytes* source, int32_t offset, int32_t length);
	::sun::security::ssl::SSLEngineOutputRecord* this$0 = nullptr;
	::java::util::LinkedList* handshakeMemos = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLEngineOutputRecord$HandshakeFragment_h_