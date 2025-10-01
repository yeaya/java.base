#ifndef _SendSize$ServerThread_h_
#define _SendSize$ServerThread_h_
//$ class SendSize$ServerThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace net {
		class DatagramSocket;
	}
}

class $export SendSize$ServerThread : public ::java::lang::Thread {
	$class(SendSize$ServerThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	SendSize$ServerThread();
	void init$(::java::net::DatagramSocket* server);
	virtual void run() override;
	::java::net::DatagramSocket* server = nullptr;
};

#endif // _SendSize$ServerThread_h_