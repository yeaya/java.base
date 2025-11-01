#ifndef _sun_security_ssl_SSLKeyExchange$T12KeyAgreement_h_
#define _sun_security_ssl_SSLKeyExchange$T12KeyAgreement_h_
//$ class sun.security.ssl.SSLKeyExchange$T12KeyAgreement
//$ extends java.lang.Enum
//$ implements sun.security.ssl.SSLKeyAgreement

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <sun/security/ssl/SSLKeyAgreement.h>

#pragma push_macro("DHE")
#undef DHE
#pragma push_macro("DHE_EXPORT")
#undef DHE_EXPORT
#pragma push_macro("ECDH")
#undef ECDH
#pragma push_macro("ECDHE")
#undef ECDHE
#pragma push_macro("RSA")
#undef RSA
#pragma push_macro("RSA_EXPORT")
#undef RSA_EXPORT

namespace java {
	namespace util {
		class Map$Entry;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class SSLHandshake;
			class SSLKeyAgreementGenerator;
			class SSLKeyDerivation;
			class SSLPossession;
			class SSLPossessionGenerator;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLKeyExchange$T12KeyAgreement : public ::java::lang::Enum, public ::sun::security::ssl::SSLKeyAgreement {
	$class(SSLKeyExchange$T12KeyAgreement, 0, ::java::lang::Enum, ::sun::security::ssl::SSLKeyAgreement)
public:
	SSLKeyExchange$T12KeyAgreement();
	static $Array<::sun::security::ssl::SSLKeyExchange$T12KeyAgreement>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, ::sun::security::ssl::SSLPossessionGenerator* possessionGenerator, ::sun::security::ssl::SSLKeyAgreementGenerator* keyAgreementGenerator);
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* context) override;
	virtual ::sun::security::ssl::SSLPossession* createPossession(::sun::security::ssl::HandshakeContext* context) override;
	virtual $Array<::java::util::Map$Entry>* getHandshakeConsumers(::sun::security::ssl::HandshakeContext* handshakeContext) override;
	virtual $Array<::java::util::Map$Entry>* getHandshakeProducers(::sun::security::ssl::HandshakeContext* handshakeContext) override;
	virtual $Array<::sun::security::ssl::SSLHandshake>* getRelatedHandshakers(::sun::security::ssl::HandshakeContext* handshakeContext) override;
	virtual $String* toString() override;
	static ::sun::security::ssl::SSLKeyExchange$T12KeyAgreement* valueOf($String* name);
	static $Array<::sun::security::ssl::SSLKeyExchange$T12KeyAgreement>* values();
	static ::sun::security::ssl::SSLKeyExchange$T12KeyAgreement* RSA;
	static ::sun::security::ssl::SSLKeyExchange$T12KeyAgreement* RSA_EXPORT;
	static ::sun::security::ssl::SSLKeyExchange$T12KeyAgreement* DHE;
	static ::sun::security::ssl::SSLKeyExchange$T12KeyAgreement* DHE_EXPORT;
	static ::sun::security::ssl::SSLKeyExchange$T12KeyAgreement* ECDH;
	static ::sun::security::ssl::SSLKeyExchange$T12KeyAgreement* ECDHE;
	static $Array<::sun::security::ssl::SSLKeyExchange$T12KeyAgreement>* $VALUES;
	$String* name$ = nullptr;
	::sun::security::ssl::SSLPossessionGenerator* possessionGenerator = nullptr;
	::sun::security::ssl::SSLKeyAgreementGenerator* keyAgreementGenerator = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("DHE")
#pragma pop_macro("DHE_EXPORT")
#pragma pop_macro("ECDH")
#pragma pop_macro("ECDHE")
#pragma pop_macro("RSA")
#pragma pop_macro("RSA_EXPORT")

#endif // _sun_security_ssl_SSLKeyExchange$T12KeyAgreement_h_