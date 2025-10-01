#ifndef _java_net_InetAddressImpl_h_
#define _java_net_InetAddressImpl_h_
//$ interface java.net.InetAddressImpl
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class InetAddress;
		class NetworkInterface;
	}
}

namespace java {
	namespace net {

class InetAddressImpl : public ::java::lang::Object {
	$interface(InetAddressImpl, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::net::InetAddress* anyLocalAddress() {return nullptr;}
	virtual $String* getHostByAddr($bytes* addr) {return nullptr;}
	virtual $String* getLocalHostName() {return nullptr;}
	virtual bool isReachable(::java::net::InetAddress* addr, int32_t timeout, ::java::net::NetworkInterface* netif, int32_t ttl) {return false;}
	virtual $Array<::java::net::InetAddress>* lookupAllHostAddr($String* hostname) {return nullptr;}
	virtual ::java::net::InetAddress* loopbackAddress() {return nullptr;}
};

	} // net
} // java

#endif // _java_net_InetAddressImpl_h_