#ifndef _handlers_bar_Handler_h_
#define _handlers_bar_Handler_h_
//$ class handlers.bar.Handler
//$ extends java.net.URLStreamHandler

#include <java/net/URLStreamHandler.h>

namespace java {
	namespace net {
		class URL;
		class URLConnection;
	}
}

namespace handlers {
	namespace bar {

class $export Handler : public ::java::net::URLStreamHandler {
	$class(Handler, $NO_CLASS_INIT, ::java::net::URLStreamHandler)
public:
	Handler();
	using ::java::net::URLStreamHandler::equals;
	using ::java::net::URLStreamHandler::hashCode;
	void init$();
	using ::java::net::URLStreamHandler::openConnection;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u) override;
};

	} // bar
} // handlers

#endif // _handlers_bar_Handler_h_