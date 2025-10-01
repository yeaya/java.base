#ifndef _StressNativeSignal$UDPThread_h_
#define _StressNativeSignal$UDPThread_h_
//$ class StressNativeSignal$UDPThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class StressNativeSignal;
namespace java {
	namespace nio {
		namespace channels {
			class DatagramChannel;
		}
	}
}

class $export StressNativeSignal$UDPThread : public ::java::lang::Thread {
	$class(StressNativeSignal$UDPThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	StressNativeSignal$UDPThread();
	void init$(::StressNativeSignal* this$0);
	virtual void run() override;
	virtual void terminate();
	::StressNativeSignal* this$0 = nullptr;
	::java::nio::channels::DatagramChannel* channel = nullptr;
	$volatile(bool) shouldTerminate = false;
};

#endif // _StressNativeSignal$UDPThread_h_