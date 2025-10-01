#ifndef _sun_security_ssl_SessionTicketExtension$StatelessKey_h_
#define _sun_security_ssl_SessionTicketExtension$StatelessKey_h_
//$ class sun.security.ssl.SessionTicketExtension$StatelessKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SessionTicketExtension$StatelessKey : public ::java::lang::Object {
	$class(SessionTicketExtension$StatelessKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SessionTicketExtension$StatelessKey();
	void init$(::sun::security::ssl::HandshakeContext* hc, int32_t newNum);
	bool isExpired();
	bool isInvalid(int64_t sessionTimeout);
	int64_t timeout = 0;
	::javax::crypto::SecretKey* key = nullptr;
	int32_t num = 0;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SessionTicketExtension$StatelessKey_h_