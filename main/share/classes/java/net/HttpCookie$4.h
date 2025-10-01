#ifndef _java_net_HttpCookie$4_h_
#define _java_net_HttpCookie$4_h_
//$ class java.net.HttpCookie$4
//$ extends java.net.HttpCookie$CookieAttributeAssignor

#include <java/net/HttpCookie$CookieAttributeAssignor.h>

namespace java {
	namespace net {
		class HttpCookie;
	}
}

namespace java {
	namespace net {

class HttpCookie$4 : public ::java::net::HttpCookie$CookieAttributeAssignor {
	$class(HttpCookie$4, $NO_CLASS_INIT, ::java::net::HttpCookie$CookieAttributeAssignor)
public:
	HttpCookie$4();
	void init$();
	virtual void assign(::java::net::HttpCookie* cookie, $String* attrName, $String* attrValue) override;
};

	} // net
} // java

#endif // _java_net_HttpCookie$4_h_