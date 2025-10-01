#ifndef _java_net_HttpCookie$9_h_
#define _java_net_HttpCookie$9_h_
//$ class java.net.HttpCookie$9
//$ extends java.net.HttpCookie$CookieAttributeAssignor

#include <java/net/HttpCookie$CookieAttributeAssignor.h>

namespace java {
	namespace net {
		class HttpCookie;
	}
}

namespace java {
	namespace net {

class HttpCookie$9 : public ::java::net::HttpCookie$CookieAttributeAssignor {
	$class(HttpCookie$9, $NO_CLASS_INIT, ::java::net::HttpCookie$CookieAttributeAssignor)
public:
	HttpCookie$9();
	void init$();
	virtual void assign(::java::net::HttpCookie* cookie, $String* attrName, $String* attrValue) override;
};

	} // net
} // java

#endif // _java_net_HttpCookie$9_h_