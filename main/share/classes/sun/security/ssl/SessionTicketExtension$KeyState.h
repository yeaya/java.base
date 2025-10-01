#ifndef _sun_security_ssl_SessionTicketExtension$KeyState_h_
#define _sun_security_ssl_SessionTicketExtension$KeyState_h_
//$ class sun.security.ssl.SessionTicketExtension$KeyState
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class SessionTicketExtension$StatelessKey;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SessionTicketExtension$KeyState : public ::java::lang::Object {
	$class(SessionTicketExtension$KeyState, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SessionTicketExtension$KeyState();
	void init$();
	static void cleanup(::sun::security::ssl::HandshakeContext* hc);
	static ::sun::security::ssl::SessionTicketExtension$StatelessKey* getCurrentKey(::sun::security::ssl::HandshakeContext* hc);
	static ::sun::security::ssl::SessionTicketExtension$StatelessKey* getKey(::sun::security::ssl::HandshakeContext* hc, int32_t num);
	static int32_t getSessionTimeout(::sun::security::ssl::HandshakeContext* hc);
	static ::sun::security::ssl::SessionTicketExtension$StatelessKey* nextKey(::sun::security::ssl::HandshakeContext* hc);
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SessionTicketExtension$KeyState_h_