#ifndef _CloseAndAvailableRC$Sink_h_
#define _CloseAndAvailableRC$Sink_h_
//$ class CloseAndAvailableRC$Sink
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class CloseAndAvailableRC;

class CloseAndAvailableRC$Sink : public ::java::lang::Thread {
	$class(CloseAndAvailableRC$Sink, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	CloseAndAvailableRC$Sink();
	void init$(::CloseAndAvailableRC* this$0);
	virtual void run() override;
	::CloseAndAvailableRC* this$0 = nullptr;
};

#endif // _CloseAndAvailableRC$Sink_h_