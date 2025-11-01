#ifndef _sun_security_ssl_Authenticator$SSLNullMac_h_
#define _sun_security_ssl_Authenticator$SSLNullMac_h_
//$ class sun.security.ssl.Authenticator$SSLNullMac
//$ extends sun.security.ssl.Authenticator$SSLNullAuthenticator
//$ implements sun.security.ssl.Authenticator$MAC

#include <java/lang/Array.h>
#include <sun/security/ssl/Authenticator$MAC.h>
#include <sun/security/ssl/Authenticator$SSLNullAuthenticator.h>

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

class Authenticator$SSLNullMac : public ::sun::security::ssl::Authenticator$SSLNullAuthenticator, public ::sun::security::ssl::Authenticator$MAC {
	$class(Authenticator$SSLNullMac, $NO_CLASS_INIT, ::sun::security::ssl::Authenticator$SSLNullAuthenticator, ::sun::security::ssl::Authenticator$MAC)
public:
	Authenticator$SSLNullMac();
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

#endif // _sun_security_ssl_Authenticator$SSLNullMac_h_