#ifndef _java_net_InetAddress$NameService_h_
#define _java_net_InetAddress$NameService_h_
//$ interface java.net.InetAddress$NameService
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}

namespace java {
	namespace net {

class InetAddress$NameService : public ::java::lang::Object {
	$interface(InetAddress$NameService, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getHostByAddr($bytes* addr) {return nullptr;}
	virtual $Array<::java::net::InetAddress>* lookupAllHostAddr($String* host) {return nullptr;}
};

	} // net
} // java

#endif // _java_net_InetAddress$NameService_h_