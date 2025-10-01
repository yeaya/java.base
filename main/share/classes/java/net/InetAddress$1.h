#ifndef _java_net_InetAddress$1_h_
#define _java_net_InetAddress$1_h_
//$ class java.net.InetAddress$1
//$ extends jdk.internal.access.JavaNetInetAddressAccess

#include <java/lang/Array.h>
#include <jdk/internal/access/JavaNetInetAddressAccess.h>

namespace java {
	namespace net {
		class Inet4Address;
		class Inet6Address;
		class InetAddress;
	}
}

namespace java {
	namespace net {

class InetAddress$1 : public ::jdk::internal::access::JavaNetInetAddressAccess {
	$class(InetAddress$1, $NO_CLASS_INIT, ::jdk::internal::access::JavaNetInetAddressAccess)
public:
	InetAddress$1();
	void init$();
	virtual $bytes* addressBytes(::java::net::Inet6Address* inet6Address) override;
	virtual int32_t addressValue(::java::net::Inet4Address* inet4Address) override;
	virtual ::java::net::InetAddress* getByName($String* hostName, ::java::net::InetAddress* hostAddress) override;
	virtual $String* getOriginalHostName(::java::net::InetAddress* ia) override;
};

	} // net
} // java

#endif // _java_net_InetAddress$1_h_