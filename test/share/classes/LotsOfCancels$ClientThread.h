#ifndef _LotsOfCancels$ClientThread_h_
#define _LotsOfCancels$ClientThread_h_
//$ class LotsOfCancels$ClientThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace net {
		class SocketAddress;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class Selector;
		}
	}
}

class $export LotsOfCancels$ClientThread : public ::java::lang::Thread {
	$class(LotsOfCancels$ClientThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	LotsOfCancels$ClientThread();
	void init$(::java::net::SocketAddress* address);
	virtual void connectClients(int32_t count);
	void handleClients();
	virtual void run() override;
	::java::net::SocketAddress* address = nullptr;
	::java::nio::channels::Selector* selector = nullptr;
	int32_t connectionsNeeded = 0;
	int32_t totalCreated = 0;
};

#endif // _LotsOfCancels$ClientThread_h_