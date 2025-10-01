#ifndef _sun_security_ssl_OutputRecord_h_
#define _sun_security_ssl_OutputRecord_h_
//$ class sun.security.ssl.OutputRecord
//$ extends java.io.ByteArrayOutputStream
//$ implements sun.security.ssl.Record

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>
#include <sun/security/ssl/Record.h>

#pragma push_macro("HANDSHAKE_MESSAGE_KEY_UPDATE")
#undef HANDSHAKE_MESSAGE_KEY_UPDATE

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class Ciphertext;
			class HandshakeHash;
			class ProtocolVersion;
			class SSLCipher$SSLWriteCipher;
			class TransportContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class OutputRecord : public ::java::io::ByteArrayOutputStream, public ::sun::security::ssl::Record {
	$class(OutputRecord, 0, ::java::io::ByteArrayOutputStream, ::sun::security::ssl::Record)
public:
	OutputRecord();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::ssl::HandshakeHash* handshakeHash, ::sun::security::ssl::SSLCipher$SSLWriteCipher* writeCipher);
	static int32_t V3toV2CipherSuite(::java::nio::ByteBuffer* dstBuf, int8_t byte1, int8_t byte2);
	virtual int32_t calculateFragmentSize(int32_t fragmentLimit);
	virtual void changeFragmentSize(int32_t fragmentSize);
	virtual void changePacketSize(int32_t packetSize);
	virtual void changeWriteCiphers(::sun::security::ssl::SSLCipher$SSLWriteCipher* writeCipher, bool useChangeCipherSpec);
	virtual void changeWriteCiphers(::sun::security::ssl::SSLCipher$SSLWriteCipher* writeCipher, int8_t keyUpdateRequest);
	virtual void close() override;
	static int64_t d10Encrypt(::sun::security::ssl::SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, ::java::nio::ByteBuffer* destination, int32_t headerOffset, int32_t dstLim, int32_t headerSize, ::sun::security::ssl::ProtocolVersion* protocolVersion);
	static int64_t d13Encrypt(::sun::security::ssl::SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, ::java::nio::ByteBuffer* destination, int32_t headerOffset, int32_t dstLim, int32_t headerSize, ::sun::security::ssl::ProtocolVersion* protocolVersion);
	virtual void deliver($bytes* source, int32_t offset, int32_t length);
	virtual ::sun::security::ssl::Ciphertext* encode($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength, $Array<::java::nio::ByteBuffer>* dsts, int32_t dstsOffset, int32_t dstsLength);
	virtual void encodeAlert(int8_t level, int8_t description) {}
	virtual void encodeChangeCipherSpec() {}
	virtual void encodeHandshake($bytes* buffer, int32_t offset, int32_t length) {}
	static ::java::nio::ByteBuffer* encodeV2ClientHello($bytes* fragment, int32_t offset, int32_t length);
	virtual void encodeV2NoCipher();
	static int64_t encrypt(::sun::security::ssl::SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, ::java::nio::ByteBuffer* destination, int32_t headerOffset, int32_t dstLim, int32_t headerSize, ::sun::security::ssl::ProtocolVersion* protocolVersion);
	virtual int64_t encrypt(::sun::security::ssl::SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, int32_t headerSize);
	virtual void finishHandshake();
	virtual int32_t getMaxPacketSize();
	virtual void initHandshaker();
	virtual bool isClosed();
	virtual bool isEmpty();
	virtual void launchRetransmission();
	virtual bool seqNumIsHuge();
	virtual void setDeliverStream(::java::io::OutputStream* outputStream);
	virtual void setHelloVersion(::sun::security::ssl::ProtocolVersion* helloVersion);
	virtual void setVersion(::sun::security::ssl::ProtocolVersion* protocolVersion);
	static int64_t t10Encrypt(::sun::security::ssl::SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, ::java::nio::ByteBuffer* destination, int32_t headerOffset, int32_t dstLim, int32_t headerSize, ::sun::security::ssl::ProtocolVersion* protocolVersion);
	int64_t t10Encrypt(::sun::security::ssl::SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, int32_t headerSize);
	static int64_t t13Encrypt(::sun::security::ssl::SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, ::java::nio::ByteBuffer* destination, int32_t headerOffset, int32_t dstLim, int32_t headerSize, ::sun::security::ssl::ProtocolVersion* protocolVersion);
	int64_t t13Encrypt(::sun::security::ssl::SSLCipher$SSLWriteCipher* encCipher, int8_t contentType, int32_t headerSize);
	using ::java::io::ByteArrayOutputStream::write;
	using ::java::io::ByteArrayOutputStream::toString;
	virtual $String* toString() override;
	::sun::security::ssl::SSLCipher$SSLWriteCipher* writeCipher = nullptr;
	::sun::security::ssl::TransportContext* tc = nullptr;
	::sun::security::ssl::HandshakeHash* handshakeHash = nullptr;
	bool firstMessage = false;
	::sun::security::ssl::ProtocolVersion* protocolVersion = nullptr;
	::sun::security::ssl::ProtocolVersion* helloVersion = nullptr;
	bool isFirstAppOutputRecord = false;
	int32_t packetSize = 0;
	int32_t fragmentSize = 0;
	$volatile(bool) isClosed$ = false;
	::java::util::concurrent::locks::ReentrantLock* recordLock = nullptr;
	static $ints* V3toV2CipherMap1;
	static $ints* V3toV2CipherMap3;
	static $bytes* HANDSHAKE_MESSAGE_KEY_UPDATE;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("HANDSHAKE_MESSAGE_KEY_UPDATE")

#endif // _sun_security_ssl_OutputRecord_h_