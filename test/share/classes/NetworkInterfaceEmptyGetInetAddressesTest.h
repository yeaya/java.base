#ifndef _NetworkInterfaceEmptyGetInetAddressesTest_h_
#define _NetworkInterfaceEmptyGetInetAddressesTest_h_
//$ class NetworkInterfaceEmptyGetInetAddressesTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class NetworkInterface;
	}
}

class $export NetworkInterfaceEmptyGetInetAddressesTest : public ::java::lang::Object {
	$class(NetworkInterfaceEmptyGetInetAddressesTest, 0, ::java::lang::Object)
public:
	NetworkInterfaceEmptyGetInetAddressesTest();
	void init$();
	static void incrementExceptionCount();
	static void main($StringArray* args);
	static void testMethods(::java::net::NetworkInterface* netIf);
	static void testNetworkInterface_getInterfaceAddresses(::java::net::NetworkInterface* netIf);
	static int32_t exceptionCount;
};

#endif // _NetworkInterfaceEmptyGetInetAddressesTest_h_