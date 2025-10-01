#ifndef _jdk_internal_access_JavaNetInetAddressAccess_h_
#define _jdk_internal_access_JavaNetInetAddressAccess_h_
//$ interface jdk.internal.access.JavaNetInetAddressAccess
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class Inet4Address;
		class Inet6Address;
		class InetAddress;
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $export JavaNetInetAddressAccess : public ::java::lang::Object {
	$interface(JavaNetInetAddressAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $bytes* addressBytes(::java::net::Inet6Address* inet6Address) {return nullptr;}
	virtual int32_t addressValue(::java::net::Inet4Address* inet4Address) {return 0;}
	virtual ::java::net::InetAddress* getByName($String* hostName, ::java::net::InetAddress* hostAddress) {return nullptr;}
	virtual $String* getOriginalHostName(::java::net::InetAddress* ia) {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaNetInetAddressAccess_h_