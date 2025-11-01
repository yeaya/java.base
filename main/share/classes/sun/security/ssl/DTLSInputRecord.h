#ifndef _sun_security_ssl_DTLSInputRecord_h_
#define _sun_security_ssl_DTLSInputRecord_h_
//$ class sun.security.ssl.DTLSInputRecord
//$ extends sun.security.ssl.InputRecord
//$ implements sun.security.ssl.DTLSRecord

#include <java/lang/Array.h>
#include <sun/security/ssl/DTLSRecord.h>
#include <sun/security/ssl/InputRecord.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class DTLSInputRecord$DTLSReassembler;
			class DTLSInputRecord$HandshakeFragment;
			class HandshakeHash;
			class Plaintext;
			class SSLCipher$SSLReadCipher;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class DTLSInputRecord : public ::sun::security::ssl::InputRecord, public ::sun::security::ssl::DTLSRecord {
	$class(DTLSInputRecord, $NO_CLASS_INIT, ::sun::security::ssl::InputRecord, ::sun::security::ssl::DTLSRecord)
public:
	DTLSInputRecord();
	using ::sun::security::ssl::InputRecord::bytesInCompletePacket;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::ssl::HandshakeHash* handshakeHash);
	virtual ::sun::security::ssl::Plaintext* acquirePlaintext() override;
	virtual int32_t bytesInCompletePacket($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength) override;
	int32_t bytesInCompletePacket(::java::nio::ByteBuffer* packet);
	virtual void changeReadCiphers(::sun::security::ssl::SSLCipher$SSLReadCipher* readCipher) override;
	virtual void close() override;
	virtual $Array<::sun::security::ssl::Plaintext>* decode($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength) override;
	$Array<::sun::security::ssl::Plaintext>* decode(::java::nio::ByteBuffer* packet);
	virtual int32_t estimateFragmentSize(int32_t packetSize) override;
	virtual void expectingFinishFlight() override;
	virtual void finishHandshake() override;
	virtual bool isEmpty() override;
	static ::sun::security::ssl::DTLSInputRecord$HandshakeFragment* parseHandshakeMessage(int8_t contentType, int8_t majorVersion, int8_t minorVersion, $bytes* recordEnS, int32_t recordEpoch, int64_t recordSeq, ::java::nio::ByteBuffer* plaintextFragment);
	virtual $String* toString() override;
	::sun::security::ssl::DTLSInputRecord$DTLSReassembler* reassembler = nullptr;
	int32_t readEpoch = 0;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DTLSInputRecord_h_