#ifndef _MyHttpURLConnectionImpl_h_
#define _MyHttpURLConnectionImpl_h_
//$ class MyHttpURLConnectionImpl
//$ extends java.net.HttpURLConnection

#include <java/net/HttpURLConnection.h>

namespace java {
	namespace net {
		class URL;
	}
}

class MyHttpURLConnectionImpl : public ::java::net::HttpURLConnection {
	$class(MyHttpURLConnectionImpl, $NO_CLASS_INIT, ::java::net::HttpURLConnection)
public:
	MyHttpURLConnectionImpl();
	using ::java::net::HttpURLConnection::getHeaderField;
	void init$(::java::net::URL* url);
	virtual void connect() override;
	virtual void disconnect() override;
	virtual bool usingProxy() override;
};

#endif // _MyHttpURLConnectionImpl_h_