#ifndef _B6411513_h_
#define _B6411513_h_
//$ class B6411513
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}

class $export B6411513 : public ::java::lang::Object {
	$class(B6411513, $NO_CLASS_INIT, ::java::lang::Object)
public:
	B6411513();
	void init$();
	static void main($StringArray* args);
	static void testConnectedUDP(::java::net::InetAddress* addr);
};

#endif // _B6411513_h_