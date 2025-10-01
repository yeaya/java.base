#ifndef _SendDatagramToBadAddress_h_
#define _SendDatagramToBadAddress_h_
//$ class SendDatagramToBadAddress
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class DatagramSocket;
	}
}

class $export SendDatagramToBadAddress : public ::java::lang::Object {
	$class(SendDatagramToBadAddress, 0, ::java::lang::Object)
public:
	SendDatagramToBadAddress();
	void init$();
	static bool OSsupportsFeature();
	static void main($StringArray* args);
	static void print($String* s);
	virtual void run();
	void test(::java::net::DatagramSocket* sock);
	static bool debug;
};

#endif // _SendDatagramToBadAddress_h_