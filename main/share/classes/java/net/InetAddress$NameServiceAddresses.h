#ifndef _java_net_InetAddress$NameServiceAddresses_h_
#define _java_net_InetAddress$NameServiceAddresses_h_
//$ class java.net.InetAddress$NameServiceAddresses
//$ extends java.net.InetAddress$Addresses

#include <java/lang/Array.h>
#include <java/net/InetAddress$Addresses.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}

namespace java {
	namespace net {

class InetAddress$NameServiceAddresses : public ::java::net::InetAddress$Addresses {
	$class(InetAddress$NameServiceAddresses, $NO_CLASS_INIT, ::java::net::InetAddress$Addresses)
public:
	InetAddress$NameServiceAddresses();
	void init$($String* host, ::java::net::InetAddress* reqAddr);
	virtual $Array<::java::net::InetAddress>* get() override;
	$String* host = nullptr;
	::java::net::InetAddress* reqAddr = nullptr;
};

	} // net
} // java

#endif // _java_net_InetAddress$NameServiceAddresses_h_