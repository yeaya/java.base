#ifndef _NetParamsTest_h_
#define _NetParamsTest_h_
//$ class NetParamsTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class NetworkInterface;
	}
}

class $export NetParamsTest : public ::java::lang::Object {
	$class(NetParamsTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NetParamsTest();
	void init$();
	static void main($StringArray* args);
	static void printIF(::java::net::NetworkInterface* netif);
};

#endif // _NetParamsTest_h_