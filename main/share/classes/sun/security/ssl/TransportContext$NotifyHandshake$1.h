#ifndef _sun_security_ssl_TransportContext$NotifyHandshake$1_h_
#define _sun_security_ssl_TransportContext$NotifyHandshake$1_h_
//$ class sun.security.ssl.TransportContext$NotifyHandshake$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace net {
		namespace ssl {
			class HandshakeCompletedListener;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class TransportContext$NotifyHandshake;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class TransportContext$NotifyHandshake$1 : public ::java::security::PrivilegedAction {
	$class(TransportContext$NotifyHandshake$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	TransportContext$NotifyHandshake$1();
	void init$(::sun::security::ssl::TransportContext$NotifyHandshake* this$0, ::javax::net::ssl::HandshakeCompletedListener* val$listener);
	virtual $Object* run() override;
	::sun::security::ssl::TransportContext$NotifyHandshake* this$0 = nullptr;
	::javax::net::ssl::HandshakeCompletedListener* val$listener = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_TransportContext$NotifyHandshake$1_h_