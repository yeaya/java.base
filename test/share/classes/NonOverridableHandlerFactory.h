#ifndef _NonOverridableHandlerFactory_h_
#define _NonOverridableHandlerFactory_h_
//$ class NonOverridableHandlerFactory
//$ extends java.net.URLStreamHandlerFactory

#include <java/lang/Array.h>
#include <java/net/URLStreamHandlerFactory.h>

namespace java {
	namespace net {
		class URLStreamHandler;
	}
}

class $export NonOverridableHandlerFactory : public ::java::net::URLStreamHandlerFactory {
	$class(NonOverridableHandlerFactory, $NO_CLASS_INIT, ::java::net::URLStreamHandlerFactory)
public:
	NonOverridableHandlerFactory();
	void init$();
	virtual ::java::net::URLStreamHandler* createURLStreamHandler($String* protocol) override;
	static void main($StringArray* args);
};

#endif // _NonOverridableHandlerFactory_h_