#ifndef _sun_security_ssl_RSAKeyExchange$RSAPremasterSecret_h_
#define _sun_security_ssl_RSAKeyExchange$RSAPremasterSecret_h_
//$ class sun.security.ssl.RSAKeyExchange$RSAPremasterSecret
//$ extends sun.security.ssl.SSLPossession
//$ implements sun.security.ssl.SSLCredentials

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLCredentials.h>
#include <sun/security/ssl/SSLPossession.h>

namespace java {
	namespace security {
		class PrivateKey;
		class PublicKey;
		class SecureRandom;
	}
}
namespace javax {
	namespace crypto {
		class Cipher;
		class SecretKey;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class ClientHandshakeContext;
			class ServerHandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class RSAKeyExchange$RSAPremasterSecret : public ::sun::security::ssl::SSLPossession, public ::sun::security::ssl::SSLCredentials {
	$class(RSAKeyExchange$RSAPremasterSecret, $NO_CLASS_INIT, ::sun::security::ssl::SSLPossession, ::sun::security::ssl::SSLCredentials)
public:
	RSAKeyExchange$RSAPremasterSecret();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::crypto::SecretKey* premasterSecret);
	static ::sun::security::ssl::RSAKeyExchange$RSAPremasterSecret* createPremasterSecret(::sun::security::ssl::ClientHandshakeContext* chc);
	static ::sun::security::ssl::RSAKeyExchange$RSAPremasterSecret* decode(::sun::security::ssl::ServerHandshakeContext* shc, ::java::security::PrivateKey* privateKey, $bytes* encrypted);
	static ::javax::crypto::SecretKey* generatePremasterSecret(int32_t clientVersion, int32_t serverVersion, $bytes* encodedSecret, ::java::security::SecureRandom* generator);
	$bytes* getEncoded(::java::security::PublicKey* publicKey, ::java::security::SecureRandom* secureRandom);
	static $String* safeProviderName(::javax::crypto::Cipher* cipher);
	virtual $String* toString() override;
	::javax::crypto::SecretKey* premasterSecret = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RSAKeyExchange$RSAPremasterSecret_h_