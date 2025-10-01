#ifndef _java_net_spi_URLStreamHandlerProvider_h_
#define _java_net_spi_URLStreamHandlerProvider_h_
//$ class java.net.spi.URLStreamHandlerProvider
//$ extends java.net.URLStreamHandlerFactory

#include <java/net/URLStreamHandlerFactory.h>

namespace java {
	namespace lang {
		class Void;
	}
}

namespace java {
	namespace net {
		namespace spi {

class $export URLStreamHandlerProvider : public ::java::net::URLStreamHandlerFactory {
	$class(URLStreamHandlerProvider, $NO_CLASS_INIT, ::java::net::URLStreamHandlerFactory)
public:
	URLStreamHandlerProvider();
	void init$(::java::lang::Void* ignore);
	void init$();
	static ::java::lang::Void* checkPermission();
};

		} // spi
	} // net
} // java

#endif // _java_net_spi_URLStreamHandlerProvider_h_