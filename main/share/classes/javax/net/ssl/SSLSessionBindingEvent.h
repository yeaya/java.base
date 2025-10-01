#ifndef _javax_net_ssl_SSLSessionBindingEvent_h_
#define _javax_net_ssl_SSLSessionBindingEvent_h_
//$ class javax.net.ssl.SSLSessionBindingEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace javax {
	namespace net {
		namespace ssl {
			class SSLSession;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $export SSLSessionBindingEvent : public ::java::util::EventObject {
	$class(SSLSessionBindingEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	SSLSessionBindingEvent();
	void init$(::javax::net::ssl::SSLSession* session, $String* name);
	virtual $String* getName();
	virtual ::javax::net::ssl::SSLSession* getSession();
	static const int64_t serialVersionUID = (int64_t)0x000E2C21A1FB80A9;
	$String* name = nullptr;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLSessionBindingEvent_h_