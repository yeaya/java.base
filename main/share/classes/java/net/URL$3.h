#ifndef _java_net_URL$3_h_
#define _java_net_URL$3_h_
//$ class java.net.URL$3
//$ extends jdk.internal.access.JavaNetURLAccess

#include <jdk/internal/access/JavaNetURLAccess.h>

namespace java {
	namespace net {
		class URL;
		class URLStreamHandler;
	}
}

namespace java {
	namespace net {

class URL$3 : public ::jdk::internal::access::JavaNetURLAccess {
	$class(URL$3, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::access::JavaNetURLAccess)
public:
	URL$3();
	void init$();
	virtual ::java::net::URLStreamHandler* getHandler(::java::net::URL* u) override;
};

	} // net
} // java

#endif // _java_net_URL$3_h_