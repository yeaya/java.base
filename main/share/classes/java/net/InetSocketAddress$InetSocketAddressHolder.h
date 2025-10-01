#ifndef _java_net_InetSocketAddress$InetSocketAddressHolder_h_
#define _java_net_InetSocketAddress$InetSocketAddressHolder_h_
//$ class java.net.InetSocketAddress$InetSocketAddressHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}

namespace java {
	namespace net {

class InetSocketAddress$InetSocketAddressHolder : public ::java::lang::Object {
	$class(InetSocketAddress$InetSocketAddressHolder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InetSocketAddress$InetSocketAddressHolder();
	void init$($String* hostname, ::java::net::InetAddress* addr, int32_t port);
	virtual bool equals(Object$* obj) override;
	::java::net::InetAddress* getAddress();
	$String* getHostName();
	$String* getHostString();
	int32_t getPort();
	virtual int32_t hashCode() override;
	bool isUnresolved();
	virtual $String* toString() override;
	$String* hostname = nullptr;
	::java::net::InetAddress* addr = nullptr;
	int32_t port = 0;
};

	} // net
} // java

#endif // _java_net_InetSocketAddress$InetSocketAddressHolder_h_