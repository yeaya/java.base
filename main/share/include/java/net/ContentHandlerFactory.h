#ifndef _java_net_ContentHandlerFactory_h_
#define _java_net_ContentHandlerFactory_h_
//$ interface java.net.ContentHandlerFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class ContentHandler;
	}
}

namespace java {
	namespace net {

class $import ContentHandlerFactory : public ::java::lang::Object {
	$interface(ContentHandlerFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::net::ContentHandler* createContentHandler($String* mimetype) {return nullptr;}
};

	} // net
} // java

#endif // _java_net_ContentHandlerFactory_h_