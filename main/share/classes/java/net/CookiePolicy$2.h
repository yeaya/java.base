#ifndef _java_net_CookiePolicy$2_h_
#define _java_net_CookiePolicy$2_h_
//$ class java.net.CookiePolicy$2
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

class CookiePolicy$2 : public ::java::net::CookiePolicy {
	$class(CookiePolicy$2, $NO_CLASS_INIT, ::java::net::CookiePolicy)
public:
	CookiePolicy$2();
	void init$();
	virtual bool shouldAccept(::java::net::URI* uri, ::java::net::HttpCookie* cookie) override;
};

	} // net
} // java

#endif // _java_net_CookiePolicy$2_h_