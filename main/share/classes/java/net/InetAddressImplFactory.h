#ifndef _java_net_InetAddressImplFactory_h_
#define _java_net_InetAddressImplFactory_h_
//$ class java.net.InetAddressImplFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class InetAddressImpl;
	}
}

namespace java {
	namespace net {

class InetAddressImplFactory : public ::java::lang::Object {
	$class(InetAddressImplFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InetAddressImplFactory();
	void init$();
	static ::java::net::InetAddressImpl* create();
	static bool isIPv6Supported();
};

	} // net
} // java

#endif // _java_net_InetAddressImplFactory_h_