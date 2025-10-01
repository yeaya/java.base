#ifndef _java_net_CookieStore_h_
#define _java_net_CookieStore_h_
//$ interface java.net.CookieStore
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class HttpCookie;
		class URI;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace net {

class $import CookieStore : public ::java::lang::Object {
	$interface(CookieStore, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void add(::java::net::URI* uri, ::java::net::HttpCookie* cookie) {}
	virtual ::java::util::List* get(::java::net::URI* uri) {return nullptr;}
	virtual ::java::util::List* getCookies() {return nullptr;}
	virtual ::java::util::List* getURIs() {return nullptr;}
	virtual bool remove(::java::net::URI* uri, ::java::net::HttpCookie* cookie) {return false;}
	virtual bool removeAll() {return false;}
};

	} // net
} // java

#endif // _java_net_CookieStore_h_