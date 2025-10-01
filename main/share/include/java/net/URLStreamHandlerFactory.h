#ifndef _java_net_URLStreamHandlerFactory_h_
#define _java_net_URLStreamHandlerFactory_h_
//$ interface java.net.URLStreamHandlerFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URLStreamHandler;
	}
}

namespace java {
	namespace net {

class $import URLStreamHandlerFactory : public ::java::lang::Object {
	$interface(URLStreamHandlerFactory, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::net::URLStreamHandler* createURLStreamHandler($String* protocol) {return nullptr;}
};

	} // net
} // java

#endif // _java_net_URLStreamHandlerFactory_h_