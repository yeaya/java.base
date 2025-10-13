#ifndef _Inet6AddressSerializationTest_h_
#define _Inet6AddressSerializationTest_h_
//$ class Inet6AddressSerializationTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("IN6ADDR_ANY_INIT")
#undef IN6ADDR_ANY_INIT
#pragma push_macro("LOCALHOSTNAME")
#undef LOCALHOSTNAME
#pragma push_macro("LOOPBACKIPV6ADDRESS")
#undef LOOPBACKIPV6ADDRESS
#pragma push_macro("LOOPBACK_SCOPE_ID")
#undef LOOPBACK_SCOPE_ID
#pragma push_macro("NETWORK_IF_LO0")
#undef NETWORK_IF_LO0
#pragma push_macro("SCOPE_ID_LO0")
#undef SCOPE_ID_LO0
#pragma push_macro("SCOPE_ID_ZERO")
#undef SCOPE_ID_ZERO

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace net {
		class Inet6Address;
		class NetworkInterface;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export Inet6AddressSerializationTest : public ::java::lang::Object {
	$class(Inet6AddressSerializationTest, 0, ::java::lang::Object)
public:
	Inet6AddressSerializationTest();
	void init$();
	static void assertAddressEqual($bytes* expectedAddress, $bytes* deserializedAddress);
	static void assertHostAddressEqual($String* expectedHostAddress, $String* deserializedHostAddress);
	static void assertHostNameEqual($String* expectedHostName, $String* deserializedHostName);
	static void assertNetworkInterfaceEqual(::java::net::NetworkInterface* expectedNetworkInterface, ::java::net::NetworkInterface* deserializedNetworkInterface);
	static void assertNetworkInterfaceNameEqual($String* expectedNetworkIfName, ::java::net::NetworkInterface* deserializedNetworkInterface);
	static void assertScopeIdEqual(int32_t expectedScopeId, int32_t deserializedScopeId);
	static $String* createOutputFileName(::java::net::Inet6Address* inet6Addr);
	static void displayExpectedInet6Address(::java::net::Inet6Address* expectedInet6Address);
	static void equal(Object$* expected, Object$* got);
	static void generateAllInet6AddressSerializedData();
	static $bytes* generateSerializedInet6AddressData(::java::net::Inet6Address* addr, ::java::io::PrintStream* out, bool outputToFile);
	static ::java::util::List* getAllInet6Addresses();
	static $String* getIfName(::java::net::Inet6Address* inet6Addr);
	static $bytes* getThisHostIPV6Address($String* hostName);
	static void main($StringArray* args);
	static void runTests();
	static void serializeInet6AddressToFile(::java::net::Inet6Address* inet6Addr);
	static void testAllNetworkInterfaces();
	static void testInet6AddressSerialization(::java::net::Inet6Address* expectedInet6Address, $bytes* serializedAddress);
	static void testSerializedE1000gInet6Address();
	static void testSerializedLo0Inet6Address();
	static bool failed;
	static bool isWindows;
	static const int32_t LOOPBACK_SCOPE_ID = 0;
	static $bytes* IN6ADDR_ANY_INIT;
	static $bytes* LOOPBACKIPV6ADDRESS;
	static $bytes* E1000G0IPV6ADDRESS;
	static $String* E1000G0HOSTNAME;
	static $String* LOCALHOSTNAME;
	static $String* NETWORK_IF_E1000G0;
	static $String* NETWORK_IF_LO0;
	static const int32_t SCOPE_ID_E1000G0 = 2;
	static const int32_t SCOPE_ID_LO0 = 1;
	static const int32_t SCOPE_ID_ZERO = 0;
	static $bytes* JDK7Inet6AddressSerialData;
	static $bytes* JDK8Inet6AddressSerialData;
	static $bytes* SerialData_ifname_e1000g0;
	static $bytes* SerialData_ifname_lo0;
};

#pragma pop_macro("IN6ADDR_ANY_INIT")
#pragma pop_macro("LOCALHOSTNAME")
#pragma pop_macro("LOOPBACKIPV6ADDRESS")
#pragma pop_macro("LOOPBACK_SCOPE_ID")
#pragma pop_macro("NETWORK_IF_LO0")
#pragma pop_macro("SCOPE_ID_LO0")
#pragma pop_macro("SCOPE_ID_ZERO")

#endif // _Inet6AddressSerializationTest_h_