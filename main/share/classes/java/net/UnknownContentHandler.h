#ifndef _java_net_UnknownContentHandler_h_
#define _java_net_UnknownContentHandler_h_
//$ class java.net.UnknownContentHandler
//$ extends java.net.ContentHandler

#include <java/net/ContentHandler.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace net {
		class URLConnection;
	}
}

namespace java {
	namespace net {

class UnknownContentHandler : public ::java::net::ContentHandler {
	$class(UnknownContentHandler, 0, ::java::net::ContentHandler)
public:
	UnknownContentHandler();
	using ::java::net::ContentHandler::getContent;
	void init$();
	virtual $Object* getContent(::java::net::URLConnection* uc) override;
	static ::java::net::ContentHandler* INSTANCE;
};

	} // net
} // java

#pragma pop_macro("INSTANCE")

#endif // _java_net_UnknownContentHandler_h_