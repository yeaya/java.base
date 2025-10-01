#ifndef _GetLoopbackAddress_h_
#define _GetLoopbackAddress_h_
//$ class GetLoopbackAddress
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}

class $export GetLoopbackAddress : public ::java::lang::Object {
	$class(GetLoopbackAddress, 0, ::java::lang::Object)
public:
	GetLoopbackAddress();
	void init$();
	static void main($StringArray* args);
	static ::java::net::InetAddress* IPv4Loopback;
	static ::java::net::InetAddress* IPv6Loopback;
};

#endif // _GetLoopbackAddress_h_