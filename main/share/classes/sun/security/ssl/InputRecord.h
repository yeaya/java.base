#ifndef _sun_security_ssl_InputRecord_h_
#define _sun_security_ssl_InputRecord_h_
//$ class sun.security.ssl.InputRecord
//$ extends sun.security.ssl.Record
//$ implements java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Array.h>
#include <sun/security/ssl/Record.h>

namespace java {
	namespace io {
		class InputStream;
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
			class HandshakeHash;
			class Plaintext;
			class ProtocolVersion;
			class SSLCipher$SSLReadCipher;
			class TransportContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class InputRecord : public ::sun::security::ssl::Record, public ::java::io::Closeable {
	$class(InputRecord, $NO_CLASS_INIT, ::sun::security::ssl::Record, ::java::io::Closeable)
public:
	InputRecord();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::ssl::HandshakeHash* handshakeHash, ::sun::security::ssl::SSLCipher$SSLReadCipher* readCipher);
	virtual ::sun::security::ssl::Plaintext* acquirePlaintext();
	virtual int32_t bytesInCompletePacket($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength);
	virtual int32_t bytesInCompletePacket();
	virtual void changeFragmentSize(int32_t fragmentSize);
	virtual void changeReadCiphers(::sun::security::ssl::SSLCipher$SSLReadCipher* readCipher);
	virtual void close() override;
	static ::java::nio::ByteBuffer* convertToClientHello(::java::nio::ByteBuffer* packet);
	virtual $Array<::sun::security::ssl::Plaintext>* decode($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength) {return nullptr;}
	virtual int32_t estimateFragmentSize(int32_t packetSize);
	virtual void expectingFinishFlight();
	static ::java::nio::ByteBuffer* extract($Array<::java::nio::ByteBuffer>* buffers, int32_t offset, int32_t length, int32_t headerSize);
	virtual void finishHandshake();
	virtual bool isClosed();
	virtual bool isEmpty();
	virtual bool seqNumIsHuge();
	virtual void setDeliverStream(::java::io::OutputStream* outputStream);
	virtual void setHelloVersion(::sun::security::ssl::ProtocolVersion* helloVersion);
	virtual void setReceiverStream(::java::io::InputStream* inputStream);
	virtual $String* toString() override;
	::sun::security::ssl::SSLCipher$SSLReadCipher* readCipher = nullptr;
	::sun::security::ssl::TransportContext* tc = nullptr;
	::sun::security::ssl::HandshakeHash* handshakeHash = nullptr;
	$volatile(bool) isClosed$ = false;
	::sun::security::ssl::ProtocolVersion* helloVersion = nullptr;
	int32_t fragmentSize = 0;
	::java::util::concurrent::locks::ReentrantLock* recordLock = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_InputRecord_h_