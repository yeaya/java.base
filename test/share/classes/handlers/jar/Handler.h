#ifndef _handlers_jar_Handler_h_
#define _handlers_jar_Handler_h_
//$ class handlers.jar.Handler
//$ extends java.net.URLStreamHandler

#include <java/net/URLStreamHandler.h>

#pragma push_macro("URLS")
#undef URLS

namespace java {
	namespace net {
		class URL;
		class URLConnection;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace handlers {
	namespace jar {

class $export Handler : public ::java::net::URLStreamHandler {
	$class(Handler, 0, ::java::net::URLStreamHandler)
public:
	Handler();
	using ::java::net::URLStreamHandler::equals;
	using ::java::net::URLStreamHandler::hashCode;
	void init$();
	using ::java::net::URLStreamHandler::openConnection;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u) override;
	static ::java::util::Set* URLS;
};

	} // jar
} // handlers

#pragma pop_macro("URLS")

#endif // _handlers_jar_Handler_h_