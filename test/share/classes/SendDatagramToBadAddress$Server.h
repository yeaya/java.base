#ifndef _SendDatagramToBadAddress$Server_h_
#define _SendDatagramToBadAddress$Server_h_
//$ class SendDatagramToBadAddress$Server
//$ extends java.lang.Object

#include <java/lang/Array.h>

class SendDatagramToBadAddress;
namespace java {
	namespace net {
		class DatagramPacket;
		class DatagramSocket;
	}
}

class $export SendDatagramToBadAddress$Server : public ::java::lang::Object {
	$class(SendDatagramToBadAddress$Server, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SendDatagramToBadAddress$Server();
	void init$(::SendDatagramToBadAddress* this$0, ::java::net::DatagramSocket* s);
	virtual void receive(int32_t loop, bool expectError);
	::SendDatagramToBadAddress* this$0 = nullptr;
	::java::net::DatagramSocket* server = nullptr;
	$bytes* buf = nullptr;
	::java::net::DatagramPacket* pack = nullptr;
};

#endif // _SendDatagramToBadAddress$Server_h_