#ifndef _sun_security_ssl_NewSessionTicket_h_
#define _sun_security_ssl_NewSessionTicket_h_
//$ class sun.security.ssl.NewSessionTicket
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_TICKET_LIFETIME")
#undef MAX_TICKET_LIFETIME

namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class CipherSuite$HashAlg;
			class HandshakeProducer;
			class SSLConsumer;
			class SSLProducer;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class NewSessionTicket : public ::java::lang::Object {
	$class(NewSessionTicket, 0, ::java::lang::Object)
public:
	NewSessionTicket();
	void init$();
	static ::javax::crypto::SecretKey* derivePreSharedKey(::sun::security::ssl::CipherSuite$HashAlg* hashAlg, ::javax::crypto::SecretKey* resumptionMasterSecret, $bytes* nonce);
	static const int32_t MAX_TICKET_LIFETIME = 0x00093A80;
	static ::sun::security::ssl::SSLConsumer* handshakeConsumer;
	static ::sun::security::ssl::SSLConsumer* handshake12Consumer;
	static ::sun::security::ssl::SSLProducer* t13PosthandshakeProducer;
	static ::sun::security::ssl::HandshakeProducer* handshake12Producer;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("MAX_TICKET_LIFETIME")

#endif // _sun_security_ssl_NewSessionTicket_h_