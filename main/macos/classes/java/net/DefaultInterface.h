#ifndef _java_net_DefaultInterface_h_
#define _java_net_DefaultInterface_h_
//$ class java.net.DefaultInterface
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class NetworkInterface;
	}
}

namespace java {
	namespace net {

class DefaultInterface : public ::java::lang::Object {
	$class(DefaultInterface, 0, ::java::lang::Object)
public:
	DefaultInterface();
	void init$();
	static ::java::net::NetworkInterface* chooseDefaultInterface();
	static ::java::net::NetworkInterface* getDefault();
	static ::java::net::NetworkInterface* defaultInterface;
};

	} // net
} // java

#endif // _java_net_DefaultInterface_h_