#ifndef _java_net_Inet6AddressImpl_h_
#define _java_net_Inet6AddressImpl_h_
//$ class java.net.Inet6AddressImpl
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

class Inet6AddressImpl : public ::java::net::InetAddressImpl {
	$class(Inet6AddressImpl, $NO_CLASS_INIT, ::java::net::InetAddressImpl)
public:
	Inet6AddressImpl();
	void init$();
	virtual ::java::net::InetAddress* anyLocalAddress() override;
	virtual $String* getHostByAddr($bytes* addr) override;
	virtual $String* getLocalHostName() override;
	virtual bool isReachable(::java::net::InetAddress* addr, int32_t timeout, ::java::net::NetworkInterface* netif, int32_t ttl) override;
	bool isReachable0($bytes* addr, int32_t scope, int32_t timeout, $bytes* inf, int32_t ttl, int32_t if_scope);
	virtual $Array<::java::net::InetAddress>* lookupAllHostAddr($String* hostname) override;
	virtual ::java::net::InetAddress* loopbackAddress() override;
	::java::net::InetAddress* anyLocalAddress$ = nullptr;
	::java::net::InetAddress* loopbackAddress$ = nullptr;
};

	} // net
} // java

#endif // _java_net_Inet6AddressImpl_h_