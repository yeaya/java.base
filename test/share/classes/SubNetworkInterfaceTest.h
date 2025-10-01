#ifndef _SubNetworkInterfaceTest_h_
#define _SubNetworkInterfaceTest_h_
//$ class SubNetworkInterfaceTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class NetworkInterface;
	}
}

class $export SubNetworkInterfaceTest : public ::java::lang::Object {
	$class(SubNetworkInterfaceTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SubNetworkInterfaceTest();
	void init$();
	static void doReverseLookup(::java::net::NetworkInterface* netIf);
	static void main($StringArray* args);
};

#endif // _SubNetworkInterfaceTest_h_