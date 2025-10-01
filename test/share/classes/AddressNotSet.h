#ifndef _AddressNotSet_h_
#define _AddressNotSet_h_
//$ class AddressNotSet
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class DatagramSocket;
		class InetAddress;
		class MulticastSocket;
	}
}

class $export AddressNotSet : public ::java::lang::Object {
	$class(AddressNotSet, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AddressNotSet();
	void init$();
	static void main($StringArray* args);
	virtual void run();
	void test(::java::net::DatagramSocket* sock);
	void testTTL(::java::net::MulticastSocket* sock);
	::java::net::InetAddress* loopbackAddress = nullptr;
	::java::net::DatagramSocket* serversock = nullptr;
	int32_t i = 0;
};

#endif // _AddressNotSet_h_