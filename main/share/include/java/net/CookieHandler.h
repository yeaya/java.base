#ifndef _java_net_CookieHandler_h_
#define _java_net_CookieHandler_h_
//$ class java.net.CookieHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace net {

class $import CookieHandler : public ::java::lang::Object {
	$class(CookieHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CookieHandler();
	void init$();
	virtual ::java::util::Map* get(::java::net::URI* uri, ::java::util::Map* requestHeaders) {return nullptr;}
	static ::java::net::CookieHandler* getDefault();
	virtual void put(::java::net::URI* uri, ::java::util::Map* responseHeaders) {}
	static void setDefault(::java::net::CookieHandler* cHandler);
	static ::java::net::CookieHandler* cookieHandler;
};

	} // net
} // java

#endif // _java_net_CookieHandler_h_