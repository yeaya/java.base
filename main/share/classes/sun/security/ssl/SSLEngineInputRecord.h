#ifndef _sun_security_ssl_SSLEngineInputRecord_h_
#define _sun_security_ssl_SSLEngineInputRecord_h_
//$ class sun.security.ssl.SSLEngineInputRecord
//$ extends sun.security.ssl.InputRecord
//$ implements sun.security.ssl.SSLRecord

#include <java/lang/Array.h>
#include <sun/security/ssl/InputRecord.h>
#include <sun/security/ssl/SSLRecord.h>

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

class SSLEngineInputRecord : public ::sun::security::ssl::InputRecord, public ::sun::security::ssl::SSLRecord {
	$class(SSLEngineInputRecord, $NO_CLASS_INIT, ::sun::security::ssl::InputRecord, ::sun::security::ssl::SSLRecord)
public:
	SSLEngineInputRecord();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::security::ssl::InputRecord::bytesInCompletePacket;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::ssl::HandshakeHash* handshakeHash);
	virtual int32_t bytesInCompletePacket($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength) override;
	int32_t bytesInCompletePacket(::java::nio::ByteBuffer* packet);
	virtual $Array<::sun::security::ssl::Plaintext>* decode($Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength) override;
	$Array<::sun::security::ssl::Plaintext>* decode(::java::nio::ByteBuffer* packet);
	$Array<::sun::security::ssl::Plaintext>* decodeInputRecord(::java::nio::ByteBuffer* packet);
	virtual int32_t estimateFragmentSize(int32_t packetSize) override;
	$Array<::sun::security::ssl::Plaintext>* handleUnknownRecord(::java::nio::ByteBuffer* packet);
	virtual $String* toString() override;
	bool formatVerified = false;
	::java::nio::ByteBuffer* handshakeBuffer = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLEngineInputRecord_h_