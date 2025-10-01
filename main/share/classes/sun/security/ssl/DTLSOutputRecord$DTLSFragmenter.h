#ifndef _sun_security_ssl_DTLSOutputRecord$DTLSFragmenter_h_
#define _sun_security_ssl_DTLSOutputRecord$DTLSFragmenter_h_
//$ class sun.security.ssl.DTLSOutputRecord$DTLSFragmenter
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
			class DTLSOutputRecord;
			class DTLSOutputRecord$HandshakeMemo;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class DTLSOutputRecord$DTLSFragmenter : public ::java::lang::Object {
	$class(DTLSOutputRecord$DTLSFragmenter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DTLSOutputRecord$DTLSFragmenter();
	void init$(::sun::security::ssl::DTLSOutputRecord* this$0);
	::sun::security::ssl::Ciphertext* acquireCiphertext(::java::nio::ByteBuffer* dstBuf);
	void handshakeHashing(::sun::security::ssl::DTLSOutputRecord$HandshakeMemo* hsFrag, $bytes* hsBody);
	bool hasAlert();
	bool isEmpty();
	bool isRetransmittable();
	void queueUpAlert(int8_t level, int8_t description);
	void queueUpChangeCipherSpec();
	void queueUpHandshake($bytes* buf, int32_t offset, int32_t length);
	void setRetransmission();
	void shrinkPacketSize();
	::sun::security::ssl::DTLSOutputRecord* this$0 = nullptr;
	::java::util::LinkedList* handshakeMemos = nullptr;
	int32_t acquireIndex = 0;
	int32_t messageSequence = 0;
	bool flightIsReady = false;
	int32_t retransmits = 0;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DTLSOutputRecord$DTLSFragmenter_h_