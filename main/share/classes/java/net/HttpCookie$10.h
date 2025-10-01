#ifndef _java_net_HttpCookie$10_h_
#define _java_net_HttpCookie$10_h_
//$ class java.net.HttpCookie$10
//$ extends java.net.HttpCookie$CookieAttributeAssignor

#include <java/net/HttpCookie$CookieAttributeAssignor.h>

namespace java {
	namespace net {
		class HttpCookie;
	}
}

namespace java {
	namespace net {

class HttpCookie$10 : public ::java::net::HttpCookie$CookieAttributeAssignor {
	$class(HttpCookie$10, $NO_CLASS_INIT, ::java::net::HttpCookie$CookieAttributeAssignor)
public:
	HttpCookie$10();
	void init$();
	virtual void assign(::java::net::HttpCookie* cookie, $String* attrName, $String* attrValue) override;
};

	} // net
} // java

#endif // _java_net_HttpCookie$10_h_