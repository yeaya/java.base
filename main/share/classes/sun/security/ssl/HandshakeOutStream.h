#ifndef _sun_security_ssl_HandshakeOutStream_h_
#define _sun_security_ssl_HandshakeOutStream_h_
//$ class sun.security.ssl.HandshakeOutStream
//$ extends java.io.ByteArrayOutputStream

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace ssl {
			class OutputRecord;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class HandshakeOutStream : public ::java::io::ByteArrayOutputStream {
	$class(HandshakeOutStream, $NO_CLASS_INIT, ::java::io::ByteArrayOutputStream)
public:
	HandshakeOutStream();
	void init$(::sun::security::ssl::OutputRecord* outputRecord);
	static void checkOverflow(int32_t length, int32_t limit);
	virtual void complete();
	virtual void flush() override;
	virtual void putBytes16($bytes* b);
	virtual void putBytes24($bytes* b);
	virtual void putBytes8($bytes* b);
	virtual void putInt16(int32_t i);
	virtual void putInt24(int32_t i);
	virtual void putInt32(int32_t i);
	virtual void putInt8(int32_t i);
	using ::java::io::ByteArrayOutputStream::write;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::sun::security::ssl::OutputRecord* outputRecord = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_HandshakeOutStream_h_