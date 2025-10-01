#ifndef _java_net_ContentHandler_h_
#define _java_net_ContentHandler_h_
//$ class java.net.ContentHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class URLConnection;
	}
}

namespace java {
	namespace net {

class $export ContentHandler : public ::java::lang::Object {
	$class(ContentHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ContentHandler();
	void init$();
	virtual $Object* getContent(::java::net::URLConnection* urlc) {return nullptr;}
	virtual $Object* getContent(::java::net::URLConnection* urlc, $ClassArray* classes);
};

	} // net
} // java

#endif // _java_net_ContentHandler_h_