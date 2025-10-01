#ifndef _java_net_DatagramSocketImplFactory_h_
#define _java_net_DatagramSocketImplFactory_h_
//$ interface java.net.DatagramSocketImplFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class DatagramSocketImpl;
	}
}

namespace java {
	namespace net {

class $export DatagramSocketImplFactory : public ::java::lang::Object {
	$interface(DatagramSocketImplFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::net::DatagramSocketImpl* createDatagramSocketImpl() {return nullptr;}
};

	} // net
} // java

#endif // _java_net_DatagramSocketImplFactory_h_