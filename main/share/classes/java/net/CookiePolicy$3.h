#ifndef _java_net_CookiePolicy$3_h_
#define _java_net_CookiePolicy$3_h_
//$ class java.net.CookiePolicy$3
//$ extends java.net.CookiePolicy

#include <java/net/CookiePolicy.h>

namespace java {
	namespace net {
		class HttpCookie;
		class URI;
	}
}

namespace java {
	namespace net {

class CookiePolicy$3 : public ::java::net::CookiePolicy {
	$class(CookiePolicy$3, $NO_CLASS_INIT, ::java::net::CookiePolicy)
public:
	CookiePolicy$3();
	void init$();
	virtual bool shouldAccept(::java::net::URI* uri, ::java::net::HttpCookie* cookie) override;
};

	} // net
} // java

#endif // _java_net_CookiePolicy$3_h_