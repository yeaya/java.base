#ifndef _sun_security_ssl_Authenticator$DTLS10Mac_h_
#define _sun_security_ssl_Authenticator$DTLS10Mac_h_
//$ class sun.security.ssl.Authenticator$DTLS10Mac
//$ extends sun.security.ssl.Authenticator$DTLS10Authenticator
//$ implements sun.security.ssl.Authenticator$MAC

#include <java/lang/Array.h>
#include <sun/security/ssl/Authenticator$DTLS10Authenticator.h>
#include <sun/security/ssl/Authenticator$MAC.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class Authenticator$MacImpl;
			class CipherSuite$MacAlg;
			class ProtocolVersion;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Authenticator$DTLS10Mac : public ::sun::security::ssl::Authenticator$DTLS10Authenticator, public ::sun::security::ssl::Authenticator$MAC {
	$class(Authenticator$DTLS10Mac, $NO_CLASS_INIT, ::sun::security::ssl::Authenticator$DTLS10Authenticator, ::sun::security::ssl::Authenticator$MAC)
public:
	Authenticator$DTLS10Mac();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::security::ssl::Authenticator$MAC::compute;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::ssl::ProtocolVersion* protocolVersion, ::sun::security::ssl::CipherSuite$MacAlg* macAlg, ::javax::crypto::SecretKey* key);
	virtual $bytes* compute(int8_t type, ::java::nio::ByteBuffer* bb, $bytes* sequence, bool isSimulated) override;
	virtual ::sun::security::ssl::CipherSuite$MacAlg* macAlg() override;
	virtual $String* toString() override;
	::sun::security::ssl::Authenticator$MacImpl* macImpl = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Authenticator$DTLS10Mac_h_