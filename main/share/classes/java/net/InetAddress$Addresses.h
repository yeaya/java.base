#ifndef _java_net_InetAddress$Addresses_h_
#define _java_net_InetAddress$Addresses_h_
//$ interface java.net.InetAddress$Addresses
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}

namespace java {
	namespace net {

class InetAddress$Addresses : public ::java::lang::Object {
	$interface(InetAddress$Addresses, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Array<::java::net::InetAddress>* get() {return nullptr;}
};

	} // net
} // java

#endif // _java_net_InetAddress$Addresses_h_