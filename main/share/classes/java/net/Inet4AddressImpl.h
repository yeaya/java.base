#ifndef _java_net_Inet4AddressImpl_h_
#define _java_net_Inet4AddressImpl_h_
//$ class java.net.Inet4AddressImpl
//$ extends java.net.InetAddressImpl

#include <java/lang/Array.h>
#include <java/net/InetAddressImpl.h>

namespace java {
	namespace net {
		class InetAddress;
		class NetworkInterface;
	}
}

namespace java {
	namespace net {

class Inet4AddressImpl : public ::java::net::InetAddressImpl {
	$class(Inet4AddressImpl, $NO_CLASS_INIT, ::java::net::InetAddressImpl)
public:
	Inet4AddressImpl();
	void init$();
	virtual ::java::net::InetAddress* anyLocalAddress() override;
	virtual $String* getHostByAddr($bytes* addr) override;
	virtual $String* getLocalHostName() override;
	virtual bool isReachable(::java::net::InetAddress* addr, int32_t timeout, ::java::net::NetworkInterface* netif, int32_t ttl) override;
	bool isReachable0($bytes* addr, int32_t timeout, $bytes* ifaddr, int32_t ttl);
	virtual $Array<::java::net::InetAddress>* lookupAllHostAddr($String* hostname) override;
	virtual ::java::net::InetAddress* loopbackAddress() override;
	::java::net::InetAddress* anyLocalAddress$ = nullptr;
	::java::net::InetAddress* loopbackAddress$ = nullptr;
};

	} // net
} // java

#endif // _java_net_Inet4AddressImpl_h_