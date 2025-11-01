#ifndef _sun_security_ssl_SSLEngineOutputRecord_h_
#define _sun_security_ssl_SSLEngineOutputRecord_h_
//$ class sun.security.ssl.SSLEngineOutputRecord
//$ extends sun.security.ssl.OutputRecord
//$ implements sun.security.ssl.SSLRecord

#include <java/lang/Array.h>
#include <sun/security/ssl/OutputRecord.h>
#include <sun/security/ssl/SSLRecord.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class Ciphertext;
			class HandshakeHash;
			class SSLEngineOutputRecord$HandshakeFragment;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLEngineOutputRecord : public ::sun::security::ssl::OutputRecord, public ::sun::security::ssl::SSLRecord {
	$class(SSLEngineOutputRecord, $NO_CLASS_INIT, ::sun::security::ssl::OutputRecord, ::sun::security::ssl::SSLRecord)
public:
	SSLEngineOutputRecord();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::ssl::HandshakeHash* handshakeHash);
	::sun::security::ssl::Ciphertext* acquireCiphertext(::java::nio::ByteBuffer* destination);
	virtual void close() override;
	virtual ::sun::security::ssl::Ciphertext* encode($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength, $Array<::java::nio::ByteBuffer>* dsts, int32_t dstsOffset, int32_t dstsLength) override;
	::sun::security::ssl::Ciphertext* encode($Array<::java::nio::ByteBuffer>* sources, int32_t offset, int32_t length, ::java::nio::ByteBuffer* destination);
	virtual void encodeAlert(int8_t level, int8_t description) override;
	virtual void encodeChangeCipherSpec() override;
	virtual void encodeHandshake($bytes* source, int32_t offset, int32_t length) override;
	virtual void encodeV2NoCipher() override;
	virtual bool isClosed() override;
	virtual bool isEmpty() override;
	bool needToSplitPayload();
	using ::sun::security::ssl::OutputRecord::write;
	using ::sun::security::ssl::OutputRecord::toString;
	virtual $String* toString() override;
	::sun::security::ssl::SSLEngineOutputRecord$HandshakeFragment* fragmenter = nullptr;
	bool isTalkingToV2 = false;
	::java::nio::ByteBuffer* v2ClientHello = nullptr;
	$volatile(bool) isCloseWaiting = false;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLEngineOutputRecord_h_