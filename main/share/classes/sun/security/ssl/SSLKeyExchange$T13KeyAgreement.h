#ifndef _sun_security_ssl_SSLKeyExchange$T13KeyAgreement_h_
#define _sun_security_ssl_SSLKeyExchange$T13KeyAgreement_h_
//$ class sun.security.ssl.SSLKeyExchange$T13KeyAgreement
//$ extends sun.security.ssl.SSLKeyAgreement

#include <sun/security/ssl/SSLKeyAgreement.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class NamedGroup;
			class SSLKeyDerivation;
			class SSLPossession;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLKeyExchange$T13KeyAgreement : public ::sun::security::ssl::SSLKeyAgreement {
	$class(SSLKeyExchange$T13KeyAgreement, 0, ::sun::security::ssl::SSLKeyAgreement)
public:
	SSLKeyExchange$T13KeyAgreement();
	void init$(::sun::security::ssl::NamedGroup* namedGroup);
	virtual ::sun::security::ssl::SSLKeyDerivation* createKeyDerivation(::sun::security::ssl::HandshakeContext* hc) override;
	virtual ::sun::security::ssl::SSLPossession* createPossession(::sun::security::ssl::HandshakeContext* hc) override;
	static ::sun::security::ssl::SSLKeyExchange$T13KeyAgreement* valueOf(::sun::security::ssl::NamedGroup* namedGroup);
	::sun::security::ssl::NamedGroup* namedGroup = nullptr;
	static ::java::util::Map* supportedKeyShares;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLKeyExchange$T13KeyAgreement_h_