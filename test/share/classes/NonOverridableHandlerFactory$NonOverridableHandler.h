#ifndef _NonOverridableHandlerFactory$NonOverridableHandler_h_
#define _NonOverridableHandlerFactory$NonOverridableHandler_h_
//$ class NonOverridableHandlerFactory$NonOverridableHandler
//$ extends java.net.URLStreamHandler

#include <java/net/URLStreamHandler.h>

namespace java {
	namespace net {
		class URL;
		class URLConnection;
	}
}

class NonOverridableHandlerFactory$NonOverridableHandler : public ::java::net::URLStreamHandler {
	$class(NonOverridableHandlerFactory$NonOverridableHandler, $NO_CLASS_INIT, ::java::net::URLStreamHandler)
public:
	NonOverridableHandlerFactory$NonOverridableHandler();
	using ::java::net::URLStreamHandler::equals;
	using ::java::net::URLStreamHandler::hashCode;
	void init$();
	using ::java::net::URLStreamHandler::openConnection;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u) override;
};

#endif // _NonOverridableHandlerFactory$NonOverridableHandler_h_