#ifndef _sun_security_ssl_Authenticator$MacImpl_h_
#define _sun_security_ssl_Authenticator$MacImpl_h_
//$ class sun.security.ssl.Authenticator$MacImpl
//$ extends sun.security.ssl.Authenticator$MAC

#include <java/lang/Array.h>
#include <sun/security/ssl/Authenticator$MAC.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace javax {
	namespace crypto {
		class Mac;
		class SecretKey;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class Authenticator;
			class CipherSuite$MacAlg;
			class ProtocolVersion;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Authenticator$MacImpl : public ::sun::security::ssl::Authenticator$MAC {
	$class(Authenticator$MacImpl, $NO_CLASS_INIT, ::sun::security::ssl::Authenticator$MAC)
public:
	Authenticator$MacImpl();
	using ::sun::security::ssl::Authenticator$MAC::compute;
	void init$(::sun::security::ssl::Authenticator* this$0);
	void init$(::sun::security::ssl::Authenticator* this$0, ::sun::security::ssl::ProtocolVersion* protocolVersion, ::sun::security::ssl::CipherSuite$MacAlg* macAlg, ::javax::crypto::SecretKey* key);
	virtual $bytes* compute(int8_t type, ::java::nio::ByteBuffer* bb, $bytes* sequence, bool isSimulated) override;
	virtual ::sun::security::ssl::CipherSuite$MacAlg* macAlg() override;
	::sun::security::ssl::Authenticator* this$0 = nullptr;
	::sun::security::ssl::CipherSuite$MacAlg* macAlg$ = nullptr;
	::javax::crypto::Mac* mac = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Authenticator$MacImpl_h_