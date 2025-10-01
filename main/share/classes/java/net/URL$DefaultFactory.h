#ifndef _java_net_URL$DefaultFactory_h_
#define _java_net_URL$DefaultFactory_h_
//$ class java.net.URL$DefaultFactory
//$ extends java.net.URLStreamHandlerFactory

#include <java/net/URLStreamHandlerFactory.h>

#pragma push_macro("PREFIX")
#undef PREFIX

namespace java {
	namespace net {
		class URLStreamHandler;
	}
}

namespace java {
	namespace net {

class URL$DefaultFactory : public ::java::net::URLStreamHandlerFactory {
	$class(URL$DefaultFactory, $PRELOAD, ::java::net::URLStreamHandlerFactory)
public:
	URL$DefaultFactory();
	void init$();
	virtual ::java::net::URLStreamHandler* createURLStreamHandler($String* protocol) override;
	static $String* PREFIX;
};

	} // net
} // java

#pragma pop_macro("PREFIX")

#endif // _java_net_URL$DefaultFactory_h_