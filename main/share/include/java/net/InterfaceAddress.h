#ifndef _java_net_InterfaceAddress_h_
#define _java_net_InterfaceAddress_h_
//$ class java.net.InterfaceAddress
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class Inet4Address;
		class InetAddress;
	}
}

namespace java {
	namespace net {

class $import InterfaceAddress : public ::java::lang::Object {
	$class(InterfaceAddress, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InterfaceAddress();
	void init$();
	virtual bool equals(Object$* obj) override;
	virtual ::java::net::InetAddress* getAddress();
	virtual ::java::net::InetAddress* getBroadcast();
	virtual int16_t getNetworkPrefixLength();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::java::net::InetAddress* address = nullptr;
	::java::net::Inet4Address* broadcast = nullptr;
	int16_t maskLength = 0;
};

	} // net
} // java

#endif // _java_net_InterfaceAddress_h_