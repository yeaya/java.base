#ifndef _sun_security_ssl_SSLTrafficKeyDerivation_h_
#define _sun_security_ssl_SSLTrafficKeyDerivation_h_
//$ class sun.security.ssl.SSLTrafficKeyDerivation
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
#pragma push_macro("TLS13")
#undef TLS13

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

class SSLTrafficKeyDerivation : public ::java::lang::Enum, public ::sun::security::ssl::SSLKeyDerivationGenerator {
	$class(SSLTrafficKeyDerivation, 0, ::java::lang::Enum, ::sun::security::ssl::SSLKeyDerivationGenerator)
public:
	SSLTrafficKeyDerivation();
	static $Array<::sun::security::ssl::SSLTrafficKeyDerivation>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, ::sun::security::ssl::SSLKeyDerivationGenerator* keyDerivationGenerator);
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* context, ::javax::crypto::SecretKey* secretKey) override;
	virtual $String* toString() override;
	static ::sun::security::ssl::SSLTrafficKeyDerivation* valueOf($String* name);
	static ::sun::security::ssl::SSLTrafficKeyDerivation* valueOf(::sun::security::ssl::ProtocolVersion* protocolVersion);
	static $Array<::sun::security::ssl::SSLTrafficKeyDerivation>* values();
	static ::sun::security::ssl::SSLTrafficKeyDerivation* SSL30;
	static ::sun::security::ssl::SSLTrafficKeyDerivation* TLS10;
	static ::sun::security::ssl::SSLTrafficKeyDerivation* TLS12;
	static ::sun::security::ssl::SSLTrafficKeyDerivation* TLS13;
	static $Array<::sun::security::ssl::SSLTrafficKeyDerivation>* $VALUES;
	$String* name$ = nullptr;
	::sun::security::ssl::SSLKeyDerivationGenerator* keyDerivationGenerator = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("SSL30")
#pragma pop_macro("TLS10")
#pragma pop_macro("TLS12")
#pragma pop_macro("TLS13")

#endif // _sun_security_ssl_SSLTrafficKeyDerivation_h_