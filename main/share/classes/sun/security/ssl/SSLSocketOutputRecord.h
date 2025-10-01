#ifndef _sun_security_ssl_SSLSocketOutputRecord_h_
#define _sun_security_ssl_SSLSocketOutputRecord_h_
//$ class sun.security.ssl.SSLSocketOutputRecord
//$ extends sun.security.ssl.OutputRecord
//$ implements sun.security.ssl.SSLRecord

#include <java/lang/Array.h>
#include <sun/security/ssl/OutputRecord.h>
#include <sun/security/ssl/SSLRecord.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeHash;
			class TransportContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLSocketOutputRecord : public ::sun::security::ssl::OutputRecord, public ::sun::security::ssl::SSLRecord {
	$class(SSLSocketOutputRecord, $NO_CLASS_INIT, ::sun::security::ssl::OutputRecord, ::sun::security::ssl::SSLRecord)
public:
	SSLSocketOutputRecord();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::ssl::HandshakeHash* handshakeHash);
	void init$(::sun::security::ssl::HandshakeHash* handshakeHash, ::sun::security::ssl::TransportContext* tc);
	virtual void deliver($bytes* source, int32_t offset, int32_t length) override;
	virtual void encodeAlert(int8_t level, int8_t description) override;
	virtual void encodeChangeCipherSpec() override;
	virtual void encodeHandshake($bytes* source, int32_t offset, int32_t length) override;
	virtual void flush() override;
	int32_t getFragLimit();
	bool needToSplitPayload();
	virtual void setDeliverStream(::java::io::OutputStream* outputStream) override;
	using ::sun::security::ssl::OutputRecord::write;
	using ::sun::security::ssl::OutputRecord::toString;
	virtual $String* toString() override;
	::java::io::OutputStream* deliverStream = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLSocketOutputRecord_h_