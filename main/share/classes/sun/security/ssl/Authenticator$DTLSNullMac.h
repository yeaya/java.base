#ifndef _sun_security_ssl_Authenticator$DTLSNullMac_h_
#define _sun_security_ssl_Authenticator$DTLSNullMac_h_
//$ class sun.security.ssl.Authenticator$DTLSNullMac
//$ extends sun.security.ssl.Authenticator$DTLSNullAuthenticator
//$ implements sun.security.ssl.Authenticator$MAC

#include <java/lang/Array.h>
#include <sun/security/ssl/Authenticator$DTLSNullAuthenticator.h>
#include <sun/security/ssl/Authenticator$MAC.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class Authenticator$MacImpl;
			class CipherSuite$MacAlg;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Authenticator$DTLSNullMac : public ::sun::security::ssl::Authenticator$DTLSNullAuthenticator, public ::sun::security::ssl::Authenticator$MAC {
	$class(Authenticator$DTLSNullMac, $NO_CLASS_INIT, ::sun::security::ssl::Authenticator$DTLSNullAuthenticator, ::sun::security::ssl::Authenticator$MAC)
public:
	Authenticator$DTLSNullMac();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::security::ssl::Authenticator$MAC::compute;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $bytes* compute(int8_t type, ::java::nio::ByteBuffer* bb, $bytes* sequence, bool isSimulated) override;
	virtual ::sun::security::ssl::CipherSuite$MacAlg* macAlg() override;
	virtual $String* toString() override;
	::sun::security::ssl::Authenticator$MacImpl* macImpl = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Authenticator$DTLSNullMac_h_