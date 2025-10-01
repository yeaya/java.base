#ifndef _java_net_HttpCookie$12_h_
#define _java_net_HttpCookie$12_h_
//$ class java.net.HttpCookie$12
//$ extends jdk.internal.access.JavaNetHttpCookieAccess

#include <jdk/internal/access/JavaNetHttpCookieAccess.h>

namespace java {
	namespace net {
		class HttpCookie;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace net {

class HttpCookie$12 : public ::jdk::internal::access::JavaNetHttpCookieAccess {
	$class(HttpCookie$12, $NO_CLASS_INIT, ::jdk::internal::access::JavaNetHttpCookieAccess)
public:
	HttpCookie$12();
	void init$();
	virtual $String* header(::java::net::HttpCookie* cookie) override;
	virtual ::java::util::List* parse($String* header) override;
};

	} // net
} // java

#endif // _java_net_HttpCookie$12_h_