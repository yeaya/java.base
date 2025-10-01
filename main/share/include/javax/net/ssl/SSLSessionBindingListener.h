#ifndef _javax_net_ssl_SSLSessionBindingListener_h_
#define _javax_net_ssl_SSLSessionBindingListener_h_
//$ interface javax.net.ssl.SSLSessionBindingListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace net {
		namespace ssl {
			class SSLSessionBindingEvent;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $import SSLSessionBindingListener : public ::java::util::EventListener {
	$interface(SSLSessionBindingListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void valueBound(::javax::net::ssl::SSLSessionBindingEvent* event) {}
	virtual void valueUnbound(::javax::net::ssl::SSLSessionBindingEvent* event) {}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLSessionBindingListener_h_