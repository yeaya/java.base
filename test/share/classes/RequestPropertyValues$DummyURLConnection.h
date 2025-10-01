#ifndef _RequestPropertyValues$DummyURLConnection_h_
#define _RequestPropertyValues$DummyURLConnection_h_
//$ class RequestPropertyValues$DummyURLConnection
//$ extends java.net.URLConnection

#include <java/net/URLConnection.h>

namespace java {
	namespace net {
		class URL;
	}
}

class $export RequestPropertyValues$DummyURLConnection : public ::java::net::URLConnection {
	$class(RequestPropertyValues$DummyURLConnection, $NO_CLASS_INIT, ::java::net::URLConnection)
public:
	RequestPropertyValues$DummyURLConnection();
	void init$(::java::net::URL* url);
	virtual void connect() override;
};

#endif // _RequestPropertyValues$DummyURLConnection_h_