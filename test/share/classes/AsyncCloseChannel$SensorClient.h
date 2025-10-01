#ifndef _AsyncCloseChannel$SensorClient_h_
#define _AsyncCloseChannel$SensorClient_h_
//$ class AsyncCloseChannel$SensorClient
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class $export AsyncCloseChannel$SensorClient : public ::java::lang::Thread {
	$class(AsyncCloseChannel$SensorClient, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	AsyncCloseChannel$SensorClient();
	void init$();
	virtual void run() override;
	static void wakeMe();
	static bool wake;
	static ::AsyncCloseChannel$SensorClient* theClient;
};

#endif // _AsyncCloseChannel$SensorClient_h_