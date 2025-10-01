#ifndef _HandlerLoop$HandlerFactory_h_
#define _HandlerLoop$HandlerFactory_h_
//$ class HandlerLoop$HandlerFactory
//$ extends java.net.URLStreamHandlerFactory

#include <java/net/URLStreamHandlerFactory.h>

namespace java {
	namespace net {
		class URLStreamHandler;
	}
}

class HandlerLoop$HandlerFactory : public ::java::net::URLStreamHandlerFactory {
	$class(HandlerLoop$HandlerFactory, $NO_CLASS_INIT, ::java::net::URLStreamHandlerFactory)
public:
	HandlerLoop$HandlerFactory();
	void init$($String* pkg);
	virtual ::java::net::URLStreamHandler* createURLStreamHandler($String* protocol) override;
	$String* pkg = nullptr;
};

#endif // _HandlerLoop$HandlerFactory_h_