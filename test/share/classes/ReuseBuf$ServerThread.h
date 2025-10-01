#ifndef _ReuseBuf$ServerThread_h_
#define _ReuseBuf$ServerThread_h_
//$ class ReuseBuf$ServerThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace net {
		class DatagramSocket;
	}
}

class $export ReuseBuf$ServerThread : public ::java::lang::Thread {
	$class(ReuseBuf$ServerThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	ReuseBuf$ServerThread();
	void init$();
	virtual void run() override;
	::java::net::DatagramSocket* ds = nullptr;
};

#endif // _ReuseBuf$ServerThread_h_