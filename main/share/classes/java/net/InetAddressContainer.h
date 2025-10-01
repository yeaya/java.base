#ifndef _java_net_InetAddressContainer_h_
#define _java_net_InetAddressContainer_h_
//$ class java.net.InetAddressContainer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}

namespace java {
	namespace net {

class InetAddressContainer : public ::java::lang::Object {
	$class(InetAddressContainer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InetAddressContainer();
	void init$();
	::java::net::InetAddress* addr = nullptr;
};

	} // net
} // java

#endif // _java_net_InetAddressContainer_h_