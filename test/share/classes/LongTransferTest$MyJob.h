#ifndef _LongTransferTest$MyJob_h_
#define _LongTransferTest$MyJob_h_
//$ class LongTransferTest$MyJob
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace net {
		class ServerSocket;
	}
}

class LongTransferTest$MyJob : public ::java::lang::Thread {
	$class(LongTransferTest$MyJob, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	LongTransferTest$MyJob();
	void init$(::java::net::ServerSocket* server);
	virtual void run() override;
	::java::net::ServerSocket* server = nullptr;
};

#endif // _LongTransferTest$MyJob_h_