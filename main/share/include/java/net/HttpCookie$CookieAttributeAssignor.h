#ifndef _java_net_HttpCookie$CookieAttributeAssignor_h_
#define _java_net_HttpCookie$CookieAttributeAssignor_h_
//$ interface java.net.HttpCookie$CookieAttributeAssignor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class HttpCookie;
	}
}

namespace java {
	namespace net {

class $import HttpCookie$CookieAttributeAssignor : public ::java::lang::Object {
	$interface(HttpCookie$CookieAttributeAssignor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void assign(::java::net::HttpCookie* cookie, $String* attrName, $String* attrValue) {}
};

	} // net
} // java

#endif // _java_net_HttpCookie$CookieAttributeAssignor_h_