#ifndef _java_net_SocketImplFactory_h_
#define _java_net_SocketImplFactory_h_
//$ interface java.net.SocketImplFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class SocketImpl;
	}
}

namespace java {
	namespace net {

class $export SocketImplFactory : public ::java::lang::Object {
	$interface(SocketImplFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::net::SocketImpl* createSocketImpl() {return nullptr;}
};

	} // net
} // java

#endif // _java_net_SocketImplFactory_h_