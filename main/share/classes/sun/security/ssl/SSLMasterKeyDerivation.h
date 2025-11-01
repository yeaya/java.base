#ifndef _sun_security_ssl_SSLMasterKeyDerivation_h_
#define _sun_security_ssl_SSLMasterKeyDerivation_h_
//$ class sun.security.ssl.SSLMasterKeyDerivation
//$ extends java.lang.Enum
//$ implements sun.security.ssl.SSLKeyDerivationGenerator

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <sun/security/ssl/SSLKeyDerivationGenerator.h>

#pragma push_macro("SSL30")
#undef SSL30
#pragma push_macro("TLS10")
#undef TLS10
#pragma push_macro("TLS12")
#undef TLS12

namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class ProtocolVersion;
			class SSLKeyDerivation;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLMasterKeyDerivation : public ::java::lang::Enum, public ::sun::security::ssl::SSLKeyDerivationGenerator {
	$class(SSLMasterKeyDerivation, 0, ::java::lang::Enum, ::sun::security::ssl::SSLKeyDerivationGenerator)
public:
	SSLMasterKeyDerivation();
	static $Array<::sun::security::ssl::SSLMasterKeyDerivation>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name);
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* context, ::javax::crypto::SecretKey* secretKey) override;
	virtual $String* toString() override;
	static ::sun::security::ssl::SSLMasterKeyDerivation* valueOf($String* name);
	static ::sun::security::ssl::SSLMasterKeyDerivation* valueOf(::sun::security::ssl::ProtocolVersion* protocolVersion);
	static $Array<::sun::security::ssl::SSLMasterKeyDerivation>* values();
	static ::sun::security::ssl::SSLMasterKeyDerivation* SSL30;
	static ::sun::security::ssl::SSLMasterKeyDerivation* TLS10;
	static ::sun::security::ssl::SSLMasterKeyDerivation* TLS12;
	static $Array<::sun::security::ssl::SSLMasterKeyDerivation>* $VALUES;
	$String* name$ = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("SSL30")
#pragma pop_macro("TLS10")
#pragma pop_macro("TLS12")

#endif // _sun_security_ssl_SSLMasterKeyDerivation_h_