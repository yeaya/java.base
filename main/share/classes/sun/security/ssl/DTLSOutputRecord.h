#ifndef _sun_security_ssl_DTLSOutputRecord_h_
#define _sun_security_ssl_DTLSOutputRecord_h_
//$ class sun.security.ssl.DTLSOutputRecord
//$ extends sun.security.ssl.OutputRecord
//$ implements sun.security.ssl.DTLSRecord

#include <java/lang/Array.h>
#include <sun/security/ssl/DTLSRecord.h>
#include <sun/security/ssl/OutputRecord.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class Authenticator;
			class Ciphertext;
			class DTLSOutputRecord$DTLSFragmenter;
			class HandshakeHash;
			class SSLCipher$SSLWriteCipher;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class DTLSOutputRecord : public ::sun::security::ssl::OutputRecord, public ::sun::security::ssl::DTLSRecord {
	$class(DTLSOutputRecord, $NO_CLASS_INIT, ::sun::security::ssl::OutputRecord, ::sun::security::ssl::DTLSRecord)
public:
	DTLSOutputRecord();
	using ::sun::security::ssl::OutputRecord::changeWriteCiphers;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::ssl::HandshakeHash* handshakeHash);
	::sun::security::ssl::Ciphertext* acquireCiphertext(::java::nio::ByteBuffer* destination);
	virtual void changeWriteCiphers(::sun::security::ssl::SSLCipher$SSLWriteCipher* writeCipher, bool useChangeCipherSpec) override;
	virtual void close() override;
	virtual ::sun::security::ssl::Ciphertext* encode($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength, $Array<::java::nio::ByteBuffer>* dsts, int32_t dstsOffset, int32_t dstsLength) override;
	::sun::security::ssl::Ciphertext* encode($Array<::java::nio::ByteBuffer>* sources, int32_t offset, int32_t length, ::java::nio::ByteBuffer* destination);
	virtual void encodeAlert(int8_t level, int8_t description) override;
	virtual void encodeChangeCipherSpec() override;
	virtual void encodeHandshake($bytes* source, int32_t offset, int32_t length) override;
	virtual void finishHandshake() override;
	virtual void initHandshaker() override;
	virtual bool isClosed() override;
	virtual bool isEmpty() override;
	virtual void launchRetransmission() override;
	using ::sun::security::ssl::OutputRecord::write;
	using ::sun::security::ssl::OutputRecord::toString;
	virtual $String* toString() override;
	::sun::security::ssl::DTLSOutputRecord$DTLSFragmenter* fragmenter = nullptr;
	int32_t writeEpoch = 0;
	int32_t prevWriteEpoch = 0;
	::sun::security::ssl::Authenticator* prevWriteAuthenticator = nullptr;
	::sun::security::ssl::SSLCipher$SSLWriteCipher* prevWriteCipher = nullptr;
	$volatile(bool) isCloseWaiting = false;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DTLSOutputRecord_h_