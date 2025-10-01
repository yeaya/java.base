#ifndef _AsyncCloseChannel$TargetClient_h_
#define _AsyncCloseChannel$TargetClient_h_
//$ class AsyncCloseChannel$TargetClient
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class $export AsyncCloseChannel$TargetClient : public ::java::lang::Thread {
	$class(AsyncCloseChannel$TargetClient, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	AsyncCloseChannel$TargetClient();
	void init$();
	virtual void run() override;
	$volatile(bool) ready = false;
};

#endif // _AsyncCloseChannel$TargetClient_h_