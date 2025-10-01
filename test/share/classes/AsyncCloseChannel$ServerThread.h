#ifndef _AsyncCloseChannel$ServerThread_h_
#define _AsyncCloseChannel$ServerThread_h_
//$ class AsyncCloseChannel$ServerThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace net {
		class ServerSocket;
	}
}

class $export AsyncCloseChannel$ServerThread : public ::java::lang::Thread {
	$class(AsyncCloseChannel$ServerThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	AsyncCloseChannel$ServerThread();
	void init$();
	virtual void interrupt() override;
	virtual void run() override;
	virtual void runEx() {}
	::java::net::ServerSocket* server = nullptr;
};

#endif // _AsyncCloseChannel$ServerThread_h_