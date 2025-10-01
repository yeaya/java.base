#ifndef _javax_net_ssl_HandshakeCompletedListener_h_
#define _javax_net_ssl_HandshakeCompletedListener_h_
//$ interface javax.net.ssl.HandshakeCompletedListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace net {
		namespace ssl {
			class HandshakeCompletedEvent;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $import HandshakeCompletedListener : public ::java::util::EventListener {
	$interface(HandshakeCompletedListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void handshakeCompleted(::javax::net::ssl::HandshakeCompletedEvent* event) {}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_HandshakeCompletedListener_h_