#ifndef _java_net_URI$1_h_
#define _java_net_URI$1_h_
//$ class java.net.URI$1
//$ extends jdk.internal.access.JavaNetUriAccess

#include <jdk/internal/access/JavaNetUriAccess.h>

namespace java {
	namespace net {
		class URI;
	}
}

namespace java {
	namespace net {

class URI$1 : public ::jdk::internal::access::JavaNetUriAccess {
	$class(URI$1, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::access::JavaNetUriAccess)
public:
	URI$1();
	void init$();
	virtual ::java::net::URI* create($String* scheme, $String* path) override;
};

	} // net
} // java

#endif // _java_net_URI$1_h_