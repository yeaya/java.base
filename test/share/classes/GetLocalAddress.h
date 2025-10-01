#ifndef _GetLocalAddress_h_
#define _GetLocalAddress_h_
//$ class GetLocalAddress
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class DatagramSocket;
		class InetAddress;
		class InetSocketAddress;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

class $export GetLocalAddress : public ::java::lang::Object {
	$class(GetLocalAddress, 0, ::java::lang::Object)
public:
	GetLocalAddress();
	void init$();
	static void addToMap(::java::net::DatagramSocket* socket);
	static void bindAndAddToMap(::java::net::DatagramSocket* socket, ::java::net::InetSocketAddress* address);
	static void checkAddresses(::java::net::DatagramSocket* socket, ::java::net::InetAddress* a1, ::java::net::InetAddress* a2);
	static void cleanup();
	static void close(::java::net::DatagramSocket* socket);
	static void main($StringArray* args);
	static void testAfterClose();
	static void testAllSockets();
	static void testNullAddress(::java::net::DatagramSocket* socket, Object$* address, $String* when);
	static void testSocket();
	static void testWildcardAddress(::java::net::DatagramSocket* socket, ::java::net::InetAddress* address, $String* when);
	static ::java::util::Map* addressMap;
	static ::java::util::Set* toClose;
};

#endif // _GetLocalAddress_h_