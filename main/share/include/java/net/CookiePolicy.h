#ifndef _java_net_CookiePolicy_h_
#define _java_net_CookiePolicy_h_
//$ interface java.net.CookiePolicy
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ACCEPT_ALL")
#undef ACCEPT_ALL
#pragma push_macro("ACCEPT_NONE")
#undef ACCEPT_NONE
#pragma push_macro("ACCEPT_ORIGINAL_SERVER")
#undef ACCEPT_ORIGINAL_SERVER

namespace java {
	namespace net {
		class HttpCookie;
		class URI;
	}
}

namespace java {
	namespace net {

class $import CookiePolicy : public ::java::lang::Object {
	$interface(CookiePolicy, 0, ::java::lang::Object)
public:
	virtual bool shouldAccept(::java::net::URI* uri, ::java::net::HttpCookie* cookie) {return false;}
	static ::java::net::CookiePolicy* ACCEPT_ALL;
	static ::java::net::CookiePolicy* ACCEPT_NONE;
	static ::java::net::CookiePolicy* ACCEPT_ORIGINAL_SERVER;
};

	} // net
} // java

#pragma pop_macro("ACCEPT_ALL")
#pragma pop_macro("ACCEPT_NONE")
#pragma pop_macro("ACCEPT_ORIGINAL_SERVER")

#endif // _java_net_CookiePolicy_h_