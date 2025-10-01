#ifndef _AsyncCloseChannel$SensorServer$1_h_
#define _AsyncCloseChannel$SensorServer$1_h_
//$ class AsyncCloseChannel$SensorServer$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class AsyncCloseChannel$SensorServer;
namespace java {
	namespace net {
		class Socket;
	}
}

class AsyncCloseChannel$SensorServer$1 : public ::java::lang::Thread {
	$class(AsyncCloseChannel$SensorServer$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	AsyncCloseChannel$SensorServer$1();
	void init$(::AsyncCloseChannel$SensorServer* this$0, ::java::net::Socket* val$s);
	virtual void run() override;
	::AsyncCloseChannel$SensorServer* this$0 = nullptr;
	::java::net::Socket* val$s = nullptr;
};

#endif // _AsyncCloseChannel$SensorServer$1_h_