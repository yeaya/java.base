#ifndef _sun_security_ssl_SSLKeyExchange_h_
#define _sun_security_ssl_SSLKeyExchange_h_
//$ class sun.security.ssl.SSLKeyExchange
//$ extends sun.security.ssl.SSLKeyAgreementGenerator
//$ implements sun.security.ssl.SSLHandshakeBinding

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLHandshakeBinding.h>
#include <sun/security/ssl/SSLKeyAgreementGenerator.h>

namespace java {
	namespace util {
		class List;
		class Map$Entry;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class CipherSuite$KeyExchange;
			class HandshakeContext;
			class NamedGroup;
			class ProtocolVersion;
			class SSLHandshake;
			class SSLKeyAgreement;
			class SSLKeyDerivation;
			class SSLPossession;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLKeyExchange : public ::sun::security::ssl::SSLKeyAgreementGenerator, public ::sun::security::ssl::SSLHandshakeBinding {
	$class(SSLKeyExchange, $NO_CLASS_INIT, ::sun::security::ssl::SSLKeyAgreementGenerator, ::sun::security::ssl::SSLHandshakeBinding)
public:
	SSLKeyExchange();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::List* authentication, ::sun::security::ssl::SSLKeyAgreement* keyAgreement);
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* handshakeContext) override;
	$Array<::sun::security::ssl::SSLPossession>* createPossessions(::sun::security::ssl::HandshakeContext* context);
	virtual $Array<::java::util::Map$Entry>* getHandshakeConsumers(::sun::security::ssl::HandshakeContext* handshakeContext) override;
	virtual $Array<::java::util::Map$Entry>* getHandshakeProducers(::sun::security::ssl::HandshakeContext* handshakeContext) override;
	virtual $Array<::sun::security::ssl::SSLHandshake>* getRelatedHandshakers(::sun::security::ssl::HandshakeContext* handshakeContext) override;
	virtual $String* toString() override;
	static ::sun::security::ssl::SSLKeyExchange* valueOf(::sun::security::ssl::CipherSuite$KeyExchange* keyExchange, ::sun::security::ssl::ProtocolVersion* protocolVersion);
	static ::sun::security::ssl::SSLKeyExchange* valueOf(::sun::security::ssl::NamedGroup* namedGroup);
	::java::util::List* authentication = nullptr;
	::sun::security::ssl::SSLKeyAgreement* keyAgreement = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLKeyExchange_h_