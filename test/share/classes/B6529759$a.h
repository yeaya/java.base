#ifndef _B6529759$a_h_
#define _B6529759$a_h_
//$ class B6529759$a
//$ extends java.net.URLStreamHandler

#include <java/net/URLStreamHandler.h>

namespace java {
	namespace net {
		class URL;
		class URLConnection;
	}
}

class $export B6529759$a : public ::java::net::URLStreamHandler {
	$class(B6529759$a, $NO_CLASS_INIT, ::java::net::URLStreamHandler)
public:
	B6529759$a();
	using ::java::net::URLStreamHandler::equals;
	using ::java::net::URLStreamHandler::hashCode;
	void init$();
	using ::java::net::URLStreamHandler::openConnection;
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u) override;
	virtual void parseURL(::java::net::URL* u, $String* spec, int32_t start, int32_t limit) override;
};

#endif // _B6529759$a_h_