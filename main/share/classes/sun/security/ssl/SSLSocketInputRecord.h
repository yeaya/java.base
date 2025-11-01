#ifndef _sun_security_ssl_SSLSocketInputRecord_h_
#define _sun_security_ssl_SSLSocketInputRecord_h_
//$ class sun.security.ssl.SSLSocketInputRecord
//$ extends sun.security.ssl.InputRecord
//$ implements sun.security.ssl.SSLRecord

#include <java/lang/Array.h>
#include <sun/security/ssl/InputRecord.h>
#include <sun/security/ssl/SSLRecord.h>

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
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeHash;
			class Plaintext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLSocketInputRecord : public ::sun::security::ssl::InputRecord, public ::sun::security::ssl::SSLRecord {
	$class(SSLSocketInputRecord, $NO_CLASS_INIT, ::sun::security::ssl::InputRecord, ::sun::security::ssl::SSLRecord)
public:
	SSLSocketInputRecord();
	using ::sun::security::ssl::InputRecord::bytesInCompletePacket;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::ssl::HandshakeHash* handshakeHash);
	virtual int32_t bytesInCompletePacket() override;
	virtual $Array<::sun::security::ssl::Plaintext>* decode($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength) override;
	$Array<::sun::security::ssl::Plaintext>* decodeInputRecord();
	void deplete(bool tryToRead);
	$Array<::sun::security::ssl::Plaintext>* handleUnknownRecord();
	static int32_t read(::java::io::InputStream* is, $bytes* buf, int32_t off, int32_t len);
	int32_t readFully(int32_t len);
	int32_t readHeader();
	virtual void setDeliverStream(::java::io::OutputStream* outputStream) override;
	virtual void setReceiverStream(::java::io::InputStream* inputStream) override;
	virtual $String* toString() override;
	::java::io::InputStream* is = nullptr;
	::java::io::OutputStream* os = nullptr;
	$bytes* header = nullptr;
	int32_t headerOff = 0;
	::java::nio::ByteBuffer* recordBody = nullptr;
	bool formatVerified = false;
	::java::nio::ByteBuffer* handshakeBuffer = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLSocketInputRecord_h_