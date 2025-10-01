#ifndef _RacyHandler$CustomHttpHandler_h_
#define _RacyHandler$CustomHttpHandler_h_
//$ class RacyHandler$CustomHttpHandler
//$ extends java.net.URLStreamHandler

#include <java/net/URLStreamHandler.h>

class RacyHandler;
namespace java {
	namespace net {
		class URL;
		class URLConnection;
	}
}

class $export RacyHandler$CustomHttpHandler : public ::java::net::URLStreamHandler {
	$class(RacyHandler$CustomHttpHandler, $NO_CLASS_INIT, ::java::net::URLStreamHandler)
public:
	RacyHandler$CustomHttpHandler();
	using ::java::net::URLStreamHandler::equals;
	using ::java::net::URLStreamHandler::hashCode;
	void init$(::RacyHandler* this$0);
	using ::java::net::URLStreamHandler::openConnection;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u) override;
	::RacyHandler* this$0 = nullptr;
};

#endif // _RacyHandler$CustomHttpHandler_h_