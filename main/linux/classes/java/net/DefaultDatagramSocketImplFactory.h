#ifndef _java_net_DefaultDatagramSocketImplFactory_h_
#define _java_net_DefaultDatagramSocketImplFactory_h_
//$ class java.net.DefaultDatagramSocketImplFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class DatagramSocketImpl;
	}
}

namespace java {
	namespace net {

class DefaultDatagramSocketImplFactory : public ::java::lang::Object {
	$class(DefaultDatagramSocketImplFactory, 0, ::java::lang::Object)
public:
	DefaultDatagramSocketImplFactory();
	void init$();
	static ::java::net::DatagramSocketImpl* createDatagramSocketImpl(bool isMulticast);
	static $Class* prefixImplClass;
};

	} // net
} // java

#endif // _java_net_DefaultDatagramSocketImplFactory_h_