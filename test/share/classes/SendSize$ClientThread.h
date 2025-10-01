#ifndef _SendSize$ClientThread_h_
#define _SendSize$ClientThread_h_
//$ class SendSize$ClientThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace net {
		class DatagramSocket;
		class InetAddress;
	}
}

class $export SendSize$ClientThread : public ::java::lang::Thread {
	$class(SendSize$ClientThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	SendSize$ClientThread();
	void init$(int32_t serverPort);
	virtual void run() override;
	int32_t serverPort = 0;
	::java::net::DatagramSocket* client = nullptr;
	::java::net::InetAddress* host = nullptr;
};

#endif // _SendSize$ClientThread_h_