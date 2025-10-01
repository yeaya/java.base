#ifndef _sun_security_ssl_TransportContext$NotifyHandshake_h_
#define _sun_security_ssl_TransportContext$NotifyHandshake_h_
//$ class sun.security.ssl.TransportContext$NotifyHandshake
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class HandshakeCompletedEvent;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class TransportContext$NotifyHandshake : public ::java::lang::Runnable {
	$class(TransportContext$NotifyHandshake, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	TransportContext$NotifyHandshake();
	void init$(::java::util::Map* listeners, ::javax::net::ssl::HandshakeCompletedEvent* event);
	virtual void run() override;
	::java::util::Set* targets = nullptr;
	::javax::net::ssl::HandshakeCompletedEvent* event = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_TransportContext$NotifyHandshake_h_