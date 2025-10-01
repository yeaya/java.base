#ifndef _StressNativeSignal$ServerSocketThread_h_
#define _StressNativeSignal$ServerSocketThread_h_
//$ class StressNativeSignal$ServerSocketThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class StressNativeSignal;
namespace java {
	namespace net {
		class ServerSocket;
	}
}

class $export StressNativeSignal$ServerSocketThread : public ::java::lang::Thread {
	$class(StressNativeSignal$ServerSocketThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	StressNativeSignal$ServerSocketThread();
	void init$(::StressNativeSignal* this$0);
	virtual void run() override;
	virtual void terminate();
	::StressNativeSignal* this$0 = nullptr;
	$volatile(bool) shouldTerminate = false;
	::java::net::ServerSocket* socket = nullptr;
};

#endif // _StressNativeSignal$ServerSocketThread_h_